#include "Stock_CEntityClass.h"
#include <Engine/Templates/Stock_CEntityClass.h>

static CEntityClass_* seh_pEntityClassStock_Obtain_t_(const CTFileName_* f)
{
  CEntityClass* res = NULL;
  SECAPI_TRY
  res = _pEntityClassStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CEntityClass_*)res;
}

CEntityClass_* _pEntityClassStock_Obtain_t_(const CTFileName_* f)
{
  CEntityClass_* res = NULL;
  STREAM_TRY
  res = seh_pEntityClassStock_Obtain_t_(f);
  STREAM_CATCH
  return res;
}

static void seh_pEntityClassStock_Release_(CEntityClass_* p)
{
  SECAPI_TRY
  _pEntityClassStock->Release((CEntityClass*)p);
  SECAPI_CATCH
}

void _pEntityClassStock_Release_(CEntityClass_* p)
{
  STREAM_TRY
  seh_pEntityClassStock_Release_(p);
  STREAM_CATCH
}

void _pEntityClassStock_FreeUnused()
{
  _pEntityClassStock->FreeUnused();
}
