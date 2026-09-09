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

#include "WorldSettings.h"

MEMBER_VAL_IMPL(CTextureTransformation, CTString_, tt_strName)
MEMBER_VAL_IMPL(CTextureTransformation, CMappingDefinition_, tt_mdTransformation)
MEMBER_VAL_IMPL(CTextureBlending, CTString_, tb_strName)
MEMBER_VAL_IMPL(CTextureBlending, UBYTE, tb_ubBlendingType)
MEMBER_VAL_IMPL(CTextureBlending, COLOR, tb_colMultiply)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_fFriction)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_fStairsHeight)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_fClimbSlopeCos)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_fJumpSlopeCos)
MEMBER_VAL_IMPL(CSurfaceType, INDEX, st_iWalkDamageType)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_fWalkDamageAmount)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_tmWalkDamageDelay)
MEMBER_VAL_IMPL(CSurfaceType, FLOAT, st_tmWalkDamageFrequency)
MEMBER_VAL_IMPL(CSurfaceType, ULONG, st_ulFlags)
MEMBER_VAL_IMPL(CSurfaceType, CTString_, st_strName)
MEMBER_VAL_IMPL(CContentType, CTString_, ct_strName)
MEMBER_VAL_IMPL(CContentType, ULONG, ct_ulFlags)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fDensity)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fFluidFriction)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fControlMultiplier)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fSpeedMultiplier)
MEMBER_VAL_IMPL(CContentType, INDEX, ct_iSwimDamageType)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fSwimDamageAmount)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_tmSwimDamageDelay)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_tmSwimDamageFrequency)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fDrowningDamageAmount)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_tmDrowningDamageDelay)
MEMBER_VAL_IMPL(CContentType, FLOAT, ct_fKillImmersion)
MEMBER_VAL_IMPL(CContentType, INDEX, ct_iKillDamageType)
MEMBER_VAL_IMPL(CEnvironmentType, CTString_, et_strName)
MEMBER_VAL_IMPL(CEnvironmentType, INDEX, et_iType)
MEMBER_VAL_IMPL(CEnvironmentType, FLOAT, et_fSize)
MEMBER_VAL_IMPL(CIlluminationType, CTString_, it_strName)
