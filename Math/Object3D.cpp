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

#include "Object3D.h"

CObjectVertex_* CObjectVertex_new()
{
  return (CObjectVertex_*)(new CObjectVertex());
}

CObjectVertex_* CObjectVertex_new_value(const DOUBLE3D_* p)
{
  return (CObjectVertex_*)(new CObjectVertex(*((const DOUBLE3D*)p)));
}

CObjectVertex_* CObjectVertex_clone(const CObjectVertex_* p)
{
  return (CObjectVertex_*)(new CObjectVertex(*((const CObjectVertex*)p)));
}

void CObjectVertex_delete(CObjectVertex_* p)
{
  delete ((CObjectVertex*)p);
}

void CObjectVertex_copy(CObjectVertex_* a, const CObjectVertex_* b)
{
  *((CObjectVertex*)a) = *((const CObjectVertex*)b);
}

DOUBLE3D_* CObjectVertex_value(CObjectVertex_* p)
{
  CObjectVertex& v = *((CObjectVertex*)p);
  return (DOUBLE3D_*)(&static_cast<DOUBLE3D&>(v));
}

CObjectVertex_** CObjectVertex_ovx_Remap(CObjectVertex_* p)
{
  CObjectVertex& v = *((CObjectVertex*)p);
  return (CObjectVertex_**)(&v.ovx_Remap);
}

ULONG* CObjectVertex_ovx_Tag(CObjectVertex_* p)
{
  CObjectVertex& v = *((CObjectVertex*)p);
  return &v.ovx_Tag;
}

INDEX* CObjectVertex_ovx_Index(CObjectVertex_* p)
{
  CObjectVertex& v = *((CObjectVertex*)p);
  return &v.ovx_Index;
}

ULONG* CObjectVertex_ovx_ulFlags(CObjectVertex_* p)
{
  CObjectVertex& v = *((CObjectVertex*)p);
  return &v.ovx_ulFlags;
}

CObjectPlane_* CObjectPlane_new()
{
  return (CObjectPlane_*)(new CObjectPlane());
}

CObjectPlane_* CObjectPlane_new_value(const DOUBLEplane3D_* p)
{
  return (CObjectPlane_*)(new CObjectPlane(*((const DOUBLEplane3D*)p)));
}

CObjectPlane_* CObjectPlane_clone(const CObjectPlane_* p)
{
  return (CObjectPlane_*)(new CObjectPlane(*((const CObjectPlane*)p)));
}

void CObjectPlane_delete(CObjectPlane_* p)
{
  delete ((CObjectPlane*)p);
}

void CObjectPlane_copy(CObjectPlane_* a, const CObjectPlane_* b)
{
  *((CObjectPlane*)a) = *((const CObjectPlane*)b);
}

DOUBLEplane3D_* CObjectPlane_value(CObjectPlane_* p)
{
  CObjectPlane& v = *((CObjectPlane*)p);
  return (DOUBLEplane3D_*)(&static_cast<DOUBLEplane3D&>(v));
}

CObjectPlane_** CObjectPlane_opl_Remap(CObjectPlane_* p)
{
  CObjectPlane& v = *((CObjectPlane*)p);
  return (CObjectPlane_**)(&v.opl_Remap);
}

ULONG* CObjectPlane_opl_Tag(CObjectPlane_* p)
{
  CObjectPlane& v = *((CObjectPlane*)p);
  return &v.opl_Tag;
}

INDEX* CObjectPlane_opl_Index(CObjectPlane_* p)
{
  CObjectPlane& v = *((CObjectPlane*)p);
  return &v.opl_Index;
}

CObjectEdge_* CObjectEdge_new()
{
  return (CObjectEdge_*)(new CObjectEdge());
}

CObjectEdge_* CObjectEdge_new_v(CObjectVertex_* v0, CObjectVertex_* v1)
{
  return (CObjectEdge_*)(new CObjectEdge(*((CObjectVertex*)v0), *((CObjectVertex*)v1)));
}

CObjectEdge_* CObjectEdge_clone(const CObjectEdge_* p)
{
  return (CObjectEdge_*)(new CObjectEdge(*((const CObjectEdge*)p)));
}

void CObjectEdge_delete(CObjectEdge_* p)
{
  delete ((CObjectEdge*)p);
}

void CObjectEdge_copy(CObjectEdge_* a, const CObjectEdge_* b)
{
  *((CObjectEdge*)a) = *((const CObjectEdge*)b);
}

ULONG* CObjectEdge_oed_Tag(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (ULONG*)(&o.oed_Tag);
}

INDEX* CObjectEdge_oed_Index(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (INDEX*)(&o.oed_Index);
}

CObjectEdge_** CObjectEdge_optimize_oed_Remap(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CObjectEdge_**)(&o.optimize.oed_Remap);
}

CObjectEdge_** CObjectEdge_optimize_oed_InverseEdge(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CObjectEdge_**)(&o.optimize.oed_InverseEdge);
}

CObjectEdge_** CObjectEdge_colinear1_oed_FirstChild(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CObjectEdge_**)(&o.colinear1.oed_FirstChild);
}

CObjectEdge_** CObjectEdge_colinear1_oed_NextSibling(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CObjectEdge_**)(&o.colinear1.oed_NextSibling);
}

CEdgeEx_** CObjectEdge_colinear2_oed_pedxLine(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CEdgeEx_**)(&o.colinear2.oed_pedxLine);
}

CObjectVertex_** CObjectEdge_oed_Vertex0(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CObjectVertex_**)(&o.oed_Vertex0);
}

CObjectVertex_** CObjectEdge_oed_Vertex1(CObjectEdge_* p)
{
  CObjectEdge& o = *((CObjectEdge*)p);
  return (CObjectVertex_**)(&o.oed_Vertex1);
}

CObjectMaterial_* CObjectMaterial_new()
{
  return (CObjectMaterial_*)(new CObjectMaterial());
}

CObjectMaterial_* CObjectMaterial_new_s(const CTString_* n)
{
  return (CObjectMaterial_*)(new CObjectMaterial(*((CTString*)n)));
}

CObjectMaterial_* CObjectMaterial_clone(const CObjectMaterial_* p)
{
  return (CObjectMaterial_*)(new CObjectMaterial(*((const CObjectMaterial*)p)));
}

void CObjectMaterial_delete(CObjectMaterial_* p)
{
  delete ((CObjectMaterial*)p);
}

void CObjectMaterial_copy(CObjectMaterial_* a, const CObjectMaterial_* b)
{
  *((CObjectMaterial*)a) = *((const CObjectMaterial*)b);
}

ULONG* CObjectMaterial_omt_Tag(CObjectMaterial_* p)
{
  CObjectMaterial& o = *((CObjectMaterial*)p);
  return (ULONG*)(&o.omt_Tag);
}

INDEX* CObjectMaterial_omt_Index(CObjectMaterial_* p)
{
  CObjectMaterial& o = *((CObjectMaterial*)p);
  return (INDEX*)(&o.omt_Index);
}

CTString_* CObjectMaterial_omt_Name(CObjectMaterial_* p)
{
  CObjectMaterial& o = *((CObjectMaterial*)p);
  return (CTString_*)(&o.omt_Name);
}

CTString_* CObjectMaterial_omt_strName2(CObjectMaterial_* p)
{
  CObjectMaterial& o = *((CObjectMaterial*)p);
  return (CTString_*)(&o.omt_strName2);
}

CTString_* CObjectMaterial_omt_strName3(CObjectMaterial_* p)
{
  CObjectMaterial& o = *((CObjectMaterial*)p);
  return (CTString_*)(&o.omt_strName3);
}

COLOR* CObjectMaterial_omt_Color(CObjectMaterial_* p)
{
  CObjectMaterial& o = *((CObjectMaterial*)p);
  return (COLOR*)(&o.omt_Color);
}

CObjectPolygonEdge_* CObjectPolygonEdge_new()
{
  return (CObjectPolygonEdge_*)(new CObjectPolygonEdge());
}

CObjectPolygonEdge_* CObjectPolygonEdge_new_edge(CObjectEdge_* e)
{
  return (CObjectPolygonEdge_*)(new CObjectPolygonEdge((CObjectEdge*)e));
}

CObjectPolygonEdge_* CObjectPolygonEdge_new_edge_rev(CObjectEdge_* e, BOOL reverse)
{
  return (CObjectPolygonEdge_*)(new CObjectPolygonEdge((CObjectEdge*)e, reverse));
}

CObjectPolygonEdge_* CObjectPolygonEdge_clone(const CObjectPolygonEdge_* p)
{
  return (CObjectPolygonEdge_*)(new CObjectPolygonEdge(*((const CObjectPolygonEdge*)p)));
}

void CObjectPolygonEdge_delete(CObjectPolygonEdge_* p)
{
  delete ((CObjectPolygonEdge*)p);
}

void CObjectPolygonEdge_copy(CObjectPolygonEdge_* a, const CObjectPolygonEdge_* b)
{
  *((CObjectPolygonEdge*)a) = *((const CObjectPolygonEdge*)b);
}

void CObjectPolygonEdge_GetVertices(CObjectPolygonEdge_* p, CObjectVertex_** povxStart, CObjectVertex_** povxEnd)
{
  ((CObjectPolygonEdge*)p)->GetVertices(*((CObjectVertex**)povxStart), *((CObjectVertex**)povxEnd));
}

CObjectEdge_** CObjectPolygonEdge_ope_Edge(CObjectPolygonEdge_* p)
{
  CObjectPolygonEdge& o = *((CObjectPolygonEdge*)p);
  return (CObjectEdge_**)(&o.ope_Edge);
}

BOOL* CObjectPolygonEdge_ope_Backward(CObjectPolygonEdge_* p)
{
  CObjectPolygonEdge& o = *((CObjectPolygonEdge*)p);
  return (BOOL*)(&o.ope_Backward);
}

CObjectPolygon_* CObjectPolygon_new()
{
  return (CObjectPolygon_*)(new CObjectPolygon());
}

void CObjectPolygon_delete(CObjectPolygon_* p)
{
  delete ((CObjectPolygon*)p);
}
ULONG* CObjectPolygon_opo_Tag(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (ULONG*)(&o.opo_Tag);
}

INDEX* CObjectPolygon_opo_Index(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (INDEX*)(&o.opo_Index);
}

CObjectPlane_** CObjectPolygon_opo_Plane(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (CObjectPlane_**)(&o.opo_Plane);
}

CDynamicArray_CObjectPolygonEdge_* CObjectPolygon_opo_PolygonEdges(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (CDynamicArray_CObjectPolygonEdge_*)(&o.opo_PolygonEdges);
}

CObjectMaterial_** CObjectPolygon_opo_Material(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (CObjectMaterial_**)(&o.opo_Material);
}

ULONG* CObjectPolygon_opo_ulFlags(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (ULONG*)(&o.opo_ulFlags);
}

COLOR* CObjectPolygon_opo_colorColor(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (COLOR*)(&o.opo_colorColor);
}

CMappingDefinition_* CObjectPolygon_opo_amdMappings(CObjectPolygon_* p, INDEX i)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (CMappingDefinition_*)(&o.opo_amdMappings[i]);
}

UBYTE* CObjectPolygon_opo_ubUserData(CObjectPolygon_* p)
{
  CObjectPolygon& o = *((CObjectPolygon*)p);
  return (UBYTE*)(&o.opo_ubUserData[0]);
}

void CObjectPolygon_JoinContinuingEdges(CObjectPolygon_* p, CDynamicArray_CObjectEdge_* oedEdges)
{
  ((CObjectPolygon*)p)->JoinContinuingEdges(*((CDynamicArray<CObjectEdge>*)oedEdges));
}

void CObjectPolygon_RemoveRedundantEdges(CObjectPolygon_* p)
{
  ((CObjectPolygon*)p)->RemoveRedundantEdges();
}

void CObjectPolygon_RemoveMarkedEdges(CObjectPolygon_* p, INDEX ctNonMarkedEdges)
{
  ((CObjectPolygon*)p)->RemoveMarkedEdges(ctNonMarkedEdges);
}

void CObjectPolygon_RemoveDummyEdgeReferences(CObjectPolygon_* p)
{
  ((CObjectPolygon*)p)->RemoveDummyEdgeReferences();
}

CObjectSector_* CObjectSector_new()
{
  return (CObjectSector_*)(new CObjectSector());
}

CObjectSector_* CObjectSector_clone(CObjectSector_* p)
{
  return (CObjectSector_*)(new CObjectSector(*((CObjectSector*)p)));
}

void CObjectSector_delete(CObjectSector_* p)
{
  delete ((CObjectSector*)p);
}

void CObjectSector_copy(CObjectSector_* a, CObjectSector_* b)
{
  *((CObjectSector*)a) = *((CObjectSector*)b);
}

CObjectPolygon_* CObjectSector_CreatePolygon_i(CObjectSector_* p, INDEX ctVertices, INDEX* aivVertices, CObjectMaterial_* omaMaterial, ULONG ulFlags, BOOL bReverse)
{
  return (CObjectPolygon_*)(((CObjectSector*)p)->CreatePolygon(ctVertices, aivVertices, *((CObjectMaterial*)omaMaterial), ulFlags, bReverse));
}

CObjectPolygon_* CObjectSector_CreatePolygon(CObjectSector_* p, INDEX ctVertices, DOUBLE3D_* avVertices, CObjectMaterial_* omaMaterial, ULONG ulFlags, BOOL bReverse)
{
  return (CObjectPolygon_*)(((CObjectSector*)p)->CreatePolygon(ctVertices, (DOUBLE3D*)avVertices, *((CObjectMaterial*)omaMaterial), ulFlags, bReverse));
}

CDynamicArray_CObjectVertex_* CObjectSector_osc_aovxVertices(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (CDynamicArray_CObjectVertex_*)(&o.osc_aovxVertices);
}

CDynamicArray_CObjectPlane_* CObjectSector_osc_aoplPlanes(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (CDynamicArray_CObjectPlane_*)(&o.osc_aoplPlanes);
}

CDynamicArray_CObjectMaterial_* CObjectSector_osc_aomtMaterials(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (CDynamicArray_CObjectMaterial_*)(&o.osc_aomtMaterials);
}

CDynamicArray_CObjectEdge_* CObjectSector_osc_aoedEdges(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (CDynamicArray_CObjectEdge_*)(&o.osc_aoedEdges);
}

CDynamicArray_CObjectPolygon_* CObjectSector_osc_aopoPolygons(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (CDynamicArray_CObjectPolygon_*)(&o.osc_aopoPolygons);
}

ULONG* CObjectSector_osc_Tag(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (ULONG*)(&o.osc_Tag);
}

INDEX* CObjectSector_osc_Index(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (INDEX*)(&o.osc_Index);
}

COLOR* CObjectSector_osc_colColor(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (COLOR*)(&o.osc_colColor);
}

COLOR* CObjectSector_osc_colAmbient(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (COLOR*)(&o.osc_colAmbient);
}

ULONG* CObjectSector_osc_ulFlags(CObjectSector_* p, INDEX i)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (ULONG*)(&o.osc_ulFlags[i]);
}

CTString_* CObjectSector_osc_strName(CObjectSector_* p)
{
  CObjectSector& o = *((CObjectSector*)p);
  return (CTString_*)(&o.osc_strName);
}

CEdgeEx_* CEdgeEx_new()
{
  return (CEdgeEx_*)(new CEdgeEx());
}

CEdgeEx_* CEdgeEx_clone(const CEdgeEx_* p)
{
  return (CEdgeEx_*)(new CEdgeEx(*((const CEdgeEx*)p)));
}

void CEdgeEx_delete(CEdgeEx_* p)
{
  delete ((CEdgeEx*)p);
}

void CEdgeEx_copy(CEdgeEx_* a, const CEdgeEx_* b)
{
  *((CEdgeEx*)a) = *((const CEdgeEx*)b);
}

CObjectEdge_** CEdgeEx_edx_poedEdge(CEdgeEx_* p)
{
  CEdgeEx& o = *((CEdgeEx*)p);
  return (CObjectEdge_**)(&o.edx_poedEdge);
}

DOUBLE3D_* CEdgeEx_edx_vDirection(CEdgeEx_* p)
{
  CEdgeEx& o = *((CEdgeEx*)p);
  return (DOUBLE3D_*)(&o.edx_vDirection);
}

DOUBLE3D_* CEdgeEx_edx_vReferencePoint(CEdgeEx_* p)
{
  CEdgeEx& o = *((CEdgeEx*)p);
  return (DOUBLE3D_*)(&o.edx_vReferencePoint);
}

BOOL* CEdgeEx_edx_bReverse(CEdgeEx_* p)
{
  CEdgeEx& o = *((CEdgeEx*)p);
  return (BOOL*)(&o.edx_bReverse);
}

CObject3D_* CObject3D_new()
{
  return (CObject3D_*)(new CObject3D());
}

CObject3D_* CObject3D_clone(CObject3D_* p)
{
  return (CObject3D_*)(new CObject3D(*((CObject3D*)p)));
}

void CObject3D_delete(CObject3D_* p)
{
  delete ((CObject3D*)p);
}

void CObject3D_copy(CObject3D_* a, CObject3D_* b)
{
  *((CObject3D*)a) = *((CObject3D*)b);
}

CDynamicArray_CObjectSector_* CObject3D_ob_aoscSectors(CObject3D_* p)
{
  CObject3D& o = *((CObject3D*)p);
  return (CDynamicArray_CObjectSector_*)(&o.ob_aoscSectors);
}

void CObject3D_RemoveEmptySectors(CObject3D_* p)
{
  ((CObject3D*)p)->RemoveEmptySectors();
}

void CObject3D_CreateSectorIndices(CObject3D_* p)
{
  ((CObject3D*)p)->CreateSectorIndices();
}

void CObject3D_Clear(CObject3D_* p)
{
  ((CObject3D*)p)->Clear();
}

void CObject3D_Optimize(CObject3D_* p)
{
  ((CObject3D*)p)->Optimize();
}

BOOL CObject3D_ArePolygonsPlanar(CObject3D_* p)
{
  return ((CObject3D*)p)->ArePolygonsPlanar();
}

void CObject3D_CreateSectorBSPs(CObject3D_* p)
{
  ((CObject3D*)p)->CreateSectorBSPs();
}

void CObject3D_Project(CObject3D_* p, CSimpleProjection3D_DOUBLE_* pr)
{
  ((CObject3D*)p)->Project(*((CSimpleProjection3D_DOUBLE*)pr));
}

void CObject3D_Inverse(CObject3D_* p)
{
  ((CObject3D*)p)->Inverse();
}

void CObject3D_RecalculatePlanes(CObject3D_* p)
{
  ((CObject3D*)p)->RecalculatePlanes();
}

void CObject3D_CSGAddRooms(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGAddRooms(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_CSGAddMaterial(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGAddMaterial(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_CSGAddMaterialReverse(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGAddMaterialReverse(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_CSGRemoveMaterial(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGRemoveMaterial(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_CSGSplitSectors(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGSplitSectors(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_CSGJoinSectors(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGJoinSectors(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_CSGSplitPolygons(CObject3D_* p, CObject3D_* obA, CObject3D_* obB)
{
  ((CObject3D*)p)->CSGSplitPolygons(*((CObject3D*)obA), *((CObject3D*)obB));
}

void CObject3D_TurnPortalsToWalls(CObject3D_* p)
{
  ((CObject3D*)p)->TurnPortalsToWalls();
}

void CObject3D_GetBoundingBox(CObject3D_* p, DOUBLEaabbox3D_* boxObject)
{
  ((CObject3D*)p)->GetBoundingBox(*((DOUBLEaabbox3D*)boxObject));
}

void CObject3D_DebugDump(CObject3D_* p)
{
  ((CObject3D*)p)->DebugDump();
}
