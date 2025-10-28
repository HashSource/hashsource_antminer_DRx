double *sub_DDD4()
{
  double v0; // d0
  double *result; // r0

  result = (double *)sub_C540();
  if ( result )
  {
    result[3] = v0;
    *((_DWORD *)result + 3) = 3;
    *((_DWORD *)result + 5) = (int)v0;
  }
  return result;
}
