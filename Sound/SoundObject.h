#ifndef SECAPI_SOUND_SOUND_OBJECT_H
#define SECAPI_SOUND_SOUND_OBJECT_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

// sound control values
#define SOF_NONE_         (0L)
#define SOF_LOOP_         (1L<<0)   // looping sound
#define SOF_3D_           (1L<<1)   // has 3d effects
#define SOF_VOLUMETRIC_   (1L<<2)   // no 3d effects inside hot-spot
#define SOF_SURROUND_     (1L<<3)   // surround effect
#define SOF_LOCAL_        (1L<<4)   // local to listener with same entity
#define SOF_SMOOTHCHANGE_ (1L<<5)   // for smooth transition from one sound to another on same channel
#define SOF_MUSIC_        (1L<<6)   // use music-volume master control instead of sound-volume
#define SOF_NONGAME_      (1L<<7)   // game sounds are not mixed while the game is paused
#define SOF_NOFILTER_     (1L<<8)   // used to disable listener-specific filters - i.e. underwater

#define SOF_PAUSED_       (1L<<28)  // playing, but paused (internal)
#define SOF_LOADED_       (1L<<29)  // sound just loaded (internal)
#define SOF_PREPARE_      (1L<<30)  // prepared for playing (internal)
#define SOF_PLAY_         (1L<<31)  // currently playing

SECAPI CSoundObject_* CSoundObject_new();
SECAPI void CSoundObject_delete(CSoundObject_* p);
SECAPI void CSoundObject_Copy(CSoundObject_* a, CSoundObject_* b);
SECAPI void CSoundObject_Play(CSoundObject_* p, CSoundData_* pCsdLink, SLONG slFlags);
SECAPI void CSoundObject_Stop(CSoundObject_* p);
SECAPI void CSoundObject_Stop_internal(CSoundObject_* p);
SECAPI void CSoundObject_Pause(CSoundObject_* p);
SECAPI void CSoundObject_Resume(CSoundObject_* p);
SECAPI BOOL CSoundObject_IsPlaying(CSoundObject_* p);
SECAPI BOOL CSoundObject_IsPaused(CSoundObject_* p);
SECAPI BOOL CSoundObject_IsHooked(const CSoundObject_* p);
SECAPI void CSoundObject_SetVolume(CSoundObject_* p, FLOAT fLeftVolume, FLOAT fRightVolume);
SECAPI void CSoundObject_SetFilter(CSoundObject_* p, FLOAT fLeftFilter, FLOAT fRightFilter);
SECAPI void CSoundObject_SetPitch(CSoundObject_* p, FLOAT fPitch);
SECAPI void CSoundObject_SetPhase(CSoundObject_* p, FLOAT fPhase);
SECAPI void CSoundObject_SetDelay(CSoundObject_* p, FLOAT fDelay);
SECAPI void CSoundObject_SetOwner(CSoundObject_* p, CEntity_* pen);
SECAPI void CSoundObject_Set3DParameters(CSoundObject_* p, FLOAT fMaxDistance, FLOAT fMinDistance, FLOAT fMaxVolume, FLOAT fPitch);
SECAPI void CSoundObject_Read_t(CSoundObject_* p, CTStream_* pistr);
SECAPI void CSoundObject_Write_t(CSoundObject_* p, CTStream_* postr);
SECAPI void CSoundObject_Play_t(CSoundObject_* p, const CTFileName_* fnmSound, SLONG slFlags);
SECAPI void CSoundObject_SetOffset(CSoundObject_* p, FLOAT fOffset);

#ifdef __cplusplus
}
#endif

#endif
