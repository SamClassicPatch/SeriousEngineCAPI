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
SECAPI void CCastRay_delete(CCastRay_* p);
SECAPI void CCastRay_Cast(CCastRay_* p, CWorld_* w);
SECAPI void CCastRay_ContinueCast(CCastRay_* p, CWorld_* w);

#ifdef __cplusplus
}
#endif

#endif
