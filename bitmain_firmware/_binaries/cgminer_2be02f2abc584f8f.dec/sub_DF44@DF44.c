double __fastcall sub_DF44(double a1)
{
  _DWORD *v1; // r4
  double v2; // d0
  double result; // r0

  v1 = (_DWORD *)HIDWORD(a1);
  v2 = (double)SLODWORD(a1);
  result = log10(a1);
  if ( (int)(v2 + 1.0) > *v1 )
    ++*v1;
  return result;
}
