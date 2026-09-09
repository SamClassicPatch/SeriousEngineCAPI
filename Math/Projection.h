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

#ifndef SECAPI_MATH_PROJECTION_H
#define SECAPI_MATH_PROJECTION_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CPlacement3D_* CProjection3D_pr_ObjectPlacement(CProjection3D_* p);
SECAPI FLOAT3D_* CProjection3D_pr_vObjectHandle(CProjection3D_* p);
SECAPI CPlacement3D_* CProjection3D_pr_ViewerPlacement(CProjection3D_* p);
SECAPI FLOAT3D_* CProjection3D_pr_vViewerPosition(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_NearClipDistance(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_FarClipDistance(CProjection3D_* p);
SECAPI FLOATaabbox2D_* CProjection3D_pr_ScreenBBox(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_AspectRatio(CProjection3D_* p);
SECAPI FLOAT3D_* CProjection3D_pr_ObjectStretch(CProjection3D_* p);
SECAPI BOOL* CProjection3D_pr_bFaceForward(CProjection3D_* p);
SECAPI BOOL* CProjection3D_pr_bHalfFaceForward(CProjection3D_* p);
SECAPI BOOL* CProjection3D_pr_bMirror(CProjection3D_* p);
SECAPI BOOL* CProjection3D_pr_bWarp(CProjection3D_* p);
SECAPI FLOATplane3D_* CProjection3D_pr_plMirror(CProjection3D_* p);
SECAPI FLOATplane3D_* CProjection3D_pr_plMirrorView(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_fViewStretch(CProjection3D_* p);
SECAPI BOOL* CProjection3D_pr_Prepared(CProjection3D_* p);
SECAPI BOOL* CProjection3D_pr_bInverted(CProjection3D_* p);
SECAPI FLOATmatrix3D_* CProjection3D_pr_RotationMatrix(CProjection3D_* p);
SECAPI FLOATmatrix3D_* CProjection3D_pr_mDirectionRotation(CProjection3D_* p);
SECAPI FLOATmatrix3D_* CProjection3D_pr_ViewerRotationMatrix(CProjection3D_* p);
SECAPI FLOAT3D_* CProjection3D_pr_TranslationVector(CProjection3D_* p);
SECAPI FLOAT2D_* CProjection3D_pr_ScreenCenter(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_fDepthBufferFactor(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_fDepthBufferMul(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_fDepthBufferAdd(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_fDepthBufferNear(CProjection3D_* p);
SECAPI FLOAT* CProjection3D_pr_fDepthBufferFar(CProjection3D_* p);
SECAPI FLOATplane3D_* CProjection3D_pr_plClipL(CProjection3D_* p);
SECAPI FLOATplane3D_* CProjection3D_pr_plClipR(CProjection3D_* p);
SECAPI FLOATplane3D_* CProjection3D_pr_plClipU(CProjection3D_* p);
SECAPI FLOATplane3D_* CProjection3D_pr_plClipD(CProjection3D_* p);
SECAPI void CProjection3D_TurnOffMirrorPlane(CProjection3D_* p);
SECAPI void CProjection3D_TurnOffWarpPlane(CProjection3D_* p);
SECAPI void CProjection3D_Prepare(CProjection3D_* p);
SECAPI BOOL CProjection3D_IsPerspective(CProjection3D_* p);
SECAPI void CProjection3D_ProjectCoordinate(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint, FLOAT3D_* v3dViewPoint);
SECAPI FLOAT CProjection3D_GetDistance(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint);
SECAPI void CProjection3D_ProjectDirection(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint, FLOAT3D_* v3dViewPoint);
SECAPI void CProjection3D_ProjectAABBox(const CProjection3D_* p, const FLOATaabbox3D_* boxObject, FLOATaabbox3D_* boxView);
SECAPI void CProjection3D_PreClip(const CProjection3D_* p, const FLOAT3D_* v3dObjectPoint, FLOAT3D_* v3dTransformedPoint);
SECAPI ULONG CProjection3D_ClipLine(const CProjection3D_* p, FLOAT3D_* v3dPoint0, FLOAT3D_* v3dPoint1);
SECAPI void CProjection3D_PostClip(const CProjection3D_* p, const FLOAT3D_* v3dTransformedPoint, FLOAT3D_* v3dViewPoint);
SECAPI void CProjection3D_PostClip_r(const CProjection3D_* p, const FLOAT3D_* v3dTransformedPoint, FLOAT fTransformedR, FLOAT3D_* v3dViewPoint, FLOAT* fViewR);
SECAPI INDEX CProjection3D_TestSphereToFrustum(const CProjection3D_* p, const FLOAT3D_* vViewPoint, FLOAT fRadius);
SECAPI INDEX CProjection3D_TestBoxToFrustum(const CProjection3D_* p, const FLOATobbox3D_* boxView);
SECAPI void CProjection3D_RayThroughPoint(const CProjection3D_* p, const FLOAT3D_* v3dViewPoint, CPlacement3D_* plRay);
SECAPI void CProjection3D_Project(const CProjection3D_* p, const FLOATplane3D_* p3dObjectPlane, FLOATplane3D_* v3dTransformedPlane);
SECAPI BOOL CProjection3D_IsObjectPlaneVisible(const CProjection3D_* p, const FLOATplane3D_* p3dObjectPlane);
SECAPI BOOL CProjection3D_IsViewerPlaneVisible(const CProjection3D_* p, const FLOATplane3D_* p3dViewerPlane);
SECAPI FLOAT CProjection3D_MipFactor_d(const CProjection3D_* p, FLOAT fDistance);
SECAPI FLOAT CProjection3D_MipFactor(const CProjection3D_* p);
SECAPI void CProjection3D_MakeOoKGradient(const CProjection3D_* p, const FLOATplane3D_* plViewerPlane, CPlanarGradients_* pgOoK);

SECAPI CPerspectiveProjection3D_* CPerspectiveProjection3D_new();
SECAPI CPerspectiveProjection3D_* CPerspectiveProjection3D_clone(const CPerspectiveProjection3D_* p);
SECAPI void CPerspectiveProjection3D_delete(CPerspectiveProjection3D_* p);
SECAPI void CPerspectiveProjection3D_copy(CPerspectiveProjection3D_* a, const CPerspectiveProjection3D_* b);
SECAPI ANGLE* CPerspectiveProjection3D_ppr_FOVWidth(CPerspectiveProjection3D_* p);
SECAPI FLOAT* CPerspectiveProjection3D_ppr_fMipRatio(CPerspectiveProjection3D_* p);
SECAPI FLOAT2D_* CPerspectiveProjection3D_ppr_PerspectiveRatios(CPerspectiveProjection3D_* p);
SECAPI FLOAT* CPerspectiveProjection3D_ppr_fMetersPerPixel(CPerspectiveProjection3D_* p);
SECAPI FLOAT* CPerspectiveProjection3D_ppr_fViewerDistance(CPerspectiveProjection3D_* p);
SECAPI FLOATaabbox2D_* CPerspectiveProjection3D_ppr_boxSubScreen(CPerspectiveProjection3D_* p);

SECAPI CIsometricProjection3D_* CIsometricProjection3D_new();
SECAPI CIsometricProjection3D_* CIsometricProjection3D_clone(const CIsometricProjection3D_* p);
SECAPI void CIsometricProjection3D_delete(CIsometricProjection3D_* p);
SECAPI void CIsometricProjection3D_copy(CIsometricProjection3D_* a, const CIsometricProjection3D_* b);
SECAPI FLOAT* CIsometricProjection3D_ipr_ZoomFactor(CIsometricProjection3D_* p);

SECAPI CParallelProjection3D_* CParallelProjection3D_new();
SECAPI CParallelProjection3D_* CParallelProjection3D_clone(const CParallelProjection3D_* p);
SECAPI void CParallelProjection3D_delete(CParallelProjection3D_* p);
SECAPI void CParallelProjection3D_copy(CParallelProjection3D_* a, const CParallelProjection3D_* b);
SECAPI FLOAT2D_* CParallelProjection3D_pr_vStepFactors(CParallelProjection3D_* p);
SECAPI FLOAT2D_* CParallelProjection3D_pr_vZoomFactors(CParallelProjection3D_* p);
SECAPI FLOAT3D_* CParallelProjection3D_pr_vViewDirection(CParallelProjection3D_* p);

SECAPI CSimpleProjection3D_* CSimpleProjection3D_new();
SECAPI CSimpleProjection3D_* CSimpleProjection3D_clone(const CSimpleProjection3D_* p);
SECAPI void CSimpleProjection3D_delete(CSimpleProjection3D_* p);
SECAPI void CSimpleProjection3D_copy(CSimpleProjection3D_* a, const CSimpleProjection3D_* b);

SECAPI CAnyProjection3D_* CAnyProjection3D_new();
SECAPI CAnyProjection3D_* CAnyProjection3D_clone(const CAnyProjection3D_* p);
SECAPI void CAnyProjection3D_delete(CAnyProjection3D_* p);
SECAPI void CAnyProjection3D_copy(CAnyProjection3D_* a, const CAnyProjection3D_* b);
SECAPI void CAnyProjection3D_BeSimple(CAnyProjection3D_* p);
SECAPI BOOL CAnyProjection3D_IsSimple(CAnyProjection3D_* p);
SECAPI void CAnyProjection3D_BeIsometric(CAnyProjection3D_* p);
SECAPI BOOL CAnyProjection3D_IsIsometric(CAnyProjection3D_* p);
SECAPI void CAnyProjection3D_BePerspective(CAnyProjection3D_* p);
SECAPI BOOL CAnyProjection3D_IsPerspective(CAnyProjection3D_* p);
SECAPI void CAnyProjection3D_BeParallel(CAnyProjection3D_* p);
SECAPI BOOL CAnyProjection3D_IsParallel(CAnyProjection3D_* p);
SECAPI CProjection3D_* CAnyProjection3D_GetActive(CAnyProjection3D_* p);
SECAPI void CAnyProjection3D_SetSimple(CAnyProjection3D_* a, const CSimpleProjection3D_* b);
SECAPI void CAnyProjection3D_SetIsometric(CAnyProjection3D_* a, const CIsometricProjection3D_* b);
SECAPI void CAnyProjection3D_SetPerspective(CAnyProjection3D_* a, const CPerspectiveProjection3D_* b);
SECAPI void CAnyProjection3D_SetParallel(CAnyProjection3D_* a, const CParallelProjection3D_* b);

#ifdef __cplusplus
}
#endif

#endif
