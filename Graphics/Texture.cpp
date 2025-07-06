#include "Texture.h"

CTextureData_* CTextureData_new()
{
  return (CTextureData_*)(new CTextureData());
}

void CTextureData_delete(CTextureData_* p)
{
  delete ((CTextureData*)p);
}

ULONG* CTextureData_td_ulFlags(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_ulFlags);
}

MEX* CTextureData_td_mexWidth(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_mexWidth);
}

MEX* CTextureData_td_mexHeight(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_mexHeight);
}

INDEX* CTextureData_td_ctFrames(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_ctFrames);
}

ULONG** CTextureData_td_pulFrames(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_pulFrames);
}

BOOL CTextureData_HasEffectTexture(const CTextureData_* p)
{
  return ((const CTextureData*)p)->td_ptegEffect != NULL;
}

INDEX CTextureData_ClampMipLevel(const CTextureData_* p, FLOAT mip)
{
  return ((const CTextureData*)p)->ClampMipLevel(mip);
}

MEX CTextureData_GetWidth(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetWidth();
}

MEX CTextureData_GetHeight(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetHeight();
}

PIX CTextureData_GetPixWidth(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetPixWidth();
}

PIX CTextureData_GetPixHeight(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetPixHeight();
}

ULONG CTextureData_GetFlags(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetFlags();
}

ULONG CTextureData_GetNoOfMips(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetNoOfMips();
}

ULONG CTextureData_GetNoOfFineMips(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetNoOfFineMips();
}

BOOL CTextureData_IsModified(CTextureData_* p)
{
  return ((CTextureData*)p)->IsModified();
}

void CTextureData_Export_t(CTextureData_* p, CImageInfo_* i, INDEX frame)
{
  SECAPI_TRY
  ((CTextureData*)p)->Export_t(*((CImageInfo*)i), frame);
  SECAPI_CATCH
}

void CTextureData_Create_t(CTextureData_* p, const CImageInfo_* i, MEX wanted, INDEX fineMips, BOOL force32bit)
{
  SECAPI_TRY
  ((CTextureData*)p)->Create_t((const CImageInfo*)i, wanted, fineMips, force32bit);
  SECAPI_CATCH
}

void CTextureData_Clear(CTextureData_* p)
{
  ((CTextureData*)p)->Clear();
}

void CTextureData_Force(CTextureData_* p, ULONG flags)
{
  SECAPI_TRY
  ((CTextureData*)p)->Force(flags);
  SECAPI_CATCH
}

COLOR CTextureData_GetTexel(CTextureData_* p, MEX u, MEX v)
{
  return ((CTextureData*)p)->GetTexel(u, v);
}

void CTextureData_FetchRow(CTextureData_* p, PIX row, void* dst, INDEX channel, BOOL convertToFloat)
{
  ((CTextureData*)p)->FetchRow(row, dst, channel, convertToFloat);
}

ULONG* CTextureData_GetRowPointer(CTextureData_* p, PIX row)
{
  return ((CTextureData*)p)->GetRowPointer(row);
}


CTextureObject_* CTextureObject_new()
{
  return (CTextureObject_*)(new CTextureObject());
}

void CTextureObject_delete(CTextureObject_* p)
{
  delete ((CTextureObject*)p);
}

MEX CTextureObject_GetWidth(const CTextureObject_* p)
{
  return ((const CTextureObject*)p)->GetWidth();
}

MEX CTextureObject_GetHeight(const CTextureObject_* p)
{
  return ((const CTextureObject*)p)->GetHeight();
}

ULONG CTextureObject_GetFlags(const CTextureObject_* p)
{
  return ((const CTextureObject*)p)->GetFlags();
}

void CTextureObject_SetData_t(CTextureObject_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CTextureObject*)p)->SetData_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

const CTFileName_* CTextureObject_GetName(CTextureObject_* p)
{
  return (const CTFileName_*)(&(((CTextureObject*)p)->GetName()));
}


void CreateTexture_t_(const CTFileName_* f, MEX mex, INDEX mips, BOOL force32bit)
{
  SECAPI_TRY
  CreateTexture_t(*((const CTFileName*)f), mex, mips, force32bit);
  SECAPI_CATCH
}

void CreateTexture_t_o(const CTFileName_* f, const CTFileName_* of, MEX mex, INDEX mips, BOOL force32bit)
{
  SECAPI_TRY
  CreateTexture_t(*((const CTFileName*)f), *((const CTFileName*)of), mex, mips, force32bit);
  SECAPI_CATCH
}

void ProcessScript_t_(const CTFileName_* f)
{
  SECAPI_TRY
  ProcessScript_t(*((const CTFileName*)f));
  SECAPI_CATCH
}
