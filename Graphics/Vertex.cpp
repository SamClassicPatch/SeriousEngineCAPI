#include "Vertex.h"

GFXTexCoord_* GFXTexCoord_new()
{
  return (GFXTexCoord_*)(new GFXTexCoord());
}

GFXTexCoord_* GFXTexCoord_clone(const GFXTexCoord_* p)
{
  return (GFXTexCoord_*)(new GFXTexCoord(*((const GFXTexCoord*)p)));
}

void GFXTexCoord_delete(GFXTexCoord_* p)
{
  delete ((GFXTexCoord*)p);
}

void GFXTexCoord_copy(GFXTexCoord_* a, const GFXTexCoord_* b)
{
  *((GFXTexCoord*)a) = *((const GFXTexCoord*)b);
}

FLOAT* GFXTexCoord_u(GFXTexCoord_* p)
{
  GFXTexCoord& v = *((GFXTexCoord*)p);
  return &v.u;
}

FLOAT* GFXTexCoord_v(GFXTexCoord_* p)
{
  GFXTexCoord& t = *((GFXTexCoord*)p);
  return &t.v;
}

FLOAT* GFXTexCoord_s(GFXTexCoord_* p)
{
  GFXTexCoord& v = *((GFXTexCoord*)p);
  return &v.s;
}

FLOAT* GFXTexCoord_t(GFXTexCoord_* p)
{
  GFXTexCoord& v = *((GFXTexCoord*)p);
  return &v.t;
}

GFXTexCoord4_* GFXTexCoord4_new()
{
  return (GFXTexCoord4_*)(new GFXTexCoord4());
}

GFXTexCoord4_* GFXTexCoord4_clone(const GFXTexCoord4_* p)
{
  return (GFXTexCoord4_*)(new GFXTexCoord4(*((const GFXTexCoord4*)p)));
}

void GFXTexCoord4_delete(GFXTexCoord4_* p)
{
  delete ((GFXTexCoord4*)p);
}

void GFXTexCoord4_copy(GFXTexCoord4_* a, const GFXTexCoord4_* b)
{
  *((GFXTexCoord4*)a) = *((const GFXTexCoord4*)b);
}

FLOAT* GFXTexCoord4_s(GFXTexCoord4_* p)
{
  GFXTexCoord4& c = *((GFXTexCoord4*)p);
  return &c.s;
}

FLOAT* GFXTexCoord4_t(GFXTexCoord4_* p)
{
  GFXTexCoord4& c = *((GFXTexCoord4*)p);
  return &c.t;
}

FLOAT* GFXTexCoord4_r(GFXTexCoord4_* p)
{
  GFXTexCoord4& c = *((GFXTexCoord4*)p);
  return &c.r;
}

FLOAT* GFXTexCoord4_q(GFXTexCoord4_* p)
{
  GFXTexCoord4& c = *((GFXTexCoord4*)p);
  return &c.q;
}

GFXColor_* GFXColor_new()
{
  return (GFXColor_*)(new GFXColor());
}

GFXColor_* GFXColor_new_col(COLOR col)
{
  return (GFXColor_*)(new GFXColor(col));
}

GFXColor_* GFXColor_clone(const GFXColor_* p)
{
  return (GFXColor_*)(new GFXColor(*((const GFXColor*)p)));
}

void GFXColor_delete(GFXColor_* p)
{
  delete ((GFXColor*)p);
}

void GFXColor_copy(GFXColor_* a, const GFXColor_* b)
{
  *((GFXColor*)a) = *((const GFXColor*)b);
}

void GFXColor_Set(GFXColor_* p, COLOR col)
{
  ((GFXColor*)p)->Set(col);
}

void GFXColor_MultiplyRGBA(GFXColor_* p, const GFXColor_* c1, const GFXColor_* c2)
{
  ((GFXColor*)p)->MultiplyRGBA(*((const GFXColor*)c1), *((const GFXColor*)c2));
}

void GFXColor_MultiplyRGB(GFXColor_* p, const GFXColor_* c1, const GFXColor_* c2)
{
  ((GFXColor*)p)->MultiplyRGB(*((const GFXColor*)c1), *((const GFXColor*)c2));
}

void GFXColor_MultiplyRGBCopyA1(GFXColor_* p, const GFXColor_* c1, const GFXColor_* c2)
{
  ((GFXColor*)p)->MultiplyRGBCopyA1(*((const GFXColor*)c1), *((const GFXColor*)c2));
}

void GFXColor_AttenuateRGB(GFXColor_* p, ULONG a)
{
  ((GFXColor*)p)->AttenuateRGB(a);
}

void GFXColor_AttenuateA(GFXColor_* p, ULONG a)
{
  ((GFXColor*)p)->AttenuateA(a);
}

UBYTE* GFXColor_r(GFXColor_* p)
{
  GFXColor& c = *((GFXColor*)p);
  return &c.r;
}

UBYTE* GFXColor_g(GFXColor_* p)
{
  GFXColor& c = *((GFXColor*)p);
  return &c.g;
}

UBYTE* GFXColor_b(GFXColor_* p)
{
  GFXColor& c = *((GFXColor*)p);
  return &c.b;
}

UBYTE* GFXColor_a(GFXColor_* p)
{
  GFXColor& c = *((GFXColor*)p);
  return &c.a;
}

ULONG* GFXColor_abgr(GFXColor_* p)
{
  GFXColor& c = *((GFXColor*)p);
  return &c.abgr;
}



GFXVertex4_* GFXVertex4_new()
{
  return (GFXVertex4_*)(new GFXVertex4());
}

GFXVertex4_* GFXVertex4_clone(const GFXVertex4_* p)
{
  return (GFXVertex4_*)(new GFXVertex4(*((const GFXVertex4*)p)));
}

void GFXVertex4_delete(GFXVertex4_* p)
{
  delete ((GFXVertex4*)p);
}

void GFXVertex4_copy(GFXVertex4_* a, const GFXVertex4_* b)
{
  *((GFXVertex4*)a) = *((const GFXVertex4*)b);
}

FLOAT* GFXVertex4_x(GFXVertex4_* p)
{
  GFXVertex4& v = *((GFXVertex4*)p);
  return &v.x;
}

FLOAT* GFXVertex4_y(GFXVertex4_* p)
{
  GFXVertex4& v = *((GFXVertex4*)p);
  return &v.y;
}

FLOAT* GFXVertex4_z(GFXVertex4_* p)
{
  GFXVertex4& v = *((GFXVertex4*)p);
  return &v.z;
}

GFXColor_* GFXVertex4_col(GFXVertex4_* p)
{
  GFXVertex4& v = *((GFXVertex4*)p);
  return (GFXColor_*)(&v.col);
}

SLONG* GFXVertex4_shade(GFXVertex4_* p)
{
  GFXVertex4& v = *((GFXVertex4*)p);
  return &v.shade;
}


GFXNormal3_* GFXNormal3_new()
{
  return (GFXNormal3_*)(new GFXNormal3());
}

GFXNormal3_* GFXNormal3_clone(const GFXNormal3_* p)
{
  return (GFXNormal3_*)(new GFXNormal3(*((const GFXNormal3*)p)));
}

void GFXNormal3_delete(GFXNormal3_* p)
{
  delete ((GFXNormal3*)p);
}

void GFXNormal3_copy(GFXNormal3_* a, const GFXNormal3_* b)
{
  *((GFXNormal3*)a) = *((const GFXNormal3*)b);
}

FLOAT* GFXNormal3_nx(GFXNormal3_* p)
{
  GFXNormal3& v = *((GFXNormal3*)p);
  return &v.nx;
}

FLOAT* GFXNormal3_ny(GFXNormal3_* p)
{
  GFXNormal3& v = *((GFXNormal3*)p);
  return &v.ny;
}

FLOAT* GFXNormal3_nz(GFXNormal3_* p)
{
  GFXNormal3& v = *((GFXNormal3*)p);
  return &v.nz;
}

GFXNormal4_* GFXNormal4_new()
{
  return (GFXNormal4_*)(new GFXNormal4());
}

GFXNormal4_* GFXNormal4_clone(const GFXNormal4_* p)
{
  return (GFXNormal4_*)(new GFXNormal4(*((const GFXNormal4*)p)));
}

void GFXNormal4_delete(GFXNormal4_* p)
{
  delete ((GFXNormal4*)p);
}

void GFXNormal4_copy(GFXNormal4_* a, const GFXNormal4_* b)
{
  *((GFXNormal4*)a) = *((const GFXNormal4*)b);
}

FLOAT* GFXNormal4_nx(GFXNormal4_* p)
{
  GFXNormal4& v = *((GFXNormal4*)p);
  return &v.nx;
}

FLOAT* GFXNormal4_ny(GFXNormal4_* p)
{
  GFXNormal4& v = *((GFXNormal4*)p);
  return &v.ny;
}

FLOAT* GFXNormal4_nz(GFXNormal4_* p)
{
  GFXNormal4& v = *((GFXNormal4*)p);
  return &v.nz;
}

ULONG* GFXNormal4_ul(GFXNormal4_* p)
{
  GFXNormal4& v = *((GFXNormal4*)p);
  return &v.ul;
}

GFXVertex3_* GFXVertex3_new()
{
  return (GFXVertex3_*)(new GFXVertex3());
}

GFXVertex3_* GFXVertex3_clone(const GFXVertex3_* p)
{
  return (GFXVertex3_*)(new GFXVertex3(*((const GFXVertex3*)p)));
}

void GFXVertex3_delete(GFXVertex3_* p)
{
  delete ((GFXVertex3*)p);
}

void GFXVertex3_copy(GFXVertex3_* a, const GFXVertex3_* b)
{
  *((GFXVertex3*)a) = *((const GFXVertex3*)b);
}

FLOAT* GFXVertex3_x(GFXVertex3_* p)
{
  GFXVertex3& v = *((GFXVertex3*)p);
  return &v.x;
}

FLOAT* GFXVertex3_y(GFXVertex3_* p)
{
  GFXVertex3& v = *((GFXVertex3*)p);
  return &v.y;
}


FLOAT* GFXVertex3_z(GFXVertex3_* p)
{
  GFXVertex3& v = *((GFXVertex3*)p);
  return &v.z;
}
