#include "EntityClass.h"

MEMBER_PTR_IMPL(CEntityClass, CDLLEntityClass_, ec_pdecDLLClass)

CEntity_* CEntityClass_New(CEntityClass_* p)
{
  return (CEntity_*)(((CEntityClass*)p)->New());
}

CEntityProperty_* CEntityClass_PropertyForName(CEntityClass_* p, const CTString_* s)
{
  return (CEntityProperty_*)(((CEntityClass*)p)->PropertyForName(*((const CTString*)s)));
}
