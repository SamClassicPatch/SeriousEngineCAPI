#include "Raster.h"

CViewPort_** CRaster_ra_pvpViewPort(CRaster_* p)
{
  CRaster& r = *((CRaster*)p);
  return (CViewPort_**)(&(r.ra_pvpViewPort));
}
