int __fastcall json_real_set(int a1)
{
  double v1; // d0
  int result; // r0

  if ( !a1 )
    return -1;
  result = *(_DWORD *)a1 != 4;
  if ( result || fabs(v1) > 1.79769313e308 )
    return -1;
  *(double *)(a1 + 8) = v1;
  return result;
}
