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
