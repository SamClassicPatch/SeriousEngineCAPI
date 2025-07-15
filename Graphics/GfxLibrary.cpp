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
  return _pGfx->SetDisplayMode((GfxAPIType)eAPI, iAdapter, pixSizeI, pixSizeJ, (DisplayDepth)eColorDepth);
}

BOOL _pGfx_ResetDisplayMode_(GfxAPIType_ eAPI)
{
  return _pGfx->ResetDisplayMode((GfxAPIType)eAPI);
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
  _pGfx->CreateWindowCanvas(hWnd, (CViewPort**)ppvpNew, (CDrawPort**)ppdpNew);
}

void _pGfx_DestroyWindowCanvas_(CViewPort_* pvpOld)
{
  _pGfx->DestroyWindowCanvas((CViewPort*)pvpOld);
}

void _pGfx_CreateWorkCanvas_(PIX pixWidth, PIX pixHeight, CDrawPort_** ppdpNew)
{
  _pGfx->CreateWorkCanvas(pixWidth, pixHeight, (CDrawPort**)ppdpNew);
}

void _pGfx_DestroyWorkCanvas_(CDrawPort_* pdpOld)
{
  _pGfx->DestroyWorkCanvas((CDrawPort*)pdpOld);
}

INDEX* _iTexForcedQuality_()
{
  return &_iTexForcedQuality;
}

INDEX _pGfx_gl_iMaxTessellationLevel()
{
  return _pGfx->gl_iMaxTessellationLevel;
}
