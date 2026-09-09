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

#ifndef SECAPI_SOUND_SOUND_DATA_H
#define SECAPI_SOUND_SOUND_DATA_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SDF_ENCODED_       (1UL<<0) // this is ogg or mpx compressed file
#define SDF_STREAMING_     (1UL<<1) // streaming from disk

SECAPI CSoundData_* CSoundData_new();
SECAPI void CSoundData_delete(CSoundData_* p);
SECAPI DOUBLE CSoundData_GetSecondsLength(CSoundData_* p);

#ifdef __cplusplus
}
#endif

#endif
