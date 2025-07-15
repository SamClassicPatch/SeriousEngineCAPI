#ifndef SECAPI_SOUND_SOUND_LIBRARY_H
#define SECAPI_SOUND_SOUND_LIBRARY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SF_NONE_ 0
#define SF_11025_16_ 1
#define SF_22050_16_ 2
#define SF_44100_16_ 3
#define SF_ILLEGAL_ 4

SECAPI SoundFormat_ _pSound_SetFormat_(SoundFormat_ EsfNew, BOOL bReport);
SECAPI SoundFormat_ _pSound_GetFormat_();
SECAPI void _pSound_UpdateSounds_();
SECAPI void _pSound_MixSounds_();
SECAPI void _pSound_Mute_();
SECAPI BOOL _pSound_SetEnvironment_(INDEX iEnvNo, FLOAT fEnvSize);
SECAPI void _pSound_AddSoundAware_(CSoundData_* CsdAdd);
SECAPI void _pSound_RemoveSoundAware_(CSoundData_* CsdRemove);

#ifdef __cplusplus
}
#endif

#endif
