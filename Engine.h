/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

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

// will take ownership of the passed CTFileName
SECAPI void SetFileRequesterCallback(CTFileName_* (*c)(char* title, char* filters, char* registry, char* selectedByDefault));

#ifdef __cplusplus
}
#endif

#endif
