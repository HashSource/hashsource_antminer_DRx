double __fastcall sub_110F8(double a1)
{
  double v1; // d0
  _DWORD *v2; // r4
  double result; // r0

  v1 = (double)SLODWORD(a1);
  v2 = (_DWORD *)HIDWORD(a1);
  result = log10(a1);
  if ( (int)(v1 + 1.0) > *v2 )
    ++*v2;
  return result;
}
