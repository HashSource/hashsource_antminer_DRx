double __fastcall sub_110C4(double a1)
{
  float v1; // s0
  _DWORD *v2; // r4
  double result; // r0

  v2 = (_DWORD *)LODWORD(a1);
  result = log10(a1);
  if ( (int)(v1 + 1.0) > *v2 )
    ++*v2;
  return result;
}
