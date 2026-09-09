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

#ifndef SECAPI_BASE_TIMER_H
#define SECAPI_BASE_TIMER_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CTimerValue_* CTimerValue_new();
SECAPI CTimerValue_* CTimerValue_new_i64(int64_t v);
SECAPI CTimerValue_* CTimerValue_new_s(DOUBLE d);
SECAPI CTimerValue_* CTimerValue_clone(const CTimerValue_* p);
SECAPI void CTimerValue_delete(CTimerValue_* p);
SECAPI void CTimerValue_copy(CTimerValue_* a, const CTimerValue_* b);
SECAPI int64_t* CTimerValue_tv_llValue(CTimerValue_* p);
SECAPI void CTimerValue_Clear(CTimerValue_* p);
SECAPI DOUBLE CTimerValue_GetSeconds(CTimerValue_* p);
SECAPI int64_t CTimerValue_GetMilliseconds(CTimerValue_* p);

SECAPI CTimerHandler_* CTimerHandler_new(void (*cb)(void));
SECAPI void CTimerHandler_delete(CTimerHandler_* p);

SECAPI CTCriticalSection_* _pTimer_tm_csHooks_();
SECAPI void _pTimer_AddHandler(CTimerHandler_* h);
SECAPI void _pTimer_RemHandler(CTimerHandler_* h);
SECAPI void _pTimer_HandleTimerHandlers();
SECAPI void _pTimer_SetRealTimeTick(TIME t);
SECAPI TIME _pTimer_GetRealTimeTick();
SECAPI void _pTimer_SetCurrentTick(TIME t);
SECAPI TIME _pTimer_CurrentTick();
SECAPI TIME _pTimer_GetLerpedCurrentTick();
SECAPI void _pTimer_SetLerp(FLOAT l);
SECAPI void _pTimer_SetLerp2(FLOAT l);
SECAPI void _pTimer_DisableLerp();
SECAPI FLOAT _pTimer_GetLerpFactor();
SECAPI FLOAT _pTimer_GetLerpFactor2();
SECAPI CTimerValue_* _pTimer_GetHighPrecisionTimer_();
SECAPI CTString_* TimeToString_(FLOAT t);
SECAPI BOOL _pTimerExists();

#define CTimer_TickQuantum TIME(1/20.0)

#ifdef __cplusplus
}
#endif

#endif
