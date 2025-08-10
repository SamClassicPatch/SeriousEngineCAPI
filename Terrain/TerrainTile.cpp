#include "TerrainTile.h"
#include <Engine/Terrain/TerrainTile.h>

CTerrainTile_* CTerrainTile_new()
{
  return (CTerrainTile_*)(new CTerrainTile());
}

CTerrainTile_* CTerrainTile_clone(const CTerrainTile_* p)
{
  return (CTerrainTile_*)(new CTerrainTile(*((const CTerrainTile*)p)));
}

void CTerrainTile_delete(CTerrainTile_* p)
{
  delete ((CTerrainTile*)p);
}

void CTerrainTile_copy(CTerrainTile_* a, const CTerrainTile_* b)
{
  *((CTerrainTile*)a) = *((const CTerrainTile*)b);
}

void CTerrainTile_Render(CTerrainTile_* p)
{
  ((CTerrainTile*)p)->Render();
}

void CTerrainTile_ReGenerate(CTerrainTile_* p)
{
  ((CTerrainTile*)p)->ReGenerate();
}

void CTerrainTile_ReGenerateTileLayer(CTerrainTile_* p, INDEX iTileLayer)
{
  ((CTerrainTile*)p)->ReGenerateTileLayer(iTileLayer);
}

void CTerrainTile_Clear(CTerrainTile_* p)
{
  ((CTerrainTile*)p)->Clear();
}

CStaticStackArray_GFXVertex4_* CTerrainTile_GetVertices(CTerrainTile_* p)
{
  return (CStaticStackArray_GFXVertex4_*)(&(((CTerrainTile*)p)->GetVertices()));
}

CStaticStackArray_GFXTexCoord_* CTerrainTile_GetTexCoords(CTerrainTile_* p)
{
  return (CStaticStackArray_GFXTexCoord_*)(&(((CTerrainTile*)p)->GetTexCoords()));
}

CStaticStackArray_GFXTexCoord_* CTerrainTile_GetShadowMapTC(CTerrainTile_* p)
{
  return (CStaticStackArray_GFXTexCoord_*)(&(((CTerrainTile*)p)->GetShadowMapTC()));
}

CStaticStackArray_GFXTexCoord_* CTerrainTile_GetDetailTC(CTerrainTile_* p)
{
  return (CStaticStackArray_GFXTexCoord_*)(&(((CTerrainTile*)p)->GetDetailTC()));
}

CStaticStackArray_INDEX_* CTerrainTile_GetIndices(CTerrainTile_* p)
{
  return (CStaticStackArray_INDEX_*)(&(((CTerrainTile*)p)->GetIndices()));
}

CStaticStackArray_TileLayer_* CTerrainTile_GetTileLayers(CTerrainTile_* p)
{
  return (CStaticStackArray_TileLayer_*)(&(((CTerrainTile*)p)->GetTileLayers()));
}

CTextureData_* CTerrainTile_GetTopMap(CTerrainTile_* p)
{
  return (CTextureData_*)(((CTerrainTile*)p)->GetTopMap());
}

INDEX CTerrainTile_ChangeTileArrays(CTerrainTile_* p, INDEX iRequestedArrayLod)
{
  return ((CTerrainTile*)p)->ChangeTileArrays(iRequestedArrayLod);
}

void CTerrainTile_ReleaseTileArrays(CTerrainTile_* p)
{
  ((CTerrainTile*)p)->ReleaseTileArrays();
}

void CTerrainTile_EmptyTileArrays(CTerrainTile_* p)
{
  ((CTerrainTile*)p)->EmptyTileArrays();
}

INDEX CTerrainTile_CalculateLOD(CTerrainTile_* p)
{
  return ((CTerrainTile*)p)->CalculateLOD();
}

void CTerrainTile_UpdateQuadTreeNode(CTerrainTile_* p)
{
  ((CTerrainTile*)p)->UpdateQuadTreeNode();
}

SLONG CTerrainTile_GetUsedMemory(CTerrainTile_* p)
{
  return ((CTerrainTile*)p)->GetUsedMemory();
}

void CTerrainTile_AddTriangle(CTerrainTile_* p, INDEX iind1, INDEX iind2, INDEX iind3)
{
  ((CTerrainTile*)p)->AddTriangle(iind1, iind2, iind3);
}

void CTerrainTile_AddVertex(CTerrainTile_* p, INDEX ic, INDEX ir)
{
  ((CTerrainTile*)p)->AddVertex(ic, ir);
}

void CTerrainTile_LerpVertexPos(CTerrainTile_* p, GFXVertex4_* vtx, INDEX iVxTarget, INDEX iVxFirst, INDEX iVxLast)
{
  ((CTerrainTile*)p)->LerpVertexPos(*((GFXVertex4*)vtx), iVxTarget, iVxFirst, iVxLast);
}

INDEX* CTerrainTile_tt_ctVtxX(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_ctVtxX;
}

INDEX* CTerrainTile_tt_ctVtxY(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_ctVtxY;
}

INDEX* CTerrainTile_tt_ctLodVtxX(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_ctLodVtxX;
}

INDEX* CTerrainTile_tt_ctLodVtxY(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_ctLodVtxY;
}

INDEX* CTerrainTile_tt_iIndex(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_iIndex;
}

INDEX* CTerrainTile_tt_iLod(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_iLod;
}

INDEX* CTerrainTile_tt_iRequestedLod(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_iRequestedLod;
}

INDEX* CTerrainTile_tt_iArrayIndex(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_iArrayIndex;
}

INDEX* CTerrainTile_tt_aiNeighbours(CTerrainTile_* p, INDEX i)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &(t.tt_aiNeighbours[i]);
}

INDEX* CTerrainTile_tt_iFirstBorderVertex(CTerrainTile_* p, INDEX i)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &(t.tt_iFirstBorderVertex[i]);
}

INDEX* CTerrainTile_tt_ctBorderVertices(CTerrainTile_* p, INDEX i)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &(t.tt_ctBorderVertices[i]);
}

FLOAT* CTerrainTile_tt_fLodLerpFactor(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_fLodLerpFactor;
}

ULONG* CTerrainTile_tt_ulTileFlags(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_ulTileFlags;
}

BOOL* CTerrainTile_tt_bUseOnlyGlobalTopMap(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_bUseOnlyGlobalTopMap;
}

INDEX* CTerrainTile_tt_iOffsetX(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_iOffsetX;
}

INDEX* CTerrainTile_tt_iOffsetZ(CTerrainTile_* p)
{
  CTerrainTile& t = *((CTerrainTile*)p);
  return &t.tt_iOffsetZ;
}
