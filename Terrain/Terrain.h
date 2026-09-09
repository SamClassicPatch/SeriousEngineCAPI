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

#ifndef SECAPI_TERRAIN_TERRAIN_H
#define SECAPI_TERRAIN_TERRAIN_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS

#define TR_REGENERATE              (1UL<<0) // terrain needs to be regenerated
#define TR_REGENERATE_TOP_MAP      (1UL<<1) // regenerate terrain top map
#define TR_ALLOW_TOP_MAP_REGEN     (1UL<<2) // allow top map regen (top map is not regenerate if this flag is not set)
#define TR_REBUILD_QUADTREE        (1UL<<3) // rebuild higher levels of quad tree nodes (last levels are rebuild by tile flags)
#define TR_UPDATE_SHADOWMAP        (1UL<<4) // update terrain shadow map       (NOT USED!)
#define TR_ALLOW_SHADOW_MAP_UPDATE (1UL<<5) // allow terrain shadow map update (NOT USED!)
#define TR_SHOW_SELECTION          (1UL<<6) // show selection
#define TR_HAS_FOG                 (1UL<<7) // terrain has fog
#define TR_HAS_HAZE                (1UL<<8) // terrain has haze

#endif

SECAPI QuadTreeNode_* QuadTreeNode_new();
SECAPI QuadTreeNode_* QuadTreeNode_clone(const QuadTreeNode_* p);
SECAPI void QuadTreeNode_delete(QuadTreeNode_* p);
SECAPI void QuadTreeNode_copy(QuadTreeNode_* a, const QuadTreeNode_* b);
SECAPI FLOATaabbox3D_* QuadTreeNode_qtn_aabbox(QuadTreeNode_* p);
SECAPI INDEX* QuadTreeNode_qtn_iTileIndex(QuadTreeNode_* p);
SECAPI INDEX* QuadTreeNode_qtn_iChild(QuadTreeNode_* p, INDEX i);

SECAPI QuadTreeLevel_* QuadTreeLevel_new();
SECAPI QuadTreeLevel_* QuadTreeLevel_clone(const QuadTreeLevel_* p);
SECAPI void QuadTreeLevel_delete(QuadTreeLevel_* p);
SECAPI void QuadTreeLevel_copy(QuadTreeLevel_* a, const QuadTreeLevel_* b);
SECAPI INDEX* QuadTreeLevel_qtl_iFirstNode(QuadTreeLevel_* p);
SECAPI INDEX* QuadTreeLevel_qtl_ctNodes(QuadTreeLevel_* p);
SECAPI INDEX* QuadTreeLevel_qtl_ctNodesCol(QuadTreeLevel_* p);
SECAPI INDEX* QuadTreeLevel_qtl_ctNodesRow(QuadTreeLevel_* p);

SECAPI Rect_* Rect_new();
SECAPI Rect_* Rect_new_i(INDEX l, INDEX t, INDEX r, INDEX b);
SECAPI Rect_* Rect_clone(const Rect_* p);
SECAPI void Rect_delete(Rect_* p);
SECAPI void Rect_copy(Rect_* a, const Rect_* b);
SECAPI INDEX Rect_Width(Rect_* p);
SECAPI INDEX Rect_Height(Rect_* p);
SECAPI INDEX* Rect_rc_iLeft(Rect_* p);
SECAPI INDEX* Rect_rc_iRight(Rect_* p);
SECAPI INDEX* Rect_rc_iTop(Rect_* p);
SECAPI INDEX* Rect_rc_iBottom(Rect_* p);

SECAPI CTerrain_* CTerrain_new();
SECAPI void CTerrain_delete(CTerrain_* p);
SECAPI void CTerrain_Render(CTerrain_* p, CAnyProjection3D_* apr, CDrawPort_* pdp);
SECAPI void CTerrain_RenderWireFrame(CTerrain_* p, CAnyProjection3D_* apr, CDrawPort_* pdp, COLOR colEdges);
SECAPI void CTerrain_CreateEmptyTerrain_t(CTerrain_* p, PIX pixWidth, PIX pixHeight);
SECAPI void CTerrain_ImportHeightMap_t(CTerrain_* p, CTFileName_* fnHeightMap, BOOL bUse16b);
SECAPI void CTerrain_ExportHeightMap_t(CTerrain_* p, CTFileName_* fnHeightMap, BOOL bUse16b);
SECAPI void CTerrain_ReBuildTerrain(CTerrain_* p, BOOL bDelayTileRegen);
SECAPI void CTerrain_RefreshTerrain(CTerrain_* p);
SECAPI void CTerrain_AllocateHeightMap(CTerrain_* p, PIX pixWidth, PIX pixHeight);
SECAPI void CTerrain_ReAllocateHeightMap(CTerrain_* p, PIX pixWidth, PIX pixHeight);
SECAPI void CTerrain_SetTerrainSize(CTerrain_* p, FLOAT3D_* vSize);
SECAPI void CTerrain_SetShadowMapsSize(CTerrain_* p, INDEX iShadowMapAspect, INDEX iShadingMapAspect);
SECAPI void CTerrain_SetGlobalTopMapSize(CTerrain_* p, PIX pixTopMapSize);
SECAPI void CTerrain_SetTileTopMapSize(CTerrain_* p, PIX pixLodTopMapSize);
SECAPI void CTerrain_SetLodDistanceFactor(CTerrain_* p, FLOAT fLodDistance);
SECAPI PIX CTerrain_GetShadowMapWidth(CTerrain_* p);
SECAPI PIX CTerrain_GetShadowMapHeight(CTerrain_* p);
SECAPI PIX CTerrain_GetShadingMapWidth(CTerrain_* p);
SECAPI PIX CTerrain_GetShadingMapHeight(CTerrain_* p);
SECAPI CTerrainLayer_* CTerrain_GetLayer(CTerrain_* p, INDEX iLayer);
SECAPI CTerrainLayer_* CTerrain_AddLayer_t(CTerrain_* p, CTFileName_* fnTexture, LayerType_ ltType, BOOL bUpdateTerrain);
SECAPI void CTerrain_RemoveLayer(CTerrain_* p, INDEX iLayer, BOOL bUpdateTerrain);
SECAPI INDEX CTerrain_SetLayerIndex(CTerrain_* p, INDEX iLayer, INDEX iNewIndex, BOOL bUpdateTerrain);
SECAPI void CTerrain_AddTileToRegenQueue(CTerrain_* p, INDEX iTileIndex);
SECAPI void CTerrain_AddAllTilesToRegenQueue(CTerrain_* p);
SECAPI void CTerrain_ClearRegenList(CTerrain_* p);
SECAPI void CTerrain_UpdateShadowMap(CTerrain_* p, FLOATaabbox3D_* pbboxUpdate, BOOL bAbsoluteSpace);
SECAPI void CTerrain_UpdateTopMap(CTerrain_* p, INDEX iTileIndex, Rect_* prcDest);
SECAPI void CTerrain_GetAllTerrainBBox(CTerrain_* p, FLOATaabbox3D_* bbox);
SECAPI COLOR CTerrain_GetShadeColor(CTerrain_* p, CShadingInfo_* psi);
SECAPI FLOATplane3D_* CTerrain_GetPlaneFromPoint(CTerrain_* p, FLOAT3D_* vAbsPoint);
SECAPI void CTerrain_SetQuadsPerTileRow(CTerrain_* p, INDEX ctQuadsPerTileRow);
SECAPI INDEX CTerrain_GetQuadsPerTileRow(CTerrain_* p);
SECAPI INDEX CTerrain_GetVerticesPerTileRow(CTerrain_* p);
SECAPI void CTerrain_ReadVersion_t(CTerrain_* p, CTStream_* istrFile, INDEX iSavedVersion);
SECAPI void CTerrain_Read_t(CTerrain_* p, CTStream_* istrFile);
SECAPI void CTerrain_Write_t(CTerrain_* p, CTStream_* ostrFile);
SECAPI void CTerrain_Copy(CTerrain_* p, CTerrain_* trOther);
SECAPI void CTerrain_Clean(CTerrain_* p, BOOL bCleanLayers);
SECAPI void CTerrain_Clear(CTerrain_* p);
SECAPI void CTerrain_ReGenerate(CTerrain_* p);
SECAPI void CTerrain_BuildTerrainData(CTerrain_* p);
SECAPI void CTerrain_BuildQuadTree(CTerrain_* p);
SECAPI void CTerrain_UpdateQuadTree(CTerrain_* p);
SECAPI void CTerrain_GenerateTerrainTopMap(CTerrain_* p);
SECAPI void CTerrain_SetTerrainStretch(CTerrain_* p, FLOAT3D_* vStretch);
SECAPI void CTerrain_AddDefaultLayer_t(CTerrain_* p);
SECAPI void CTerrain_DiscardShadingInfos(CTerrain_* p);
SECAPI void CTerrain_ClearHeightMap(CTerrain_* p);
SECAPI void CTerrain_ClearShadowMap(CTerrain_* p);
SECAPI void CTerrain_ClearEdgeMap(CTerrain_* p);
SECAPI void CTerrain_ClearTopMaps(CTerrain_* p);
SECAPI void CTerrain_ClearTiles(CTerrain_* p);
SECAPI void CTerrain_ClearArrays(CTerrain_* p);
SECAPI void CTerrain_ClearQuadTree(CTerrain_* p);
SECAPI void CTerrain_ClearLayers(CTerrain_* p);
SECAPI CEntity_** CTerrain_tr_penEntity(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_ctTiles(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_ctTilesX(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_ctTilesY(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_iMaxTileLod(CTerrain_* p);
SECAPI FLOAT3D_* CTerrain_tr_vStretch(CTerrain_* p);
SECAPI FLOAT* CTerrain_tr_fDistFactor(CTerrain_* p);
SECAPI CStaticStackArray_QuadTreeNode_* CTerrain_tr_aqtnQuadTreeNodes(CTerrain_* p);
SECAPI CStaticStackArray_QuadTreeLevel_* CTerrain_tr_aqtlQuadTreeLevels(CTerrain_* p);
SECAPI CStaticArray_CTerrainTile_* CTerrain_tr_attTiles(CTerrain_* p);
SECAPI CStaticArray_CArrayHolder_* CTerrain_tr_aArrayHolders(CTerrain_* p);
SECAPI CStaticStackArray_CTerrainLayer_* CTerrain_tr_atlLayers(CTerrain_* p);
SECAPI CDynamicContainer_CTextureData_* CTerrain_tr_atdTopMaps(CTerrain_* p);
SECAPI CStaticStackArray_INDEX_* CTerrain_tr_auiRegenList(CTerrain_* p);
SECAPI UWORD** CTerrain_tr_auwHeightMap(CTerrain_* p);
SECAPI UWORD** CTerrain_tr_auwShadingMap(CTerrain_* p);
SECAPI UBYTE** CTerrain_tr_aubEdgeMap(CTerrain_* p);
SECAPI CTextureData_* CTerrain_tr_tdTopMap(CTerrain_* p);
SECAPI CTextureData_* CTerrain_tr_tdShadowMap(CTerrain_* p);
SECAPI CTextureData_** CTerrain_tr_ptdDetailMap(CTerrain_* p);
SECAPI PIX* CTerrain_tr_pixHeightMapWidth(CTerrain_* p);
SECAPI PIX* CTerrain_tr_pixHeightMapHeight(CTerrain_* p);
SECAPI PIX* CTerrain_tr_pixTopMapWidth(CTerrain_* p);
SECAPI PIX* CTerrain_tr_pixTopMapHeight(CTerrain_* p);
SECAPI PIX* CTerrain_tr_pixFirstMipTopMapWidth(CTerrain_* p);
SECAPI PIX* CTerrain_tr_pixFirstMipTopMapHeight(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_iShadowMapSizeAspect(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_iShadingMapSizeAspect(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_ctQuadsInTileRow(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_ctVerticesInTileRow(CTerrain_* p);
SECAPI ULONG* CTerrain_tr_ulTerrainFlags(CTerrain_* p);
SECAPI FLOAT3D_* CTerrain_tr_vTerrainSize(CTerrain_* p);
SECAPI INDEX* CTerrain_tr_iSelectedLayer(CTerrain_* p);

#ifdef __cplusplus
}
#endif

#endif
