#include "Updateable.h"

CUpdateable_* CUpdateable_new()
{
  return (CUpdateable_*)(new CUpdateable());
}

CUpdateable_* CUpdateable_clone(const CUpdateable_* p)
{
  return (CUpdateable_*)(new CUpdateable(*((const CUpdateable*)p)));
}

void CUpdateable_delete(CUpdateable_* p)
{
  delete ((CUpdateable*)p);
}

void CUpdateable_copy(CUpdateable_* a, const CUpdateable_* b)
{
  *((CUpdateable*)a) = *((const CUpdateable*)b);
}

TIME CUpdateable_LastUpdateTime(const CUpdateable_* p)
{
  return ((const CUpdateable*)p)->LastUpdateTime();
}

void CUpdateable_MarkUpdated(CUpdateable_* p)
{
  ((CUpdateable*)p)->MarkUpdated();
}

void CUpdateable_Invalidate(CUpdateable_* p)
{
  ((CUpdateable*)p)->Invalidate();
}
