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
