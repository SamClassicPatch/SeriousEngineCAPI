#include "Render.h"

CWorldRenderPrefs_* CWorldRenderPrefs_new()
{
  return (CWorldRenderPrefs_*)(new CWorldRenderPrefs());
}

CWorldRenderPrefs_* CWorldRenderPrefs_clone(const CWorldRenderPrefs_* p)
{
  return (CWorldRenderPrefs_*)(new CWorldRenderPrefs(*((const CWorldRenderPrefs*)p)));
}

void CWorldRenderPrefs_delete(CWorldRenderPrefs_* p)
{
  delete ((CWorldRenderPrefs*)p);
}

void CWorldRenderPrefs_copy(CWorldRenderPrefs_* a, const CWorldRenderPrefs_* b)
{
  *((CWorldRenderPrefs*)a) = *((const CWorldRenderPrefs*)b);
}

BOOL CWorldRenderPrefs_IsHiddenLinesOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsHiddenLinesOn();
}

void CWorldRenderPrefs_SetHiddenLinesOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetHiddenLinesOn(bOn);
}

BOOL CWorldRenderPrefs_IsShowTargetsOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsShowTargetsOn();
}

void CWorldRenderPrefs_SetShowTargetsOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetShowTargetsOn(bOn);
}

BOOL CWorldRenderPrefs_IsShowEntityNamesOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsShowEntityNamesOn();
}

void CWorldRenderPrefs_SetShowEntityNamesOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetShowEntityNamesOn(bOn);
}

BOOL CWorldRenderPrefs_IsEditorModelsOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsEditorModelsOn();
}

void CWorldRenderPrefs_SetEditorModelsOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetEditorModelsOn(bOn);
}

BOOL CWorldRenderPrefs_IsFieldBrushesOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsFieldBrushesOn();
}

void CWorldRenderPrefs_SetFieldBrushesOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetFieldBrushesOn(bOn);
}

BOOL CWorldRenderPrefs_IsBackgroundTextureOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsBackgroundTextureOn();
}

void CWorldRenderPrefs_SetBackgroundTextureOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetBackgroundTextureOn(bOn);
}

BOOL CWorldRenderPrefs_IsVisTweaksOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsVisTweaksOn();
}

void CWorldRenderPrefs_SetVisTweaksOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetVisTweaksOn(bOn);
}

BOOL CWorldRenderPrefs_IsVisTweaksDisabled(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsVisTweaksDisabled();
}

void CWorldRenderPrefs_DisableVisTweaks(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->DisableVisTweaks(bOn);
}

BOOL CWorldRenderPrefs_IsFogOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsFogOn();
}

void CWorldRenderPrefs_SetFogOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetFogOn(bOn);
}

BOOL CWorldRenderPrefs_IsHazeOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsHazeOn();
}

void CWorldRenderPrefs_SetHazeOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetHazeOn(bOn);
}

BOOL CWorldRenderPrefs_IsMirrorsOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsMirrorsOn();
}

void CWorldRenderPrefs_SetMirrorsOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetMirrorsOn(bOn);
}

BOOL CWorldRenderPrefs_IsAutoMipBrushingOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->IsAutoMipBrushingOn();
}

void CWorldRenderPrefs_SetAutoMipBrushingOn(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->SetAutoMipBrushingOn(bOn);
}

void CWorldRenderPrefs_SetManualMipBrushingFactor(CWorldRenderPrefs_* p, FLOAT fFactor)
{
  ((CWorldRenderPrefs*)p)->SetManualMipBrushingFactor(fFactor);
}

FLOAT CWorldRenderPrefs_GetManualMipBrushingFactor(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->GetManualMipBrushingFactor();
}

BOOL CWorldRenderPrefs_IsTextureLayerOn(CWorldRenderPrefs_* p, INDEX iTexture)
{
  return ((CWorldRenderPrefs*)p)->IsTextureLayerOn(iTexture);
}

void CWorldRenderPrefs_SetTextureLayerOn(CWorldRenderPrefs_* p, BOOL bOn, INDEX iTexture)
{
  ((CWorldRenderPrefs*)p)->SetTextureLayerOn(bOn, iTexture);
}

FLOAT CWorldRenderPrefs_GetCurrentMipBrushingFactor(CWorldRenderPrefs_* p, FLOAT fDistanceMipFactor)
{
  return ((CWorldRenderPrefs*)p)->GetCurrentMipBrushingFactor(fDistanceMipFactor);
}

void CWorldRenderPrefs_SetVerticesFillType(CWorldRenderPrefs_* p, FillType_ ft)
{
  ((CWorldRenderPrefs*)p)->SetVerticesFillType((CWorldRenderPrefs::FillType)ft);
}

FillType_ CWorldRenderPrefs_GetVerticesFillType(CWorldRenderPrefs_* p)
{
  return (FillType_)(((CWorldRenderPrefs*)p)->GetVerticesFillType());
}

void CWorldRenderPrefs_SetVerticesInkColor(CWorldRenderPrefs_* p, COLOR color)
{
  ((CWorldRenderPrefs*)p)->SetVerticesInkColor(color);
}

COLOR CWorldRenderPrefs_GetVerticesInkColor(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->GetVerticesInkColor();
}

void CWorldRenderPrefs_SetEdgesFillType(CWorldRenderPrefs_* p, FillType_ ft)
{
  ((CWorldRenderPrefs*)p)->SetEdgesFillType((CWorldRenderPrefs::FillType)ft);
}

FillType_ CWorldRenderPrefs_GetEdgesFillType(CWorldRenderPrefs_* p)
{
  return (FillType_)(((CWorldRenderPrefs*)p)->GetEdgesFillType());
}

void CWorldRenderPrefs_SetEdgesInkColor(CWorldRenderPrefs_* p, COLOR color)
{
  ((CWorldRenderPrefs*)p)->SetEdgesInkColor(color);
}

COLOR CWorldRenderPrefs_GetEdgesInkColor(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->GetEdgesInkColor();
}

void CWorldRenderPrefs_SetPolygonsFillType(CWorldRenderPrefs_* p, FillType_ ft)
{
  ((CWorldRenderPrefs*)p)->SetPolygonsFillType((CWorldRenderPrefs::FillType)ft);
}

FillType_ CWorldRenderPrefs_GetPolygonsFillType(CWorldRenderPrefs_* p)
{
  return (FillType_)(((CWorldRenderPrefs*)p)->GetPolygonsFillType());
}

void CWorldRenderPrefs_SetPolygonsInkColor(CWorldRenderPrefs_* p, COLOR color)
{
  ((CWorldRenderPrefs*)p)->SetPolygonsInkColor(color);
}

COLOR CWorldRenderPrefs_GetPolygonsInkColor(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->GetPolygonsInkColor();
}

void CWorldRenderPrefs_SetShadowsType(CWorldRenderPrefs_* p, ShadowsType_ sht)
{
  ((CWorldRenderPrefs*)p)->SetShadowsType((CWorldRenderPrefs::ShadowsType)sht);
}

ShadowsType_ CWorldRenderPrefs_GetShadowsType(CWorldRenderPrefs_* p)
{
  return (ShadowsType_)(((CWorldRenderPrefs*)p)->GetShadowsType());
}

void CWorldRenderPrefs_SetLensFlaresType(CWorldRenderPrefs_* p, LensFlaresType_ lft)
{
  ((CWorldRenderPrefs*)p)->SetLensFlaresType((CWorldRenderPrefs::LensFlaresType)lft);
}

LensFlaresType_ CWorldRenderPrefs_GetLensFlares(CWorldRenderPrefs_* p)
{
  return (LensFlaresType_)(((CWorldRenderPrefs*)p)->GetLensFlares());
}

void CWorldRenderPrefs_SetMinimumRenderRange(CWorldRenderPrefs_* p, FLOAT fRange)
{
  ((CWorldRenderPrefs*)p)->SetMinimumRenderRange(fRange);
}

FLOAT CWorldRenderPrefs_GetMinimumRenderRange(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->GetMinimumRenderRange();
}

void CWorldRenderPrefs_SetSelectedEntityModel(CWorldRenderPrefs_* p, CModelObject_* pmoSelection)
{
  ((CWorldRenderPrefs*)p)->SetSelectedEntityModel((CModelObject*)pmoSelection);
}

CModelObject_* CWorldRenderPrefs_GetSelectedEntityModel(CWorldRenderPrefs_* p)
{
  return (CModelObject_*)(((CWorldRenderPrefs*)p)->GetSelectedEntityModel());
}

void CWorldRenderPrefs_SetSelectedPortalModel(CWorldRenderPrefs_* p, CModelObject_* pmoSelection)
{
  ((CWorldRenderPrefs*)p)->SetSelectedPortalModel((CModelObject*)pmoSelection);
}

CModelObject_* CWorldRenderPrefs_GetSelectedPortalModel(CWorldRenderPrefs_* p)
{
  return (CModelObject_*)(((CWorldRenderPrefs*)p)->GetSelectedPortalModel());
}

void CWorldRenderPrefs_SetEmptyBrushModel(CWorldRenderPrefs_* p, CModelObject_* pmoBrush)
{
  ((CWorldRenderPrefs*)p)->SetEmptyBrushModel((CModelObject*)pmoBrush);
}

CModelObject_* CWorldRenderPrefs_GetEmptyBrushModel(CWorldRenderPrefs_* p)
{
  return (CModelObject_*)(((CWorldRenderPrefs*)p)->GetEmptyBrushModel());
}

void CWorldRenderPrefs_SetSelectionType(CWorldRenderPrefs_* p, SelectionType_ st)
{
  ((CWorldRenderPrefs*)p)->SetSelectionType((CWorldRenderPrefs::SelectionType)st);
}

SelectionType_ CWorldRenderPrefs_GetSelectionType(CWorldRenderPrefs_* p)
{
  return (SelectionType_)(((CWorldRenderPrefs*)p)->GetSelectionType());
}

void CWorldRenderPrefs_SetFarClipPlane(CWorldRenderPrefs_* p, FLOAT f)
{
  ((CWorldRenderPrefs*)p)->wrp_fFarClipPlane = f;
}

FLOAT CWorldRenderPrefs_GetFarClipPlane(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->wrp_fFarClipPlane;
}

void CWorldRenderPrefs_EnableFarClipPlaneInIsometricProjection(CWorldRenderPrefs_* p, BOOL bOn)
{
  ((CWorldRenderPrefs*)p)->wrp_bApplyFarClipPlaneInIsometricProjection = bOn;
}

BOOL CWorldRenderPrefs_IsFarClipPlaneInIsometricProjectionOn(CWorldRenderPrefs_* p)
{
  return ((CWorldRenderPrefs*)p)->wrp_bApplyFarClipPlaneInIsometricProjection;
}

CWorldRenderPrefs_* _wrpWorldRenderPrefs_()
{
  return (CWorldRenderPrefs_*)(&_wrpWorldRenderPrefs);
}

static void sehCWorldRenderPrefs_Read_t(CWorldRenderPrefs_* p, CTStream_* s)
{
  SECAPI_TRY
  CWorldRenderPrefs& d = *(CWorldRenderPrefs*)p;
  CTStream& ss = *(CTStream*)s;
  ss >> d.wrp_bHiddenLinesOn;
  ss >> d.wrp_bShowTargetsOn;
  ss >> d.wrp_bShowEntityNames;
  ss >> d.wrp_bEditorModelsOn;
  ss >> d.wrp_bFieldBrushesOn;
  ss >> d.wrp_bBackgroundTextureOn;
  ss >> d.wrp_bShowVisTweaksOn;
  ss >> d.wrp_bDisableVisTweaks;
  ss >> d.wrp_bAutoMipBrushingOn;
  ss >> d.wrp_fManualMipBrushingFactor;
  ss >> d.wrp_fFarClipPlane;
  ss >> d.wrp_bApplyFarClipPlaneInIsometricProjection;
  ss >> (INDEX&)d.wrp_ftVertices;
  ss >> d.wrp_colVertices;
  ss >> (INDEX&)d.wrp_ftEdges;
  ss >> d.wrp_colEdges;
  ss >> (INDEX&)d.wrp_ftPolygons;
  ss >> d.wrp_colPolygons;
  ss >> (INDEX&)d.wrp_shtShadows;
  ss >> (INDEX&)d.wrp_lftLensFlares;
  ss >> d.wrp_abTextureLayers[0];
  ss >> d.wrp_abTextureLayers[1];
  ss >> d.wrp_abTextureLayers[2];
  ss >> d.wrp_bFogOn;
  ss >> d.wrp_bHazeOn;
  ss >> d.wrp_bMirrorsOn;
  ss >> d.wrp_fMinimumRenderRange;
  ss >> (INDEX&)d.wrp_stSelection;
  d.wrp_pmoSelectedEntity = NULL;
  d.wrp_pmoSelectedPortal = NULL;
  d.wrp_pmoEmptyBrush = NULL;
  SECAPI_CATCH
}

void CWorldRenderPrefs_Read_t(CWorldRenderPrefs_* p, CTStream_* s)
{
  STREAM_TRY
  sehCWorldRenderPrefs_Read_t(p, s);
  STREAM_CATCH
}

static void sehCWorldRenderPrefs_Write_t(CWorldRenderPrefs_* p, CTStream_* s)
{
  SECAPI_TRY
  CWorldRenderPrefs& d = *(CWorldRenderPrefs*)p;
  CTStream& ss = *(CTStream*)s;
  ss << d.wrp_bHiddenLinesOn;
  ss << d.wrp_bShowTargetsOn;
  ss << d.wrp_bShowEntityNames;
  ss << d.wrp_bEditorModelsOn;
  ss << d.wrp_bFieldBrushesOn;
  ss << d.wrp_bBackgroundTextureOn;
  ss << d.wrp_bShowVisTweaksOn;
  ss << d.wrp_bDisableVisTweaks;
  ss << d.wrp_bAutoMipBrushingOn;
  ss << d.wrp_fManualMipBrushingFactor;
  ss << d.wrp_fFarClipPlane;
  ss << d.wrp_bApplyFarClipPlaneInIsometricProjection;
  ss << (INDEX)d.wrp_ftVertices;
  ss << d.wrp_colVertices;
  ss << (INDEX)d.wrp_ftEdges;
  ss << d.wrp_colEdges;
  ss << (INDEX)d.wrp_ftPolygons;
  ss << d.wrp_colPolygons;
  ss << (INDEX)d.wrp_shtShadows;
  ss << (INDEX)d.wrp_lftLensFlares;
  ss << d.wrp_abTextureLayers[0];
  ss << d.wrp_abTextureLayers[1];
  ss << d.wrp_abTextureLayers[2];
  ss << d.wrp_bFogOn;
  ss << d.wrp_bHazeOn;
  ss << d.wrp_bMirrorsOn;
  ss << d.wrp_fMinimumRenderRange;
  ss << (INDEX)d.wrp_stSelection;
  SECAPI_CATCH
}

void CWorldRenderPrefs_Write_t(CWorldRenderPrefs_* p, CTStream_* s)
{
  STREAM_TRY
  sehCWorldRenderPrefs_Write_t(p, s);
  STREAM_CATCH
}

MEMBER_VAL_IMPL(CWorldRenderPrefs, FLOAT, wrp_fFarClipPlane)
MEMBER_VAL_IMPL(CWorldRenderPrefs, BOOL, wrp_bApplyFarClipPlaneInIsometricProjection)

static void (*pLassoSelectionCallback)(CEntity_*) = NULL;
static void (*pLassoDeselectionCallback)(CEntity_*) = NULL;

static void OnLassoSelection(CEntity& en)
{
  if (pLassoSelectionCallback)
    pLassoSelectionCallback((CEntity_*)(&en));
}

static void OnLassoDeselection(CEntity& en)
{
  if (pLassoDeselectionCallback)
    pLassoDeselectionCallback((CEntity_*)(&en));
}

static bool g_selectionPatched = false;
static void PatchSelection()
{
  if (g_selectionPatched)
    return;
  g_selectionPatched = true;

  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;

  const int deselect_injection_address = enginedll_base_address + 0xF968A;
  UBYTE deselect_call_bytes[14] = {
    UBYTE(0x53), // push entity address in ebx to stack
    UBYTE(0xE8), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0), // call OnLassoDeselection
    UBYTE(0x83), UBYTE(0xC4), UBYTE(0x04), // add esp 4, pop stack
    UBYTE(0xE9), UBYTE(0xCE), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0) // jump to exit from SelectEntityOnRender
  };
  const int OnLassoDeselection_offset = reinterpret_cast<int>(&OnLassoDeselection) - (deselect_injection_address + 1) - 5;
  memcpy(deselect_call_bytes + 2, &OnLassoDeselection_offset, sizeof(int));
  
  DWORD old_page_mode, dummy;
  if (::VirtualProtect(reinterpret_cast<void*>(deselect_injection_address), sizeof(deselect_call_bytes), PAGE_EXECUTE_READWRITE, &old_page_mode) == 0)
    throw "Failed to patch selection";
  memcpy(reinterpret_cast<void*>(deselect_injection_address), deselect_call_bytes, sizeof(deselect_call_bytes));
  if (::VirtualProtect(reinterpret_cast<void*>(deselect_injection_address), sizeof(deselect_call_bytes), old_page_mode, &dummy) == 0)
    throw "Failed to patch selection";


  const int select_injection_address = enginedll_base_address + 0xF96CF;
  UBYTE select_call_bytes[14] = {
    UBYTE(0x53), // push entity address in ebx to stack
    UBYTE(0xE8), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0), // call OnLassoSelection
    UBYTE(0x83), UBYTE(0xC4), UBYTE(0x04), // add esp 4, pop stack
    UBYTE(0xE9), UBYTE(0x89), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0) // jump to exit from SelectEntityOnRender
  };
  const int OnLassoSelection_offset = reinterpret_cast<int>(&OnLassoSelection) - (select_injection_address + 1) - 5;
  memcpy(select_call_bytes + 2, &OnLassoSelection_offset, sizeof(int));

  if (::VirtualProtect(reinterpret_cast<void*>(select_injection_address), sizeof(select_call_bytes), PAGE_EXECUTE_READWRITE, &old_page_mode) == 0)
    throw "Failed to patch selection";
  memcpy(reinterpret_cast<void*>(select_injection_address), select_call_bytes, sizeof(select_call_bytes));
  if (::VirtualProtect(reinterpret_cast<void*>(select_injection_address), sizeof(select_call_bytes), old_page_mode, &dummy) == 0)
    throw "Failed to patch selection";
}

static CEntitySelection g_dummySelection;

void SetLassoSelectionCallback(void (*c)(CEntity_*))
{
  pLassoSelectionCallback = c;

  if (pLassoSelectionCallback && pLassoDeselectionCallback)
    _pselenSelectOnRender = &g_dummySelection;
  else
    _pselenSelectOnRender = NULL;

  PatchSelection();
}

void SetLassoDeselectionCallback(void (*c)(CEntity_*))
{
  pLassoDeselectionCallback = c;

  if (pLassoSelectionCallback && pLassoDeselectionCallback)
    _pselenSelectOnRender = &g_dummySelection;
  else
    _pselenSelectOnRender = NULL;

  PatchSelection();
}

CBrushVertexSelection_** _pselbvxtSelectOnRender_()
{
  return (CBrushVertexSelection_**)(&_pselbvxtSelectOnRender);
}

CStaticStackArray_PIX2D_** _pavpixSelectLasso_()
{
  return (CStaticStackArray_PIX2D_**)(&_pavpixSelectLasso);
}

PIX2D_* _vpixSelectNearPoint_()
{
  return (PIX2D_*)(&_vpixSelectNearPoint);
}

BOOL* _bSelectAlternative_()
{
  return (BOOL*)(&_bSelectAlternative);
}

PIX* _pixDeltaAroundVertex_()
{
  return (PIX*)(&_pixDeltaAroundVertex);
}

CBrushSectorSelection_** _pselbscVisTweaks_()
{
  return (CBrushSectorSelection_**)(&_pselbscVisTweaks);
}

void RenderView_(CWorld_* woWorld, CEntity_* enViewer, CAnyProjection3D_* prProjection, CDrawPort_* dpDrawport)
{
  RenderView(*((CWorld*)woWorld), *((CEntity*)enViewer), *((CAnyProjection3D*)prProjection), *((CDrawPort*)dpDrawport));
}
