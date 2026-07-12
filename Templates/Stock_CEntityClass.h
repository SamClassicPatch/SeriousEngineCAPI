#ifndef SECAPI_TEMPLATES_STOCK_ENTITY_CLASS_H
#define SECAPI_TEMPLATES_STOCK_ENTITY_CLASS_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CEntityClass_* _pEntityClassStock_Obtain_t_(const CTFileName_* f);
SECAPI void _pEntityClassStock_Release_(CEntityClass_* p);
SECAPI void _pEntityClassStock_FreeUnused();

#ifdef __cplusplus
}
#endif

#endif
