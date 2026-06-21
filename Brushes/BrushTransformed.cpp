#include "BrushTransformed.h"

FLOAT3D_* CWorkingVertex_wvx_vRelative(CWorkingVertex_* p)
{
  CWorkingVertex& m = *((CWorkingVertex*)p);
  return (FLOAT3D_*)(&(m.wvx_vRelative));
}

FLOATplane3D_* CWorkingPlane_wpl_plRelative(CWorkingPlane_* p)
{
  CWorkingPlane& m = *((CWorkingPlane*)p);
  return (FLOATplane3D_*)(&(m.wpl_plRelative));
}

CMappingVectors_* CWorkingPlane_wpl_mvRelative(CWorkingPlane_* p)
{
  CWorkingPlane& m = *((CWorkingPlane*)p);
  return (CMappingVectors_*)(&(m.wpl_mvRelative));
}

FLOATplane3D_* CWorkingPlane_wpl_plView(CWorkingPlane_* p)
{
  CWorkingPlane& m = *((CWorkingPlane*)p);
  return (FLOATplane3D_*)(&(m.wpl_plView));
}

CMappingVectors_* CWorkingPlane_wpl_mvView(CWorkingPlane_* p)
{
  CWorkingPlane& m = *((CWorkingPlane*)p);
  return (CMappingVectors_*)(&(m.wpl_mvView));
}

CPlanarGradients_* CWorkingPlane_wpl_pgOoK(CWorkingPlane_* p)
{
  CWorkingPlane& m = *((CWorkingPlane*)p);
  return (CPlanarGradients_*)(&(m.wpl_pgOoK));
}

BOOL* CWorkingPlane_wpl_bVisible(CWorkingPlane_* p)
{
  CWorkingPlane& m = *((CWorkingPlane*)p);
  return (BOOL*)(&(m.wpl_bVisible));
}

INDEX* CWorkingEdge_wed_iwvx0(CWorkingEdge_* p)
{
  CWorkingEdge& m = *((CWorkingEdge*)p);
  return (INDEX*)(&(m.wed_iwvx0));
}

INDEX* CWorkingEdge_wed_iwvx1(CWorkingEdge_* p)
{
  CWorkingEdge& m = *((CWorkingEdge*)p);
  return (INDEX*)(&(m.wed_iwvx1));
}
