#ifndef SECAPI_TEMPLATES_STOCK_SOUND_DATA_H
#define SECAPI_TEMPLATES_STOCK_SOUND_DATA_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CSoundData_* _pSoundStock_Obtain_t(const CTFileName_* f);
SECAPI void _pSoundStock_Release(CSoundData_* p);
SECAPI void _pSoundStock_FreeUnused();

#ifdef __cplusplus
}
#endif

#endif
