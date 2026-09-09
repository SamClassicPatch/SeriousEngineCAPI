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

#ifndef SECAPI_GRAPHICS_GFX_LIBRARY_H
#define SECAPI_GRAPHICS_GFX_LIBRARY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GAT_NONE_ -1
#define GAT_OGL_ 0
#define GAT_D3D_ 1
#define GAT_CURRENT_ 9

SECAPI CDisplayMode_* _pGfx_GetEnumeratedDisplayMode_(CDisplayModeEnumerator_* p, INDEX i);
SECAPI CDisplayModeEnumerator_* _pGfx_EnumDisplayModes_(INDEX* ctModes, GfxAPIType_ eAPI, INDEX iAdapter);
SECAPI BOOL _pGfx_SetDisplayMode_(GfxAPIType_ eAPI, INDEX iAdapter, PIX pixSizeI, PIX pixSizeJ, DisplayDepth_ eColorDepth);
SECAPI BOOL _pGfx_ResetDisplayMode_(GfxAPIType_ eAPI);
SECAPI GfxAPIType_ _pGfx_GetCurrentAPI_();
SECAPI INDEX _pGfx_GetCurrentAdapter_();
SECAPI void _pGfx_GetCurrentDisplayMode_(CDisplayMode_* dmCurrent);
SECAPI BOOL _pGfx_IsCurrentModeAccelerated_();
SECAPI BOOL _pGfx_HasAPI_(GfxAPIType_ eAPI);
SECAPI void _pGfx_CreateWindowCanvas_(void* hWnd, CViewPort_** ppvpNew, CDrawPort_** ppdpNew);
SECAPI void _pGfx_DestroyWindowCanvas_(CViewPort_* pvpOld);
SECAPI void _pGfx_CreateWorkCanvas_(PIX pixWidth, PIX pixHeight, CDrawPort_** ppdpNew);
SECAPI void _pGfx_DestroyWorkCanvas_(CDrawPort_* pdpOld);
SECAPI INDEX _pGfx_gl_iMaxTessellationLevel();

SECAPI INDEX* _iTexForcedQuality_();

#ifdef __cplusplus
}
#endif

#endif
