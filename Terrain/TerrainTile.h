#ifndef SECAPI_TERRAIN_TERRAIN_TILE_H
#define SECAPI_TERRAIN_TERRAIN_TILE_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS

#define NB_TOP    0
#define NB_LEFT   1
#define NB_BOTTOM 2
#define NB_RIGHT  3

#define TT_REGENERATE         (1UL<<0) // tile needs to be regenerated
#define TT_NO_TOPMAP_REGEN    (1UL<<1) // when regenerating tile do not regenerate top map
#define TT_NO_GEOMETRY_REGEN  (1UL<<2) // when regenerating tile do not regenerate geometry
#define TT_QUADTREENODE_REGEN (1UL<<3) // when regenerating tile also regenerate it quad tree node box
#define TT_NO_LODING          (1UL<<4) // when regenerating tile do not use lod
#define TT_FORCE_TOPMAP_REGEN (1UL<<5) // force top map regen
#define TT_IN_LOWEST_LOD      (1UL<<6) // tile in lowest lod and has no additional vertices inserted

#endif

SECAPI CTerrainTile_* CTerrainTile_new();
SECAPI CTerrainTile_* CTerrainTile_clone(const CTerrainTile_* p);
SECAPI void CTerrainTile_delete(CTerrainTile_* p);
SECAPI void CTerrainTile_copy(CTerrainTile_* a, const CTerrainTile_* b);
SECAPI void CTerrainTile_Render(CTerrainTile_* p);
SECAPI void CTerrainTile_ReGenerate(CTerrainTile_* p);
SECAPI void CTerrainTile_ReGenerateTileLayer(CTerrainTile_* p, INDEX iTileLayer);
SECAPI void CTerrainTile_Clear(CTerrainTile_* p);
SECAPI CStaticStackArray_GFXVertex4_* CTerrainTile_GetVertices(CTerrainTile_* p);
SECAPI CStaticStackArray_GFXTexCoord_* CTerrainTile_GetTexCoords(CTerrainTile_* p);
SECAPI CStaticStackArray_GFXTexCoord_* CTerrainTile_GetShadowMapTC(CTerrainTile_* p);
SECAPI CStaticStackArray_GFXTexCoord_* CTerrainTile_GetDetailTC(CTerrainTile_* p);
SECAPI CStaticStackArray_INDEX_* CTerrainTile_GetIndices(CTerrainTile_* p);
SECAPI CStaticStackArray_TileLayer_* CTerrainTile_GetTileLayers(CTerrainTile_* p);
SECAPI CTextureData_* CTerrainTile_GetTopMap(CTerrainTile_* p);
SECAPI INDEX CTerrainTile_ChangeTileArrays(CTerrainTile_* p, INDEX iRequestedArrayLod);
SECAPI void CTerrainTile_ReleaseTileArrays(CTerrainTile_* p);
SECAPI void CTerrainTile_EmptyTileArrays(CTerrainTile_* p);
SECAPI INDEX CTerrainTile_CalculateLOD(CTerrainTile_* p);
SECAPI void CTerrainTile_UpdateQuadTreeNode(CTerrainTile_* p);
SECAPI SLONG CTerrainTile_GetUsedMemory(CTerrainTile_* p);
SECAPI void CTerrainTile_AddTriangle(CTerrainTile_* p, INDEX iind1, INDEX iind2, INDEX iind3);
SECAPI void CTerrainTile_AddVertex(CTerrainTile_* p, INDEX ic, INDEX ir);
SECAPI void CTerrainTile_LerpVertexPos(CTerrainTile_* p, GFXVertex4_* vtx, INDEX iVxTarget, INDEX iVxFirst, INDEX iVxLast);
SECAPI INDEX* CTerrainTile_tt_ctVtxX(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_ctVtxY(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_ctLodVtxX(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_ctLodVtxY(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_iIndex(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_iLod(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_iRequestedLod(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_iArrayIndex(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_aiNeighbours(CTerrainTile_* p, INDEX i);
SECAPI INDEX* CTerrainTile_tt_iFirstBorderVertex(CTerrainTile_* p, INDEX i);
SECAPI INDEX* CTerrainTile_tt_ctBorderVertices(CTerrainTile_* p, INDEX i);
SECAPI FLOAT* CTerrainTile_tt_fLodLerpFactor(CTerrainTile_* p);
SECAPI ULONG* CTerrainTile_tt_ulTileFlags(CTerrainTile_* p);
SECAPI BOOL* CTerrainTile_tt_bUseOnlyGlobalTopMap(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_iOffsetX(CTerrainTile_* p);
SECAPI INDEX* CTerrainTile_tt_iOffsetZ(CTerrainTile_* p);

#ifdef __cplusplus
}
#endif

#endif
