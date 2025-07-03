#include "Synchronization.h"

CTCriticalSection_* CTCriticalSection_new()
{
  return (CTCriticalSection_*)(new CTCriticalSection());
}

void CTCriticalSection_delete(CTCriticalSection_* p)
{
  delete ((CTCriticalSection*)p);
}

CTSingleLock_* CTSingleLock_new(CTCriticalSection_* p, BOOL lock)
{
  return (CTSingleLock_*)(new CTSingleLock((CTCriticalSection*)p, lock));
}

void CTSingleLock_delete(CTSingleLock_* p)
{
  delete ((CTSingleLock*)p);
}

void CTSingleLock_Lock(CTSingleLock_* p)
{
  ((CTSingleLock*)p)->Lock();
}

BOOL CTSingleLock_TryToLock(CTSingleLock_* p)
{
  return ((CTSingleLock*)p)->TryToLock();
}

BOOL CTSingleLock_IsLocked(CTSingleLock_* p)
{
  return ((CTSingleLock*)p)->IsLocked();
}

void CTSingleLock_Unlock(CTSingleLock_* p)
{
  ((CTSingleLock*)p)->Unlock();
}
