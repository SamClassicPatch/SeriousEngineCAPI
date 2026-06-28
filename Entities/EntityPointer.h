#ifndef SECAPI_ENTITIES_ENTITY_POINTER_H
#define SECAPI_ENTITIES_ENTITY_POINTER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CEntityPointer_* CEntityPointer_new();
SECAPI CEntityPointer_* CEntityPointer_new_e(CEntity_* p);
SECAPI CEntityPointer_* CEntityPointer_clone(const CEntityPointer_* p);
SECAPI void CEntityPointer_delete(CEntityPointer_* p);
SECAPI void CEntityPointer_copy(CEntityPointer_* a, const CEntityPointer_* b);
SECAPI void CEntityPointer_copy_e(CEntityPointer_* a, CEntity_* b);
SECAPI BOOL CEntityPointer_equal(const CEntityPointer_* a, const CEntityPointer_* b);
SECAPI MEMBER_PTR_DECL(CEntityPointer, CEntity_, ep_pen)

#ifdef __cplusplus
}
#endif

#endif
