#include "Stock_CModelData.h"
#include <Engine/Templates/Stock_CModelData.h>

static CModelData_* seh_pModelStock_Obtain_t_(const CTFileName_* f)
{
  CModelData* res = NULL;
  SECAPI_TRY
  res = _pModelStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CModelData_*)res;
}

CModelData_* _pModelStock_Obtain_t_(const CTFileName_* f)
{
  CModelData_* res = NULL;
  STREAM_TRY
  res = seh_pModelStock_Obtain_t_(f);
  STREAM_CATCH
  return res;
}

void _pModelStock_Release(CModelData_* p)
{
  _pModelStock->Release((CModelData*)p);
}

void _pModelStock_FreeUnused()
{
  _pModelStock->FreeUnused();
}
