#ifndef SECAPI_ENTITIES_ENTITY_CLASS_H
#define SECAPI_ENTITIES_ENTITY_CLASS_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI MEMBER_PTR_DECL(CEntityClass, CDLLEntityClass_, ec_pdecDLLClass)
SECAPI CEntity_* CEntityClass_New(CEntityClass_* p);
SECAPI CEntityProperty_* CEntityClass_PropertyForName(CEntityClass_* p, const CTString_* s);

#ifdef __cplusplus
}
#endif

#endif
