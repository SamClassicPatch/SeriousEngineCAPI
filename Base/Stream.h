#ifndef SECAPI_BASE_STREAM_H
#define SECAPI_BASE_STREAM_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CChunkID_* CChunkID_new(const char* s);
SECAPI void CChunkID_delete(CChunkID_* p);
SECAPI BOOL CChunkID_equal(const CChunkID_* a, const CChunkID_* b);
SECAPI BOOL CChunkID_notequal(const CChunkID_* a, const CChunkID_* b);
SECAPI const char* CChunkID_str_const(const CChunkID_* p);
SECAPI char* CChunkID_str(CChunkID_* p);

SECAPI void CTStream_ExecuteWithStreamHandling(void (*func)(void));

SECAPI void CTStream_Read_t(CTStream_* p, void* buffer, SLONG size);
SECAPI void CTStream_Write_t(CTStream_* p, const void* buffer, SLONG size);
SECAPI void CTStream_Seek_t(CTStream_* p, SLONG offset, INDEX SD_seekdir);
SECAPI void CTStream_SetPos_t(CTStream_* p, SLONG pos);
SECAPI SLONG CTStream_GetPos_t(CTStream_* p);
SECAPI SLONG CTStream_GetStreamSize(CTStream_* p);
SECAPI ULONG CTStream_GetStreamCRC32_t(CTStream_* p);
SECAPI BOOL CTStream_AtEOF(CTStream_* p);
SECAPI void CTStream_PutLine_t(CTStream_* p, const char* buffer);
SECAPI void CTStream_PutString_t(CTStream_* p, const char* buffer);
SECAPI void CTStream_GetLine_t(CTStream_* p, char* buffer, SLONG size, char delim);
SECAPI void CTStream_GetLine_t_str(CTStream_* p, CTString_* s, char delim);
SECAPI CChunkID_* CTStream_GetID_t(CTStream_* p);
SECAPI CChunkID_* CTStream_PeekID_t(CTStream_* p);
SECAPI void CTStream_ExpectID_t(CTStream_* p, const CChunkID_* id);
SECAPI void CTStream_ExpectKeyword_t(CTStream_* p, const CTString_* s);
SECAPI SLONG CTStream_GetSize_t(CTStream_* p);
SECAPI void CTStream_ReadRawChunk_t(CTStream_* p, void* buffer, SLONG size);
SECAPI void CTStream_ReadChunk_t(CTStream_* p, void* buffer, SLONG expsize);
SECAPI void CTStream_ReadFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size);
SECAPI void CTStream_WriteID_t(CTStream_* p, const CChunkID_* id);
SECAPI void CTStream_WriteSize_t(CTStream_* p, SLONG size);
SECAPI void CTStream_WriteRawChunk_t(CTStream_* p, void* buffer, SLONG size);
SECAPI void CTStream_WriteChunk_t(CTStream_* p, void* buffer, SLONG size);
SECAPI void CTStream_WriteFullChunk_t(CTStream_* p, const CChunkID_* id, void* buffer, SLONG size);

SECAPI void CTStream_DictionaryWriteBegin_t(CTStream_* p, const CTFileName_* f, SLONG offset);
SECAPI void CTStream_DictionaryWriteEnd_t(CTStream_* p);
SECAPI SLONG CTStream_DictionaryReadBegin_t(CTStream_* p);
SECAPI void CTStream_DictionaryReadEnd_t(CTStream_* p);
SECAPI void CTStream_DictionaryPreload_t(CTStream_* p);

inline CTStream_* CTFileStream_ToStream(CTFileStream_* p) { return (CTStream_*)p; }
inline const CTStream_* CTFileStream_ToStream_const(const CTFileStream_* p) { return (const CTStream_*)p; }
inline CTStream_* CTMemoryStream_ToStream(CTMemoryStream_* p) { return (CTStream_*)p; }
inline const CTStream_* CTMemoryStream_ToStream_const(const CTMemoryStream_* p) { return (const CTStream_*)p; }

SECAPI CTFileStream_* CTFileStream_new();
SECAPI void CTFileStream_delete(CTFileStream_* p);
SECAPI void CTFileStream_Open_t(CTFileStream_* p, const CTFileName_* f, INDEX OM_openmode);
SECAPI void CTFileStream_Create_t(CTFileStream_* p, const CTFileName_* f);
SECAPI void CTFileStream_Close(CTFileStream_* p);

SECAPI CTMemoryStream_* CTMemoryStream_new();
SECAPI CTMemoryStream_* CTMemoryStream_new_buffer(void* buffer, SLONG size, INDEX OM_openmode);
SECAPI void CTMemoryStream_delete(CTMemoryStream_* p);
SECAPI void CTMemoryStream_LockBuffer(CTMemoryStream_* p, void** buffer, SLONG* size);
SECAPI void CTMemoryStream_UnlockBuffer(CTMemoryStream_* p);

SECAPI BOOL FileExists_(const CTFileName_* fnmFile);
SECAPI BOOL FileExistsForWriting_(const CTFileName_* fnmFile);
SECAPI SLONG GetFileTimeStamp_t_(const CTFileName_* fnmFile);
SECAPI ULONG GetFileCRC32_t_(const CTFileName_* fnmFile);
SECAPI BOOL IsFileReadOnly_(const CTFileName_* fnmFile);
SECAPI BOOL RemoveFile_(const CTFileName_* fnmFile);

// takes and returns CTStream_EFP define values
SECAPI INDEX ExpandFilePath_(ULONG ulType, const CTFileName_* fnmFile, CTFileName_* fnmExpanded);

// make a list of all files in a directory
SECAPI void MakeDirList_(
  CDynamicStackArray_CTFileName_* adeDir, 
  const CTFileName_* fnmDir,     // directory to list
  const CTString_* strPattern,   // pattern for each file to match ("" matches all)
  ULONG ulFlags                 // additional flags
);

SECAPI CTFileName_* _fnmApplicationPath_();
SECAPI CTFileName_* _fnmMod_();
SECAPI CTString_* _strModName_();
SECAPI CTString_* _strModURL_();
SECAPI CTString_* _strModExt_();
SECAPI CTFileName_* _fnmCDPath_();
SECAPI CTFileName_* _fnmApplicationExe_();

SECAPI void UseApplicationPath_();
SECAPI void IgnoreApplicationPath_();

// enums for open mode
#define CTStream_OM_READ 1
#define CTStream_OM_WRITE 2
// enums for seek dir
#define CTStream_SD_BEG 0
#define CTStream_SD_END 2
#define CTStream_SD_CUR 1
// flags for ExpandFilePath_
#define CTStream_EFP_READ   (1UL<<0)  // will open for reading
#define CTStream_EFP_WRITE  (1UL<<1)  // will open for writing
#define CTStream_EFP_NOZIPS (1UL<<31) // add this flag to forbid searching in zips
#define CTStream_EFP_NODISK (1UL<<30) // add this flag to forbid searching on disk
// these are return values 
#define CTStream_EFP_NONE       0  // doesn't exist
#define CTStream_EFP_FILE       1  // generic file on disk
#define CTStream_EFP_BASEZIP    2  // file in one of base zips
#define CTStream_EFP_MODZIP     3  // file in one of mod zips
// these are input flags for directory reading
#define CTStream_DLI_RECURSIVE  (1UL<<0)  // recurse into subdirs
#define CTStream_DLI_SEARCHCD   (1UL<<1)  // search the CD path also

SECAPI INDEX GetGroFileCount();
SECAPI CTFileName_* _GetGroFileAtIndex(INDEX i);

#ifdef __cplusplus
}
#endif

#endif
