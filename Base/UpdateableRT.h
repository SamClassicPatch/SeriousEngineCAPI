#ifndef SECAPI_BASE_UPDATEABLERT_H
#define SECAPI_BASE_UPDATEABLERT_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CUpdateableRT_* CUpdateableRT_new();
SECAPI CUpdateableRT_* CUpdateableRT_clone(const CUpdateableRT_* p);
SECAPI void CUpdateableRT_delete(CUpdateableRT_* p);
SECAPI void CUpdateableRT_copy(CUpdateableRT_* a, const CUpdateableRT_* b);
SECAPI TIME CUpdateableRT_LastUpdateTime(const CUpdateableRT_* p);
SECAPI void CUpdateableRT_MarkUpdated(CUpdateableRT_* p);
SECAPI void CUpdateableRT_Invalidate(CUpdateableRT_* p);

#ifdef __cplusplus
}
#endif

#endif
