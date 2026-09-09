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

#include "Projection.h"

CPlacement3D_* CProjection3D_pr_ObjectPlacement(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (CPlacement3D_*)(&(pr.pr_ObjectPlacement));
}

FLOAT3D_* CProjection3D_pr_vObjectHandle(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOAT3D_*)(&(pr.pr_vObjectHandle));
}

CPlacement3D_* CProjection3D_pr_ViewerPlacement(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (CPlacement3D_*)(&(pr.pr_ViewerPlacement));
}

FLOAT3D_* CProjection3D_pr_vViewerPosition(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOAT3D_*)(&(pr.pr_vViewerPosition));
}

FLOAT* CProjection3D_pr_NearClipDistance(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_NearClipDistance);
}

FLOAT* CProjection3D_pr_FarClipDistance(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_FarClipDistance);
}

FLOATaabbox2D_* CProjection3D_pr_ScreenBBox(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATaabbox2D_*)(&(pr.pr_ScreenBBox));
}

FLOAT* CProjection3D_pr_AspectRatio(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_AspectRatio);
}

FLOAT3D_* CProjection3D_pr_ObjectStretch(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOAT3D_*)(&(pr.pr_ObjectStretch));
}

BOOL* CProjection3D_pr_bFaceForward(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_bFaceForward);
}

BOOL* CProjection3D_pr_bHalfFaceForward(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_bHalfFaceForward);
}

BOOL* CProjection3D_pr_bMirror(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_bMirror);
}

BOOL* CProjection3D_pr_bWarp(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_bWarp);
}

FLOATplane3D_* CProjection3D_pr_plMirror(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATplane3D_*)(&(pr.pr_plMirror));
}

FLOATplane3D_* CProjection3D_pr_plMirrorView(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATplane3D_*)(&(pr.pr_plMirrorView));
}

FLOAT* CProjection3D_pr_fViewStretch(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_fViewStretch);
}

BOOL* CProjection3D_pr_Prepared(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_Prepared);
}

BOOL* CProjection3D_pr_bInverted(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_bInverted);
}

FLOATmatrix3D_* CProjection3D_pr_RotationMatrix(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATmatrix3D_*)(&(pr.pr_RotationMatrix));
}

FLOATmatrix3D_* CProjection3D_pr_mDirectionRotation(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATmatrix3D_*)(&(pr.pr_mDirectionRotation));
}

FLOATmatrix3D_* CProjection3D_pr_ViewerRotationMatrix(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATmatrix3D_*)(&(pr.pr_ViewerRotationMatrix));
}

FLOAT3D_* CProjection3D_pr_TranslationVector(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOAT3D_*)(&(pr.pr_TranslationVector));
}

FLOAT2D_* CProjection3D_pr_ScreenCenter(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOAT2D_*)(&(pr.pr_ScreenCenter));
}

FLOAT* CProjection3D_pr_fDepthBufferFactor(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_fDepthBufferFactor);
}

FLOAT* CProjection3D_pr_fDepthBufferMul(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_fDepthBufferMul);
}

FLOAT* CProjection3D_pr_fDepthBufferAdd(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_fDepthBufferAdd);
}

FLOAT* CProjection3D_pr_fDepthBufferNear(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_fDepthBufferNear);
}

FLOAT* CProjection3D_pr_fDepthBufferFar(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return &(pr.pr_fDepthBufferFar);
}

FLOATplane3D_* CProjection3D_pr_plClipL(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATplane3D_*)(&(pr.pr_plClipL));
}

FLOATplane3D_* CProjection3D_pr_plClipR(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATplane3D_*)(&(pr.pr_plClipR));
}

FLOATplane3D_* CProjection3D_pr_plClipU(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATplane3D_*)(&(pr.pr_plClipU));
}

FLOATplane3D_* CProjection3D_pr_plClipD(CProjection3D_* p)
{
  CProjection3D& pr = *((CProjection3D*)p);
  return (FLOATplane3D_*)(&(pr.pr_plClipD));
}

void CProjection3D_TurnOffMirrorPlane(CProjection3D_* p)
{
  ((CProjection3D*)p)->TurnOffMirrorPlane();
}

void CProjection3D_TurnOffWarpPlane(CProjection3D_* p)
{
  ((CProjection3D*)p)->TurnOffWarpPlane();
}

void CProjection3D_Prepare(CProjection3D_* p)
{
  ((CProjection3D*)p)->Prepare();
}

BOOL CProjection3D_IsPerspective(CProjection3D_* p)
{
  return ((CProjection3D*)p)->IsPerspective();
}

void CProjection3D_ProjectCoordinate(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint, FLOAT3D_* v3dViewPoint)
{
  ((const CProjection3D*)p)->ProjectCoordinate(*((const FLOAT3D*)v3dObjectPoint), *((FLOAT3D*)v3dViewPoint));
}

FLOAT CProjection3D_GetDistance(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint)
{
  return ((const CProjection3D*)p)->GetDistance(*((const FLOAT3D*)v3dObjectPoint));
}

void CProjection3D_ProjectDirection(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint, FLOAT3D_* v3dViewPoint)
{
  ((const CProjection3D*)p)->ProjectDirection(*((const FLOAT3D*)v3dObjectPoint), *((FLOAT3D*)v3dViewPoint));
}

void CProjection3D_ProjectAABBox(const CProjection3D_* p, const FLOATaabbox3D_* boxObject, FLOATaabbox3D_* boxView)
{
  ((const CProjection3D*)p)->ProjectAABBox(*((const FLOATaabbox3D*)boxObject), *((FLOATaabbox3D*)boxView));
}

void CProjection3D_PreClip(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint, FLOAT3D_* v3dTransformedPoint)
{
  ((const CProjection3D*)p)->PreClip(*((const FLOAT3D*)v3dObjectPoint), *((FLOAT3D*)v3dTransformedPoint));
}

ULONG CProjection3D_ClipLine(const CProjection3D_* p, FLOAT3D_* v3dPoint0, FLOAT3D_* v3dPoint1)
{
  return ((const CProjection3D*)p)->ClipLine(*((FLOAT3D*)v3dPoint0), *((FLOAT3D*)v3dPoint1));
}

void CProjection3D_PostClip(const CProjection3D_* p, const FLOAT3D_* v3dTransformedPoint, FLOAT3D_* v3dViewPoint)
{
  ((const CProjection3D*)p)->PostClip(*((const FLOAT3D*)v3dTransformedPoint), *((FLOAT3D*)v3dViewPoint));
}

void CProjection3D_PostClip_r(const CProjection3D_* p, const FLOAT3D_* v3dTransformedPoint, FLOAT fTransformedR, FLOAT3D_* v3dViewPoint, FLOAT* fViewR)
{
  ((const CProjection3D*)p)->PostClip(*((const FLOAT3D*)v3dTransformedPoint), fTransformedR, *((FLOAT3D*)v3dViewPoint), *fViewR);
}

INDEX CProjection3D_TestSphereToFrustum(const CProjection3D_* p, const FLOAT3D_* vViewPoint, FLOAT fRadius)
{
  return ((const CProjection3D*)p)->TestSphereToFrustum(*((const FLOAT3D*)vViewPoint), fRadius);
}

INDEX CProjection3D_TestBoxToFrustum(const CProjection3D_* p, const FLOATobbox3D_* boxView)
{
  return ((const CProjection3D*)p)->TestBoxToFrustum(*((const FLOATobbox3D*)boxView));
}

void CProjection3D_RayThroughPoint(const CProjection3D_* p, const FLOAT3D_* v3dViewPoint, CPlacement3D_* plRay)
{
  ((const CProjection3D*)p)->RayThroughPoint(*((const FLOAT3D*)v3dViewPoint), *((CPlacement3D*)plRay));
}

void CProjection3D_Project(const CProjection3D_* p, const FLOATplane3D_* p3dObjectPlane, FLOATplane3D_* v3dTransformedPlane)
{
  ((const CProjection3D*)p)->Project(*((const FLOATplane3D*)p3dObjectPlane), *((FLOATplane3D*)v3dTransformedPlane));
}

BOOL CProjection3D_IsObjectPlaneVisible(const CProjection3D_* p, const FLOATplane3D_* p3dObjectPlane)
{
  return ((const CProjection3D*)p)->IsObjectPlaneVisible(*((const FLOATplane3D*)p3dObjectPlane));
}

BOOL CProjection3D_IsViewerPlaneVisible(const CProjection3D_* p, const FLOATplane3D_* p3dViewerPlane)
{
  return ((const CProjection3D*)p)->IsViewerPlaneVisible(*((const FLOATplane3D*)p3dViewerPlane));
}

FLOAT CProjection3D_MipFactor_d(const CProjection3D_* p, FLOAT fDistance)
{
  return ((const CProjection3D*)p)->MipFactor(fDistance);
}

FLOAT CProjection3D_MipFactor(const CProjection3D_* p)
{
  return ((const CProjection3D*)p)->MipFactor();
}

void CProjection3D_MakeOoKGradient(const CProjection3D_* p, const FLOATplane3D_* plViewerPlane, CPlanarGradients_* pgOoK)
{
  ((const CProjection3D*)p)->MakeOoKGradient(*((const FLOATplane3D*)plViewerPlane), *((CPlanarGradients*)pgOoK));
}


CPerspectiveProjection3D_* CPerspectiveProjection3D_new()
{
  return (CPerspectiveProjection3D_*)(new CPerspectiveProjection3D());
}

CPerspectiveProjection3D_* CPerspectiveProjection3D_clone(const CPerspectiveProjection3D_* p)
{
  return (CPerspectiveProjection3D_*)(new CPerspectiveProjection3D(*((const CPerspectiveProjection3D*)p)));
}

void CPerspectiveProjection3D_delete(CPerspectiveProjection3D_* p)
{
  delete ((CPerspectiveProjection3D*)p);
}

void CPerspectiveProjection3D_copy(CPerspectiveProjection3D_* a, const CPerspectiveProjection3D_* b)
{
  *((CPerspectiveProjection3D*)a) = *((const CPerspectiveProjection3D*)b);
}

ANGLE* CPerspectiveProjection3D_ppr_FOVWidth(CPerspectiveProjection3D_* p)
{
  CPerspectiveProjection3D& pr = *((CPerspectiveProjection3D*)p);
  return &(pr.ppr_FOVWidth);
}

FLOAT* CPerspectiveProjection3D_ppr_fMipRatio(CPerspectiveProjection3D_* p)
{
  CPerspectiveProjection3D& pr = *((CPerspectiveProjection3D*)p);
  return &(pr.ppr_fMipRatio);
}

FLOAT2D_* CPerspectiveProjection3D_ppr_PerspectiveRatios(CPerspectiveProjection3D_* p)
{
  CPerspectiveProjection3D& pr = *((CPerspectiveProjection3D*)p);
  return (FLOAT2D_*)(&(pr.ppr_PerspectiveRatios));
}

FLOAT* CPerspectiveProjection3D_ppr_fMetersPerPixel(CPerspectiveProjection3D_* p)
{
  CPerspectiveProjection3D& pr = *((CPerspectiveProjection3D*)p);
  return &(pr.ppr_fMetersPerPixel);
}

FLOAT* CPerspectiveProjection3D_ppr_fViewerDistance(CPerspectiveProjection3D_* p)
{
  CPerspectiveProjection3D& pr = *((CPerspectiveProjection3D*)p);
  return &(pr.ppr_fViewerDistance);
}

FLOATaabbox2D_* CPerspectiveProjection3D_ppr_boxSubScreen(CPerspectiveProjection3D_* p)
{
  CPerspectiveProjection3D& pr = *((CPerspectiveProjection3D*)p);
  return (FLOATaabbox2D_*)(&(pr.ppr_boxSubScreen));
}


CIsometricProjection3D_* CIsometricProjection3D_new()
{
  return (CIsometricProjection3D_*)(new CIsometricProjection3D());
}

CIsometricProjection3D_* CIsometricProjection3D_clone(const CIsometricProjection3D_* p)
{
  return (CIsometricProjection3D_*)(new CIsometricProjection3D(*((const CIsometricProjection3D*)p)));
}

void CIsometricProjection3D_delete(CIsometricProjection3D_* p)
{
  delete ((CIsometricProjection3D*)p);
}

void CIsometricProjection3D_copy(CIsometricProjection3D_* a, const CIsometricProjection3D_* b)
{
  *((CIsometricProjection3D*)a) = *((const CIsometricProjection3D*)b);
}

FLOAT* CIsometricProjection3D_ipr_ZoomFactor(CIsometricProjection3D_* p)
{
  CIsometricProjection3D& pr = *((CIsometricProjection3D*)p);
  return &(pr.ipr_ZoomFactor);
}


CParallelProjection3D_* CParallelProjection3D_new()
{
  return (CParallelProjection3D_*)(new CParallelProjection3D());
}

CParallelProjection3D_* CParallelProjection3D_clone(const CParallelProjection3D_* p)
{
  return (CParallelProjection3D_*)(new CParallelProjection3D(*((const CParallelProjection3D*)p)));
}

void CParallelProjection3D_delete(CParallelProjection3D_* p)
{
  delete ((CParallelProjection3D*)p);
}

void CParallelProjection3D_copy(CParallelProjection3D_* a, const CParallelProjection3D_* b)
{
  *((CParallelProjection3D*)a) = *((const CParallelProjection3D*)b);
}

FLOAT2D_* CParallelProjection3D_pr_vStepFactors(CParallelProjection3D_* p)
{
  CParallelProjection3D& pr = *((CParallelProjection3D*)p);
  return (FLOAT2D_*)(&(pr.pr_vStepFactors));
}

FLOAT2D_* CParallelProjection3D_pr_vZoomFactors(CParallelProjection3D_* p)
{
  CParallelProjection3D& pr = *((CParallelProjection3D*)p);
  return (FLOAT2D_*)(&(pr.pr_vZoomFactors));
}

FLOAT3D_* CParallelProjection3D_pr_vViewDirection(CParallelProjection3D_* p)
{
  CParallelProjection3D& pr = *((CParallelProjection3D*)p);
  return (FLOAT3D_*)(&(pr.pr_vViewDirection));
}


CSimpleProjection3D_* CSimpleProjection3D_new()
{
  return (CSimpleProjection3D_*)(new CSimpleProjection3D());
}

CSimpleProjection3D_* CSimpleProjection3D_clone(const CSimpleProjection3D_* p)
{
  return (CSimpleProjection3D_*)(new CSimpleProjection3D(*((const CSimpleProjection3D*)p)));
}

void CSimpleProjection3D_delete(CSimpleProjection3D_* p)
{
  delete ((CSimpleProjection3D*)p);
}

void CSimpleProjection3D_copy(CSimpleProjection3D_* a, const CSimpleProjection3D_* b)
{
  *((CSimpleProjection3D*)a) = *((const CSimpleProjection3D*)b);
}


CAnyProjection3D_* CAnyProjection3D_new()
{
  return (CAnyProjection3D_*)(new CAnyProjection3D());
}

CAnyProjection3D_* CAnyProjection3D_clone(const CAnyProjection3D_* p)
{
  return (CAnyProjection3D_*)(new CAnyProjection3D(*((const CAnyProjection3D*)p)));
}

void CAnyProjection3D_delete(CAnyProjection3D_* p)
{
  delete ((CAnyProjection3D*)p);
}

void CAnyProjection3D_copy(CAnyProjection3D_* a, const CAnyProjection3D_* b)
{
  *((CAnyProjection3D*)a) = *((const CAnyProjection3D*)b);
}

void CAnyProjection3D_BeSimple(CAnyProjection3D_* p)
{
  ((CAnyProjection3D*)p)->BeSimple();
}

BOOL CAnyProjection3D_IsSimple(CAnyProjection3D_* p)
{
  return ((CAnyProjection3D*)p)->IsSimple();
}

void CAnyProjection3D_BeIsometric(CAnyProjection3D_* p)
{
  ((CAnyProjection3D*)p)->BeIsometric();
}

BOOL CAnyProjection3D_IsIsometric(CAnyProjection3D_* p)
{
  return ((CAnyProjection3D*)p)->IsIsometric();
}

void CAnyProjection3D_BePerspective(CAnyProjection3D_* p)
{
  ((CAnyProjection3D*)p)->BePerspective();
}

BOOL CAnyProjection3D_IsPerspective(CAnyProjection3D_* p)
{
  return ((CAnyProjection3D*)p)->IsPerspective();
}

void CAnyProjection3D_BeParallel(CAnyProjection3D_* p)
{
  ((CAnyProjection3D*)p)->BeParallel();
}

BOOL CAnyProjection3D_IsParallel(CAnyProjection3D_* p)
{
  return ((CAnyProjection3D*)p)->IsParallel();
}

CProjection3D_* CAnyProjection3D_GetActive(CAnyProjection3D_* p)
{
  return (CProjection3D_*)(((CAnyProjection3D*)p)->operator CProjection3D*());
}

void CAnyProjection3D_SetSimple(CAnyProjection3D_* a, const CSimpleProjection3D_* b)
{
  *((CAnyProjection3D*)a) = *((const CSimpleProjection3D*)b);
}

void CAnyProjection3D_SetIsometric(CAnyProjection3D_* a, const CIsometricProjection3D_* b)
{
  *((CAnyProjection3D*)a) = *((const CIsometricProjection3D*)b);
}

void CAnyProjection3D_SetPerspective(CAnyProjection3D_* a, const CPerspectiveProjection3D_* b)
{
  *((CAnyProjection3D*)a) = *((const CPerspectiveProjection3D*)b);
}

void CAnyProjection3D_SetParallel(CAnyProjection3D_* a, const CParallelProjection3D_* b)
{
  *((CAnyProjection3D*)a) = *((const CParallelProjection3D*)b);
}
