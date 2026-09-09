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

#ifndef SECAPI_GRAPHICS_DISPLAY_MODE_H
#define SECAPI_GRAPHICS_DISPLAY_MODE_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DD_NODEPTH_ -1
#define DD_DEFAULT_ 0
#define DD_16BIT_ 1
#define DD_32BIT_ 2
#define DD_24BIT_ 3

SECAPI CDisplayMode_* CDisplayMode_new();
SECAPI CDisplayMode_* CDisplayMode_clone(const CDisplayMode_* p);
SECAPI void CDisplayMode_delete(CDisplayMode_* p);
SECAPI void CDisplayMode_copy(CDisplayMode_* a, const CDisplayMode_* b);
SECAPI PIX* CDisplayMode_dm_pixSizeI(CDisplayMode_* p);
SECAPI PIX* CDisplayMode_dm_pixSizeJ(CDisplayMode_* p);
SECAPI DisplayDepth_* CDisplayMode_dm_ddDepth(CDisplayMode_* p);
SECAPI CTString_* CDisplayMode_DepthString(const CDisplayMode_* p);
SECAPI BOOL CDisplayMode_IsDualHead(CDisplayMode_* p);
SECAPI BOOL CDisplayMode_IsWideScreen(CDisplayMode_* p);
SECAPI BOOL CDisplayMode_IsFullScreen(CDisplayMode_* p);

#ifdef __cplusplus
}
#endif

#endif
