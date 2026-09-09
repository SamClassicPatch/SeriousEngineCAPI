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

#include "EntityProperties.h"

MEMBER_VAL_IMPL(CEntityPropertyEnumValue, INDEX, epev_iValue)
MEMBER_PTR_IMPL(CEntityPropertyEnumValue, char, epev_strName)

MEMBER_ARR_IMPL(CEntityPropertyEnumType, CEntityPropertyEnumValue_, epet_aepevValues)
MEMBER_VAL_IMPL(CEntityPropertyEnumType, INDEX, epet_ctValues)

MEMBER_VAL_IMPL(CEntityProperty, PropertyType_, ep_eptType)
MEMBER_PTR_IMPL(CEntityProperty, CEntityPropertyEnumType_, ep_pepetEnumType)
MEMBER_VAL_IMPL(CEntityProperty, SLONG, ep_slOffset)
MEMBER_PTR_IMPL(CEntityProperty, char, ep_strName)
MEMBER_VAL_IMPL(CEntityProperty, ULONG, ep_ulFlags)
MEMBER_VAL_IMPL(CEntityProperty, char, ep_chShortcut)

MEMBER_ARR_IMPL(CDLLEntityClass, CEntityProperty_, dec_aepProperties)
MEMBER_VAL_IMPL(CDLLEntityClass, INDEX, dec_ctProperties)
MEMBER_PTR_IMPL(CDLLEntityClass, char, dec_strName)
MEMBER_PTR_IMPL(CDLLEntityClass, char, dec_strIconFileName)
MEMBER_PTR_IMPL(CDLLEntityClass, CDLLEntityClass_, dec_pdecBase)

CEntityProperty_* CDLLEntityClass_PropertyForName(CDLLEntityClass_* p, const CTString_* s)
{
  return (CEntityProperty_*)(((CDLLEntityClass*)p)->PropertyForName(*((const CTString*)s)));
}
