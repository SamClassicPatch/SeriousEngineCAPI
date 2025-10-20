#ifndef SECAPI_MATH_OBJECT3D_H
#define SECAPI_MATH_OBJECT3D_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CObjectVertex_* CObjectVertex_new();
SECAPI CObjectVertex_* CObjectVertex_new_value(const DOUBLE3D_* p);
SECAPI CObjectVertex_* CObjectVertex_clone(const CObjectVertex_* p);
SECAPI void CObjectVertex_delete(CObjectVertex_* p);
SECAPI void CObjectVertex_copy(CObjectVertex_* a, const CObjectVertex_* b);
SECAPI DOUBLE3D_* CObjectVertex_value(CObjectVertex_* p);
SECAPI CObjectVertex_** CObjectVertex_ovx_Remap(CObjectVertex_* p);
SECAPI ULONG* CObjectVertex_ovx_Tag(CObjectVertex_* p);
SECAPI INDEX* CObjectVertex_ovx_Index(CObjectVertex_* p);
SECAPI ULONG* CObjectVertex_ovx_ulFlags(CObjectVertex_* p);

SECAPI CObjectPlane_* CObjectPlane_new();
SECAPI CObjectPlane_* CObjectPlane_new_value(const DOUBLEplane3D_* p);
SECAPI CObjectPlane_* CObjectPlane_clone(const CObjectPlane_* p);
SECAPI void CObjectPlane_delete(CObjectPlane_* p);
SECAPI void CObjectPlane_copy(CObjectPlane_* a, const CObjectPlane_* b);
SECAPI DOUBLEplane3D_* CObjectPlane_value(CObjectPlane_* p);
SECAPI CObjectPlane_** CObjectPlane_opl_Remap(CObjectPlane_* p);
SECAPI ULONG* CObjectPlane_opl_Tag(CObjectPlane_* p);
SECAPI INDEX* CObjectPlane_opl_Index(CObjectPlane_* p);

SECAPI CObjectEdge_* CObjectEdge_new();
SECAPI CObjectEdge_* CObjectEdge_new_v(CObjectVertex_* v0, CObjectVertex_* v1);
SECAPI CObjectEdge_* CObjectEdge_clone(const CObjectEdge_* p);
SECAPI void CObjectEdge_delete(CObjectEdge_* p);
SECAPI void CObjectEdge_copy(CObjectEdge_* a, const CObjectEdge_* b);
SECAPI ULONG* CObjectEdge_oed_Tag(CObjectEdge_* p);
SECAPI INDEX* CObjectEdge_oed_Index(CObjectEdge_* p);
SECAPI CObjectEdge_** CObjectEdge_optimize_oed_Remap(CObjectEdge_* p);
SECAPI CObjectEdge_** CObjectEdge_optimize_oed_InverseEdge(CObjectEdge_* p);
SECAPI CObjectEdge_** CObjectEdge_colinear1_oed_FirstChild(CObjectEdge_* p);
SECAPI CObjectEdge_** CObjectEdge_colinear1_oed_NextSibling(CObjectEdge_* p);
SECAPI CEdgeEx_** CObjectEdge_colinear2_oed_pedxLine(CObjectEdge_* p);
SECAPI CObjectVertex_** CObjectEdge_oed_Vertex0(CObjectEdge_* p);
SECAPI CObjectVertex_** CObjectEdge_oed_Vertex1(CObjectEdge_* p);

SECAPI CObjectMaterial_* CObjectMaterial_new();
SECAPI CObjectMaterial_* CObjectMaterial_new_s(const CTString_* n);
SECAPI CObjectMaterial_* CObjectMaterial_clone(const CObjectMaterial_* p);
SECAPI void CObjectMaterial_delete(CObjectMaterial_* p);
SECAPI void CObjectMaterial_copy(CObjectMaterial_* a, const CObjectMaterial_* b);
SECAPI ULONG* CObjectMaterial_omt_Tag(CObjectMaterial_* p);
SECAPI INDEX* CObjectMaterial_omt_Index(CObjectMaterial_* p);
SECAPI CTString_* CObjectMaterial_omt_Name(CObjectMaterial_* p);
SECAPI CTString_* CObjectMaterial_omt_strName2(CObjectMaterial_* p);
SECAPI CTString_* CObjectMaterial_omt_strName3(CObjectMaterial_* p);
SECAPI COLOR* CObjectMaterial_omt_Color(CObjectMaterial_* p);

SECAPI CObjectPolygonEdge_* CObjectPolygonEdge_new();
SECAPI CObjectPolygonEdge_* CObjectPolygonEdge_new_edge(CObjectEdge_* e);
SECAPI CObjectPolygonEdge_* CObjectPolygonEdge_new_edge_rev(CObjectEdge_* e, BOOL reverse);
SECAPI CObjectPolygonEdge_* CObjectPolygonEdge_clone(const CObjectPolygonEdge_* p);
SECAPI void CObjectPolygonEdge_delete(CObjectPolygonEdge_* p);
SECAPI void CObjectPolygonEdge_copy(CObjectPolygonEdge_* a, const CObjectPolygonEdge_* b);
SECAPI void CObjectPolygonEdge_GetVertices(CObjectPolygonEdge_* p, CObjectVertex_** povxStart, CObjectVertex_** povxEnd);
SECAPI CObjectEdge_** CObjectPolygonEdge_ope_Edge(CObjectPolygonEdge_* p);
SECAPI BOOL* CObjectPolygonEdge_ope_Backward(CObjectPolygonEdge_* p);

#ifndef SERIOUSENGINECAPI_EXPORTS
// flags 0-2 are used by CObjectPolygon, flags 3-31 are reserved for custom formats
#define OPOF_PORTAL       (1L<<0)         // set if the polygon is portal
#define OPOF_IGNOREDBYCSG (1L<<1)         // set if the polygon is ignored when doing CSG
#define OPO_MAXUSERDATA 64
#endif

SECAPI CObjectPolygon_* CObjectPolygon_new();
SECAPI void CObjectPolygon_delete(CObjectPolygon_* p);
SECAPI ULONG* CObjectPolygon_opo_Tag(CObjectPolygon_* p);
SECAPI INDEX* CObjectPolygon_opo_Index(CObjectPolygon_* p);
SECAPI CObjectPlane_** CObjectPolygon_opo_Plane(CObjectPolygon_* p);
SECAPI CDynamicArray_CObjectPolygonEdge_* CObjectPolygon_opo_PolygonEdges(CObjectPolygon_* p);
SECAPI CObjectMaterial_** CObjectPolygon_opo_Material(CObjectPolygon_* p);
SECAPI ULONG* CObjectPolygon_opo_ulFlags(CObjectPolygon_* p);
SECAPI COLOR* CObjectPolygon_opo_colorColor(CObjectPolygon_* p);
SECAPI CMappingDefinition_* CObjectPolygon_opo_amdMappings(CObjectPolygon_* p, INDEX i);
SECAPI UBYTE* CObjectPolygon_opo_ubUserData(CObjectPolygon_* p);
SECAPI void CObjectPolygon_JoinContinuingEdges(CObjectPolygon_* p, CDynamicArray_CObjectEdge_* oedEdges);
SECAPI void CObjectPolygon_RemoveRedundantEdges(CObjectPolygon_* p);
SECAPI void CObjectPolygon_RemoveMarkedEdges(CObjectPolygon_* p, INDEX ctNonMarkedEdges);
SECAPI void CObjectPolygon_RemoveDummyEdgeReferences(CObjectPolygon_* p);

SECAPI CObjectSector_* CObjectSector_new();
SECAPI CObjectSector_* CObjectSector_clone(CObjectSector_* p);
SECAPI void CObjectSector_delete(CObjectSector_* p);
SECAPI void CObjectSector_copy(CObjectSector_* a, CObjectSector_* b);
SECAPI CObjectPolygon_* CObjectSector_CreatePolygon_i(CObjectSector_* p, INDEX ctVertices, INDEX* aivVertices, CObjectMaterial_* omaMaterial, ULONG ulFlags, BOOL bReverse);
SECAPI CObjectPolygon_* CObjectSector_CreatePolygon(CObjectSector_* p, INDEX ctVertices, DOUBLE3D_* avVertices, CObjectMaterial_* omaMaterial, ULONG ulFlags, BOOL bReverse);
SECAPI CDynamicArray_CObjectVertex_* CObjectSector_osc_aovxVertices(CObjectSector_* p);
SECAPI CDynamicArray_CObjectPlane_* CObjectSector_osc_aoplPlanes(CObjectSector_* p);
SECAPI CDynamicArray_CObjectMaterial_* CObjectSector_osc_aomtMaterials(CObjectSector_* p);
SECAPI CDynamicArray_CObjectEdge_* CObjectSector_osc_aoedEdges(CObjectSector_* p);
SECAPI CDynamicArray_CObjectPolygon_* CObjectSector_osc_aopoPolygons(CObjectSector_* p);
SECAPI ULONG* CObjectSector_osc_Tag(CObjectSector_* p);
SECAPI INDEX* CObjectSector_osc_Index(CObjectSector_* p);
SECAPI COLOR* CObjectSector_osc_colColor(CObjectSector_* p);
SECAPI COLOR* CObjectSector_osc_colAmbient(CObjectSector_* p);
SECAPI ULONG* CObjectSector_osc_ulFlags(CObjectSector_* p, INDEX i);
SECAPI CTString_* CObjectSector_osc_strName(CObjectSector_* p);

SECAPI CEdgeEx_* CEdgeEx_new();
SECAPI CEdgeEx_* CEdgeEx_clone(const CEdgeEx_* p);
SECAPI void CEdgeEx_delete(CEdgeEx_* p);
SECAPI void CEdgeEx_copy(CEdgeEx_* a, const CEdgeEx_* b);
SECAPI CObjectEdge_** CEdgeEx_edx_poedEdge(CEdgeEx_* p);
SECAPI DOUBLE3D_* CEdgeEx_edx_vDirection(CEdgeEx_* p);
SECAPI DOUBLE3D_* CEdgeEx_edx_vReferencePoint(CEdgeEx_* p);
SECAPI BOOL* CEdgeEx_edx_bReverse(CEdgeEx_* p);

SECAPI CObject3D_* CObject3D_new();
SECAPI CObject3D_* CObject3D_clone(CObject3D_* p);
SECAPI void CObject3D_delete(CObject3D_* p);
SECAPI void CObject3D_copy(CObject3D_* a, CObject3D_* b);
SECAPI CDynamicArray_CObjectSector_* CObject3D_ob_aoscSectors(CObject3D_* p);
SECAPI void CObject3D_RemoveEmptySectors(CObject3D_* p);
SECAPI void CObject3D_CreateSectorIndices(CObject3D_* p);
SECAPI void CObject3D_Clear(CObject3D_* p);
SECAPI void CObject3D_Optimize(CObject3D_* p);
SECAPI BOOL CObject3D_ArePolygonsPlanar(CObject3D_* p);
SECAPI void CObject3D_CreateSectorBSPs(CObject3D_* p);
SECAPI void CObject3D_Project(CObject3D_* p, CSimpleProjection3D_DOUBLE_* pr);
SECAPI void CObject3D_Inverse(CObject3D_* p);
SECAPI void CObject3D_RecalculatePlanes(CObject3D_* p);
SECAPI void CObject3D_CSGAddRooms(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_CSGAddMaterial(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_CSGAddMaterialReverse(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_CSGRemoveMaterial(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_CSGSplitSectors(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_CSGJoinSectors(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_CSGSplitPolygons(CObject3D_* p, CObject3D_* obA, CObject3D_* obB);
SECAPI void CObject3D_TurnPortalsToWalls(CObject3D_* p);
SECAPI void CObject3D_GetBoundingBox(CObject3D_* p, DOUBLEaabbox3D_* boxObject);
SECAPI void CObject3D_DebugDump(CObject3D_* p);

#ifdef __cplusplus
}
#endif

#endif
