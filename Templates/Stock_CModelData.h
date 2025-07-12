#ifndef SECAPI_TEMPLATES_STOCK_MODEL_DATA_H
#define SECAPI_TEMPLATES_STOCK_MODEL_DATA_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CModelData_* _pModelStock_Obtain_t(const CTFileName_* f);
SECAPI void _pModelStock_Release(CModelData_* p);
SECAPI void _pModelStock_FreeUnused();

#ifdef __cplusplus
}
#endif

#endif
