#ifndef SECAPI_GRAPHICS_FONT_H
#define SECAPI_GRAPHICS_FONT_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CFontData_* _pfdDisplayFont_();
SECAPI CFontData_* _pfdConsoleFont_();

SECAPI CFontCharData_* CFontCharData_new();
SECAPI CFontCharData_* CFontCharData_clone(const CFontCharData_* p);
SECAPI void CFontCharData_delete(CFontCharData_* p);
SECAPI void CFontCharData_copy(CFontCharData_* a, const CFontCharData_* b);
SECAPI PIX* CFontCharData_fcd_pixXOffset(CFontCharData_* p);
SECAPI PIX* CFontCharData_fcd_pixYOffset(CFontCharData_* p);
SECAPI PIX* CFontCharData_fcd_pixStart(CFontCharData_* p);
SECAPI PIX* CFontCharData_fcd_pixEnd(CFontCharData_* p);
SECAPI void CFontCharData_Read_t(CFontCharData_* p, CTStream_* s);
SECAPI void CFontCharData_Write_t(CFontCharData_* p, CTStream_* s);

SECAPI CFontData_* CFontData_new();
SECAPI CFontData_* CFontData_clone(const CFontData_* p);
SECAPI void CFontData_delete(CFontData_* p);
SECAPI void CFontData_copy(CFontData_* a, const CFontData_* b);
SECAPI PIX* CFontData_fd_pixCharSpacing(CFontData_* p);
SECAPI PIX* CFontData_fd_pixLineSpacing(CFontData_* p);
SECAPI PIX* CFontData_fd_pixCharWidth(CFontData_* p);
SECAPI PIX* CFontData_fd_pixCharHeight(CFontData_* p);
SECAPI BOOL* CFontData_fd_bFixedWidth(CFontData_* p);
SECAPI CTFileName_* CFontData_fd_fnTexture(CFontData_* p);
SECAPI CFontCharData_* CFontData_fd_fcdFontCharData(CFontData_* p, unsigned char c);
SECAPI CTextureData_** CFontData_fd_ptdTextureData(CFontData_* p);
SECAPI void CFontData_SetSpaceWidth(CFontData_* p, FLOAT fWidthRatio);
SECAPI void CFontData_Read_t(CFontData_* p, CTStream_* inFile);
SECAPI void CFontData_Write_t(CFontData_* p, CTStream_* outFile);
SECAPI void CFontData_Make_t(CFontData_* p, const CTFileName_* fnTexture, PIX pixCharWidth, PIX pixCharHeight, CTFileName_* fnOrderFile, BOOL bUseAlpha);
SECAPI void CFontData_Clear(CFontData_* p);

#ifdef __cplusplus
}
#endif

#endif
