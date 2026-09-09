/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#ifndef SECAPI_GRAPHICS_COLOR_H
#define SECAPI_GRAPHICS_COLOR_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
// color definition constants (in CroTeam RGBA format)
#define C_BLACK     0x00000000UL
#define C_vdGRAY    0x1F1F1F00UL
#define C_dGRAY     0x3F3F3F00UL
#define C_mdGRAY    0x5F5F5F00UL
#define C_GRAY      0x7F7F7F00UL
#define C_mlGRAY    0x9F9F9F00UL
#define C_lGRAY     0xBFBFBF00UL
#define C_vlGRAY    0xDFDFDF00UL
#define C_WHITE     0xFFFFFF00UL

#define C_vdRED     0x3F000000UL
#define C_dRED      0x7F000000UL
#define C_mdRED     0xBF000000UL
#define C_RED       0xFF000000UL
#define C_mlRED     0xFF3F3F00UL
#define C_lRED      0xFF7F7F00UL
#define C_vlRED     0xFFBFBF00UL

#define C_vdGREEN   0x003F0000UL
#define C_dGREEN    0x007F0000UL
#define C_mdGREEN   0x00BF0000UL
#define C_GREEN     0x00FF0000UL
#define C_mlGREEN   0x3FFF3F00UL
#define C_lGREEN    0x7FFF7F00UL
#define C_vlGREEN   0xBFFFBF00UL

#define C_vdBLUE    0x00003F00UL
#define C_dBLUE     0x00007F00UL
#define C_mdBLUE    0x0000BF00UL
#define C_BLUE      0x0000FF00UL
#define C_mlBLUE    0x3F3FFF00UL
#define C_lBLUE     0x7F7FFF00UL
#define C_vlBLUE    0xBFBFFF00UL

#define C_vdCYAN    0x003F3F00UL
#define C_dCYAN     0x007F7F00UL
#define C_mdCYAN    0x00BFBF00UL
#define C_CYAN      0x00FFFF00UL
#define C_mlCYAN    0x3FFFFF00UL
#define C_lCYAN     0x7FFFFF00UL
#define C_vlCYAN    0xBFFFFF00UL

#define C_vdMAGENTA 0x3F003F00UL
#define C_dMAGENTA  0x7F007F00UL
#define C_mdMAGENTA 0xBF00BF00UL
#define C_MAGENTA   0xFF00FF00UL
#define C_mlMAGENTA 0xFF3FFF00UL
#define C_lMAGENTA  0xFF7FFF00UL
#define C_vlMAGENTA 0xFFBFFF00UL

#define C_vdYELLOW  0x3F3F0000UL
#define C_dYELLOW   0x7F7F0000UL
#define C_mdYELLOW  0xBFBF0000UL
#define C_YELLOW    0xFFFF0000UL
#define C_mlYELLOW  0xFFFF3F00UL
#define C_lYELLOW   0xFFFF7F00UL
#define C_vlYELLOW  0xFFFFBF00UL

#define C_vdORANGE  0x5F1F0000UL
#define C_dORANGE   0x7F3F0000UL
#define C_mdORANGE  0x9F5F0000UL
#define C_ORANGE    0xFF7F3F00UL
#define C_mlORANGE  0xFF9F5F00UL
#define C_lORANGE   0xFFBF7F00UL
#define C_vlORANGE  0xFFFF9F00UL

#define C_vdBROWN   0x3F1F0000UL
#define C_dBROWN    0x5F3F0F00UL
#define C_mdBROWN   0x7F5F1F00UL
#define C_BROWN     0x8C271700UL
#define C_mlBROWN   0xBF3F0F00UL
#define C_lBROWN    0xBF7F1F00UL
#define C_vlBROWN   0xBFBF3F00UL

#define C_vdPINK    0x9A545400UL
#define C_dPINK     0xAA646400UL
#define C_mdPINK    0xBA747400UL
#define C_PINK      0xC8787800UL
#define C_mlPINK    0xD67C7C00UL
#define C_lPINK     0xE68C8C00UL
#define C_vlPINK    0xF68C8C00UL

// CT RGBA masks and shifts
#define CT_RMASK  0xFF000000UL
#define CT_GMASK  0x00FF0000UL
#define CT_BMASK  0x0000FF00UL
#define CT_AMASK  0x000000FFUL
#define CT_RSHIFT 24
#define CT_GSHIFT 16
#define CT_BSHIFT  8
#define CT_ASHIFT  0

// reversed (OpenGL) RGBA masks and shifts
#define CT_rRMASK  0x000000FFUL
#define CT_rGMASK  0x0000FF00UL
#define CT_rBMASK  0x00FF0000UL
#define CT_rAMASK  0xFF000000UL
#define CT_rRSHIFT  0
#define CT_rGSHIFT  8
#define CT_rBSHIFT 16
#define CT_rASHIFT 24
#endif

SECAPI COLOR RGBToColor_(UBYTE ubR, UBYTE ubG, UBYTE ubB);
SECAPI void ColorToRGB_(COLOR col, UBYTE* ubR, UBYTE* ubG, UBYTE* ubB);
SECAPI COLOR RGBAToColor_(UBYTE ubR, UBYTE ubG, UBYTE ubB, UBYTE ubA);
SECAPI void ColorToRGBA_(COLOR col, UBYTE* ubR, UBYTE* ubG, UBYTE* ubB, UBYTE* ubA);
SECAPI COLOR HSVToColor_(UBYTE ubH, UBYTE ubS, UBYTE ubV);
SECAPI void ColorToHSV_(COLOR colSrc, UBYTE* ubH, UBYTE* ubS, UBYTE* ubV);
SECAPI COLOR HSVAToColor_(UBYTE ubH, UBYTE ubS, UBYTE ubV, UBYTE ubA);
SECAPI void ColorToHSVA_(COLOR colSrc, UBYTE* ubH, UBYTE* ubS, UBYTE* ubV, UBYTE* ubA);
SECAPI BOOL IsGray_(COLOR col);
SECAPI BOOL IsBlack_(COLOR col);
SECAPI BOOL IsWhite_(COLOR col);
SECAPI COLOR DesaturateColor_(COLOR col);
SECAPI BOOL IsBigger_(COLOR col1, COLOR col2);
SECAPI BOOL CompareChroma_(COLOR col1, COLOR col2);
SECAPI COLOR AdjustColor_(COLOR col, SLONG slHueShift, SLONG slSaturation);
SECAPI COLOR AdjustGamma_(COLOR col, FLOAT fGamma);
SECAPI COLOR LerpColor_(COLOR col0, COLOR col1, FLOAT fRatio);
SECAPI void  LerpColor_b(COLOR col0, COLOR col1, FLOAT fRatio, UBYTE* ubR, UBYTE* ubG, UBYTE* ubB);
SECAPI COLOR MulColors_(COLOR col1, COLOR col2);
SECAPI COLOR AddColors_(COLOR col1, COLOR col2);
SECAPI ULONG ByteSwap_(ULONG ul);

#ifdef __cplusplus
}
#endif

#endif
