#include "Stock_CSoundData.h"
#include <Engine/Templates/Stock_CSoundData.h>

static CSoundData_* seh_pSoundStock_Obtain_t_(const CTFileName_* f)
{
  CSoundData* res = NULL;
  SECAPI_TRY
  res = _pSoundStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CSoundData_*)res;
}

CSoundData_* _pSoundStock_Obtain_t_(const CTFileName_* f)
{
  CSoundData_* res = NULL;
  STREAM_TRY
  res = seh_pSoundStock_Obtain_t_(f);
  STREAM_CATCH
  return res;
}

void _pSoundStock_Release(CSoundData_* p)
{
  _pSoundStock->Release((CSoundData*)p);
}

void _pSoundStock_FreeUnused()
{
  _pSoundStock->FreeUnused();
}
