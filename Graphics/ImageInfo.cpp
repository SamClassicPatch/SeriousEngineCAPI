#include "ImageInfo.h"

CImageInfo_* CImageInfo_new()
{
  return (CImageInfo_*)(new CImageInfo());
}

void CImageInfo_delete(CImageInfo_* p)
{
  delete ((CImageInfo*)p);
}

PIX* CImageInfo_ii_Width(CImageInfo_* p)
{
  CImageInfo& i = *((CImageInfo*)p);
  return &(i.ii_Width);
}

PIX* CImageInfo_ii_Height(CImageInfo_* p)
{
  CImageInfo& i = *((CImageInfo*)p);
  return &(i.ii_Height);
}

SLONG* CImageInfo_ii_BitsPerPixel(CImageInfo_* p)
{
  CImageInfo& i = *((CImageInfo*)p);
  return &(i.ii_BitsPerPixel);
}

UBYTE** CImageInfo_ii_Picture(CImageInfo_* p)
{
  CImageInfo& i = *((CImageInfo*)p);
  return &(i.ii_Picture);
}

void CImageInfo_Read_t(CImageInfo_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CImageInfo*)p)->Read_t((CTStream*)s);
  SECAPI_CATCH
}

void CImageInfo_Write_t(const CImageInfo_* p, CTStream_* s)
{
  SECAPI_TRY
  ((const CImageInfo*)p)->Write_t((CTStream*)s);
  SECAPI_CATCH
}

void CImageInfo_Attach(CImageInfo_* p, UBYTE* pic, PIX wid, PIX hei, SLONG bpp)
{
  ((CImageInfo*)p)->Attach(pic, wid, hei, bpp);
}

void CImageInfo_Detach(CImageInfo_* p)
{
  ((CImageInfo*)p)->Detach();
}

void CImageInfo_Clear(CImageInfo_* p)
{
  ((CImageInfo*)p)->Clear();
}

void CImageInfo_ExpandEdges(CImageInfo_* p, INDEX passes)
{
  ((CImageInfo*)p)->ExpandEdges(passes);
}

INDEX CImageInfo_GetGfxFileInfo_t(CImageInfo_* p, const CTFileName_* f)
{
  INDEX res;
  SECAPI_TRY
  res = ((CImageInfo*)p)->GetGfxFileInfo_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return res;
}

void CImageInfo_LoadAnyGfxFormat_t(CImageInfo_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CImageInfo*)p)->LoadAnyGfxFormat_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CImageInfo_SaveTGA_t(const CImageInfo_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((const CImageInfo*)p)->SaveTGA_t(*((const CTFileName*)f));
  SECAPI_CATCH
}
