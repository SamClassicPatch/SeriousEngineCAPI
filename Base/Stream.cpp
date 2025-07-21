#include "Stream.h"

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
  CTSTREAM_BEGIN
  {
    func();
  }
  CTSTREAM_END
}

void CTStream_Read_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->Read_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_Write_t(CTStream_* p, const void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->Write_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_Seek_t(CTStream_* p, SLONG offset, INDEX seekdir)
{
  SECAPI_TRY
  ((CTStream*)p)->Seek_t(offset, (CTStream::SeekDir)seekdir);
  SECAPI_CATCH
}

void CTStream_SetPos_t(CTStream_* p, SLONG pos)
{
  SECAPI_TRY
  ((CTStream*)p)->SetPos_t(pos);
  SECAPI_CATCH
}

SLONG CTStream_GetPos_t(CTStream_* p)
{
  SLONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->GetPos_t();
  SECAPI_CATCH
  return res;
}

SLONG CTStream_GetStreamSize(CTStream_* p)
{
  return ((CTStream*)p)->GetStreamSize();
}

ULONG CTStream_GetStreamCRC32_t(CTStream_* p)
{
  ULONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->GetStreamCRC32_t();
  SECAPI_CATCH
  return res;
}

BOOL CTStream_AtEOF(CTStream_* p)
{
  return ((CTStream*)p)->AtEOF();
}

void CTStream_PutLine_t(CTStream_* p, const char* buffer)
{
  SECAPI_TRY
  ((CTStream*)p)->PutLine_t(buffer);
  SECAPI_CATCH
}

void CTStream_PutString_t(CTStream_* p, const char* buffer)
{
  SECAPI_TRY
  ((CTStream*)p)->PutString_t(buffer);
  SECAPI_CATCH
}

void CTStream_GetLine_t(CTStream_* p, char* buffer, SLONG size, char delim)
{
  SECAPI_TRY
  ((CTStream*)p)->GetLine_t(buffer, size, delim);
  SECAPI_CATCH
}

void CTStream_GetLine_t_str(CTStream_* p, CTString_* s, char delim)
{
  SECAPI_TRY
  ((CTStream*)p)->GetLine_t(*((CTString*)s), delim);
  SECAPI_CATCH
}

CChunkID_* CTStream_GetID_t(CTStream_* p)
{
  CChunkID* id = NULL;
  SECAPI_TRY
  CChunkID res = ((CTStream*)p)->GetID_t();
  id = new CChunkID(res.operator const char*());
  SECAPI_CATCH
  return (CChunkID_*)id;
}

CChunkID_* CTStream_PeekID_t(CTStream_* p)
{
  CChunkID* id = NULL;
  SECAPI_TRY
  CChunkID res = ((CTStream*)p)->PeekID_t();
  id = new CChunkID(res.operator const char*());
  SECAPI_CATCH
  return (CChunkID_*)id;
}

void CTStream_ExpectID_t(CTStream_* p, const CChunkID_* id)
{
  SECAPI_TRY
  ((CTStream*)p)->ExpectID_t(*((const CChunkID*)id));
  SECAPI_CATCH
}

void CTStream_ExpectKeyword_t(CTStream_* p, const CTString_* s)
{
  SECAPI_TRY
  ((CTStream*)p)->ExpectKeyword_t(*((const CTString*)s));
  SECAPI_CATCH
}

SLONG CTStream_GetSize_t(CTStream_* p)
{
  SLONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->GetSize_t();
  SECAPI_CATCH
  return res;
}

void CTStream_ReadRawChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->ReadRawChunk_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_ReadChunk_t(CTStream_* p, void* buffer, SLONG expsize)
{
  SECAPI_TRY
  ((CTStream*)p)->ReadChunk_t(buffer, expsize);
  SECAPI_CATCH
}

void CTStream_ReadFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->ReadFullChunk_t(*((const CChunkID*)id), buffer, size);
  SECAPI_CATCH
}

void CTStream_WriteID_t(CTStream_* p, const CChunkID_* id)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteID_t(*((const CChunkID*)id));
  SECAPI_CATCH
}

void CTStream_WriteSize_t(CTStream_* p, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteSize_t(size);
  SECAPI_CATCH
}

void CTStream_WriteRawChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteRawChunk_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_WriteChunk_t(CTStream_* p, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteChunk_t(buffer, size);
  SECAPI_CATCH
}

void CTStream_WriteFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size)
{
  SECAPI_TRY
  ((CTStream*)p)->WriteFullChunk_t(*((const CChunkID*)id), buffer, size);
  SECAPI_CATCH
}

void CTStream_DictionaryWriteBegin_t(CTStream_* p, const CTFileName_* f, SLONG offset)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryWriteBegin_t(*((const CTFileName*)f), offset);
  SECAPI_CATCH
}

void CTStream_DictionaryWriteEnd_t(CTStream_* p)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryWriteEnd_t();
  SECAPI_CATCH
}

SLONG CTStream_DictionaryReadBegin_t(CTStream_* p)
{
  SLONG res;
  SECAPI_TRY
  res = ((CTStream*)p)->DictionaryReadBegin_t();
  SECAPI_CATCH
  return res;
}

void CTStream_DictionaryReadEnd_t(CTStream_* p)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryReadEnd_t();
  SECAPI_CATCH
}

void CTStream_DictionaryPreload_t(CTStream_* p)
{
  SECAPI_TRY
  ((CTStream*)p)->DictionaryPreload_t();
  SECAPI_CATCH
}

CTFileStream_* CTFileStream_new()
{
  return (CTFileStream_*)(new CTFileStream());
}

void CTFileStream_delete(CTFileStream_* p)
{
  delete ((CTFileStream*)p);
}

void CTFileStream_Open_t(CTFileStream_* p, const CTFileName_* f, INDEX openmode)
{
  SECAPI_TRY
  ((CTFileStream*)p)->Open_t(*((const CTFileName*)f), (CTStream::OpenMode)openmode);
  SECAPI_CATCH
}

void CTFileStream_Create_t(CTFileStream_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CTFileStream*)p)->Create_t(*((const CTFileName*)f));
  SECAPI_CATCH
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
  return FileExists(*((const CTFileName*)fnmFile));
}

BOOL FileExistsForWriting_(const CTFileName_* fnmFile)
{
  return FileExistsForWriting(*((const CTFileName*)fnmFile));
}

SLONG GetFileTimeStamp_t_(const CTFileName_* fnmFile)
{
  SLONG res;
  SECAPI_TRY
  res = GetFileTimeStamp_t(*((const CTFileName*)fnmFile));
  SECAPI_CATCH
  return res;
}

ULONG GetFileCRC32_t_(const CTFileName_* fnmFile)
{
  ULONG res;
  SECAPI_TRY
  res = GetFileCRC32_t(*((const CTFileName*)fnmFile));
  SECAPI_CATCH
  return res;
}

BOOL IsFileReadOnly_(const CTFileName_* fnmFile)
{
  return IsFileReadOnly(*((const CTFileName*)fnmFile));
}

BOOL RemoveFile_(const CTFileName_* fnmFile)
{
  return RemoveFile(*((const CTFileName*)fnmFile));
}

INDEX ExpandFilePath_(ULONG ulType, const CTFileName_* fnmFile, CTFileName_* fnmExpanded)
{
  return ExpandFilePath(ulType, *((const CTFileName*)fnmFile), *((CTFileName*)fnmExpanded));
}

void MakeDirList_(
  CDynamicStackArray_CTFileName_* adeDir, 
  const CTFileName_* fnmDir,     // directory to list
  const CTString_* strPattern,   // pattern for each file to match ("" matches all)
  ULONG ulFlags                 // additional flags
)
{
  MakeDirList(*((CDynamicStackArray<CTFileName>*)adeDir), *((const CTFileName*)fnmDir), *((const CTString*)strPattern), ulFlags);
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
