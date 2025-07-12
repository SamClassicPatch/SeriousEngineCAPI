#ifndef SECAPI_SOUND_SOUND_DATA_H
#define SECAPI_SOUND_SOUND_DATA_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SDF_ENCODED_       (1UL<<0) // this is ogg or mpx compressed file
#define SDF_STREAMING_     (1UL<<1) // streaming from disk

SECAPI CSoundData_* CSoundData_new();
SECAPI void CSoundData_delete(CSoundData_* p);
SECAPI DOUBLE CSoundData_GetSecondsLength(CSoundData_* p);

#ifdef __cplusplus
}
#endif

#endif
