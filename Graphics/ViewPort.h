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
