#include "Float.h"

FPUPrecisionType_ GetFPUPrecision_()
{
  return (FPUPrecisionType_)GetFPUPrecision();
}

void SetFPUPrecision_(FPUPrecisionType_ fptNew)
{
  SetFPUPrecision((FPUPrecisionType)fptNew);
}
