#include "ErrorReporting.h"

void ThrowF_t_(char* error)
{
  SECAPI_TRY
  ThrowF_t(error);
  SECAPI_CATCH
}

void FatalError_(const char* error)
{
  FatalError(error);
}

void WarningMessage_(const char* error)
{
  WarningMessage(error);
}

void InfoMessage_(const char* error)
{
  InfoMessage(error);
}

CTString_* GetWindowsError_(DWORD error)
{
  CTString res = GetWindowsError(error);
  return (CTString_*)(new CTString(res));
}
