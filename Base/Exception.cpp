#include "Types.h"

static char g_exceptionBuffer[257];
static bool g_hasException = false;

BOOL HasException()
{
  return g_hasException ? TRUE : FALSE;
}

char* GrabException()
{
  g_hasException = false;
  return g_exceptionBuffer;
}

void SetException(char* s)
{
  const size_t len = max(256, strlen(s));
  memcpy(g_exceptionBuffer, s, len);
  g_exceptionBuffer[len] = '\0';
  g_hasException = true;
}
