#ifndef SECAPI_BASE_PROFILING_H
#define SECAPI_BASE_PROFILING_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void CProfileForm_Reset(CProfileForm_* p);
SECAPI void CProfileForm_Report(CProfileForm_* p, CTString_* s);

SECAPI CProfileForm_* _pfGfxProfile_();
SECAPI CProfileForm_* _pfModelProfile_();
SECAPI CProfileForm_* _pfSoundProfile_();
SECAPI CProfileForm_* _pfNetworkProfile_();
SECAPI CProfileForm_* _pfRenderProfile_();
SECAPI CProfileForm_* _pfWorldEditingProfile_();
SECAPI CProfileForm_* _pfPhysicsProfile_();

#ifdef __cplusplus
}
#endif

#endif
