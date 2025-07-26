#include "SoundLibrary.h"

SoundFormat_ _pSound_SetFormat_(SoundFormat_ EsfNew, BOOL bReport)
{
  SoundFormat_ res;
  STREAM_TRY
  res = (SoundFormat_)(_pSound->SetFormat((CSoundLibrary::SoundFormat)EsfNew, bReport));
  STREAM_CATCH
  return res;
}

SoundFormat_ _pSound_GetFormat_()
{
  return (SoundFormat_)(_pSound->GetFormat());
}

void _pSound_UpdateSounds_()
{
  STREAM_TRY
  _pSound->UpdateSounds();
  STREAM_CATCH
}

void _pSound_MixSounds_()
{
  STREAM_TRY
  _pSound->MixSounds();
  STREAM_CATCH
}

void _pSound_Mute_()
{
  _pSound->Mute();
}

BOOL _pSound_SetEnvironment_(INDEX iEnvNo, FLOAT fEnvSize)
{
  return _pSound->SetEnvironment(iEnvNo, fEnvSize);
}

void _pSound_AddSoundAware_(CSoundData_* CsdAdd)
{
  _pSound->AddSoundAware(*((CSoundData*)CsdAdd));
}

void _pSound_RemoveSoundAware_(CSoundData_* CsdRemove)
{
  _pSound->RemoveSoundAware(*((CSoundData*)CsdRemove));
}

void _pSound_Listen_(CSoundListener_* sl)
{
  _pSound->Listen(*((CSoundListener*)sl));
}

ENGINE_API extern INDEX snd_iFormat;
INDEX* snd_iFormat_()
{
  return &snd_iFormat;
}
