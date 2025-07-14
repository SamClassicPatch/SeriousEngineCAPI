#include "DisplayMode.h"

CDisplayMode_* CDisplayMode_new()
{
  return (CDisplayMode_*)(new CDisplayMode());
}

CDisplayMode_* CDisplayMode_clone(const CDisplayMode_* p)
{
  return (CDisplayMode_*)(new CDisplayMode(*((const CDisplayMode*)p)));
}

void CDisplayMode_delete(CDisplayMode_* p)
{
  delete ((CDisplayMode*)p);
}

void CDisplayMode_copy(CDisplayMode_* a, const CDisplayMode_* b)
{
  *((CDisplayMode*)a) = *((const CDisplayMode*)b);
}

PIX* CDisplayMode_dm_pixSizeI(CDisplayMode_* p)
{
  CDisplayMode& d = *((CDisplayMode*)p);
  return &(d.dm_pixSizeI);
}

PIX* CDisplayMode_dm_pixSizeJ(CDisplayMode_* p)
{
  CDisplayMode& d = *((CDisplayMode*)p);
  return &(d.dm_pixSizeJ);
}

DisplayDepth_* CDisplayMode_dm_ddDepth(CDisplayMode_* p)
{
  CDisplayMode& d = *((CDisplayMode*)p);
  return (DisplayDepth_*)(&(d.dm_ddDepth));
}

CTString_* CDisplayMode_DepthString(const CDisplayMode_* p)
{
  CTString res = ((const CDisplayMode*)p)->DepthString();
  return (CTString_*)(new CTString(res));
}

BOOL CDisplayMode_IsDualHead(CDisplayMode_* p)
{
  return ((CDisplayMode*)p)->IsDualHead();
}

BOOL CDisplayMode_IsWideScreen(CDisplayMode_* p)
{
  return ((CDisplayMode*)p)->IsWideScreen();
}

BOOL CDisplayMode_IsFullScreen(CDisplayMode_* p)
{
  return ((CDisplayMode*)p)->IsFullScreen();
}
