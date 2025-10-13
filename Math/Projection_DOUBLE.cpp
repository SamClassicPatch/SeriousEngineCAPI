#include "Projection_DOUBLE.h"

CSimpleProjection3D_DOUBLE_* CSimpleProjection3D_DOUBLE_new()
{
  return (CSimpleProjection3D_DOUBLE_*)(new CSimpleProjection3D_DOUBLE());
}

CSimpleProjection3D_DOUBLE_* CSimpleProjection3D_DOUBLE_clone(const CSimpleProjection3D_DOUBLE_* p)
{
  return (CSimpleProjection3D_DOUBLE_*)(new CSimpleProjection3D_DOUBLE(*((const CSimpleProjection3D_DOUBLE*)p)));
}

void CSimpleProjection3D_DOUBLE_delete(CSimpleProjection3D_DOUBLE_* p)
{
  delete ((CSimpleProjection3D_DOUBLE*)p);
}

void CSimpleProjection3D_DOUBLE_copy(CSimpleProjection3D_DOUBLE_* a, const CSimpleProjection3D_DOUBLE_* b)
{
  *((CSimpleProjection3D_DOUBLE*)a) = *((const CSimpleProjection3D_DOUBLE*)b);
}

CPlacement3D_* CSimpleProjection3D_DOUBLE_pr_ObjectPlacement(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (CPlacement3D_*)(&o.pr_ObjectPlacement);
}

CPlacement3D_* CSimpleProjection3D_DOUBLE_pr_ViewerPlacement(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (CPlacement3D_*)(&o.pr_ViewerPlacement);
}

FLOAT3D_* CSimpleProjection3D_DOUBLE_pr_ObjectStretch(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (FLOAT3D_*)(&o.pr_ObjectStretch);
}

BOOL* CSimpleProjection3D_DOUBLE_pr_Prepared(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (BOOL*)(&o.pr_Prepared);
}

DOUBLEmatrix3D_* CSimpleProjection3D_DOUBLE_pr_RotationMatrix(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (DOUBLEmatrix3D_*)(&o.pr_RotationMatrix);
}

DOUBLEmatrix3D_* CSimpleProjection3D_DOUBLE_pr_ViewerRotationMatrix(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (DOUBLEmatrix3D_*)(&o.pr_ViewerRotationMatrix);
}

DOUBLE3D_* CSimpleProjection3D_DOUBLE_pr_TranslationVector(CSimpleProjection3D_DOUBLE_* p)
{
  CSimpleProjection3D_DOUBLE& o = *((CSimpleProjection3D_DOUBLE*)p);
  return (DOUBLE3D_*)(&o.pr_TranslationVector);
}

void CSimpleProjection3D_DOUBLE_Prepare(CSimpleProjection3D_DOUBLE_* p)
{
  ((CSimpleProjection3D_DOUBLE*)p)->Prepare();
}

void CSimpleProjection3D_DOUBLE_ProjectCoordinate(const CSimpleProjection3D_DOUBLE_* p, const DOUBLE3D_* v3dObjectPoint, DOUBLE3D_* v3dViewPoint)
{
  ((CSimpleProjection3D_DOUBLE*)p)->ProjectCoordinate(*((const DOUBLE3D*)v3dObjectPoint), *((DOUBLE3D*)v3dViewPoint));
}

void CSimpleProjection3D_DOUBLE_ProjectDirection(const CSimpleProjection3D_DOUBLE_* p, const DOUBLE3D_* v3dObjectPoint, DOUBLE3D_* v3dViewPoint)
{
  ((CSimpleProjection3D_DOUBLE*)p)->ProjectDirection(*((const DOUBLE3D*)v3dObjectPoint), *((DOUBLE3D*)v3dViewPoint));
}

void CSimpleProjection3D_DOUBLE_ProjectPlacement(const CSimpleProjection3D_DOUBLE_* p, const CPlacement3D_* plObject, CPlacement3D_* plView)
{
  ((CSimpleProjection3D_DOUBLE*)p)->ProjectPlacement(*((const CPlacement3D*)plObject), *((CPlacement3D*)plView));
}

void CSimpleProjection3D_DOUBLE_ProjectMapping(const CSimpleProjection3D_DOUBLE_* p, const CMappingDefinition_* mdObject, const DOUBLEplane3D_* plObject, CMappingDefinition_* mdView)
{
  ((CSimpleProjection3D_DOUBLE*)p)->ProjectMapping(*((const CMappingDefinition*)mdObject), *((const DOUBLEplane3D*)plObject), *((CMappingDefinition*)mdView));
}

void CSimpleProjection3D_DOUBLE_ProjectAABBox(const CSimpleProjection3D_DOUBLE_* p, const DOUBLEaabbox3D_* boxObject, DOUBLEaabbox3D_* boxView)
{
  ((CSimpleProjection3D_DOUBLE*)p)->ProjectAABBox(*((const DOUBLEaabbox3D*)boxObject), *((DOUBLEaabbox3D*)boxView));
}

void CSimpleProjection3D_DOUBLE_Project(const CSimpleProjection3D_DOUBLE_* p, const DOUBLEplane3D_* p3dObjectPlane, DOUBLEplane3D_* v3dTransformedPlane)
{
  ((CSimpleProjection3D_DOUBLE*)p)->Project(*((const DOUBLEplane3D*)p3dObjectPlane), *((DOUBLEplane3D*)v3dTransformedPlane));
}
