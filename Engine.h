#ifndef SECAPI_ENGINE_H
#define SECAPI_ENGINE_H
#include "Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void SE_InitEngine_(CTString_* strGameID);
SECAPI void SE_InitEngineAtDirectory_(CTString_* strGameID, const CTFileName_* fnAppPath, const CTFileName_* fnExePath);
SECAPI void SE_EndEngine_();
SECAPI void SE_LoadDefaultFonts_();
SECAPI void SE_UpdateWindowHandle_(HWND hwndWindowed);
SECAPI void SE_PretouchIfNeeded_();

#ifdef __cplusplus
}
#endif

#endif
