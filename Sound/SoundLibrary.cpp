#include "SoundLibrary.h"

SoundFormat_ _pSound_SetFormat_(SoundFormat_ EsfNew, BOOL bReport)
{
  return (SoundFormat_)(_pSound->SetFormat((CSoundLibrary::SoundFormat)EsfNew, bReport));
}

SoundFormat_ _pSound_GetFormat_()
{
  return (SoundFormat_)(_pSound->GetFormat());
}

void _pSound_UpdateSounds_()
{
  _pSound->UpdateSounds();
}

void _pSound_MixSounds_()
{
  _pSound->MixSounds();
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
