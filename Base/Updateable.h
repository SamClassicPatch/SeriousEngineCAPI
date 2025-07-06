#ifndef SECAPI_BASE_UPDATEABLE_H
#define SECAPI_BASE_UPDATEABLE_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CUpdateable_* CUpdateable_new();
SECAPI CUpdateable_* CUpdateable_clone(const CUpdateable_* p);
SECAPI void CUpdateable_delete(CUpdateable_* p);
SECAPI void CUpdateable_copy(CUpdateable_* a, const CUpdateable_* b);
SECAPI TIME CUpdateable_LastUpdateTime(const CUpdateable_* p);
SECAPI void CUpdateable_MarkUpdated(CUpdateable_* p);
SECAPI void CUpdateable_Invalidate(CUpdateable_* p);

#ifdef __cplusplus
}
#endif

#endif
