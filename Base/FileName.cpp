#include "FileName.h"

static INDEX GetSlashPosition(const CHAR* pszString)
{
  for (INDEX iPos = 0; '\0' != *pszString; ++iPos, ++pszString) {
    if (('\\' == *pszString) || ('/' == *pszString)) {
      return iPos;
    }
  }
  return -1;
}

CTFileName_* CTFileName_new()
{
  return (CTFileName_*)(new CTFileName());
}

CTFileName_* CTFileName_new_str(const CTString_* p)
{
  return (CTFileName_*)(new CTFileName(*((const CTString*)p)));
}

CTFileName_* CTFileName_new_stri(const char* p, INDEX i)
{
  return (CTFileName_*)(new CTFileName(p, i));
}

CTFileName_* CTFileName_clone(const CTFileName_* p)
{
  return (CTFileName_*)(new CTFileName(*((const CTFileName*)p)));
}

void CTFileName_delete(CTFileName_* p)
{
  delete ((CTFileName*)p);
}

void CTFileName_copy(CTFileName_* a, const CTFileName_* b)
{
  *((CTFileName*)a) = *((const CTFileName*)b);
}

void CTFileName_assign_str(CTFileName_* p, const char* s)
{
  *((CTFileName*)p) = s;
}

void CTFileName_assign(CTFileName_* p, const CTString_* s)
{
  *((CTFileName*)p) = *((const CTString*)s);
}

CTFileName_* CTFileName_FileDir(const CTFileName_* p)
{
  CTFileName result = ((const CTFileName*)p)->FileDir();
  return (CTFileName_*)(new CTFileName(result));
}

CTFileName_* CTFileName_FileName(const CTFileName_* p)
{
  CTFileName result = ((const CTFileName*)p)->FileName();
  return (CTFileName_*)(new CTFileName(result));
}

CTFileName_* CTFileName_FileExt(const CTFileName_* p)
{
  CTFileName result = ((const CTFileName*)p)->FileExt();
  return (CTFileName_*)(new CTFileName(result));
}

CTFileName_* CTFileName_NoExt(const CTFileName_* p)
{
  CTFileName result = ((const CTFileName*)p)->NoExt();
  return (CTFileName_*)(new CTFileName(result));
}

void CTFileName_SetAbsolutePath(CTFileName_* p)
{
  CTFileName& f = *((CTFileName*)p);
  
  // Collect path parts
  CTString strRemaining(f);
  CStaticStackArray<CTString> astrParts;
  INDEX iSlashPos = GetSlashPosition(strRemaining);
  if (0 > iSlashPos) {
    return; // Invalid path
  }
  for (;;) {
    CTString &strBeforeSlash = astrParts.Push();
    CTString strAfterSlash;
    strRemaining.Split(iSlashPos, strBeforeSlash, strAfterSlash);
    strAfterSlash.TrimLeft(strAfterSlash.Length() - 1);
    strRemaining = strAfterSlash;
    iSlashPos = GetSlashPosition(strRemaining);
    if (0 > iSlashPos) {
      astrParts.Push() = strRemaining;
      break;
    }
  }
  // Remove certain path parts
  {for (INDEX iPart = 0; iPart < astrParts.Count(); ++iPart) {
    if (CTString("..") != astrParts[iPart]) {
      continue;
    }
    if (0 == iPart) {
      return; // Invalid path
    }
    // Remove ordered
    CStaticStackArray<CTString> astrShrinked;
    astrShrinked.Push(astrParts.Count() - 2);
    astrShrinked.PopAll();
    for (INDEX iCopiedPart = 0; iCopiedPart < astrParts.Count(); ++iCopiedPart) {
      if ((iCopiedPart != iPart - 1) && (iCopiedPart != iPart)) {
        astrShrinked.Push() = astrParts[iCopiedPart];
      }
    }
    astrParts.MoveArray(astrShrinked);
    iPart -= 2;
  }}
  // Set new content
  strRemaining.Clear();
  {for (INDEX iPart = 0; iPart < astrParts.Count(); ++iPart) {
    strRemaining += astrParts[iPart];
    if (iPart < astrParts.Count() - 1) {
      strRemaining += CTString("\\");
    }
  }}
  f = strRemaining;
}

void CTFileName_RemoveApplicationPath_t(CTFileName_* p)
{
  SECAPI_TRY
  ((CTFileName*)p)->RemoveApplicationPath_t();
  SECAPI_CATCH
}

static void sehCTFileName_ReadFromText_t(CTFileName_* p, CTStream_* s, const char* keyword)
{
  SECAPI_TRY
  if (keyword)
    ((CTFileName*)p)->ReadFromText_t(*((CTStream*)s), CTString(keyword));
  else
    ((CTFileName*)p)->ReadFromText_t(*((CTStream*)s));
  SECAPI_CATCH
}

void CTFileName_ReadFromText_t(CTFileName_* p, CTStream_* s, const char* keyword)
{
  STREAM_TRY
  sehCTFileName_ReadFromText_t(p, s, keyword);
  STREAM_CATCH
}

static void sehCTFileName_extract(CTStream_* s, CTFileName_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((CTFileName*)p));
  SECAPI_CATCH
}

void CTFileName_extract(CTStream_* s, CTFileName_* p)
{
  STREAM_TRY
  sehCTFileName_extract(s, p);
  STREAM_CATCH
}

static void sehCTFileName_insert(CTStream_* s, const CTFileName_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((const CTFileName*)p));
  SECAPI_CATCH
}

void CTFileName_insert(CTStream_* s, const CTFileName_* p)
{
  STREAM_TRY
  sehCTFileName_insert(s, p);
  STREAM_CATCH
}

