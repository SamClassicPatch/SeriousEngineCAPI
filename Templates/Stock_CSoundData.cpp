#include "Stock_CSoundData.h"
#include <Engine/Templates/Stock_CSoundData.h>

CSoundData_* _pSoundStock_Obtain_t(const CTFileName_* f)
{
  CSoundData* res = NULL;
  SECAPI_TRY
  res = _pSoundStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CSoundData_*)res;
}

void _pSoundStock_Release(CSoundData_* p)
{
  _pSoundStock->Release((CSoundData*)p);
}

void _pSoundStock_FreeUnused()
{
  _pSoundStock->FreeUnused();
}
