/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

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
