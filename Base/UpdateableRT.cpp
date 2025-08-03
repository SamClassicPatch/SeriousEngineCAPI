#include "UpdateableRT.h"
#include <Engine/Base/UpdateableRT.h>

CUpdateableRT_* CUpdateableRT_new()
{
  return (CUpdateableRT_*)(new CUpdateableRT());
}

CUpdateableRT_* CUpdateableRT_clone(const CUpdateableRT_* p)
{
  return (CUpdateableRT_*)(new CUpdateableRT(*((const CUpdateableRT*)p)));
}

void CUpdateableRT_delete(CUpdateableRT_* p)
{
  delete ((CUpdateableRT*)p);
}

void CUpdateableRT_copy(CUpdateableRT_* a, const CUpdateableRT_* b)
{
  *((CUpdateableRT*)a) = *((const CUpdateableRT*)b);
}

TIME CUpdateableRT_LastUpdateTime(const CUpdateableRT_* p)
{
  return ((const CUpdateableRT*)p)->LastUpdateTime();
}

void CUpdateableRT_MarkUpdated(CUpdateableRT_* p)
{
  ((CUpdateableRT*)p)->MarkUpdated();
}

void CUpdateableRT_Invalidate(CUpdateableRT_* p)
{
  ((CUpdateableRT*)p)->Invalidate();
}
