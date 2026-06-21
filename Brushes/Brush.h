#ifndef SECAPI_BRUSHES_BRUSH_H
#define SECAPI_BRUSHES_BRUSH_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CBrushVertex_* CBrushVertex_new();
SECAPI CBrushVertex_* CBrushVertex_clone(const CBrushVertex_* p);
SECAPI void CBrushVertex_delete(CBrushVertex_* p);
SECAPI void CBrushVertex_copy(CBrushVertex_* a, const CBrushVertex_* b);
SECAPI CWorkingVertex_* CBrushVertex_bvx_pwvxWorking(CBrushVertex_* p);
SECAPI FLOAT3D_* CBrushVertex_bvx_vAbsolute(CBrushVertex_* p);
SECAPI FLOAT3D_* CBrushVertex_bvx_vRelative(CBrushVertex_* p);
SECAPI DOUBLE3D_* CBrushVertex_bvx_vdPreciseRelative(CBrushVertex_* p);
SECAPI CBrushSector_** CBrushVertex_bvx_pbscSector(CBrushVertex_* p);
SECAPI BOOL CBrushVertex_IsSelected(const CBrushVertex_* p);
SECAPI void CBrushVertex_SetAbsolutePosition(CBrushVertex_* p, const DOUBLE3D_* v);

SECAPI CBrushPlane_* CBrushPlane_new();
SECAPI CBrushPlane_* CBrushPlane_clone(const CBrushPlane_* p);
SECAPI void CBrushPlane_delete(CBrushPlane_* p);
SECAPI void CBrushPlane_copy(CBrushPlane_* a, const CBrushPlane_* b);
SECAPI CWorkingPlane_* CBrushPlane_bpl_pwplWorking(CBrushPlane_* p);
SECAPI FLOATplane3D_* CBrushPlane_bpl_plAbsolute(CBrushPlane_* p);
SECAPI FLOATplane3D_* CBrushPlane_bpl_plRelative(CBrushPlane_* p);
SECAPI DOUBLEplane3D_** CBrushPlane_bpl_ppldPreciseAbsolute(CBrushPlane_* p);
SECAPI DOUBLEplane3D_* CBrushPlane_bpl_pldPreciseRelative(CBrushPlane_* p);
SECAPI INDEX* CBrushPlane_bpl_iPlaneMajorAxis1(CBrushPlane_* p);
SECAPI INDEX* CBrushPlane_bpl_iPlaneMajorAxis2(CBrushPlane_* p);

SECAPI CBrushEdge_* CBrushEdge_new();
SECAPI CBrushEdge_* CBrushEdge_new_v(CBrushVertex_* v0, CBrushVertex_* v1);
SECAPI CBrushEdge_* CBrushEdge_clone(const CBrushEdge_* p);
SECAPI void CBrushEdge_delete(CBrushEdge_* p);
SECAPI void CBrushEdge_copy(CBrushEdge_* a, const CBrushEdge_* b);
SECAPI CBrushVertex_** CBrushEdge_bed_pbvxVertex0(CBrushEdge_* p);
SECAPI CBrushVertex_** CBrushEdge_bed_pbvxVertex1(CBrushEdge_* p);

SECAPI CBrushPolygonEdge_* CBrushPolygonEdge_new();
SECAPI CBrushPolygonEdge_* CBrushPolygonEdge_clone(const CBrushPolygonEdge_* p);
SECAPI void CBrushPolygonEdge_delete(CBrushPolygonEdge_* p);
SECAPI void CBrushPolygonEdge_copy(CBrushPolygonEdge_* a, const CBrushPolygonEdge_* b);
SECAPI void CBrushPolygonEdge_GetVertices(CBrushPolygonEdge_* p, CBrushVertex_** v0, CBrushVertex_** v1);
SECAPI void CBrushPolygonEdge_GetVertexCoordinatesAbsolute(CBrushPolygonEdge_* p, FLOAT3D_* v0, FLOAT3D_* v1);
SECAPI void CBrushPolygonEdge_GetVertexCoordinatesRelative(CBrushPolygonEdge_* p, FLOAT3D_* v0, FLOAT3D_* v1);
SECAPI void CBrushPolygonEdge_GetVertexCoordinatesPreciseRelative(CBrushPolygonEdge_* p, DOUBLE3D_* v0, DOUBLE3D_* v1);
SECAPI void CBrushPolygonEdge_GetVertexCoordinatesPreciseAbsolute(CBrushPolygonEdge_* p, DOUBLE3D_* v0, DOUBLE3D_* v1);
SECAPI CBrushEdge_** CBrushPolygonEdge_bpe_pbedEdge(CBrushPolygonEdge_* p);

SECAPI CListNode_* CBrushShadowLayer_bsl_lnInShadowMap(CBrushShadowLayer_* p);
SECAPI CBrushShadowLayer_* CBrushShadowLayer_from_bsl_lnInShadowMap(CListNode_* p);
SECAPI CLightSource_** CBrushShadowLayer_bsl_plsLightSource(CBrushShadowLayer_* p);

SECAPI void CBrushShadowMap_DiscardAllLayers(CBrushShadowMap_* p);
SECAPI ULONG CBrushShadowMap_GetShadowSize(CBrushShadowMap_* p);
SECAPI SLONG CBrushShadowMap_Uncache(CBrushShadowMap_* p);

#ifndef SERIOUSENGINECAPI_EXPORTS
// one texture on a brush polygon
#define BPTF_CLAMPU         (1U<<0)    // clamp u coordinate in texture
#define BPTF_CLAMPV         (1U<<1)    // clamp v coordinate in texture
#define BPTF_DISCARDABLE    (1U<<2)    // texture doesn't have to be drawn
#define BPTF_AFTERSHADOW    (1U<<3)    // texture is to be applied after shadow
#define BPTF_REFLECTION     (1U<<4)    // texture will be reflection-mapped
#endif

SECAPI CBrushPolygonTexture_* CBrushPolygonTexture_new();
SECAPI CBrushPolygonTexture_* CBrushPolygonTexture_clone(const CBrushPolygonTexture_* p);
SECAPI void CBrushPolygonTexture_delete(CBrushPolygonTexture_* p);
SECAPI void CBrushPolygonTexture_copy(CBrushPolygonTexture_* a, const CBrushPolygonTexture_* b);
SECAPI CBrushPolygonTexture_* CBrushPolygonTexture_CopyTextureProperties(CBrushPolygonTexture_* p, CBrushPolygonTexture_* o, BOOL bCopyMapping);
SECAPI void CBrushPolygonTexture_Clear(CBrushPolygonTexture_* p);
SECAPI CTextureObject_* CBrushPolygonTexture_bpt_toTexture(CBrushPolygonTexture_* p);
SECAPI CMappingDefinition_* CBrushPolygonTexture_bpt_mdMapping(CBrushPolygonTexture_* p);
SECAPI UBYTE* CBrushPolygonTexture_bpt_ubScroll(CBrushPolygonTexture_* p);
SECAPI UBYTE* CBrushPolygonTexture_bpt_ubBlend(CBrushPolygonTexture_* p); 
SECAPI UBYTE* CBrushPolygonTexture_bpt_ubFlags(CBrushPolygonTexture_* p); 
SECAPI UBYTE* CBrushPolygonTexture_bpt_ubDummy(CBrushPolygonTexture_* p); 
SECAPI COLOR* CBrushPolygonTexture_bpt_colColor(CBrushPolygonTexture_* p);

#ifndef SERIOUSENGINECAPI_EXPORTS
// a polygon in brush
// Flags
// flags 0-2 are used by CObjectPolygon, flags 3-31 are used by CBrushPolygon
// OPOF_PORTAL  // set if the polygon is a portal - used for CSG in CObject3D
#define BPOF_DOUBLESIDED            (1UL<< 3)    // polygon is renderable from both sides
#define BPOF_SHOOTTHRU              (1UL<< 4)    // physical ray-casts can pass through the polygon, even if it is not passable
#define BPOF_TRANSPARENT            (1UL<< 5)    // render with alpha-testing and write z-buffer
#define BPOF_RENDERASPORTAL         (1UL<< 6)    // internal used in rendering
#define BPOF_STAIRS                 (1UL<< 7)    // polygon is part of a staircase
#define BPOF_SELECTED               (1UL<< 8)    // set if the polygon is selected
#define BPOF_SELECTEDFORCSG         (1UL<< 9)    // set if the polygon is selected for CSG
#define BPOF_WASPORTAL              (1UL<<10)    // set if it was portal before CSG
#define BPOF_PASSABLE               (1UL<<11)    // set if not a physical barrier
#define BPOF_DOESNOTCASTSHADOW      (1UL<<12)    // set to make a wall passable for light beams
#define BPOF_WASBRUSHPOLYGON        (1UL<<13)    // this polygon was brush polygon before (not just created)
#define BPOF_FULLBRIGHT             (1UL<<14)    // set to make a wall full-bright
#define BPOF_TRANSLUCENT            (1UL<<15)    // set for translucent portals
#define BPOF_HASDIRECTIONALLIGHT    (1UL<<16)    // set if polygon accepts directional lights
#define BPOF_INVISIBLE              (1UL<<17)    // set if the polygon is ignored during rendering
#define BPOF_DARKCORNERS            (1UL<<18)    // polygons will have dark corners (here was gouraud!!!!)
#define BPOF_RENDERTRANSLUCENT      (1UL<<19)    // internal used in rendering
#define BPOF_NOPLANEDIFFUSION       (1UL<<20)    // plane normal is ignored when shading
#define BPOF_DETAILPOLYGON          (1UL<<21)    // not used for visibility determination
#define BPOF_PORTAL                 (1UL<<22)    // should behave like a portal (not same as OPOF_PORTAL)
#define BPOF_ACCURATESHADOWS        (1UL<<23)    // shadows are calculated for each mip-map independently
#define BPOF_HASDIRECTIONALAMBIENT  (1UL<<24)    // set if polygon accepts directional ambient
#define BPOF_MARKEDLAYER            (1UL<<25)    // used in FindShadowLayers()
#define BPOF_DYNAMICLIGHTSONLY      (1UL<<26)    // only dynamic lights used in shadow map
#define BPOF_DOESNOTRECEIVESHADOW   (1UL<<27)    // has lightmap, but no shadows on it
#define BPOF_NODYNAMICLIGHTS        (1UL<<28)    // dynamic lights do not influence it
#define BPOF_INVALIDTRIANGLES       (1UL<<29)    // polygons could not be triangulated well
#define BPOF_OCCLUDER               (1UL<<30)    // occluder polygon
#endif

SECAPI CBrushPolygonProperties_* CBrushPolygonProperties_new();
SECAPI CBrushPolygonProperties_* CBrushPolygonProperties_clone(const CBrushPolygonProperties_* p);
SECAPI void CBrushPolygonProperties_delete(CBrushPolygonProperties_* p);
SECAPI void CBrushPolygonProperties_copy(CBrushPolygonProperties_* a, const CBrushPolygonProperties_* b);SECAPI UBYTE* CBrushPolygonProperties_bpp_ubSurfaceType(CBrushPolygonProperties_* p);
SECAPI UBYTE* CBrushPolygonProperties_bpp_ubIlluminationType(CBrushPolygonProperties_* p);
SECAPI UBYTE* CBrushPolygonProperties_bpp_ubShadowBlend(CBrushPolygonProperties_* p);
SECAPI UBYTE* CBrushPolygonProperties_bpp_ubMirrorType(CBrushPolygonProperties_* p);
SECAPI UBYTE* CBrushPolygonProperties_bpp_ubGradientType(CBrushPolygonProperties_* p);
SECAPI SBYTE* CBrushPolygonProperties_bpp_sbShadowClusterSize(CBrushPolygonProperties_* p);
SECAPI UWORD* CBrushPolygonProperties_bpp_uwPretenderDistance(CBrushPolygonProperties_* p);

#ifdef __cplusplus
}
#endif

#endif
