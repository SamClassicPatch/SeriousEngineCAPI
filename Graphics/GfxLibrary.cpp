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

#include "GfxLibrary.h"

CDisplayMode_* _pGfx_GetEnumeratedDisplayMode_(CDisplayModeEnumerator_* p, INDEX i)
{
  CDisplayMode* arr = (CDisplayMode*)p;
  CDisplayMode& res = arr[i];
  return ((CDisplayMode_*)(&res));
}

CDisplayModeEnumerator_* _pGfx_EnumDisplayModes_(INDEX* ctModes, GfxAPIType_ eAPI, INDEX iAdapter)
{
  CDisplayMode* arr = _pGfx->EnumDisplayModes(*ctModes, (GfxAPIType)eAPI, iAdapter);
  return (CDisplayModeEnumerator_*)arr;
}

BOOL _pGfx_SetDisplayMode_(GfxAPIType_ eAPI, INDEX iAdapter, PIX pixSizeI, PIX pixSizeJ, DisplayDepth_ eColorDepth)
{
  BOOL res = FALSE;
  STREAM_TRY
  res = _pGfx->SetDisplayMode((GfxAPIType)eAPI, iAdapter, pixSizeI, pixSizeJ, (DisplayDepth)eColorDepth);
  STREAM_CATCH
  return res;
}

BOOL _pGfx_ResetDisplayMode_(GfxAPIType_ eAPI)
{
  BOOL res = FALSE;
  STREAM_TRY
  res = _pGfx->ResetDisplayMode((GfxAPIType)eAPI);
  STREAM_CATCH
  return res;
}

GfxAPIType_ _pGfx_GetCurrentAPI_()
{
  return (GfxAPIType_)(_pGfx->GetCurrentAPI());
}

INDEX _pGfx_GetCurrentAdapter_()
{
  return _pGfx->GetCurrentAdapter();
}

void _pGfx_GetCurrentDisplayMode_(CDisplayMode_* dmCurrent)
{
  _pGfx->GetCurrentDisplayMode(*((CDisplayMode*)dmCurrent));
}

BOOL _pGfx_IsCurrentModeAccelerated_()
{
  return _pGfx->IsCurrentModeAccelerated();
}

BOOL _pGfx_HasAPI_(GfxAPIType_ eAPI)
{
  return _pGfx->HasAPI((GfxAPIType)eAPI);
}

void _pGfx_CreateWindowCanvas_(void* hWnd, CViewPort_** ppvpNew, CDrawPort_** ppdpNew)
{
  STREAM_TRY
  _pGfx->CreateWindowCanvas(hWnd, (CViewPort**)ppvpNew, (CDrawPort**)ppdpNew);
  STREAM_CATCH
}

void _pGfx_DestroyWindowCanvas_(CViewPort_* pvpOld)
{
  STREAM_TRY
  _pGfx->DestroyWindowCanvas((CViewPort*)pvpOld);
  STREAM_CATCH
}

void _pGfx_CreateWorkCanvas_(PIX pixWidth, PIX pixHeight, CDrawPort_** ppdpNew)
{
  STREAM_TRY
  _pGfx->CreateWorkCanvas(pixWidth, pixHeight, (CDrawPort**)ppdpNew);
  STREAM_CATCH
}

void _pGfx_DestroyWorkCanvas_(CDrawPort_* pdpOld)
{
  STREAM_TRY
  _pGfx->DestroyWorkCanvas((CDrawPort*)pdpOld);
  STREAM_CATCH
}

INDEX* _iTexForcedQuality_()
{
  return &_iTexForcedQuality;
}

INDEX _pGfx_gl_iMaxTessellationLevel()
{
  return _pGfx->gl_iMaxTessellationLevel;
}
