#include "Stock_CModelData.h"
#include <Engine/Templates/Stock_CModelData.h>

CModelData_* _pModelStock_Obtain_t(const CTFileName_* f)
{
  CModelData* res = NULL;
  SECAPI_TRY
  res = _pModelStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CModelData_*)res;
}

void _pModelStock_Release(CModelData_* p)
{
  _pModelStock->Release((CModelData*)p);
}

void _pModelStock_FreeUnused()
{
  _pModelStock->FreeUnused();
}
