#include "Profiling.h"

void CProfileForm_Reset(CProfileForm_* p)
{
  ((CProfileForm*)p)->Reset();
}

void CProfileForm_Report(CProfileForm_* p, CTString_* s)
{
  ((CProfileForm*)p)->Report(*((CTString*)s));
}

CProfileForm_* _pfGfxProfile_()
{
  return (CProfileForm_*)(&_pfGfxProfile);
}

CProfileForm_* _pfModelProfile_()
{
  return (CProfileForm_*)(&_pfModelProfile);
}

CProfileForm_* _pfSoundProfile_()
{
  return (CProfileForm_*)(&_pfSoundProfile);
}

CProfileForm_* _pfNetworkProfile_()
{
  return (CProfileForm_*)(&_pfNetworkProfile);
}

CProfileForm_* _pfRenderProfile_()
{
  return (CProfileForm_*)(&_pfRenderProfile);
}

CProfileForm_* _pfWorldEditingProfile_()
{
  return (CProfileForm_*)(&_pfWorldEditingProfile);
}

CProfileForm_* _pfPhysicsProfile_()
{
  return (CProfileForm_*)(&_pfPhysicsProfile);
}
