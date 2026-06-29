#ifndef SECAPI_WORLD_WORLD_SETTINGS_H
#define SECAPI_WORLD_WORLD_SETTINGS_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI MEMBER_VAL_DECL(CTextureTransformation, CTString_, tt_strName)
SECAPI MEMBER_VAL_DECL(CTextureTransformation, CMappingDefinition_, tt_mdTransformation)

SECAPI MEMBER_VAL_DECL(CTextureBlending, CTString_, tb_strName)
SECAPI MEMBER_VAL_DECL(CTextureBlending, UBYTE, tb_ubBlendingType)
SECAPI MEMBER_VAL_DECL(CTextureBlending, COLOR, tb_colMultiply)

#ifndef SERIOUSENGINECAPI_EXPORTS
// type of surface of a polygon (its physical properties)
#define STF_SLIDEDOWNSLOPE  (1UL<<0)    // can accelerate only across slope, not up/down
#define STF_NOIMPACT        (1UL<<1)    // cannot damage because of impact with this polygon
#endif

SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_fFriction)
SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_fStairsHeight)
SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_fClimbSlopeCos)
SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_fJumpSlopeCos)
SECAPI MEMBER_VAL_DECL(CSurfaceType, INDEX, st_iWalkDamageType)
SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_fWalkDamageAmount)
SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_tmWalkDamageDelay)
SECAPI MEMBER_VAL_DECL(CSurfaceType, FLOAT, st_tmWalkDamageFrequency)
SECAPI MEMBER_VAL_DECL(CSurfaceType, ULONG, st_ulFlags)
SECAPI MEMBER_VAL_DECL(CSurfaceType, CTString_, st_strName)

#ifndef SERIOUSENGINECAPI_EXPORTS
// type of content of a sector
#define CTF_BREATHABLE_LUNGS  (1UL<<0)    // breathable for creatures with lungs
#define CTF_BREATHABLE_GILLS  (1UL<<1)    // breathable for creatures with gills
#define CTF_FLYABLE           (1UL<<2)    // flyable in if can fly
#define CTF_SWIMABLE          (1UL<<3)    // swimmable in if enough density
#define CTF_FADESPINNING      (1UL<<4)    // spinning objects may stop spinning
#endif

SECAPI MEMBER_VAL_DECL(CContentType, CTString_, ct_strName)
SECAPI MEMBER_VAL_DECL(CContentType, ULONG, ct_ulFlags)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fDensity)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fFluidFriction)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fControlMultiplier)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fSpeedMultiplier)
SECAPI MEMBER_VAL_DECL(CContentType, INDEX, ct_iSwimDamageType)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fSwimDamageAmount)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_tmSwimDamageDelay)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_tmSwimDamageFrequency)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fDrowningDamageAmount)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_tmDrowningDamageDelay)
SECAPI MEMBER_VAL_DECL(CContentType, FLOAT, ct_fKillImmersion)
SECAPI MEMBER_VAL_DECL(CContentType, INDEX, ct_iKillDamageType)

SECAPI MEMBER_VAL_DECL(CEnvironmentType, CTString_, et_strName)
SECAPI MEMBER_VAL_DECL(CEnvironmentType, INDEX, et_iType)
SECAPI MEMBER_VAL_DECL(CEnvironmentType, FLOAT, et_fSize)

SECAPI MEMBER_VAL_DECL(CIlluminationType, CTString_, it_strName)

#ifdef __cplusplus
}
#endif

#endif
