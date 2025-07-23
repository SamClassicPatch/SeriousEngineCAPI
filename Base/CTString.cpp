#include "CTString.h"
#include <Engine/Base/CTString.h>

CTString_* CTString_new() 
{
  return (CTString_*)(new CTString());
}

CTString_* CTString_new_str(const char* s)
{
  return (CTString_*)(new CTString(s));
}

CTString_* CTString_clone(const CTString_* p)
{
  return (CTString_*)(new CTString(*((const CTString*)p)));
}

void CTString_delete(CTString_* p)
{
  delete (CTString*)p;
}

void CTString_Clear(CTString_* p)
{
  ((CTString*)p)->Clear();
}

const char* CTString_CStr(const CTString_* p)
{
  return ((const CTString*)p)->operator const char*();
}

void CTString_Assign_str(CTString_* p, const char* s)
{
  *((CTString*)p) = s;
}

void CTString_Assign(CTString_* a, const CTString_* b)
{
  *((CTString*)a) = *((const CTString*)b);
}

INDEX CTString_Length(const CTString_* p)
{
  return ((const CTString*)p)->Length();
}

INDEX CTString_LengthNaked(const CTString_* p)
{
  return ((const CTString*)p)->LengthNaked();
}

CTString_* CTString_Undecorated(const CTString_* p)
{
  CTString result = ((const CTString*)p)->Undecorated();
  return (CTString_*)(new CTString(result));
}

INDEX CTString_FindSubstr(CTString_* p, const CTString_* a)
{
  return ((CTString*)p)->FindSubstr(*((const CTString*)a));
}

BOOL CTString_ReplaceSubstr(CTString_* p, const CTString_* a, const CTString_* b)
{
  return ((CTString*)p)->ReplaceSubstr(*((const CTString*)a), *((const CTString*)b));
}

BOOL CTString_HasPrefix(const CTString_* p, const CTString_* prefix)
{
  return ((CTString*)p)->HasPrefix(*((const CTString*)prefix));
}

BOOL CTString_RemovePrefix(CTString_* p, const CTString_* prefix)
{
  return ((CTString*)p)->RemovePrefix(*((const CTString*)prefix));
}

INDEX CTString_TrimLeft(CTString_* p, INDEX c)
{
  return ((CTString*)p)->TrimLeft(c);
}

INDEX CTString_TrimRight(CTString_* p, INDEX c)
{
  return ((CTString*)p)->TrimRight(c);
}

INDEX CTString_TrimSpacesLeft(CTString_* p)
{
  return ((CTString*)p)->TrimSpacesLeft();
}

INDEX CTString_TrimSpacesRight(CTString_* p)
{
  return ((CTString*)p)->TrimSpacesRight();
}

ULONG CTString_GetHash(const CTString_* p)
{
  return ((const CTString*)p)->GetHash();
}

void CTString_OnlyFirstLine(CTString_* p)
{
  ((CTString*)p)->OnlyFirstLine();
}

BOOL CTString_equal(const CTString_* a, const CTString_* b)
{
  return *((const CTString*)a) == *((const CTString*)b);
}

BOOL CTString_equal_str(const CTString_* a, const char* b)
{
  return *((const CTString*)a) == b;
}

BOOL CTString_notequal(const CTString_* a, const CTString_* b)
{
  return *((const CTString*)a) != *((const CTString*)b);
}

BOOL CTString_notequal_str(const CTString_* a, const char* b)
{
  return *((const CTString*)a) != b;
}

BOOL CTString_Matches(const CTString_* a, const CTString_* b)
{
  return ((const CTString*)a)->Matches(*((const CTString*)b));
}

BOOL CTString_Matches_str(const CTString_* a, const char* b)
{
  return ((const CTString*)a)->Matches(b);
}

CTString_* CTString_Concatenate(const CTString_* a, const CTString_* b)
{
  CTString result = *((const CTString*)a) + *((const CTString*)b);
  return (CTString_*)(new CTString(result));
}

void CTString_ConcatenateInplace(CTString_* a, const CTString_* b)
{
  *((CTString*)a) += *((const CTString*)b);
}

void CTString_Split(CTString_* p, INDEX i, CTString_* s1, CTString_* s2)
{
  ((CTString*)p)->Split(i, *((CTString*)s1), *((CTString*)s2));
}

void CTString_InsertChar(CTString_* p, INDEX i, char c)
{
  ((CTString*)p)->InsertChar(i, c);
}

void CTString_DeleteChar(CTString_* p, INDEX i)
{
  ((CTString*)p)->DeleteChar(i);
}

void CTString_Throw_t(CTString_* p)
{
  SECAPI_TRY
    ((CTString*)p)->Throw_t();
  SECAPI_CATCH
}

static void sehReadFromText_t(CTString_* p, CTStream_* s, const CTString_* k)
{
  SECAPI_TRY
    ((CTString*)p)->ReadFromText_t(*((CTStream*)s), *((const CTString*)k));
  SECAPI_CATCH
}

void CTString_ReadFromText_t(CTString_* p, CTStream_* s, const CTString_* k)
{
  STREAM_TRY
  sehReadFromText_t(p, s, k);
  STREAM_CATCH
}

static void sehCTString_extract(CTStream_* s, CTString_* p)
{
  SECAPI_TRY
  *((CTStream*)s) >> *((CTString*)p);
  SECAPI_CATCH
}

void CTString_extract(CTStream_* s, CTString_* p)
{
  STREAM_TRY
  sehCTString_extract(s, p);
  STREAM_CATCH
}

static void sehCTString_insert(CTStream_* s, const CTString_* p)
{
  SECAPI_TRY
    *((CTStream*)s) << *((const CTString*)s);
  SECAPI_CATCH
}

void CTString_insert(CTStream_* s, const CTString_* p)
{
  STREAM_TRY
  sehCTString_insert(s, p);
  STREAM_CATCH
}

static void sehCTString_Load_t(CTString_* a, const CTFileName_* b)
{
  SECAPI_TRY
    ((CTString*)a)->Load_t(*((const CTFileName*)b));
  SECAPI_CATCH
}

void CTString_Load_t(CTString_* a, const CTFileName_* b)
{
  STREAM_TRY
  sehCTString_Load_t(a, b);
  STREAM_CATCH
}

static void sehCTString_LoadKeepCRLF_t(CTString_* a, const CTFileName_* b)
{
  SECAPI_TRY
    ((CTString*)a)->LoadKeepCRLF_t(*((const CTFileName*)b));
  SECAPI_CATCH
}

void CTString_LoadKeepCRLF_t(CTString_* a, const CTFileName_* b)
{
  STREAM_TRY
  sehCTString_LoadKeepCRLF_t(a, b);
  STREAM_CATCH
}

static void sehCTString_ReadUntilEOF_t(CTString_* p, CTStream_* s)
{
  SECAPI_TRY
    ((CTString*)p)->ReadUntilEOF_t(*((CTStream*)s));
  SECAPI_CATCH
}

void CTString_ReadUntilEOF_t(CTString_* p, CTStream_* s)
{
  STREAM_TRY
  sehCTString_ReadUntilEOF_t(p, s);
  STREAM_CATCH
}

static void sehCTString_Save_t(CTString_* a, const CTFileName_* b)
{
  SECAPI_TRY
    ((CTString*)a)->Save_t(*((const CTFileName*)b));
  SECAPI_CATCH
}

void CTString_Save_t(CTString_* a, const CTFileName_* b)
{
  STREAM_TRY
  sehCTString_Save_t(a, b);
  STREAM_CATCH
}

static void sehCTString_SaveKeepCRLF_t(CTString_* a, const CTFileName_* b)
{
  SECAPI_TRY
    ((CTString*)a)->SaveKeepCRLF_t(*((const CTFileName*)b));
  SECAPI_CATCH
}

void CTString_SaveKeepCRLF_t(CTString_* a, const CTFileName_* b)
{
  STREAM_TRY
  sehCTString_SaveKeepCRLF_t(a, b);
  STREAM_CATCH
}

static void sehCTString_LoadVar(CTString_* a, const CTFileName_* b)
{
  SECAPI_TRY
  ((CTString*)a)->LoadVar(*((const CTFileName*)b));
  SECAPI_CATCH
}

void CTString_LoadVar(CTString_* a, const CTFileName_* b)
{
  STREAM_TRY
  sehCTString_LoadVar(a, b);
  STREAM_CATCH
}

static void sehCTString_SaveVar(CTString_* a, const CTFileName_* b)
{
  SECAPI_TRY
  ((CTString*)a)->SaveVar(*((const CTFileName*)b));
  SECAPI_CATCH
}

void CTString_SaveVar(CTString_* a, const CTFileName_* b)
{
  STREAM_TRY
  sehCTString_SaveVar(a, b);
  STREAM_CATCH
}

static void sehCTString_LoadStringVar(const CTFileName_* a, CTString_* b)
{
  SECAPI_TRY
  LoadStringVar(*((const CTFileName*)a), *((CTString*)b));
  SECAPI_CATCH
}

void CTString_LoadStringVar(const CTFileName_* a, CTString_* b)
{
  STREAM_TRY
  sehCTString_LoadStringVar(a, b);
  STREAM_CATCH
}

static void sehCTString_SaveStringVar(const CTFileName_* a, CTString_* b)
{
  SECAPI_TRY
  SaveStringVar(*((const CTFileName*)a), *((CTString*)b));
  SECAPI_CATCH
}

void CTString_SaveStringVar(const CTFileName_* a, CTString_* b)
{
  STREAM_TRY
  sehCTString_SaveStringVar(a, b);
  STREAM_CATCH
}

static void sehCTString_LoadIntVar(const CTFileName_* a, INDEX* i)
{
  SECAPI_TRY
  LoadIntVar(*((const CTFileName*)a), *i);
  SECAPI_CATCH
}

void CTString_LoadIntVar(const CTFileName_* a, INDEX* i)
{
  STREAM_TRY
  sehCTString_LoadIntVar(a, i);
  STREAM_CATCH
}

static void sehCTString_SaveIntVar(const CTFileName_* a, INDEX i)
{
  SECAPI_TRY
  SaveIntVar(*((const CTFileName*)a), i);
  SECAPI_CATCH
}

void CTString_SaveIntVar(const CTFileName_* a, INDEX i)
{
  STREAM_TRY
  sehCTString_SaveIntVar(a, i);
  STREAM_CATCH
}

CTString_* CTString_RemoveSpecialCodes(const CTString_* p)
{
  CTString result = RemoveSpecialCodes(*((const CTString*)p));
  return (CTString_*)(new CTString(result));
}
