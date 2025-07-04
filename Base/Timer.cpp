#include "Timer.h"

class CTimerHandlerImpl : public CTimerHandler
{
public:
  explicit CTimerHandlerImpl(void (__cdecl *cb)(void))
    : m_callback(cb)
  {
  }

  virtual void HandleTimer()
  {
    m_callback();
  }

private:
  void (__cdecl *m_callback)(void);
};

CTimerValue_* CTimerValue_new()
{
  return (CTimerValue_*)(new CTimerValue());
}

CTimerValue_* CTimerValue_new_i64(int64_t v)
{
  return (CTimerValue_*)(new CTimerValue(v));
}

CTimerValue_* CTimerValue_new_s(DOUBLE d)
{
  return (CTimerValue_*)(new CTimerValue(d));
}

CTimerValue_* CTimerValue_clone(const CTimerValue_* p)
{
  return (CTimerValue_*)(new CTimerValue(*((const CTimerValue*)p)));
}

void CTimerValue_delete(CTimerValue_* p)
{
  delete ((CTimerValue*)p);
}

void CTimerValue_copy(CTimerValue_* a, const CTimerValue_* b)
{
  *((CTimerValue*)a) = *((const CTimerValue*)b);
}

int64_t* CTimerValue_tv_llValue(CTimerValue_* p)
{
  CTimerValue& t = *((CTimerValue*)p);
  return &(t.tv_llValue);
}

void CTimerValue_Clear(CTimerValue_* p)
{
  ((CTimerValue*)p)->Clear();
}

DOUBLE CTimerValue_GetSeconds(CTimerValue_* p)
{
  return ((CTimerValue*)p)->GetSeconds();
}

int64_t CTimerValue_GetMilliseconds(CTimerValue_* p)
{
  return ((CTimerValue*)p)->GetMilliseconds();
}


CTimerHandler_* CTimerHandler_new(void (__cdecl *cb)(void))
{
  return (CTimerHandler_*)(new CTimerHandlerImpl(cb));
}

void CTimerHandler_delete(CTimerHandler_* p)
{
  delete ((CTimerHandlerImpl*)p);
}


CTimer_* CTimer_new(BOOL interrupt)
{
  return (CTimer_*)(new CTimer(interrupt));
}

void CTimer_delete(CTimer_* p)
{
  delete ((CTimer*)p);
}

CTCriticalSection_* CTimer_tm_csHooks(CTimer_* p)
{
  CTimer& t = *((CTimer*)p);
  return (CTCriticalSection_*)(&(t.tm_csHooks));
}

void CTimer_AddHandler(CTimer_* p, CTimerHandler_* h)
{
  ((CTimer*)p)->AddHandler((CTimerHandlerImpl*)h);
}

void CTimer_RemHandler(CTimer_* p, CTimerHandler_* h)
{
  ((CTimer*)p)->RemHandler((CTimerHandlerImpl*)h);
}

void CTimer_HandleTimerHandlers(CTimer_* p)
{
  ((CTimer*)p)->HandleTimerHandlers();
}

void CTimer_SetRealTimeTick(CTimer_* p, TIME t)
{
  ((CTimer*)p)->SetRealTimeTick(t);
}

TIME CTimer_GetRealTimeTick(const CTimer_* p)
{
  return ((const CTimer*)p)->GetRealTimeTick();
}

void CTimer_SetCurrentTick(CTimer_* p, TIME t)
{
  ((CTimer*)p)->SetCurrentTick(t);
}

TIME CTimer_CurrentTick(const CTimer_* p)
{
  return ((const CTimer*)p)->CurrentTick();
}

TIME CTimer_GetLerpedCurrentTick(const CTimer_* p)
{
  return ((const CTimer*)p)->GetLerpedCurrentTick();
}

void CTimer_SetLerp(CTimer_* p, FLOAT l)
{
  ((CTimer*)p)->SetLerp(l);
}

void CTimer_SetLerp2(CTimer_* p, FLOAT l)
{
  ((CTimer*)p)->SetLerp2(l);
}

void CTimer_DisableLerp(CTimer_* p)
{
  ((CTimer*)p)->DisableLerp();
}

FLOAT CTimer_GetLerpFactor(const CTimer_* p)
{
  return ((const CTimer*)p)->GetLerpFactor();
}

FLOAT CTimer_GetLerpFactor2(const CTimer_* p)
{
  return ((const CTimer*)p)->GetLerpFactor2();
}

CTimerValue_* CTimer_GetHighPrecisionTimer(CTimer_* p)
{
  CTimerValue res = ((CTimer*)p)->GetHighPrecisionTimer();
  return (CTimerValue_*)(new CTimerValue(res));
}

CTimer_* _pTimer_()
{
  return (CTimer_*)(_pTimer);
}

CTString_* TimeToString_(FLOAT t)
{
  CTString res = TimeToString(t);
  return (CTString_*)(new CTString(res));
}
