#ifndef SECAPI_BASE_SYNCHRONIZATION_H
#define SECAPI_BASE_SYNCHRONIZATION_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CTCriticalSection_* CTCriticalSection_new();
SECAPI void CTCriticalSection_delete(CTCriticalSection_* p);

SECAPI CTSingleLock_* CTSingleLock_new(CTCriticalSection_* p, BOOL lock);
SECAPI void CTSingleLock_delete(CTSingleLock_* p);
SECAPI void CTSingleLock_Lock(CTSingleLock_* p);
SECAPI BOOL CTSingleLock_TryToLock(CTSingleLock_* p);
SECAPI BOOL CTSingleLock_IsLocked(CTSingleLock_* p);
SECAPI void CTSingleLock_Unlock(CTSingleLock_* p);

#ifdef __cplusplus
}
#endif

#endif
