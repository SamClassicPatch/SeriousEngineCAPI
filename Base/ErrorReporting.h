#ifndef SECAPI_BASE_ERROR_REPORTING_H
#define SECAPI_BASE_ERROR_REPORTING_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void ThrowF_t_(char* error);
SECAPI void FatalError_(const char* error);
SECAPI void WarningMessage_(const char* error);
SECAPI void InfoMessage_(const char* error);
SECAPI CTString_* GetWindowsError_(DWORD error);

#ifdef __cplusplus
}
#endif

#endif
