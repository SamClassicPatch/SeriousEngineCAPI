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
