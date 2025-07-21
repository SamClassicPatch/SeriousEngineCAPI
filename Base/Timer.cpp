#include "Timer.h"

class CTimerHandlerImpl : public CTimerHandler
{
public:
  explicit CTimerHandlerImpl(void (*cb)(void))
    : m_callback(cb)
  {
  }

  virtual void HandleTimer()
  {
    m_callback();
  }

private:
  void (*m_callback)(void);
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


CTimerHandler_* CTimerHandler_new(void (*cb)(void))
{
  return (CTimerHandler_*)(new CTimerHandlerImpl(cb));
}

void CTimerHandler_delete(CTimerHandler_* p)
{
  delete ((CTimerHandlerImpl*)p);
}

CTCriticalSection_* _pTimer_tm_csHooks_()
{
  return (CTCriticalSection_*)(&(_pTimer->tm_csHooks));
}

void _pTimer_AddHandler(CTimerHandler_* h)
{
  _pTimer->AddHandler((CTimerHandlerImpl*)h);
}

void _pTimer_RemHandler(CTimerHandler_* h)
{
  _pTimer->RemHandler((CTimerHandlerImpl*)h);
}

void _pTimer_HandleTimerHandlers()
{
  _pTimer->HandleTimerHandlers();
}

void _pTimer_SetRealTimeTick(TIME t)
{
  _pTimer->SetRealTimeTick(t);
}

TIME _pTimer_GetRealTimeTick()
{
  return _pTimer->GetRealTimeTick();
}

void _pTimer_SetCurrentTick(TIME t)
{
  _pTimer->SetCurrentTick(t);
}

TIME _pTimer_CurrentTick()
{
  return _pTimer->CurrentTick();
}

TIME _pTimer_GetLerpedCurrentTick()
{
  return _pTimer->GetLerpedCurrentTick();
}

void _pTimer_SetLerp(FLOAT l)
{
  _pTimer->SetLerp(l);
}

void _pTimer_SetLerp2(FLOAT l)
{
  _pTimer->SetLerp2(l);
}

void _pTimer_DisableLerp()
{
  _pTimer->DisableLerp();
}

FLOAT _pTimer_GetLerpFactor()
{
  return _pTimer->GetLerpFactor();
}

FLOAT _pTimer_GetLerpFactor2()
{
  return _pTimer->GetLerpFactor2();
}

CTimerValue_* _pTimer_GetHighPrecisionTimer_()
{
  CTimerValue res = _pTimer->GetHighPrecisionTimer();
  return (CTimerValue_*)(new CTimerValue(res));
}

BOOL _pTimerExists()
{
  return _pTimer != NULL;
}

CTString_* TimeToString_(FLOAT t)
{
  CTString res = TimeToString(t);
  return (CTString_*)(new CTString(res));
}
