#include "Stock_CAnimData.h"
#include <Engine/Templates/Stock_CAnimData.h>

static CAnimData_* seh_pAnimStock_Obtain_t_(const CTFileName_* f)
{
  CAnimData* res = NULL;
  SECAPI_TRY
  res = _pAnimStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CAnimData_*)res;
}

CAnimData_* _pAnimStock_Obtain_t_(const CTFileName_* f)
{
  CAnimData_* res = NULL;
  STREAM_TRY
  res = seh_pAnimStock_Obtain_t_(f);
  STREAM_CATCH
  return res;
}

void _pAnimStock_Release(CAnimData_* p)
{
  _pAnimStock->Release((CAnimData*)p);
}

void _pAnimStock_FreeUnused()
{
  _pAnimStock->FreeUnused();
}
