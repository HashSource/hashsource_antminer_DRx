int __fastcall sub_4CBA8(_DWORD *a1)
{
  int result; // r0
  double v3; // d16
  double v4; // d16
  struct timespec v5; // [sp+0h] [bp-Ch] BYREF

  result = clock_gettime(0, &v5);
  *a1 = v5.tv_sec - 2085978496;
  if ( dbl_C9AD8 > 0.0005 )
  {
    result = sub_504EC(result);
    v3 = ((double)result + (double)result) * 2.32830644e-10 * dbl_C9AD8 * 1000000000.0;
  }
  else if ( dbl_C9AD8 <= 0.0 )
  {
    v3 = 0.0;
  }
  else
  {
    result = sub_504EC(result);
    v3 = ((double)result + (double)result) * 2.32830644e-10;
  }
  v4 = ((double)v5.tv_nsec + v3) * 0.000000001;
  if ( v4 < 1.0 )
  {
    if ( v4 < 0.0 )
    {
      v4 = v4 + 1.0;
      --*a1;
    }
  }
  else
  {
    v4 = v4 - 1.0;
    ++*a1;
  }
  a1[1] = (unsigned int)(v4 * 4294967300.0);
  return result;
}
