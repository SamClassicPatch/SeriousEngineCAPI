#ifndef SECAPI_BASE_TIMER_H
#define SECAPI_BASE_TIMER_H
#include "../Base/Types.h"

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

SECAPI CTimerHandler_* CTimerHandler_new(void (__cdecl *cb)(void));
SECAPI void CTimerHandler_delete(CTimerHandler_* p);

SECAPI CTimer_* CTimer_new(BOOL interrupt);
SECAPI void CTimer_delete(CTimer_* p);
SECAPI CTCriticalSection_* CTimer_tm_csHooks(CTimer_* p);
SECAPI void CTimer_AddHandler(CTimer_* p, CTimerHandler_* h);
SECAPI void CTimer_RemHandler(CTimer_* p, CTimerHandler_* h);
SECAPI void CTimer_HandleTimerHandlers(CTimer_* p);
SECAPI void CTimer_SetRealTimeTick(CTimer_* p, TIME t);
SECAPI TIME CTimer_GetRealTimeTick(const CTimer_* p);
SECAPI void CTimer_SetCurrentTick(CTimer_* p, TIME t);
SECAPI TIME CTimer_CurrentTick(const CTimer_* p);
SECAPI TIME CTimer_GetLerpedCurrentTick(const CTimer_* p);
SECAPI void CTimer_SetLerp(CTimer_* p, FLOAT l);
SECAPI void CTimer_SetLerp2(CTimer_* p, FLOAT l);
SECAPI void CTimer_DisableLerp(CTimer_* p);
SECAPI FLOAT CTimer_GetLerpFactor(const CTimer_* p);
SECAPI FLOAT CTimer_GetLerpFactor2(const CTimer_* p);
SECAPI CTimerValue_* CTimer_GetHighPrecisionTimer(CTimer_* p);
SECAPI CTimer_* _pTimer_();
SECAPI CTString_* TimeToString_(FLOAT t);

#define CTimer_TickQuantum TIME(1/20.0)

#ifdef __cplusplus
}
#endif

#endif
