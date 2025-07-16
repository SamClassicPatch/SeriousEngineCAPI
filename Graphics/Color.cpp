#include "Color.h"

COLOR RGBToColor_(UBYTE ubR, UBYTE ubG, UBYTE ubB)
{
  return RGBToColor(ubR, ubG, ubB);
}

void ColorToRGB_(COLOR col, UBYTE* ubR, UBYTE* ubG, UBYTE* ubB)
{
  ColorToRGB(col, *ubR, *ubG, *ubB);
}

COLOR RGBAToColor_(UBYTE ubR, UBYTE ubG, UBYTE ubB, UBYTE ubA)
{
  return RGBAToColor(ubR, ubG, ubB, ubA);
}

void ColorToRGBA_(COLOR col, UBYTE* ubR, UBYTE* ubG, UBYTE* ubB, UBYTE* ubA)
{
  ColorToRGBA(col, *ubR, *ubG, *ubB, *ubA);
}

COLOR HSVToColor_(UBYTE ubH, UBYTE ubS, UBYTE ubV)
{
  return HSVToColor(ubH, ubS, ubV);
}

void ColorToHSV_(COLOR colSrc, UBYTE* ubH, UBYTE* ubS, UBYTE* ubV)
{
  ColorToHSV(colSrc, *ubH, *ubS, *ubV);
}

COLOR HSVAToColor_(UBYTE ubH, UBYTE ubS, UBYTE ubV, UBYTE ubA)
{
  return HSVAToColor(ubH, ubS, ubV, ubA);
}

void ColorToHSVA_(COLOR colSrc, UBYTE* ubH, UBYTE* ubS, UBYTE* ubV, UBYTE* ubA)
{
  ColorToHSVA(colSrc, *ubH, *ubS, *ubV, *ubA);
}

BOOL IsGray_(COLOR col)
{
  return IsGray(col);
}

BOOL IsBlack_(COLOR col)
{
  return IsBlack(col);
}

BOOL IsWhite_(COLOR col)
{
  return IsWhite(col);
}

COLOR DesaturateColor_(COLOR col)
{
  return DesaturateColor(col);
}

BOOL IsBigger_(COLOR col1, COLOR col2)
{
  return IsBigger(col1, col2);
}

BOOL CompareChroma_(COLOR col1, COLOR col2)
{
  return CompareChroma(col1, col2);
}

COLOR AdjustColor_(COLOR col, SLONG slHueShift, SLONG slSaturation)
{
  return AdjustColor(col, slHueShift, slSaturation);
}

COLOR AdjustGamma_(COLOR col, FLOAT fGamma)
{
  return AdjustGamma(col, fGamma);
}

COLOR LerpColor_(COLOR col0, COLOR col1, FLOAT fRatio)
{
  return LerpColor(col0, col1, fRatio);
}

void LerpColor_b(COLOR col0, COLOR col1, FLOAT fRatio, UBYTE* ubR, UBYTE* ubG, UBYTE* ubB)
{
  LerpColor(col0, col1, fRatio, *ubR, *ubG, *ubB);
}

COLOR MulColors_(COLOR col1, COLOR col2)
{
  return MulColors(col1, col2);
}

COLOR AddColors_(COLOR col1, COLOR col2)
{
  return AddColors(col1, col2);
}

ULONG ByteSwap_(ULONG ul)
{
  return ByteSwap(ul);
}
