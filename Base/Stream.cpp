/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#include "Stream.h"

static bool g_streamsPatched = false;
static void PatchStream()
{
  if (g_streamsPatched)
    return;
  g_streamsPatched = true;

  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;

  const int enable_patch_address = enginedll_base_address + 0x2749A;
  const UBYTE enable_patch_bytes[12] = {
    UBYTE(0xff), UBYTE(0x46), UBYTE(0x08),             // inc DWORD PTR [esi+0x8]         ++_bThreadCanHandleStreams;
    UBYTE(0x83), UBYTE(0x7e), UBYTE(0x08), UBYTE(0x01),// cmp DWORD PTR [esi+0x8],0x1     if (_bThreadCanHandleStreams != 1)
    UBYTE(0x75), UBYTE(0x26),                          // jne LAB_600e74c9                  return;
    UBYTE(0x90),                                       // nop
    UBYTE(0x6a), UBYTE(0x0c)};                         // push 0xc                        _plhOpenedStreams = new CListHead;
  
  DWORD old_page_mode;
  if (::VirtualProtect(reinterpret_cast<void*>(enable_patch_address), sizeof(enable_patch_bytes), PAGE_EXECUTE_READWRITE, &old_page_mode) != 0)
  {
    memcpy(reinterpret_cast<void*>(enable_patch_address), enable_patch_bytes, sizeof(enable_patch_bytes));
    DWORD dummy;
    ::VirtualProtect(reinterpret_cast<void*>(enable_patch_address), sizeof(enable_patch_bytes), old_page_mode, &dummy);
  }

  const int disable_patch_address = enginedll_base_address + 0x27506;
  const UBYTE disable_patch_bytes[10] = {
    UBYTE(0xff), UBYTE(0x4e), UBYTE(0x08), // dec DWORD PTR [esi+0x8]     if (--_bThreadCanHandleStreams)
    UBYTE(0x75), UBYTE(0x18),              // jnz LAB_600e7523              return;
    UBYTE(0x90),                           // nop
    UBYTE(0x90),                           // nop
    UBYTE(0x90),                           // nop
    UBYTE(0x90),                           // nop
    UBYTE(0x90)};                          // nop
    
  if (::VirtualProtect(reinterpret_cast<void*>(disable_patch_address), sizeof(disable_patch_bytes), PAGE_EXECUTE_READWRITE, &old_page_mode) != 0)
  {
    memcpy(reinterpret_cast<void*>(disable_patch_address), disable_patch_bytes, sizeof(disable_patch_bytes));
    DWORD dummy;
    ::VirtualProtect(reinterpret_cast<void*>(disable_patch_address), sizeof(disable_patch_bytes), old_page_mode, &dummy);
  }
}

CChunkID_* CChunkID_new(const char* s)
{
  return (CChunkID_*)(new CChunkID(s));
}

void CChunkID_delete(CChunkID_* p)
{
  delete ((CChunkID*)p);
}

BOOL CChunkID_equal(const CChunkID_* a, const CChunkID_* b)
{
  return *((const CChunkID*)a) == *((const CChunkID*)b);
}

BOOL CChunkID_notequal(const CChunkID_* a, const CChunkID_* b)
{
  return *((const CChunkID*)a) != *((const CChunkID*)b);
}

const char* CChunkID_str_const(const CChunkID_* p)
{
  return ((const CChunkID*)p)->operator const char*();
}

char* CChunkID_str(CChunkID_* p)
{
  return ((CChunkID*)p)->operator char*();
}

void CTStream_ExecuteWithStreamHandling(void (*func)(void))
{
  PatchStream();
  CTSTREAM_BEGIN
  {
    func();
  }
  CTSTREAM_END
}

static void Read_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->Read_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_Read_t(CTStream_* p, void* buffer, SLONG size)
{
  STREAM_TRY
  Read_t(p, buffer, size);
  STREAM_CATCH
}

static void Write_t(CTStream_* p, const void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->Write_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_Write_t(CTStream_* p, const void* buffer, SLONG size)
{
  STREAM_TRY
  Write_t(p, buffer, size);
  STREAM_CATCH
}

static void Seek_t(CTStream_* p, SLONG offset, INDEX seekdir)
{
  SECAPI_TRY
  ((CTStream*)p)->Seek_t(offset, (CTStream::SeekDir)seekdir);
  SECAPI_CATCH
}

void CTStream_Seek_t(CTStream_* p, SLONG offset, INDEX seekdir)
{
  STREAM_TRY
  Seek_t(p, offset, seekdir);
  STREAM_CATCH
}

static void SetPos_t(CTStream_* p, SLONG pos)
{
  SECAPI_TRY
  ((CTStream*)p)->SetPos_t(pos);
  SECAPI_CATCH
}

void CTStream_SetPos_t(CTStream_* p, SLONG pos)
{
  STREAM_TRY
  SetPos_t(p, pos);
  STREAM_CATCH
}

static SLONG GetPos_t(CTStream_* p)
{
  SLONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->GetPos_t();
  SECAPI_CATCH
  return res;
}

SLONG CTStream_GetPos_t(CTStream_* p)
{
  SLONG res;
  STREAM_TRY
  res = GetPos_t(p);
  STREAM_CATCH
  return res;
}

SLONG CTStream_GetStreamSize(CTStream_* p)
{
  return ((CTStream*)p)->GetStreamSize();
}

static ULONG GetStreamCRC32_t(CTStream_* p)
{
  ULONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->GetStreamCRC32_t();
  SECAPI_CATCH
  return res;
}

ULONG CTStream_GetStreamCRC32_t(CTStream_* p)
{
  ULONG res;
  STREAM_TRY
  res = GetStreamCRC32_t(p);
  STREAM_CATCH
  return res;
}

BOOL CTStream_AtEOF(CTStream_* p)
{
  return ((CTStream*)p)->AtEOF();
}

static void PutLine_t(CTStream_* p, const char* buffer)
{
  SECAPI_TRY
  ((CTStream*)p)->PutLine_t(buffer);
  SECAPI_CATCH
}

void CTStream_PutLine_t(CTStream_* p, const char* buffer)
{
  STREAM_TRY
  PutLine_t(p, buffer);
  STREAM_CATCH
}

static void PutString_t(CTStream_* p, const char* buffer)
{
  SECAPI_TRY
  ((CTStream*)p)->PutString_t(buffer);
  SECAPI_CATCH
}

void CTStream_PutString_t(CTStream_* p, const char* buffer)
{
  STREAM_TRY
  PutString_t(p, buffer);
  STREAM_CATCH
}

static void GetLine_t(CTStream_* p, char* buffer, SLONG size, char delim)
{
  SECAPI_TRY
  ((CTStream*)p)->GetLine_t(buffer, size, delim);
  SECAPI_CATCH
}

void CTStream_GetLine_t(CTStream_* p, char* buffer, SLONG size, char delim)
{
  STREAM_TRY
  GetLine_t(p, buffer, size, delim);
  STREAM_CATCH
}

static void GetLine_t_str(CTStream_* p, CTString_* s, char delim)
{
  SECAPI_TRY
  ((CTStream*)p)->GetLine_t(*((CTString*)s), delim);
  SECAPI_CATCH
}

void CTStream_GetLine_t_str(CTStream_* p, CTString_* s, char delim)
{
  STREAM_TRY
  GetLine_t_str(p, s, delim);
  STREAM_CATCH
}

static CChunkID_* GetID_t(CTStream_* p)
{
  CChunkID* id = NULL;
  SECAPI_TRY
  CChunkID res = ((CTStream*)p)->GetID_t();
  id = new CChunkID(res.operator const char*());
  SECAPI_CATCH
  return (CChunkID_*)id;
}

CChunkID_* CTStream_GetID_t(CTStream_* p)
{
  CChunkID_* id = NULL;
  STREAM_TRY
  id = GetID_t(p);
  STREAM_CATCH
  return id;
}

static CChunkID_* PeekID_t(CTStream_* p)
{
  CChunkID* id = NULL;
  SECAPI_TRY
  CChunkID res = ((CTStream*)p)->PeekID_t();
  id = new CChunkID(res.operator const char*());
  SECAPI_CATCH
  return (CChunkID_*)id;
}

CChunkID_* CTStream_PeekID_t(CTStream_* p)
{
  CChunkID_* id = NULL;
  STREAM_TRY
  id = PeekID_t(p);
  STREAM_CATCH
  return id;
}

static void ExpectID_t(CTStream_* p, const CChunkID_* id)
{
  SECAPI_TRY
  ((CTStream*)p)->ExpectID_t(*((const CChunkID*)id));
  SECAPI_CATCH
}

void CTStream_ExpectID_t(CTStream_* p, const CChunkID_* id)
{
  STREAM_TRY
  ExpectID_t(p, id);
  STREAM_CATCH
}

static void ExpectKeyword_t(CTStream_* p, const CTString_* s)
{
  SECAPI_TRY
  ((CTStream*)p)->ExpectKeyword_t(*((const CTString*)s));
  SECAPI_CATCH
}

void CTStream_ExpectKeyword_t(CTStream_* p, const CTString_* s)
{
  STREAM_TRY
  ExpectKeyword_t(p, s);
  STREAM_CATCH
}

static SLONG GetSize_t(CTStream_* p)
{
  SLONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->GetSize_t();
  SECAPI_CATCH
  return res;
}

SLONG CTStream_GetSize_t(CTStream_* p)
{
  SLONG res;
  STREAM_TRY
  res = GetSize_t(p);
  STREAM_CATCH
  return res;
}

static void ReadRawChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->ReadRawChunk_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_ReadRawChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  STREAM_TRY
  ReadRawChunk_t(p, buffer, size);
  STREAM_CATCH
}

static void ReadChunk_t(CTStream_* p, void* buffer, SLONG expsize)
{
  SECAPI_TRY
  ((CTStream*)p)->ReadChunk_t(buffer, expsize);
  SECAPI_CATCH
}

void CTStream_ReadChunk_t(CTStream_* p, void* buffer, SLONG expsize)
{
  STREAM_TRY
  ReadChunk_t(p, buffer, expsize);
  STREAM_CATCH
}

static void ReadFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->ReadFullChunk_t(*((const CChunkID*)id), buffer, size);
  SECAPI_CATCH
}

void CTStream_ReadFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size)
{
  STREAM_TRY
  ReadFullChunk_t(p, id, buffer, size);
  STREAM_CATCH
}

static void WriteID_t(CTStream_* p, const CChunkID_* id)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteID_t(*((const CChunkID*)id));
  SECAPI_CATCH
}

void CTStream_WriteID_t(CTStream_* p, const CChunkID_* id)
{
  STREAM_TRY
  WriteID_t(p, id);
  STREAM_CATCH
}

static void WriteSize_t(CTStream_* p, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteSize_t(size);
  SECAPI_CATCH
}

void CTStream_WriteSize_t(CTStream_* p, SLONG size)
{
  STREAM_TRY
  WriteSize_t(p, size);
  STREAM_CATCH
}

static void WriteRawChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteRawChunk_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_WriteRawChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  STREAM_TRY
  WriteRawChunk_t(p, buffer, size);
  STREAM_CATCH
}

static void WriteChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteChunk_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_WriteChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  STREAM_TRY
  WriteChunk_t(p, buffer, size);
  STREAM_CATCH
}

static void WriteFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteFullChunk_t(*((const CChunkID*)id), buffer, size);
  SECAPI_CATCH
}

void CTStream_WriteFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size)
{
  STREAM_TRY
  WriteFullChunk_t(p, id, buffer, size);
  STREAM_CATCH
}

static void DictionaryWriteBegin_t(CTStream_* p, const CTFileName_* f, SLONG offset)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryWriteBegin_t(*((const CTFileName*)f), offset);
  SECAPI_CATCH
}

void CTStream_DictionaryWriteBegin_t(CTStream_* p, const CTFileName_* f, SLONG offset)
{
  STREAM_TRY
  DictionaryWriteBegin_t(p, f, offset);
  STREAM_CATCH
}

static void DictionaryWriteEnd_t(CTStream_* p)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryWriteEnd_t();
  SECAPI_CATCH
}

void CTStream_DictionaryWriteEnd_t(CTStream_* p)
{
  STREAM_TRY
  DictionaryWriteEnd_t(p);
  STREAM_CATCH
}

static SLONG DictionaryReadBegin_t(CTStream_* p)
{
  SLONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->DictionaryReadBegin_t();
  SECAPI_CATCH
  return res;
}

SLONG CTStream_DictionaryReadBegin_t(CTStream_* p)
{
  SLONG res;
  STREAM_TRY
  res = DictionaryReadBegin_t(p);
  STREAM_CATCH
  return res;
}

static void DictionaryReadEnd_t(CTStream_* p)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryReadEnd_t();
  SECAPI_CATCH
}

void CTStream_DictionaryReadEnd_t(CTStream_* p)
{
  STREAM_TRY
  DictionaryReadEnd_t(p);
  STREAM_CATCH
}

static void DictionaryPreload_t(CTStream_* p)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryPreload_t();
  SECAPI_CATCH
}

void CTStream_DictionaryPreload_t(CTStream_* p)
{
  STREAM_TRY
  DictionaryPreload_t(p);
  STREAM_CATCH
}

CTFileStream_* CTFileStream_new()
{
  return (CTFileStream_*)(new CTFileStream());
}

void CTFileStream_delete(CTFileStream_* p)
{
  delete ((CTFileStream*)p);
}

static void Open_t(CTFileStream_* p, const CTFileName_* f, INDEX openmode)
{
  SECAPI_TRY
  ((CTFileStream*)p)->Open_t(*((const CTFileName*)f), (CTStream::OpenMode)openmode);
  SECAPI_CATCH
}

void CTFileStream_Open_t(CTFileStream_* p, const CTFileName_* f, INDEX openmode)
{
  STREAM_TRY
  Open_t(p, f, openmode);
  STREAM_CATCH
}

static void Create_t(CTFileStream_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CTFileStream*)p)->Create_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CTFileStream_Create_t(CTFileStream_* p, const CTFileName_* f)
{
  STREAM_TRY
  Create_t(p, f);
  STREAM_CATCH
}

void CTFileStream_Close(CTFileStream_* p)
{
  ((CTFileStream*)p)->Close();
}

CTMemoryStream_* CTMemoryStream_new()
{
  return (CTMemoryStream_*)(new CTMemoryStream());
}

CTMemoryStream_* CTMemoryStream_new_buffer(void* buffer, SLONG size, INDEX openmode)
{
  return (CTMemoryStream_*)(new CTMemoryStream(buffer, size, (CTStream::OpenMode)openmode));
}

void CTMemoryStream_delete(CTMemoryStream_* p)
{
  delete ((CTMemoryStream*)p);
}

void CTMemoryStream_LockBuffer(CTMemoryStream_* p, void** buffer, SLONG* size)
{
  ((CTMemoryStream*)p)->LockBuffer(buffer, size);
}

void CTMemoryStream_UnlockBuffer(CTMemoryStream_* p)
{
  ((CTMemoryStream*)p)->UnlockBuffer();
}

BOOL FileExists_(const CTFileName_* fnmFile)
{
  BOOL res = FALSE;
  STREAM_TRY
  res = FileExists(*((const CTFileName*)fnmFile));
  STREAM_CATCH
  return res;
}

BOOL FileExistsForWriting_(const CTFileName_* fnmFile)
{
  BOOL res = FALSE;
  STREAM_TRY
  res = FileExistsForWriting(*((const CTFileName*)fnmFile));
  STREAM_CATCH
  return res;
}

static SLONG sehGetFileTimeStamp_t_(const CTFileName_* fnmFile)
{
  SLONG res;
  SECAPI_TRY
  res = GetFileTimeStamp_t(*((const CTFileName*)fnmFile));
  SECAPI_CATCH
  return res;
}

SLONG GetFileTimeStamp_t_(const CTFileName_* fnmFile)
{
  SLONG res;
  STREAM_TRY
  res = sehGetFileTimeStamp_t_(fnmFile);
  STREAM_CATCH
  return res;
}

static ULONG sehGetFileCRC32_t_(const CTFileName_* fnmFile)
{
  ULONG res;
  SECAPI_TRY
  res = GetFileCRC32_t(*((const CTFileName*)fnmFile));
  SECAPI_CATCH
  return res;
}

ULONG GetFileCRC32_t_(const CTFileName_* fnmFile)
{
  ULONG res;
  STREAM_TRY
  res = sehGetFileCRC32_t_(fnmFile);
  STREAM_CATCH
  return res;
}

BOOL IsFileReadOnly_(const CTFileName_* fnmFile)
{
  BOOL res = FALSE;
  STREAM_TRY
  res = IsFileReadOnly(*((const CTFileName*)fnmFile));
  STREAM_CATCH
  return res;
}

BOOL RemoveFile_(const CTFileName_* fnmFile)
{
  BOOL res = FALSE;
  STREAM_TRY
  res = RemoveFile(*((const CTFileName*)fnmFile));
  STREAM_CATCH
  return res;
}

INDEX ExpandFilePath_(ULONG ulType, const CTFileName_* fnmFile, CTFileName_* fnmExpanded)
{
  INDEX res = 0;
  STREAM_TRY
  res = ExpandFilePath(ulType, *((const CTFileName*)fnmFile), *((CTFileName*)fnmExpanded));
  STREAM_CATCH
  return res;
}

void MakeDirList_(
  CDynamicStackArray_CTFileName_* adeDir, 
  const CTFileName_* fnmDir,     // directory to list
  const CTString_* strPattern,   // pattern for each file to match ("" matches all)
  ULONG ulFlags                 // additional flags
)
{
  STREAM_TRY
  MakeDirList(*((CDynamicStackArray<CTFileName>*)adeDir), *((const CTFileName*)fnmDir), *((const CTString*)strPattern), ulFlags);
  STREAM_CATCH
}

CTFileName_* _fnmApplicationPath_()
{
  return (CTFileName_*)(&_fnmApplicationPath);
}

CTFileName_* _fnmMod_()
{
  return (CTFileName_*)(&_fnmMod);
}

CTString_* _strModName_()
{
  return (CTString_*)(&_strModName);
}

CTString_* _strModURL_()
{
  return (CTString_*)(&_strModURL);
}

CTString_* _strModExt_()
{
  return (CTString_*)(&_strModExt);
}

CTFileName_* _fnmCDPath_()
{
  return (CTFileName_*)(&_fnmCDPath);
}

CTFileName_* _fnmApplicationExe_()
{
  return (CTFileName_*)(&_fnmApplicationExe);
}

void UseApplicationPath_()
{
  UseApplicationPath();
}

void IgnoreApplicationPath_()
{
  IgnoreApplicationPath();
}

INDEX GetGroFileCount()
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  INDEX(*_UNZIPGetFileCount)(void) = reinterpret_cast<INDEX(*)(void)>(enginedll_base_address + 0x2DC30);
  return _UNZIPGetFileCount();
}

extern "C" void CTFileName_SetAbsolutePath(CTFileName_* p);
CTFileName_* _GetGroFileAtIndex(INDEX i)
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  const CTFileName&(*_UNZIPGetFileAtIndex)(INDEX) = reinterpret_cast<const CTFileName&(*)(INDEX)>(enginedll_base_address + 0x2DC40);
  CTFileName* res = new CTFileName(_UNZIPGetFileAtIndex(i));
  CTFileName_SetAbsolutePath((CTFileName_*)res);
  return (CTFileName_*)res;
}

CTFileName_* _GetGroFileArchiveAtIndex(INDEX i)
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  const CTFileName&(*_UNZIPGetFileAtIndex)(INDEX) = reinterpret_cast<const CTFileName&(*)(INDEX)>(enginedll_base_address + 0x2DC40);
  return (CTFileName_*)(*((CTFileName**)(((unsigned char*)&_UNZIPGetFileAtIndex(i)) - 4)));
}
