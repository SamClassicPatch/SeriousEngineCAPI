#include "EntityPointer.h"

CEntityPointer_* CEntityPointer_new()
{
  return (CEntityPointer_*)(new CEntityPointer());
}

CEntityPointer_* CEntityPointer_new_e(CEntity_* p)
{
  return (CEntityPointer_*)(new CEntityPointer((CEntity*)p));
}

CEntityPointer_* CEntityPointer_clone(const CEntityPointer_* p)
{
  return (CEntityPointer_*)(new CEntityPointer(*((const CEntityPointer*)p)));
}

void CEntityPointer_delete(CEntityPointer_* p)
{
  delete ((CEntityPointer*)p);
}

void CEntityPointer_copy(CEntityPointer_* a, const CEntityPointer_* b)
{
  *((CEntityPointer*)a) = *((const CEntityPointer*)b);
}

void CEntityPointer_copy_e(CEntityPointer_* a, CEntity_* b)
{
  *((CEntityPointer*)a) = (CEntity*)b;
}

BOOL CEntityPointer_equal(const CEntityPointer_* a, const CEntityPointer_* b)
{
  return (*((const CEntityPointer*)a)) == (*((const CEntityPointer*)b));
}

MEMBER_PTR_IMPL(CEntityPointer, CEntity_, ep_pen)
