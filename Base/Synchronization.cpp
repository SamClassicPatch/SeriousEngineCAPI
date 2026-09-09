/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

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
