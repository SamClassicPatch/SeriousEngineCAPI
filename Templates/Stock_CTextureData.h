#ifndef SECAPI_TEMPLATES_STOCK_TEXTURE_DATA_H
#define SECAPI_TEMPLATES_STOCK_TEXTURE_DATA_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CTextureData_* _pTextureStock_Obtain_t_(const CTFileName_* f);
SECAPI void _pTextureStock_Release(CTextureData_* p);
SECAPI void _pTextureStock_FreeUnused();

#ifdef __cplusplus
}
#endif

#endif
