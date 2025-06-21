#ifndef SECAPI_BASE_FILENAME_H
#define SECAPI_BASE_FILENAME_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

inline CTString_* CTFileName_ToString(CTFileName_* p) { return (CTString_*)p; }
inline const CTString_* CTFileName_ToString_const(const CTFileName_* p) { return (const CTString_*)p; }

SECAPI CTFileName_* CTFileName_new();
SECAPI CTFileName_* CTFileName_new_str(const CTString_* p);
SECAPI CTFileName_* CTFileName_new_stri(const char* p, INDEX i);
SECAPI CTFileName_* CTFileName_clone(const CTFileName_* p);
SECAPI void CTFileName_delete(CTFileName_* p);
SECAPI void CTFileName_copy(CTFileName_* a, const CTFileName_* b);
SECAPI void CTFileName_assign_str(CTFileName_* p, const char* s);
SECAPI void CTFileName_assign(CTFileName_* p, const CTString_* s);
SECAPI CTFileName_* CTFileName_FileDir(const CTFileName_* p);
SECAPI CTFileName_* CTFileName_FileName(const CTFileName_* p);
SECAPI CTFileName_* CTFileName_FileExt(const CTFileName_* p);
SECAPI CTFileName_* CTFileName_NoExt(const CTFileName_* p);
SECAPI void CTFileName_SetAbsolutePath(CTFileName_* p);
SECAPI void CTFileName_RemoveApplicationPath_t(CTFileName_* p);
SECAPI void CTFileName_ReadFromText_t(CTFileName_* p, CTStream_* s, const char* keyword);
SECAPI void CTFileName_extract(CTStream_* s, CTFileName_* p);
SECAPI void CTFileName_insert(CTStream_* s, const CTFileName_* p);

#ifdef __cplusplus
}
#endif

#endif
