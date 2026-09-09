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

#include "SoundListener.h"

CSoundListener_* CSoundListener_new()
{
  return (CSoundListener_*)(new CSoundListener());
}

CSoundListener_* CSoundListener_clone(const CSoundListener_* p)
{
  return (CSoundListener_*)(new CSoundListener(*((const CSoundListener*)p)));
}

void CSoundListener_delete(CSoundListener_* p)
{
  delete ((CSoundListener*)p);
}

void CSoundListener_copy(CSoundListener_* a, const CSoundListener_* b)
{
  *((CSoundListener*)a) = *((const CSoundListener*)b);
}

FLOAT3D_* CSoundListener_sli_vPosition(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return (FLOAT3D_*)(&s.sli_vPosition);
}

FLOATmatrix3D_* CSoundListener_sli_mRotation(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return (FLOATmatrix3D_*)(&s.sli_mRotation);
}

FLOAT3D_* CSoundListener_sli_vSpeed(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return (FLOAT3D_*)(&s.sli_vSpeed);
}

FLOAT* CSoundListener_sli_fVolume(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return &s.sli_fVolume;
}

FLOAT* CSoundListener_sli_fFilter(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return &s.sli_fFilter;
}

CEntity_** CSoundListener_sli_penEntity(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return (CEntity_**)(&s.sli_penEntity);
}

INDEX* CSoundListener_sli_iEnvironmentType(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return &s.sli_iEnvironmentType;
}

FLOAT* CSoundListener_sli_fEnvironmentSize(CSoundListener_* p)
{
  CSoundListener& s = *((CSoundListener*)p);
  return &s.sli_fEnvironmentSize;
}
