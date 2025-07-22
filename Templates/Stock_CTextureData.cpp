#include "Stock_CTextureData.h"
#include <Engine/Templates/Stock_CTextureData.h>

static CTextureData_* seh_pTextureStock_Obtain_t_(const CTFileName_* f)
{
  CTextureData* res = NULL;
  SECAPI_TRY
  res = _pTextureStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CTextureData_*)res;
}

CTextureData_* _pTextureStock_Obtain_t_(const CTFileName_* f)
{
  CTextureData_* res = NULL;
  STREAM_TRY
  res = seh_pTextureStock_Obtain_t_(f);
  STREAM_CATCH
  return res;
}

void _pTextureStock_Release(CTextureData_* p)
{
  _pTextureStock->Release((CTextureData*)p);
}

void _pTextureStock_FreeUnused()
{
  _pTextureStock->FreeUnused();
}
