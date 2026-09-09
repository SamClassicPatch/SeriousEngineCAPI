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

#ifndef SECAPI_WORLD_WORLD_H
#define SECAPI_WORLD_WORLD_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WMT_NONE_ 0
#define WMT_X_ 1
#define WMT_Y_ 2
#define WMT_Z_ 3

SECAPI CWorld_* CWorld_new();
SECAPI void CWorld_delete(CWorld_* p);

SECAPI MEMBER_VAL_DECL(CWorld, CStaticArray_CTextureTransformation_, wo_attTextureTransformations)
SECAPI MEMBER_VAL_DECL(CWorld, CStaticArray_CTextureBlending_, wo_atbTextureBlendings)
SECAPI MEMBER_VAL_DECL(CWorld, CStaticArray_CSurfaceType_, wo_astSurfaceTypes)
SECAPI MEMBER_VAL_DECL(CWorld, CStaticArray_CContentType_, wo_actContentTypes)
SECAPI MEMBER_VAL_DECL(CWorld, CStaticArray_CEnvironmentType_, wo_aetEnvironmentTypes)
SECAPI MEMBER_VAL_DECL(CWorld, CStaticArray_CIlluminationType_, wo_aitIlluminationTypes)
SECAPI MEMBER_VAL_DECL(CWorld, COLOR, wo_colBackground)
SECAPI MEMBER_VAL_DECL(CWorld, CTString_, wo_strBackdropUp)
SECAPI MEMBER_VAL_DECL(CWorld, CTString_, wo_strBackdropFt)
SECAPI MEMBER_VAL_DECL(CWorld, CTString_, wo_strBackdropRt)
SECAPI MEMBER_VAL_DECL(CWorld, CTString_, wo_strBackdropObject)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fUpW)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fUpL)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fUpCX)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fUpCZ)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fFtW)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fFtH)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fFtCX)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fFtCY)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fRtL)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fRtH)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fRtCZ)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fRtCY)
SECAPI MEMBER_VAL_DECL(CWorld, CPlacement3D_, wo_plFocus)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fTargetDistance)
SECAPI MEMBER_VAL_DECL(CWorld, CPlacement3D_, wo_plThumbnailFocus)
SECAPI MEMBER_VAL_DECL(CWorld, FLOAT, wo_fThumbnailTargetDistance)
SECAPI MEMBER_VAL_DECL(CWorld, CTFileName_, wo_fnmFileName)
SECAPI MEMBER_VAL_DECL(CWorld, CDynamicContainer_CEntity_, wo_cenEntities)

SECAPI void CWorld_UntargetEntity(CWorld_* p, CEntity_* penToUntarget);
SECAPI void CWorld_TriangularizePolygons(CWorld_* p, CDynamicContainer_CBrushPolygon_* dcPolygons);
SECAPI void CWorld_Clear(CWorld_* p);
SECAPI CEntity_* CWorld_CreateEntity_t(CWorld_* p, const CPlacement3D_* plPlacement, const CTFileName_* fnmClass);
SECAPI CEntity_* CWorld_CopyOneEntity(CWorld_* p, CEntity_* enToCopy, const CPlacement3D_* plOtherSystem);
SECAPI void CWorld_CopyEntities(CWorld_* p, CWorld_* woOther, CDynamicContainer_CEntity_* cenToCopy, CEntitySelection_* senCopied, const CPlacement3D_* plOtherSystem);
SECAPI CEntity_* CWorld_CopyEntityInWorld(CWorld_* p, CEntity_* enOriginal, const CPlacement3D_* plOtherEntity, BOOL bWithDescendants);
SECAPI void CWorld_DestroyEntities(CWorld_* p, CEntitySelection_* senToDestroy);
SECAPI void CWorld_DestroyOneEntity(CWorld_* p, CEntity_* penToDestroy);
SECAPI void CWorld_CastRay(CWorld_* p, CCastRay_* crRay);
SECAPI void CWorld_ContinueCast(CWorld_* p, CCastRay_* crRay);
SECAPI void CWorld_SetBackgroundColor(CWorld_* p, COLOR colBackground);
SECAPI COLOR CWorld_GetBackgroundColor(CWorld_* p);
SECAPI CEntity_* CWorld_GetBackgroundViewer(CWorld_* p);
SECAPI void CWorld_SetDescription(CWorld_* p, const CTString_* strDescription);
SECAPI CTString_* CWorld_GetDescription(CWorld_* p);
SECAPI void CWorld_SetName(CWorld_* p, const CTString_* strName);
SECAPI CTString_* CWorld_GetName(CWorld_* p);
SECAPI void CWorld_SetSpawnFlags(CWorld_* p, ULONG ulFlags);
SECAPI ULONG CWorld_GetSpawnFlags(CWorld_* p);
SECAPI void CWorld_Save_t(CWorld_* p, const CTFileName_* fnmWorld);
SECAPI void CWorld_Load_t(CWorld_* p, const CTFileName_* fnmWorld);
SECAPI void CWorld_ReinitializeEntities(CWorld_* p);
SECAPI void CWorld_Read_t(CWorld_* p, CTStream_* pistrm);
SECAPI void CWorld_Write_t(CWorld_* p, CTStream_* postrm);
SECAPI void CWorld_UpdateSectorsAfterVertexChange(CWorld_* p, CBrushVertexSelection_* selVertex);
SECAPI void CWorld_UpdateSectorsDuringVertexChange(CWorld_* p, CBrushVertexSelection_* selVertex);
SECAPI void CWorld_TriangularizeForVertices(CWorld_* p, CBrushVertexSelection_* selVertex);
SECAPI void CWorld_CSGAdd(CWorld_* p, CEntity_* enThis, CWorld_* woOther, CEntity_* enOther, const CPlacement3D_* plOther);
SECAPI void CWorld_CSGAddReverse(CWorld_* p, CEntity_* enThis, CWorld_* woOther, CEntity_* enOther, const CPlacement3D_* plOther);
SECAPI void CWorld_CSGRemove(CWorld_* p, CEntity_* enThis, CWorld_* woOther, CEntity_* enOther, const CPlacement3D_* plOther);
SECAPI void CWorld_SplitSectors(CWorld_* p, CEntity_* enThis, CBrushSectorSelection_* selbscSectorsToSplit, CWorld_* woOther, CEntity_* enOther, const CPlacement3D_* plOther);
SECAPI BOOL CWorld_CanJoinSectors(CWorld_* p, CBrushSectorSelection_* selbscSectorsToJoin);
SECAPI void CWorld_JoinSectors(CWorld_* p, CBrushSectorSelection_* selbscSectorsToJoin);
SECAPI void CWorld_SplitPolygons(CWorld_* p, CEntity_* enThis, CBrushPolygonSelection_* selbpoPolygonsToSplit, CWorld_* woOther, CEntity_* enOther, const CPlacement3D_* plOther);
SECAPI void CWorld_JoinPolygons(CWorld_* p, CBrushPolygonSelection_* selbpoPolygonsToJoin);
SECAPI BOOL CWorld_CanJoinPolygons(CWorld_* p, CBrushPolygonSelection_* selbpoPolygonsToJoin);
SECAPI void CWorld_JoinAllPossiblePolygons(CWorld_* p, CBrushPolygonSelection_* selbpoPolygonsToJoin, BOOL bPreserveTextures, INDEX iTexture);
SECAPI BOOL CWorld_CanJoinAllPossiblePolygons(CWorld_* p, CBrushPolygonSelection_* selbpoPolygonsToJoin);
SECAPI BOOL CWorld_CanCopySectors(CWorld_* p, CBrushSectorSelection_* selbscSectorsToCopy);
SECAPI void CWorld_CopySectors(CWorld_* p, CBrushSectorSelection_* selbscSectorsToCopy, CEntity_* penTarget, BOOL bWithEntities);
SECAPI void CWorld_DeleteSectors(CWorld_* p, CBrushSectorSelection_* selbscSectorsToDelete, BOOL bClearPortalFlags);
SECAPI void CWorld_CopyPolygonInWorld(CWorld_* p, CBrushPolygon_* bpoSrc, CBrushSector_* bsc, INDEX iPol, INDEX* iEdg, INDEX* iVtx);
SECAPI void CWorld_CopyPolygonsToBrush(CWorld_* p, CBrushPolygonSelection_* selPolygons, CEntity_* penbr);
SECAPI void CWorld_DeletePolygons(CWorld_* p, CDynamicContainer_CBrushPolygon_* dcPolygons);
SECAPI void CWorld_CreatePolygon(CWorld_* p, CBrushVertexSelection_* selVtx);
SECAPI void CWorld_FlipPolygon(CWorld_* p, CBrushPolygon_* bpo);
SECAPI void CWorld_MirrorAndStretch(CWorld_* p, CWorld_* woOriginal, FLOAT fStretch, WorldMirrorType_ wmt);
SECAPI void CWorld_HideSelectedEntities(CWorld_* p, CDynamicContainer_CEntity_* selenEntitiesToHide);
SECAPI void CWorld_HideUnselectedEntities(CWorld_* p);
SECAPI void CWorld_ShowAllEntities(CWorld_* p);
SECAPI void CWorld_HideSelectedSectors(CWorld_* p, CBrushSectorSelection_* selbscSectorsToHide);
SECAPI void CWorld_HideUnselectedSectors(CWorld_* p);
SECAPI void CWorld_ShowAllSectors(CWorld_* p);
SECAPI void CWorld_CalculateDirectionalShadows(CWorld_* p);
SECAPI void CWorld_CalculateNonDirectionalShadows(CWorld_* p);
SECAPI void CWorld_FindShadowLayers(CWorld_* p, const FLOATaabbox3D_* boxNear, BOOL bSelectedOnly, BOOL bDirectional);
SECAPI void CWorld_DiscardAllShadows(CWorld_* p);
SECAPI void CWorld_RebuildLinks(CWorld_* p);

#ifdef __cplusplus
}
#endif

#endif
