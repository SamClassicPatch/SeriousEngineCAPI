#include "Changeable.h"

CChangeable_* CChangeable_new()
{
  return (CChangeable_*)(new CChangeable());
}

CChangeable_* CChangeable_clone(const CChangeable_* p)
{
  return (CChangeable_*)(new CChangeable(*((const CChangeable*)p)));
}

void CChangeable_delete(CChangeable_* p)
{
  delete ((CChangeable*)p);
}

void CChangeable_copy(CChangeable_* a, const CChangeable_* b)
{
  *((CChangeable*)a) = *((const CChangeable*)b);
}

void CChangeable_MarkChanged(CChangeable_* p)
{
  ((CChangeable*)p)->MarkChanged();
}

BOOL CChangeable_IsUpToDate(const CChangeable_* p, const CUpdateable_* u)
{
  return ((const CChangeable*)p)->IsUpToDate(*((const CUpdateable*)u));
}

