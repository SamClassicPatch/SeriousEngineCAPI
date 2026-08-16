#ifndef SECAPI_GRAPHICS_SHADER_H
#define SECAPI_GRAPHICS_SHADER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GFX_ONE_           21
#define GFX_ZERO_          22
#define GFX_SRC_COLOR_     23
#define GFX_INV_SRC_COLOR_ 24
#define GFX_DST_COLOR_     25
#define GFX_INV_DST_COLOR_ 26
#define GFX_SRC_ALPHA_     27
#define GFX_INV_SRC_ALPHA_ 28

#define GFX_BLENDEQ_ADD_         1
#define GFX_BLENDEQ_SUBTRACT_    2
#define GFX_BLENDEQ_REVSUBTRACT_ 3
#define GFX_BLENDEQ_MIN_         4
#define GFX_BLENDEQ_MAX_         5

#ifdef SERIOUSENGINECAPI_EXPORTS
enum GfxBlendEquation
{
  GFX_BLENDEQ_ADD = GFX_BLENDEQ_ADD_,
  GFX_BLENDEQ_SUBTRACT = GFX_BLENDEQ_SUBTRACT_,
  GFX_BLENDEQ_REVSUBTRACT = GFX_BLENDEQ_REVSUBTRACT_,
  GFX_BLENDEQ_MIN = GFX_BLENDEQ_MIN_,
  GFX_BLENDEQ_MAX = GFX_BLENDEQ_MAX_,
};
#endif

SECAPI void shaEnableBlend_();
SECAPI void shaDisableBlend_();
SECAPI void shaBlendFunc_(GfxBlend_ eSrc, GfxBlend_ eDst);
SECAPI GfxBlendEquation_ shaGetBlendEquation_();
SECAPI void shaBlendEquation_(GfxBlendEquation_ blend_equation);

#ifdef __cplusplus
}
#endif

#endif
