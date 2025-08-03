#ifndef SECAPI_BASE_CHANGEABLERT_H
#define SECAPI_BASE_CHANGEABLERT_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CChangeableRT_* CChangeableRT_new();
SECAPI CChangeableRT_* CChangeableRT_clone(const CChangeableRT_* p);
SECAPI void CChangeableRT_delete(CChangeableRT_* p);
SECAPI void CChangeableRT_copy(CChangeableRT_* a, const CChangeableRT_* b);
SECAPI void CChangeableRT_MarkChanged(CChangeableRT_* p);
SECAPI BOOL CChangeableRT_IsUpToDate(const CChangeableRT_* p, const CUpdateableRT_* u);

#ifdef __cplusplus
}
#endif

#endif
