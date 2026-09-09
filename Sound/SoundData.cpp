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

#include "SoundData.h"
#include <Engine/Sound/SoundData.h>

CSoundData_* CSoundData_new()
{
  return (CSoundData_*)(new CSoundData());
}

void CSoundData_delete(CSoundData_* p)
{
  delete ((CSoundData*)p);
}

DOUBLE CSoundData_GetSecondsLength(CSoundData_* p)
{
  return ((CSoundData*)p)->GetSecondsLength();
}
