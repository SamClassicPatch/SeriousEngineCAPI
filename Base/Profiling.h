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

#ifndef SECAPI_BASE_PROFILING_H
#define SECAPI_BASE_PROFILING_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void CProfileForm_Reset(CProfileForm_* p);
SECAPI void CProfileForm_Report(CProfileForm_* p, CTString_* s);

SECAPI CProfileForm_* _pfGfxProfile_();
SECAPI CProfileForm_* _pfModelProfile_();
SECAPI CProfileForm_* _pfSoundProfile_();
SECAPI CProfileForm_* _pfNetworkProfile_();
SECAPI CProfileForm_* _pfRenderProfile_();
SECAPI CProfileForm_* _pfWorldEditingProfile_();
SECAPI CProfileForm_* _pfPhysicsProfile_();

#ifdef __cplusplus
}
#endif

#endif
