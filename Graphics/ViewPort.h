#ifndef SECAPI_GRAPHICS_VIEW_PORT_H
#define SECAPI_GRAPHICS_VIEW_PORT_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CViewPort_* CViewPort_new(PIX w, PIX h, HWND hwnd);
SECAPI void CViewPort_delete(CViewPort_* p);
SECAPI HWND* CViewPort_vp_hWnd(CViewPort_* p);
SECAPI HWND* CViewPort_vp_hWndParent(CViewPort_* p);
SECAPI CRaster_* CViewPort_vp_Raster(CViewPort_* p);
SECAPI void CViewPort_OpenCanvas(CViewPort_* p);
SECAPI void CViewPort_CloseCanvas(CViewPort_* p, BOOL release);
SECAPI void CViewPort_SwapBuffers(CViewPort_* p);
SECAPI void CViewPort_Resize(CViewPort_* p);

#ifdef __cplusplus
}
#endif

#endif
