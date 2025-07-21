#ifndef SECAPI_BASE_CTSTRING_H
#define SECAPI_BASE_CTSTRING_H
#include "Types.h"
#include "Stream.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CTString_* CTString_new();
SECAPI CTString_* CTString_new_str(const char* s);
SECAPI CTString_* CTString_clone(const CTString_* p);
SECAPI void CTString_delete(CTString_* p);
SECAPI void CTString_Clear(CTString_* p);
SECAPI const char* CTString_CStr(const CTString_* p);
SECAPI void CTString_Assign_str(CTString_* p, const char* s);
SECAPI void CTString_Assign(CTString_* a, const CTString_* b);
SECAPI INDEX CTString_Length(const CTString_* p);
SECAPI INDEX CTString_LengthNaked(const CTString_* p);
SECAPI CTString_* CTString_Undecorated(const CTString_* p);
SECAPI INDEX CTString_FindSubstr(CTString_* p, const CTString_* a);
SECAPI BOOL CTString_ReplaceSubstr(CTString_* p, const CTString_* a, const CTString_* b);
SECAPI BOOL CTString_HasPrefix(const CTString_* p, const CTString_* prefix);
SECAPI BOOL CTString_RemovePrefix(CTString_* p, const CTString_* prefix);
SECAPI INDEX CTString_TrimLeft(CTString_* p, INDEX c);
SECAPI INDEX CTString_TrimRight(CTString_* p, INDEX c);
SECAPI INDEX CTString_TrimSpacesLeft(CTString_* p);
SECAPI INDEX CTString_TrimSpacesRight(CTString_* p);
SECAPI ULONG CTString_GetHash(const CTString_* p);
SECAPI void CTString_OnlyFirstLine(CTString_* p);
SECAPI BOOL CTString_equal(const CTString_* a, const CTString_* b);
SECAPI BOOL CTString_equal_str(const CTString_* a, const char* b);
SECAPI BOOL CTString_notequal(const CTString_* a, const CTString_* b);
SECAPI BOOL CTString_notequal_str(const CTString_* a, const char* b);
SECAPI BOOL CTString_Matches(const CTString_* a, const CTString_* b);
SECAPI BOOL CTString_Matches_str(const CTString_* a, const char* b);
SECAPI CTString_* CTString_Concatenate(const CTString_* a, const CTString_* b);
SECAPI void CTString_ConcatenateInplace(CTString_* a, const CTString_* b);
SECAPI void CTString_Split(CTString_* p, INDEX i, CTString_* s1, CTString_* s2);
SECAPI void CTString_InsertChar(CTString_* p, INDEX i, char c);
SECAPI void CTString_DeleteChar(CTString_* p, INDEX i);
SECAPI void CTString_Throw_t(CTString_* p);
SECAPI void CTString_ReadFromText_t(CTString_* p, CTStream_* s, const CTString_* k);
SECAPI void CTString_extract(CTStream_* s, CTString_* p);
SECAPI void CTString_insert(CTStream_* s, const CTString_* p);
SECAPI void CTString_Load_t(CTString_* a, const CTFileName_* b);
SECAPI void CTString_LoadKeepCRLF_t(CTString_* a, const CTFileName_* b);
SECAPI void CTString_ReadUntilEOF_t(CTString_* p, CTStream_* s);
SECAPI void CTString_Save_t(CTString_* a, const CTFileName_* b);
SECAPI void CTString_SaveKeepCRLF_t(CTString_* a, const CTFileName_* b);
SECAPI void CTString_LoadVar(CTString_* a, const CTFileName_* b);
SECAPI void CTString_SaveVar(CTString_* a, const CTFileName_* b);
SECAPI void CTString_LoadStringVar(const CTFileName_* a, CTString_* b);
SECAPI void CTString_SaveStringVar(const CTFileName_* a, CTString_* b);
SECAPI void CTString_LoadIntVar(const CTFileName_* a, INDEX* i);
SECAPI void CTString_SaveIntVar(const CTFileName_* a, INDEX i);
SECAPI CTString_* CTString_RemoveSpecialCodes(const CTString_* p);

#ifdef __cplusplus
}
#endif

#endif
