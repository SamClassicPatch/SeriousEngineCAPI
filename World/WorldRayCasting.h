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

#ifndef SECAPI_WORLD_WORLD_RAY_CASTING_H
#define SECAPI_WORLD_WORLD_RAY_CASTING_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TT_NONE_ 0
#define TT_SIMPLE_ 1
#define TT_COLLISIONBOX_ 2
#define TT_FULL_ 3
#define TT_FULLSEETHROUGH_ 4

SECAPI MEMBER_VAL_DECL(CCastRay, BOOL, cr_bAllowOverHit)
SECAPI MEMBER_VAL_DECL(CCastRay, BOOL, cr_bHitPortals)
SECAPI MEMBER_VAL_DECL(CCastRay, TestType_, cr_ttHitModels)
SECAPI MEMBER_VAL_DECL(CCastRay, BOOL, cr_bHitFields)
SECAPI MEMBER_VAL_DECL(CCastRay, BOOL, cr_bHitBrushes)
SECAPI MEMBER_PTR_DECL(CCastRay, CEntity_, cr_penHit)
SECAPI MEMBER_VAL_DECL(CCastRay, FLOAT3D_, cr_vHit)
SECAPI MEMBER_PTR_DECL(CCastRay, CBrushPolygon_, cr_pbpoBrushPolygon)
SECAPI MEMBER_PTR_DECL(CCastRay, CBrushSector_, cr_pbscBrushSector)

SECAPI CCastRay_* CCastRay_new_pl(CEntity_* o, const CPlacement3D_* pl);
SECAPI CCastRay_* CCastRay_new_plf(CEntity_* o, const CPlacement3D_* pl, FLOAT f);
SECAPI CCastRay_* CCastRay_new_vv(CEntity_* o, const FLOAT3D_* vo, const FLOAT3D_* vt);
SECAPI CCastRay_* CCastRay_clone(const CCastRay_* p);
SECAPI void CCastRay_copy(CCastRay_* a, const CCastRay_* b);
SECAPI void CCastRay_delete(CCastRay_* p);
SECAPI void CCastRay_Cast(CCastRay_* p, CWorld_* w);
SECAPI void CCastRay_ContinueCast(CCastRay_* p, CWorld_* w);

#ifdef __cplusplus
}
#endif

#endif
