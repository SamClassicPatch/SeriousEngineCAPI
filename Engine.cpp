#include "Engine.h"

void SE_InitEngine_(CTString_* strGameID)
{
  SECAPI_TRY
  SE_InitEngine(*((CTString*)strGameID));
  SECAPI_CATCH
}

void SE_EndEngine_()
{
  SECAPI_TRY
  SE_EndEngine();
  SECAPI_CATCH
}

void SE_LoadDefaultFonts_()
{
  SECAPI_TRY
  SE_LoadDefaultFonts();
  SECAPI_CATCH
}

void SE_UpdateWindowHandle_(HWND hwndWindowed)
{
  SECAPI_TRY
  SE_UpdateWindowHandle(hwndWindowed);
  SECAPI_CATCH
}

void SE_PretouchIfNeeded_()
{
  SECAPI_TRY
  SE_PretouchIfNeeded();
  SECAPI_CATCH
}
