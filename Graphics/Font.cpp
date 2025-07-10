#include "Font.h"

CFontData_* _pfdDisplayFont_()
{
  return (CFontData_*)_pfdDisplayFont;
}

CFontData_* _pfdConsoleFont_()
{
  return (CFontData_*)_pfdConsoleFont;
}

CFontCharData_* CFontCharData_new()
{
  return (CFontCharData_*)(new CFontCharData());
}

CFontCharData_* CFontCharData_clone(const CFontCharData_* p)
{
  return (CFontCharData_*)(new CFontCharData(*((const CFontCharData*)p)));
}

void CFontCharData_delete(CFontCharData_* p)
{
  delete ((CFontCharData*)p);
}

void CFontCharData_copy(CFontCharData_* a, const CFontCharData_* b)
{
  *((CFontCharData*)a) = *((const CFontCharData*)b);
}

PIX* CFontCharData_fcd_pixXOffset(CFontCharData_* p)
{
  CFontCharData& d = *((CFontCharData*)p);
  return &(d.fcd_pixXOffset);
}

PIX* CFontCharData_fcd_pixYOffset(CFontCharData_* p)
{
  CFontCharData& d = *((CFontCharData*)p);
  return &(d.fcd_pixYOffset);
}

PIX* CFontCharData_fcd_pixStart(CFontCharData_* p)
{
  CFontCharData& d = *((CFontCharData*)p);
  return &(d.fcd_pixStart);
}

PIX* CFontCharData_fcd_pixEnd(CFontCharData_* p)
{
  CFontCharData& d = *((CFontCharData*)p);
  return &(d.fcd_pixEnd);
}

void CFontCharData_Read_t(CFontCharData_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CFontCharData*)p)->Read_t((CTStream*)s);
  SECAPI_CATCH
}

void CFontCharData_Write_t(CFontCharData_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CFontCharData*)p)->Write_t((CTStream*)s);
  SECAPI_CATCH
}

CFontData_* CFontData_new()
{
  return (CFontData_*)(new CFontData());
}

CFontData_* CFontData_clone(const CFontData_* p)
{
  return (CFontData_*)(new CFontData(*((const CFontData*)p)));
}

void CFontData_delete(CFontData_* p)
{
  delete ((CFontData*)p);
}

void CFontData_copy(CFontData_* a, const CFontData_* b)
{
  *((CFontData*)a) = *((const CFontData*)b);
}

PIX* CFontData_fd_pixCharSpacing(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return &(d.fd_pixCharSpacing);
}

PIX* CFontData_fd_pixLineSpacing(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return &(d.fd_pixLineSpacing);
}

PIX* CFontData_fd_pixCharWidth(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return &(d.fd_pixCharWidth);
}

PIX* CFontData_fd_pixCharHeight(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return &(d.fd_pixCharHeight);
}

BOOL* CFontData_fd_bFixedWidth(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return &(d.fd_bFixedWidth);
}

CTFileName_* CFontData_fd_fnTexture(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return (CTFileName_*)(&(d.fd_fnTexture));
}

CFontCharData_* CFontData_fd_fcdFontCharData(CFontData_* p, unsigned char c)
{
  CFontData& d = *((CFontData*)p);
  return (CFontCharData_*)(&(d.fd_fcdFontCharData[c]));
}

CTextureData_** CFontData_fd_ptdTextureData(CFontData_* p)
{
  CFontData& d = *((CFontData*)p);
  return (CTextureData_**)(&(d.fd_ptdTextureData));
}

void CFontData_SetSpaceWidth(CFontData_* p, FLOAT fWidthRatio)
{
  ((CFontData*)p)->SetSpaceWidth(fWidthRatio);
}

void CFontData_Read_t(CFontData_* p, CTStream_* inFile)
{
  SECAPI_TRY
  ((CFontData*)p)->Read_t((CTStream*)inFile);
  SECAPI_CATCH
}

void CFontData_Write_t(CFontData_* p, CTStream_* outFile)
{
  SECAPI_TRY
  ((CFontData*)p)->Write_t((CTStream*)outFile);
  SECAPI_CATCH
}

void CFontData_Make_t(CFontData_* p, const CTFileName_* fnTexture, PIX pixCharWidth, PIX pixCharHeight, CTFileName_* fnOrderFile, BOOL bUseAlpha)
{
  SECAPI_TRY
  ((CFontData*)p)->Make_t(*((const CTFileName*)fnTexture), pixCharWidth, pixCharHeight, *((CTFileName*)fnOrderFile), bUseAlpha);
  SECAPI_CATCH
}

void CFontData_Clear(CFontData_* p)
{
  ((CFontData*)p)->Clear();
}
