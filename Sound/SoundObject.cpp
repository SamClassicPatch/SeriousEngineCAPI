#include "SoundObject.h"

CSoundObject_* CSoundObject_new()
{
  return (CSoundObject_*)(new CSoundObject());
}

void CSoundObject_delete(CSoundObject_* p)
{
  delete ((CSoundObject*)p);
}

void CSoundObject_Copy(CSoundObject_* a, CSoundObject_* b)
{
  ((CSoundObject*)a)->Copy(*((CSoundObject*)b));
}

void CSoundObject_Play(CSoundObject_* p, CSoundData_* pCsdLink, SLONG slFlags)
{
  ((CSoundObject*)p)->Play((CSoundData*)pCsdLink, slFlags);
}

void CSoundObject_Stop(CSoundObject_* p)
{
  ((CSoundObject*)p)->Stop();
}

void CSoundObject_Stop_internal(CSoundObject_* p)
{
  ((CSoundObject*)p)->Stop_internal();
}

void CSoundObject_Pause(CSoundObject_* p)
{
  ((CSoundObject*)p)->Pause();
}

void CSoundObject_Resume(CSoundObject_* p)
{
  ((CSoundObject*)p)->Resume();
}

BOOL CSoundObject_IsPlaying(CSoundObject_* p)
{
  return ((CSoundObject*)p)->IsPlaying();
}

BOOL CSoundObject_IsPaused(CSoundObject_* p)
{
  return ((CSoundObject*)p)->IsPaused();
}

BOOL CSoundObject_IsHooked(const CSoundObject_* p)
{
  return ((const CSoundObject*)p)->IsHooked();
}

void CSoundObject_SetVolume(CSoundObject_* p, FLOAT fLeftVolume, FLOAT fRightVolume)
{
  ((CSoundObject*)p)->SetVolume(fLeftVolume, fRightVolume);
}

void CSoundObject_SetFilter(CSoundObject_* p, FLOAT fLeftFilter, FLOAT fRightFilter)
{
  ((CSoundObject*)p)->SetFilter(fLeftFilter, fRightFilter);
}

void CSoundObject_SetPitch(CSoundObject_* p, FLOAT fPitch)
{
  ((CSoundObject*)p)->SetPitch(fPitch);
}

void CSoundObject_SetPhase(CSoundObject_* p, FLOAT fPhase)
{
  ((CSoundObject*)p)->SetPhase(fPhase);
}

void CSoundObject_SetDelay(CSoundObject_* p, FLOAT fDelay)
{
  ((CSoundObject*)p)->SetDelay(fDelay);
}

void CSoundObject_SetOwner(CSoundObject_* p, CEntity_* pen)
{
  ((CSoundObject*)p)->SetOwner((CEntity*)pen);
}

void CSoundObject_Set3DParameters(CSoundObject_* p, FLOAT fMaxDistance, FLOAT fMinDistance, FLOAT fMaxVolume, FLOAT fPitch)
{
  ((CSoundObject*)p)->Set3DParameters(fMaxDistance, fMinDistance, fMaxVolume, fPitch);
}

void CSoundObject_Read_t(CSoundObject_* p, CTStream_* pistr)
{
  SECAPI_TRY
  ((CSoundObject*)p)->Read_t((CTStream*)pistr);
  SECAPI_CATCH
}

void CSoundObject_Write_t(CSoundObject_* p, CTStream_* postr)
{
  SECAPI_TRY
  ((CSoundObject*)p)->Write_t((CTStream*)postr);
  SECAPI_CATCH
}

void CSoundObject_Play_t(CSoundObject_* p, const CTFileName_* fnmSound, SLONG slFlags)
{
  SECAPI_TRY
  ((CSoundObject*)p)->Play_t(*((const CTFileName*)fnmSound), slFlags);
  SECAPI_CATCH
}

void CSoundObject_SetOffset(CSoundObject_* p, FLOAT fOffset)
{
  ((CSoundObject*)p)->SetOffset(fOffset);
}
