#include "BaseEvents.h"

EFirstWorldBase_* EFirstWorldBase_new()
{
  return (EFirstWorldBase_*)(new EFirstWorldBase());
}

EFirstWorldBase_* EFirstWorldBase_clone(const EFirstWorldBase_* p)
{
  return (EFirstWorldBase_*)(new EFirstWorldBase(*((const EFirstWorldBase*)p)));
}

void EFirstWorldBase_delete(EFirstWorldBase_* p)
{
  delete ((EFirstWorldBase*)p);
}

void EFirstWorldBase_copy(EFirstWorldBase_* a, const EFirstWorldBase_* b)
{
  *((EFirstWorldBase*)a) = *((const EFirstWorldBase*)b);
}
