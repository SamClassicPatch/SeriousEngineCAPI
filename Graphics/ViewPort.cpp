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

#include "ViewPort.h"


CViewPort_* CViewPort_new(PIX w, PIX h, HWND hwnd)
{
  return (CViewPort_*)(new CViewPort(w, h, hwnd));
}

void CViewPort_delete(CViewPort_* p)
{
  delete ((CViewPort*)p);
}

HWND* CViewPort_vp_hWnd(CViewPort_* p)
{
  CViewPort& v = *((CViewPort*)p);
  return &(v.vp_hWnd);
}

HWND* CViewPort_vp_hWndParent(CViewPort_* p)
{
  CViewPort& v = *((CViewPort*)p);
  return &(v.vp_hWndParent);
}

CRaster_* CViewPort_vp_Raster(CViewPort_* p)
{
  CViewPort& v = *((CViewPort*)p);
  return (CRaster_*)(&(v.vp_Raster));
}

void CViewPort_OpenCanvas(CViewPort_* p)
{
  STREAM_TRY
  ((CViewPort*)p)->OpenCanvas();
  STREAM_CATCH
}

void CViewPort_CloseCanvas(CViewPort_* p, BOOL release)
{
  ((CViewPort*)p)->CloseCanvas(release);
}

void CViewPort_SwapBuffers(CViewPort_* p)
{
  STREAM_TRY
  ((CViewPort*)p)->SwapBuffers();
  STREAM_CATCH
}

void CViewPort_Resize(CViewPort_* p)
{
  ((CViewPort*)p)->Resize();
}
