#include "Terrain.h"
#include <Engine/Terrain/Terrain.h>

QuadTreeNode_* QuadTreeNode_new()
{
  return (QuadTreeNode_*)(new QuadTreeNode());
}

QuadTreeNode_* QuadTreeNode_clone(const QuadTreeNode_* p)
{
  return (QuadTreeNode_*)(new QuadTreeNode(*((const QuadTreeNode*)p)));
}

void QuadTreeNode_delete(QuadTreeNode_* p)
{
  delete ((QuadTreeNode*)p);
}

void QuadTreeNode_copy(QuadTreeNode_* a, const QuadTreeNode_* b)
{
  *((QuadTreeNode*)a) = *((const QuadTreeNode*)b);
}

FLOATaabbox3D_* QuadTreeNode_qtn_aabbox(QuadTreeNode_* p)
{
  QuadTreeNode& q = *((QuadTreeNode*)p);
  return (FLOATaabbox3D_*)(&q.qtn_aabbox);
}

INDEX* QuadTreeNode_qtn_iTileIndex(QuadTreeNode_* p)
{
  QuadTreeNode& q = *((QuadTreeNode*)p);
  return &q.qtn_iTileIndex;
}

INDEX* QuadTreeNode_qtn_iChild(QuadTreeNode_* p, INDEX i)
{
  QuadTreeNode& q = *((QuadTreeNode*)p);
  return &(q.qtn_iChild[i]);
}

QuadTreeLevel_* QuadTreeLevel_new()
{
  return (QuadTreeLevel_*)(new QuadTreeLevel());
}

QuadTreeLevel_* QuadTreeLevel_clone(const QuadTreeLevel_* p)
{
  return (QuadTreeLevel_*)(new QuadTreeLevel(*((const QuadTreeLevel*)p)));
}

void QuadTreeLevel_delete(QuadTreeLevel_* p)
{
  delete ((QuadTreeLevel*)p);
}

void QuadTreeLevel_copy(QuadTreeLevel_* a, const QuadTreeLevel_* b)
{
  *((QuadTreeLevel*)a) = *((const QuadTreeLevel*)b);
}

INDEX* QuadTreeLevel_qtl_iFirstNode(QuadTreeLevel_* p)
{
  QuadTreeLevel& q = *((QuadTreeLevel*)p);
  return &q.qtl_iFirstNode;
}

INDEX* QuadTreeLevel_qtl_ctNodes(QuadTreeLevel_* p)
{
  QuadTreeLevel& q = *((QuadTreeLevel*)p);
  return &q.qtl_ctNodes;
}

INDEX* QuadTreeLevel_qtl_ctNodesCol(QuadTreeLevel_* p)
{
  QuadTreeLevel& q = *((QuadTreeLevel*)p);
  return &q.qtl_ctNodesCol;
}

INDEX* QuadTreeLevel_qtl_ctNodesRow(QuadTreeLevel_* p)
{
  QuadTreeLevel& q = *((QuadTreeLevel*)p);
  return &q.qtl_ctNodesRow;
}

Rect_* Rect_new()
{
  return (Rect_*)(new Rect());
}

Rect_* Rect_new_i(INDEX l, INDEX t, INDEX r, INDEX b)
{
  return (Rect_*)(new Rect(l, t, r, b));
}

Rect_* Rect_clone(const Rect_* p)
{
  return (Rect_*)(new Rect(*((const Rect*)p)));
}

void Rect_delete(Rect_* p)
{
  delete ((Rect*)p);
}

void Rect_copy(Rect_* a, const Rect_* b)
{
  *((Rect*)a) = *((const Rect*)b);
}

INDEX Rect_Width(Rect_* p)
{
  return ((Rect*)p)->Width();
}

INDEX Rect_Height(Rect_* p)
{
  return ((Rect*)p)->Height();
}

INDEX* Rect_rc_iLeft(Rect_* p)
{
  Rect& r = *((Rect*)p);
  return &r.rc_iLeft;
}

INDEX* Rect_rc_iRight(Rect_* p)
{
  Rect& r = *((Rect*)p);
  return &r.rc_iRight;
}

INDEX* Rect_rc_iTop(Rect_* p)
{
  Rect& r = *((Rect*)p);
  return &r.rc_iTop;
}

INDEX* Rect_rc_iBottom(Rect_* p)
{
  Rect& r = *((Rect*)p);
  return &r.rc_iBottom;
}

CTerrain_* CTerrain_new()
{
  return (CTerrain_*)(new CTerrain());
}

void CTerrain_delete(CTerrain_* p)
{
  delete ((CTerrain*)p);
}

void CTerrain_Render(CTerrain_* p, CAnyProjection3D_* apr, CDrawPort_* pdp)
{
  ((CTerrain*)p)->Render(*((CAnyProjection3D*)apr), (CDrawPort*)pdp);
}

void CTerrain_RenderWireFrame(CTerrain_* p, CAnyProjection3D_* apr, CDrawPort_* pdp, COLOR colEdges)
{
  ((CTerrain*)p)->RenderWireFrame(*((CAnyProjection3D*)apr), (CDrawPort*)pdp, colEdges);
}

static void sehCTerrain_CreateEmptyTerrain_t(CTerrain_* p, PIX pixWidth, PIX pixHeight)
{
  SECAPI_TRY
  ((CTerrain*)p)->CreateEmptyTerrain_t(pixWidth, pixHeight);
  SECAPI_CATCH
}

void CTerrain_CreateEmptyTerrain_t(CTerrain_* p, PIX pixWidth, PIX pixHeight)
{
  STREAM_TRY
  sehCTerrain_CreateEmptyTerrain_t(p, pixWidth, pixHeight);
  STREAM_CATCH
}

static void sehCTerrain_ImportHeightMap_t(CTerrain_* p, CTFileName_* fnHeightMap, BOOL bUse16b)
{
  SECAPI_TRY
  ((CTerrain*)p)->ImportHeightMap_t(*((CTFileName*)fnHeightMap), bUse16b);
  SECAPI_CATCH
}

void CTerrain_ImportHeightMap_t(CTerrain_* p, CTFileName_* fnHeightMap, BOOL bUse16b)
{
  STREAM_TRY
  sehCTerrain_ImportHeightMap_t(p, fnHeightMap, bUse16b);
  STREAM_CATCH
}

static void sehCTerrain_ExportHeightMap_t(CTerrain_* p, CTFileName_* fnHeightMap, BOOL bUse16b)
{
  SECAPI_TRY
  ((CTerrain*)p)->ExportHeightMap_t(*((CTFileName*)fnHeightMap), bUse16b);
  SECAPI_CATCH
}

void CTerrain_ExportHeightMap_t(CTerrain_* p, CTFileName_* fnHeightMap, BOOL bUse16b)
{
  STREAM_TRY
  sehCTerrain_ExportHeightMap_t(p, fnHeightMap, bUse16b);
  STREAM_CATCH
}

void CTerrain_ReBuildTerrain(CTerrain_* p, BOOL bDelayTileRegen)
{
  ((CTerrain*)p)->ReBuildTerrain(bDelayTileRegen);
}

void CTerrain_RefreshTerrain(CTerrain_* p)
{
  ((CTerrain*)p)->RefreshTerrain();
}

void CTerrain_AllocateHeightMap(CTerrain_* p, PIX pixWidth, PIX pixHeight)
{
  ((CTerrain*)p)->AllocateHeightMap(pixWidth, pixHeight);
}

void CTerrain_ReAllocateHeightMap(CTerrain_* p, PIX pixWidth, PIX pixHeight)
{
  ((CTerrain*)p)->ReAllocateHeightMap(pixWidth, pixHeight);
}

void CTerrain_SetTerrainSize(CTerrain_* p, FLOAT3D_* vSize)
{
  ((CTerrain*)p)->SetTerrainSize(*((FLOAT3D*)vSize));
}

void CTerrain_SetShadowMapsSize(CTerrain_* p, INDEX iShadowMapAspect, INDEX iShadingMapAspect)
{
  ((CTerrain*)p)->SetShadowMapsSize(iShadowMapAspect, iShadingMapAspect);
}

void CTerrain_SetGlobalTopMapSize(CTerrain_* p, PIX pixTopMapSize)
{
  ((CTerrain*)p)->SetGlobalTopMapSize(pixTopMapSize);
}

void CTerrain_SetTileTopMapSize(CTerrain_* p, PIX pixLodTopMapSize)
{
  ((CTerrain*)p)->SetTileTopMapSize(pixLodTopMapSize);
}

void CTerrain_SetLodDistanceFactor(CTerrain_* p, FLOAT fLodDistance)
{
  ((CTerrain*)p)->SetLodDistanceFactor(fLodDistance);
}

PIX CTerrain_GetShadowMapWidth(CTerrain_* p)
{
  return ((CTerrain*)p)->GetShadowMapWidth();
}

PIX CTerrain_GetShadowMapHeight(CTerrain_* p)
{
  return ((CTerrain*)p)->GetShadowMapHeight();
}

PIX CTerrain_GetShadingMapWidth(CTerrain_* p)
{
  return ((CTerrain*)p)->GetShadingMapWidth();
}

PIX CTerrain_GetShadingMapHeight(CTerrain_* p)
{
  return ((CTerrain*)p)->GetShadingMapHeight();
}

CTerrainLayer_* CTerrain_GetLayer(CTerrain_* p, INDEX iLayer)
{
  return (CTerrainLayer_*)(&((CTerrain*)p)->GetLayer(iLayer));
}

static CTerrainLayer_* sehCTerrain_AddLayer_t(CTerrain_* p, CTFileName_* fnTexture, LayerType_ ltType, BOOL bUpdateTerrain)
{
  CTerrainLayer_* res = NULL;
  SECAPI_TRY
  res = (CTerrainLayer_*)(&((CTerrain*)p)->AddLayer_t(*((CTFileName*)fnTexture), (LayerType)ltType, bUpdateTerrain));
  SECAPI_CATCH
  return res;
}

CTerrainLayer_* CTerrain_AddLayer_t(CTerrain_* p, CTFileName_* fnTexture, LayerType_ ltType, BOOL bUpdateTerrain)
{
  CTerrainLayer_* res = NULL;
  STREAM_TRY
  res = sehCTerrain_AddLayer_t(p, fnTexture, ltType, bUpdateTerrain);
  STREAM_CATCH
  return res;
}

void CTerrain_RemoveLayer(CTerrain_* p, INDEX iLayer, BOOL bUpdateTerrain)
{
  ((CTerrain*)p)->RemoveLayer(iLayer, bUpdateTerrain);
}

INDEX CTerrain_SetLayerIndex(CTerrain_* p, INDEX iLayer, INDEX iNewIndex, BOOL bUpdateTerrain)
{
  return ((CTerrain*)p)->SetLayerIndex(iLayer, iNewIndex, bUpdateTerrain);
}

void CTerrain_AddTileToRegenQueue(CTerrain_* p, INDEX iTileIndex)
{
  ((CTerrain*)p)->AddTileToRegenQueue(iTileIndex);
}

void CTerrain_AddAllTilesToRegenQueue(CTerrain_* p)
{
  ((CTerrain*)p)->AddAllTilesToRegenQueue();
}

void CTerrain_ClearRegenList(CTerrain_* p)
{
  ((CTerrain*)p)->ClearRegenList();
}

void CTerrain_UpdateShadowMap(CTerrain_* p, FLOATaabbox3D_* pbboxUpdate, BOOL bAbsoluteSpace)
{
  ((CTerrain*)p)->UpdateShadowMap((FLOATaabbox3D*)pbboxUpdate, bAbsoluteSpace);
}

void CTerrain_UpdateTopMap(CTerrain_* p, INDEX iTileIndex, Rect_* prcDest)
{
  ((CTerrain*)p)->UpdateTopMap(iTileIndex, (Rect*)prcDest);
}

void CTerrain_GetAllTerrainBBox(CTerrain_* p, FLOATaabbox3D_* bbox)
{
  ((CTerrain*)p)->GetAllTerrainBBox(*((FLOATaabbox3D*)bbox));
}

COLOR CTerrain_GetShadeColor(CTerrain_* p, CShadingInfo_* psi)
{
  return ((CTerrain*)p)->GetShadeColor((CShadingInfo*)psi);
}

FLOATplane3D_* CTerrain_GetPlaneFromPoint(CTerrain_* p, FLOAT3D_* vAbsPoint)
{
  FLOATplane3D pl = ((CTerrain*)p)->GetPlaneFromPoint(*((FLOAT3D*)vAbsPoint));
  return (FLOATplane3D_*)(new FLOATplane3D(pl));
}

void CTerrain_SetQuadsPerTileRow(CTerrain_* p, INDEX ctQuadsPerTileRow)
{
  ((CTerrain*)p)->SetQuadsPerTileRow(ctQuadsPerTileRow);
}

INDEX CTerrain_GetQuadsPerTileRow(CTerrain_* p)
{
  return ((CTerrain*)p)->GetQuadsPerTileRow();
}

INDEX CTerrain_GetVerticesPerTileRow(CTerrain_* p)
{
  return ((CTerrain*)p)->GetVerticesPerTileRow();
}

static void sehCTerrain_ReadVersion_t(CTerrain_* p, CTStream_* istrFile, INDEX iSavedVersion)
{
  SECAPI_TRY
  ((CTerrain*)p)->ReadVersion_t((CTStream*)istrFile, iSavedVersion);
  SECAPI_CATCH
}

void CTerrain_ReadVersion_t(CTerrain_* p, CTStream_* istrFile, INDEX iSavedVersion)
{
  STREAM_TRY
  sehCTerrain_ReadVersion_t(p, istrFile, iSavedVersion);
  STREAM_CATCH
}

static void sehCTerrain_Read_t(CTerrain_* p, CTStream_* istrFile)
{
  SECAPI_TRY
  ((CTerrain*)p)->Read_t((CTStream*)istrFile);
  SECAPI_CATCH
}

void CTerrain_Read_t(CTerrain_* p, CTStream_* istrFile)
{
  STREAM_TRY
  sehCTerrain_Read_t(p, istrFile);
  STREAM_CATCH
}

static void sehCTerrain_Write_t(CTerrain_* p, CTStream_* ostrFile)
{
  SECAPI_TRY
  ((CTerrain*)p)->Write_t((CTStream*)ostrFile);
  SECAPI_CATCH
}

void CTerrain_Write_t(CTerrain_* p, CTStream_* ostrFile)
{
  STREAM_TRY
  sehCTerrain_Write_t(p, ostrFile);
  STREAM_CATCH
}

void CTerrain_Copy(CTerrain_* p, CTerrain_* trOther)
{
  ((CTerrain*)p)->Copy(*((CTerrain*)trOther));
}

void CTerrain_Clean(CTerrain_* p, BOOL bCleanLayers)
{
  ((CTerrain*)p)->Clean(bCleanLayers);
}

void CTerrain_Clear(CTerrain_* p)
{
  ((CTerrain*)p)->Clear();
}

void CTerrain_ReGenerate(CTerrain_* p)
{
  ((CTerrain*)p)->ReGenerate();
}

void CTerrain_BuildTerrainData(CTerrain_* p)
{
  ((CTerrain*)p)->BuildTerrainData();
}

void CTerrain_BuildQuadTree(CTerrain_* p)
{
  ((CTerrain*)p)->BuildQuadTree();
}

void CTerrain_UpdateQuadTree(CTerrain_* p)
{
  ((CTerrain*)p)->UpdateQuadTree();
}

void CTerrain_GenerateTerrainTopMap(CTerrain_* p)
{
  ((CTerrain*)p)->GenerateTerrainTopMap();
}

void CTerrain_SetTerrainStretch(CTerrain_* p, FLOAT3D_* vStretch)
{
  ((CTerrain*)p)->SetTerrainStretch(*((FLOAT3D*)vStretch));
}

static void sehCTerrain_AddDefaultLayer_t(CTerrain_* p)
{
  SECAPI_TRY
  ((CTerrain*)p)->AddDefaultLayer_t();
  SECAPI_CATCH
}

void CTerrain_AddDefaultLayer_t(CTerrain_* p)
{
  STREAM_TRY
  sehCTerrain_AddDefaultLayer_t(p);
  STREAM_CATCH
}

void CTerrain_DiscardShadingInfos(CTerrain_* p)
{
  ((CTerrain*)p)->DiscardShadingInfos();
}

void CTerrain_ClearHeightMap(CTerrain_* p)
{
  ((CTerrain*)p)->ClearHeightMap();
}

void CTerrain_ClearShadowMap(CTerrain_* p)
{
  ((CTerrain*)p)->ClearShadowMap();
}

void CTerrain_ClearEdgeMap(CTerrain_* p)
{
  ((CTerrain*)p)->ClearEdgeMap();
}

void CTerrain_ClearTopMaps(CTerrain_* p)
{
  ((CTerrain*)p)->ClearTopMaps();
}

void CTerrain_ClearTiles(CTerrain_* p)
{
  ((CTerrain*)p)->ClearTiles();
}

void CTerrain_ClearArrays(CTerrain_* p)
{
  ((CTerrain*)p)->ClearArrays();
}

void CTerrain_ClearQuadTree(CTerrain_* p)
{
  ((CTerrain*)p)->ClearQuadTree();
}

void CTerrain_ClearLayers(CTerrain_* p)
{
  ((CTerrain*)p)->ClearLayers();
}

CEntity_** CTerrain_tr_penEntity(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CEntity_**)(&t.tr_penEntity);
}

INDEX* CTerrain_tr_ctTiles(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_ctTiles;
}

INDEX* CTerrain_tr_ctTilesX(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_ctTilesX;
}

INDEX* CTerrain_tr_ctTilesY(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_ctTilesY;
}

INDEX* CTerrain_tr_iMaxTileLod(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_iMaxTileLod;
}

FLOAT3D_* CTerrain_tr_vStretch(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (FLOAT3D_*)(&t.tr_vStretch);
}

FLOAT* CTerrain_tr_fDistFactor(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_fDistFactor;
}

CStaticStackArray_QuadTreeNode_* CTerrain_tr_aqtnQuadTreeNodes(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CStaticStackArray_QuadTreeNode_*)(&t.tr_aqtnQuadTreeNodes);
}

CStaticStackArray_QuadTreeLevel_* CTerrain_tr_aqtlQuadTreeLevels(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CStaticStackArray_QuadTreeLevel_*)(&t.tr_aqtlQuadTreeLevels);
}

CStaticArray_CTerrainTile_* CTerrain_tr_attTiles(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CStaticArray_CTerrainTile_*)(&t.tr_attTiles);
}

CStaticArray_CArrayHolder_* CTerrain_tr_aArrayHolders(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CStaticArray_CArrayHolder_*)(&t.tr_aArrayHolders);
}

CStaticStackArray_CTerrainLayer_* CTerrain_tr_atlLayers(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CStaticStackArray_CTerrainLayer_*)(&t.tr_atlLayers);
}

CDynamicContainer_CTextureData_* CTerrain_tr_atdTopMaps(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CDynamicContainer_CTextureData_*)(&t.tr_atdTopMaps);
}

CStaticStackArray_INDEX_* CTerrain_tr_auiRegenList(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CStaticStackArray_INDEX_*)(&t.tr_auiRegenList);
}

UWORD** CTerrain_tr_auwHeightMap(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_auwHeightMap;
}

UWORD** CTerrain_tr_auwShadingMap(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_auwShadingMap;
}

UBYTE** CTerrain_tr_aubEdgeMap(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_aubEdgeMap;
}

CTextureData_* CTerrain_tr_tdTopMap(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CTextureData_*)(&t.tr_tdTopMap);
}

CTextureData_* CTerrain_tr_tdShadowMap(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CTextureData_*)(&t.tr_tdShadowMap);
}

CTextureData_** CTerrain_tr_ptdDetailMap(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (CTextureData_**)(&t.tr_ptdDetailMap);
}

PIX* CTerrain_tr_pixHeightMapWidth(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_pixHeightMapWidth;
}

PIX* CTerrain_tr_pixHeightMapHeight(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_pixHeightMapHeight;
}

PIX* CTerrain_tr_pixTopMapWidth(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_pixTopMapWidth;
}

PIX* CTerrain_tr_pixTopMapHeight(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_pixTopMapHeight;
}

PIX* CTerrain_tr_pixFirstMipTopMapWidth(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_pixFirstMipTopMapWidth;
}

PIX* CTerrain_tr_pixFirstMipTopMapHeight(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_pixFirstMipTopMapHeight;
}

INDEX* CTerrain_tr_iShadowMapSizeAspect(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_iShadowMapSizeAspect;
}

INDEX* CTerrain_tr_iShadingMapSizeAspect(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_iShadingMapSizeAspect;
}

INDEX* CTerrain_tr_ctQuadsInTileRow(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_ctQuadsInTileRow;
}

INDEX* CTerrain_tr_ctVerticesInTileRow(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_ctVerticesInTileRow;
}

ULONG* CTerrain_tr_ulTerrainFlags(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_ulTerrainFlags;
}

FLOAT3D_* CTerrain_tr_vTerrainSize(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return (FLOAT3D_*)(&t.tr_vTerrainSize);
}

INDEX* CTerrain_tr_iSelectedLayer(CTerrain_* p)
{
  CTerrain& t = *((CTerrain*)p);
  return &t.tr_iSelectedLayer;
}
