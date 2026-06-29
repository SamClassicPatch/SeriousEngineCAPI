#include "World.h"

CWorld_* CWorld_new()
{
  return (CWorld_*)(new CWorld());
}

void CWorld_delete(CWorld_* p)
{
  delete ((CWorld*)p);
}
