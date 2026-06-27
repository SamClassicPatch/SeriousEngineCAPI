#ifndef SECAPI_RENDERING_RENDER_H
#define SECAPI_RENDERING_RENDER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define FillType_FT_NONE 0
#define FillType_FT_INKCOLOR 1
#define FillType_FT_POLYGONCOLOR 2
#define FillType_FT_SECTORCOLOR 3
#define FillType_FT_TEXTURE 4
  
#define SelectionType_ST_NONE 0
#define SelectionType_ST_ENTITIES 1
#define SelectionType_ST_POLYGONS 2
#define SelectionType_ST_SECTORS 3
#define SelectionType_ST_VERTICES 4
  
#define ShadowsType_SHT_NONE 0
#define ShadowsType_SHT_NOAUTOCALCULATE 1
#define ShadowsType_SHT_FULL 255
  
#define LensFlaresType_LFT_NONE 0
#define LensFlaresType_LFT_SINGLE_FLARE 1
#define LensFlaresType_LFT_REFLECTIONS 2
#define LensFlaresType_LFT_REFLECTIONS_AND_GLARE 3

SECAPI CWorldRenderPrefs_* CWorldRenderPrefs_new();
SECAPI CWorldRenderPrefs_* CWorldRenderPrefs_clone(const CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_delete(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_copy(CWorldRenderPrefs_* a, const CWorldRenderPrefs_* b);
SECAPI BOOL CWorldRenderPrefs_IsHiddenLinesOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetHiddenLinesOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsShowTargetsOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetShowTargetsOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsShowEntityNamesOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetShowEntityNamesOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsEditorModelsOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetEditorModelsOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsFieldBrushesOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetFieldBrushesOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsBackgroundTextureOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetBackgroundTextureOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsVisTweaksOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetVisTweaksOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsVisTweaksDisabled(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_DisableVisTweaks(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsFogOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetFogOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsHazeOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetHazeOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsMirrorsOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetMirrorsOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsAutoMipBrushingOn(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetAutoMipBrushingOn(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI void CWorldRenderPrefs_SetManualMipBrushingFactor(CWorldRenderPrefs_* p, FLOAT fFactor);
SECAPI FLOAT CWorldRenderPrefs_GetManualMipBrushingFactor(CWorldRenderPrefs_* p);
SECAPI BOOL CWorldRenderPrefs_IsTextureLayerOn(CWorldRenderPrefs_* p, INDEX iTexture);
SECAPI void CWorldRenderPrefs_SetTextureLayerOn(CWorldRenderPrefs_* p, BOOL bOn, INDEX iTexture);
SECAPI FLOAT CWorldRenderPrefs_GetCurrentMipBrushingFactor(CWorldRenderPrefs_* p, FLOAT fDistanceMipFactor);
SECAPI void CWorldRenderPrefs_SetVerticesFillType(CWorldRenderPrefs_* p, FillType_ ft);
SECAPI FillType_ CWorldRenderPrefs_GetVerticesFillType(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetVerticesInkColor(CWorldRenderPrefs_* p, COLOR color);
SECAPI COLOR CWorldRenderPrefs_GetVerticesInkColor(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetEdgesFillType(CWorldRenderPrefs_* p, FillType_ ft);
SECAPI FillType_ CWorldRenderPrefs_GetEdgesFillType(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetEdgesInkColor(CWorldRenderPrefs_* p, COLOR color);
SECAPI COLOR CWorldRenderPrefs_GetEdgesInkColor(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetPolygonsFillType(CWorldRenderPrefs_* p, FillType_ ft);
SECAPI FillType_ CWorldRenderPrefs_GetPolygonsFillType(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetPolygonsInkColor(CWorldRenderPrefs_* p, COLOR color);
SECAPI COLOR CWorldRenderPrefs_GetPolygonsInkColor(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetShadowsType(CWorldRenderPrefs_* p, ShadowsType_ sht);
SECAPI ShadowsType_ CWorldRenderPrefs_GetShadowsType(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetLensFlaresType(CWorldRenderPrefs_* p, LensFlaresType_ lft);
SECAPI LensFlaresType_ CWorldRenderPrefs_GetLensFlares(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetMinimumRenderRange(CWorldRenderPrefs_* p, FLOAT fRange);
SECAPI FLOAT CWorldRenderPrefs_GetMinimumRenderRange(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetSelectedEntityModel(CWorldRenderPrefs_* p, CModelObject_* pmoSelection);
SECAPI CModelObject_* CWorldRenderPrefs_GetSelectedEntityModel(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetSelectedPortalModel(CWorldRenderPrefs_* p, CModelObject_* pmoSelection);
SECAPI CModelObject_* CWorldRenderPrefs_GetSelectedPortalModel(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetEmptyBrushModel(CWorldRenderPrefs_* p, CModelObject_* pmoBrush);
SECAPI CModelObject_* CWorldRenderPrefs_GetEmptyBrushModel(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetSelectionType(CWorldRenderPrefs_* p, SelectionType_ st);
SECAPI SelectionType_ CWorldRenderPrefs_GetSelectionType(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_SetFarClipPlane(CWorldRenderPrefs_* p, FLOAT f);
SECAPI FLOAT CWorldRenderPrefs_GetFarClipPlane(CWorldRenderPrefs_* p);
SECAPI void CWorldRenderPrefs_EnableFarClipPlaneInIsometricProjection(CWorldRenderPrefs_* p, BOOL bOn);
SECAPI BOOL CWorldRenderPrefs_IsFarClipPlaneInIsometricProjectionOn(CWorldRenderPrefs_* p);

SECAPI CWorldRenderPrefs_* _wrpWorldRenderPrefs_();

SECAPI void SetLassoSelectionCallback(void (*c)(CEntity_*));
SECAPI void SetLassoDeselectionCallback(void (*c)(CEntity_*));

#ifdef __cplusplus
}
#endif

#endif
