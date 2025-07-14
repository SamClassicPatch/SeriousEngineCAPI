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
SECAPI BOOL _pGfx_IsCurrentModeAccelerated_();
SECAPI BOOL _pGfx_HasAPI_(GfxAPIType_ eAPI);
SECAPI void _pGfx_CreateWindowCanvas_(void* hWnd, CViewPort_** ppvpNew, CDrawPort_** ppdpNew);
SECAPI void _pGfx_DestroyWindowCanvas_(CViewPort_* pvpOld);
SECAPI void _pGfx_CreateWorkCanvas_(PIX pixWidth, PIX pixHeight, CDrawPort_** ppdpNew);
SECAPI void _pGfx_DestroyWorkCanvas_(CDrawPort_* pdpOld);

#ifdef __cplusplus
}
#endif

#endif
