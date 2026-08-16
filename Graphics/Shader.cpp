#include "Shader.h"

extern GfxBlendEquation(*gfxGetBlendEquation)(void);
extern void (*gfxBlendEquation)(GfxBlendEquation);

void shaEnableBlend_()
{
  shaEnableBlend();
}

void shaDisableBlend_()
{
  shaDisableBlend();
}

void shaBlendFunc_(GfxBlend_ eSrc, GfxBlend_ eDst)
{
  shaBlendFunc((GfxBlend)eSrc, (GfxBlend)eDst);
}

GfxBlendEquation_ shaGetBlendEquation_()
{
  return (GfxBlendEquation_)gfxGetBlendEquation();
}

void shaBlendEquation_(GfxBlendEquation_ blend_equation)
{
  gfxBlendEquation((GfxBlendEquation)blend_equation);
}
