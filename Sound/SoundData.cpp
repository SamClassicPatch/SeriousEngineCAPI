#include "SoundData.h"
#include <Engine/Sound/SoundData.h>

CSoundData_* CSoundData_new()
{
  return (CSoundData_*)(new CSoundData());
}

void CSoundData_delete(CSoundData_* p)
{
  delete ((CSoundData*)p);
}

DOUBLE CSoundData_GetSecondsLength(CSoundData_* p)
{
  return ((CSoundData*)p)->GetSecondsLength();
}
