#include "Brush.h"

CBrushVertex_* CBrushVertex_new()
{
  return (CBrushVertex_*)(new CBrushVertex());
}

CBrushVertex_* CBrushVertex_clone(const CBrushVertex_* p)
{
  return (CBrushVertex_*)(new CBrushVertex(*((const CBrushVertex*)p)));
}

void CBrushVertex_delete(CBrushVertex_* p)
{
  delete ((CBrushVertex*)p);
}

void CBrushVertex_copy(CBrushVertex_* a, const CBrushVertex_* b)
{
  *((CBrushVertex*)a) = *((const CBrushVertex*)b);
}

CWorkingVertex_* CBrushVertex_bvx_pwvxWorking(CBrushVertex_* p)
{
  CBrushVertex& m = *((CBrushVertex*)p);
  return (CWorkingVertex_*)(m.bvx_pwvxWorking);
}

FLOAT3D_* CBrushVertex_bvx_vAbsolute(CBrushVertex_* p)
{
  CBrushVertex& m = *((CBrushVertex*)p);
  return (FLOAT3D_*)(&(m.bvx_vAbsolute));
}

FLOAT3D_* CBrushVertex_bvx_vRelative(CBrushVertex_* p)
{
  CBrushVertex& m = *((CBrushVertex*)p);
  return (FLOAT3D_*)(&(m.bvx_vRelative));
}

DOUBLE3D_* CBrushVertex_bvx_vdPreciseRelative(CBrushVertex_* p)
{
  CBrushVertex& m = *((CBrushVertex*)p);
  return (DOUBLE3D_*)(&(m.bvx_vdPreciseRelative));
}

CBrushSector_** CBrushVertex_bvx_pbscSector(CBrushVertex_* p)
{
  CBrushVertex& m = *((CBrushVertex*)p);
  return (CBrushSector_**)(&(m.bvx_pbscSector));
}

BOOL CBrushVertex_IsSelected(const CBrushVertex_* p)
{
  return ((const CBrushVertex*)p)->IsSelected(BVXF_SELECTED);
}

void CBrushVertex_SetAbsolutePosition(CBrushVertex_* p, const DOUBLE3D_* v)
{
  ((CBrushVertex*)p)->SetAbsolutePosition(*((const DOUBLE3D*)v));
}

CBrushPlane_* CBrushPlane_new()
{
  return (CBrushPlane_*)(new CBrushPlane());
}

CBrushPlane_* CBrushPlane_clone(const CBrushPlane_* p)
{
  return (CBrushPlane_*)(new CBrushPlane(*((const CBrushPlane*)p)));
}

void CBrushPlane_delete(CBrushPlane_* p)
{
  delete ((CBrushPlane*)p);
}

void CBrushPlane_copy(CBrushPlane_* a, const CBrushPlane_* b)
{
  *((CBrushPlane*)a) = *((const CBrushPlane*)b);
}

CWorkingPlane_* CBrushPlane_bpl_pwplWorking(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (CWorkingPlane_*)(&(m.bpl_pwplWorking));
}

FLOATplane3D_* CBrushPlane_bpl_plAbsolute(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (FLOATplane3D_*)(&(m.bpl_plAbsolute));
}

FLOATplane3D_* CBrushPlane_bpl_plRelative(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (FLOATplane3D_*)(&(m.bpl_plRelative));
}

DOUBLEplane3D_** CBrushPlane_bpl_ppldPreciseAbsolute(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (DOUBLEplane3D_**)(&(m.bpl_ppldPreciseAbsolute));
}

DOUBLEplane3D_* CBrushPlane_bpl_pldPreciseRelative(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (DOUBLEplane3D_*)(&(m.bpl_pldPreciseRelative));
}

INDEX* CBrushPlane_bpl_iPlaneMajorAxis1(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (INDEX*)(&(m.bpl_iPlaneMajorAxis1));
}

INDEX* CBrushPlane_bpl_iPlaneMajorAxis2(CBrushPlane_* p)
{
  CBrushPlane& m = *((CBrushPlane*)p);
  return (INDEX*)(&(m.bpl_iPlaneMajorAxis2));
}

CBrushEdge_* CBrushEdge_new()
{
  return (CBrushEdge_*)(new CBrushEdge());
}


CBrushEdge_* CBrushEdge_new_v(CBrushVertex_* v0, CBrushVertex_* v1)
{
  return (CBrushEdge_*)(new CBrushEdge((CBrushVertex*)v0, (CBrushVertex*)v1));
}

CBrushEdge_* CBrushEdge_clone(const CBrushEdge_* p)
{
  return (CBrushEdge_*)(new CBrushEdge(*((const CBrushEdge*)p)));
}

void CBrushEdge_delete(CBrushEdge_* p)
{
  delete ((CBrushEdge*)p);
}

void CBrushEdge_copy(CBrushEdge_* a, const CBrushEdge_* b)
{
  *((CBrushEdge*)a) = *((const CBrushEdge*)b);
}

CBrushVertex_** CBrushEdge_bed_pbvxVertex0(CBrushEdge_* p)
{
  CBrushEdge& e = *((CBrushEdge*)p);
  return (CBrushVertex_**)(&(e.bed_pbvxVertex0));
}

CBrushVertex_** CBrushEdge_bed_pbvxVertex1(CBrushEdge_* p)
{
  CBrushEdge& e = *((CBrushEdge*)p);
  return (CBrushVertex_**)(&(e.bed_pbvxVertex1));
}


CBrushPolygonEdge_* CBrushPolygonEdge_new()
{
  return (CBrushPolygonEdge_*)(new CBrushPolygonEdge());
}

CBrushPolygonEdge_* CBrushPolygonEdge_clone(const CBrushPolygonEdge_* p)
{
  return (CBrushPolygonEdge_*)(new CBrushPolygonEdge(*((const CBrushPolygonEdge*)p)));
}

void CBrushPolygonEdge_delete(CBrushPolygonEdge_* p)
{
  delete ((CBrushPolygonEdge*)p);
}

void CBrushPolygonEdge_copy(CBrushPolygonEdge_* a, const CBrushPolygonEdge_* b)
{
  *((CBrushPolygonEdge*)a) = *((const CBrushPolygonEdge*)b);
}

void CBrushPolygonEdge_GetVertices(CBrushPolygonEdge_* p, CBrushVertex_** v0, CBrushVertex_** v1)
{
  CBrushPolygonEdge& e = *((CBrushPolygonEdge*)p);
  e.GetVertices(*((CBrushVertex**)v0), *((CBrushVertex**)v1));
}

void CBrushPolygonEdge_GetVertexCoordinatesAbsolute(CBrushPolygonEdge_* p, FLOAT3D_* v0, FLOAT3D_* v1)
{
  CBrushPolygonEdge& e = *((CBrushPolygonEdge*)p);
  e.GetVertexCoordinatesAbsolute(*((FLOAT3D*)v0), *((FLOAT3D*)v1));
}

void CBrushPolygonEdge_GetVertexCoordinatesRelative(CBrushPolygonEdge_* p, FLOAT3D_* v0, FLOAT3D_* v1)
{
  CBrushPolygonEdge& e = *((CBrushPolygonEdge*)p);
  e.GetVertexCoordinatesRelative(*((FLOAT3D*)v0), *((FLOAT3D*)v1));
}

void CBrushPolygonEdge_GetVertexCoordinatesPreciseRelative(CBrushPolygonEdge_* p, DOUBLE3D_* v0, DOUBLE3D_* v1)
{
  CBrushPolygonEdge& e = *((CBrushPolygonEdge*)p);
  e.GetVertexCoordinatesPreciseRelative(*((DOUBLE3D*)v0), *((DOUBLE3D*)v1));
}

void CBrushPolygonEdge_GetVertexCoordinatesPreciseAbsolute(CBrushPolygonEdge_* p, DOUBLE3D_* v0, DOUBLE3D_* v1)
{
  CBrushPolygonEdge& e = *((CBrushPolygonEdge*)p);
  e.GetVertexCoordinatesPreciseAbsolute(*((DOUBLE3D*)v0), *((DOUBLE3D*)v1));
}

CBrushEdge_** CBrushPolygonEdge_bpe_pbedEdge(CBrushPolygonEdge_* p)
{
  CBrushPolygonEdge& e = *((CBrushPolygonEdge*)p);
  return (CBrushEdge_**)(&(e.bpe_pbedEdge));
}

CListNode_* CBrushShadowLayer_bsl_lnInShadowMap(CBrushShadowLayer_* p)
{
  CBrushShadowLayer& s = *((CBrushShadowLayer*)p);
  return (CListNode_*)(&(s.bsl_lnInShadowMap));
}

CBrushShadowLayer_* CBrushShadowLayer_from_bsl_lnInShadowMap(CListNode_* p)
{
  CListNode& node = *((CListNode*)p);
  CBrushShadowLayer* res = ((CBrushShadowLayer*)(((UBYTE*)(&node)) - offsetof(CBrushShadowLayer, bsl_lnInShadowMap)));
  return (CBrushShadowLayer_*)res;
}

CLightSource_** CBrushShadowLayer_bsl_plsLightSource(CBrushShadowLayer_* p)
{
  CBrushShadowLayer& s = *((CBrushShadowLayer*)p);
  return (CLightSource_**)(&(s.bsl_plsLightSource));
}


void CBrushShadowMap_DiscardAllLayers(CBrushShadowMap_* p)
{
  ((CBrushShadowMap*)p)->DiscardAllLayers();
}

ULONG CBrushShadowMap_GetShadowSize(CBrushShadowMap_* p)
{
  return ((CBrushShadowMap*)p)->GetShadowSize();
}

SLONG CBrushShadowMap_Uncache(CBrushShadowMap_* p)
{
  return ((CBrushShadowMap*)p)->Uncache();
}


CBrushPolygonTexture_* CBrushPolygonTexture_new()
{
  return (CBrushPolygonTexture_*)(new CBrushPolygonTexture());
}

CBrushPolygonTexture_* CBrushPolygonTexture_clone(const CBrushPolygonTexture_* p)
{
  return (CBrushPolygonTexture_*)(new CBrushPolygonTexture(*((const CBrushPolygonTexture*)p)));
}

void CBrushPolygonTexture_delete(CBrushPolygonTexture_* p)
{
  delete ((CBrushPolygonTexture*)p);
}

void CBrushPolygonTexture_copy(CBrushPolygonTexture_* a, const CBrushPolygonTexture_* b)
{
  *((CBrushPolygonTexture*)a) = *((const CBrushPolygonTexture*)b);
}
CBrushPolygonTexture_* CBrushPolygonTexture_CopyTextureProperties(CBrushPolygonTexture_* p, CBrushPolygonTexture_* o, BOOL bCopyMapping)
{
  return (CBrushPolygonTexture_*)(&(((CBrushPolygonTexture*)p)->CopyTextureProperties(*((CBrushPolygonTexture*)o), bCopyMapping)));
}

void CBrushPolygonTexture_Clear(CBrushPolygonTexture_* p)
{
  ((CBrushPolygonTexture*)p)->Clear();
}

CTextureObject_* CBrushPolygonTexture_bpt_toTexture(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return (CTextureObject_*)(&(t.bpt_toTexture));
}

CMappingDefinition_* CBrushPolygonTexture_bpt_mdMapping(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return (CMappingDefinition_*)(&(t.bpt_mdMapping));
}

UBYTE* CBrushPolygonTexture_bpt_ubScroll(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return &(t.s.bpt_ubScroll);
}

UBYTE* CBrushPolygonTexture_bpt_ubBlend(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return &(t.s.bpt_ubBlend);
}
 
UBYTE* CBrushPolygonTexture_bpt_ubFlags(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return &(t.s.bpt_ubFlags);
}
 
UBYTE* CBrushPolygonTexture_bpt_ubDummy(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return &(t.s.bpt_ubDummy);
}
 
COLOR* CBrushPolygonTexture_bpt_colColor(CBrushPolygonTexture_* p)
{
  CBrushPolygonTexture& t = *((CBrushPolygonTexture*)p);
  return &(t.s.bpt_colColor);
}


CBrushPolygonProperties_* CBrushPolygonProperties_new()
{
  return (CBrushPolygonProperties_*)(new CBrushPolygonProperties());
}

CBrushPolygonProperties_* CBrushPolygonProperties_clone(const CBrushPolygonProperties_* p)
{
  return (CBrushPolygonProperties_*)(new CBrushPolygonProperties(*((const CBrushPolygonProperties*)p)));
}

void CBrushPolygonProperties_delete(CBrushPolygonProperties_* p)
{
  delete ((CBrushPolygonProperties*)p);
}

void CBrushPolygonProperties_copy(CBrushPolygonProperties_* a, const CBrushPolygonProperties_* b)
{
  *((CBrushPolygonProperties*)a) = *((const CBrushPolygonProperties*)b);
}
UBYTE* CBrushPolygonProperties_bpp_ubSurfaceType(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (UBYTE*)(&(m.bpp_ubSurfaceType));
}

UBYTE* CBrushPolygonProperties_bpp_ubIlluminationType(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (UBYTE*)(&(m.bpp_ubIlluminationType));
}

UBYTE* CBrushPolygonProperties_bpp_ubShadowBlend(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (UBYTE*)(&(m.bpp_ubShadowBlend));
}

UBYTE* CBrushPolygonProperties_bpp_ubMirrorType(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (UBYTE*)(&(m.bpp_ubMirrorType));
}

UBYTE* CBrushPolygonProperties_bpp_ubGradientType(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (UBYTE*)(&(m.bpp_ubGradientType));
}

SBYTE* CBrushPolygonProperties_bpp_sbShadowClusterSize(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (SBYTE*)(&(m.bpp_sbShadowClusterSize));
}

UWORD* CBrushPolygonProperties_bpp_uwPretenderDistance(CBrushPolygonProperties_* p)
{
  CBrushPolygonProperties& m = *((CBrushPolygonProperties*)p);
  return (UWORD*)(&(m.bpp_uwPretenderDistance));
}
