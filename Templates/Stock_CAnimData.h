#ifndef SECAPI_TEMPLATES_STOCK_ANIM_DATA_H
#define SECAPI_TEMPLATES_STOCK_ANIM_DATA_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CAnimData_* _pAnimStock_Obtain_t_(const CTFileName_* f);
SECAPI void _pAnimStock_Release(CAnimData_* p);
SECAPI void _pAnimStock_FreeUnused();

#ifdef __cplusplus
}
#endif

#endif
