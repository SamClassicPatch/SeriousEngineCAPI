#include "Memory.h"

void* AllocMemory_(SLONG memsize)
{
  return AllocMemory(memsize);
}

void FreeMemory_(void* memory)
{
  FreeMemory(memory);
}
