#include "ChangeableRT.h"
#include <Engine/Base/ChangeableRT.h>

CChangeableRT_* CChangeableRT_new()
{
  return (CChangeableRT_*)(new CChangeableRT());
}

CChangeableRT_* CChangeableRT_clone(const CChangeableRT_* p)
{
  return (CChangeableRT_*)(new CChangeableRT(*((const CChangeableRT*)p)));
}

void CChangeableRT_delete(CChangeableRT_* p)
{
  delete ((CChangeableRT*)p);
}

void CChangeableRT_copy(CChangeableRT_* a, const CChangeableRT_* b)
{
  *((CChangeableRT*)a) = *((const CChangeableRT*)b);
}

void CChangeableRT_MarkChanged(CChangeableRT_* p)
{
  ((CChangeableRT*)p)->MarkChanged();
}

BOOL CChangeableRT_IsUpToDate(const CChangeableRT_* p, const CUpdateableRT_* u)
{
  return ((const CChangeableRT*)p)->IsUpToDate(*((const CUpdateableRT*)u));
}
