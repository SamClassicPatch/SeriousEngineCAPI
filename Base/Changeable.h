#ifndef SECAPI_BASE_CHANGEABLE_H
#define SECAPI_BASE_CHANGEABLE_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CChangeable_* CChangeable_new();
SECAPI CChangeable_* CChangeable_clone(const CChangeable_* p);
SECAPI void CChangeable_delete(CChangeable_* p);
SECAPI void CChangeable_copy(CChangeable_* a, const CChangeable_* b);
SECAPI void CChangeable_MarkChanged(CChangeable_* p);
SECAPI BOOL CChangeable_IsUpToDate(const CChangeable_* p, const CUpdateable_* u);

#ifdef __cplusplus
}
#endif

#endif
