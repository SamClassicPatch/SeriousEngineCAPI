#ifndef SECAPI_BASE_CONSOLE_H
#define SECAPI_BASE_CONSOLE_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void CPutString_(const char* s);
SECAPI BOOL REG_GetString_(const CTString_* k, CTString_* s);

SECAPI INDEX _pConsole_con_ctLines();
SECAPI INDEX _pConsole_con_ctCharsPerLine();
SECAPI const char* _pConsole_GetBuffer();

#ifdef __cplusplus
}
#endif

#endif
