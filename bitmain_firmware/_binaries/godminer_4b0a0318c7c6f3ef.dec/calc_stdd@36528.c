int __fastcall calc_stdd(__int64 a1)
{
  double v1; // d4
  int v2; // r2
  int *v3; // r3
  int v4; // t1
  double v5; // d6
  int v6; // s14

  v1 = (double)SHIDWORD(a1);
  if ( a1 <= 0 )
  {
    v5 = 0.0;
  }
  else
  {
    HIDWORD(a1) = a1 + 4 * HIDWORD(a1);
    v2 = 0;
    v3 = (int *)a1;
    do
    {
      v4 = *v3++;
      v2 += v4;
    }
    while ( (int *)HIDWORD(a1) != v3 );
    v5 = 0.0;
    do
    {
      v6 = *(_DWORD *)a1;
      LODWORD(a1) = a1 + 4;
      v5 = v5 + ((double)v6 - (double)v2 / v1) * ((double)v6 - (double)v2 / v1);
    }
    while ( v3 != (int *)a1 );
  }
  if ( v5 / v1 < 0.0 )
    *(double *)&a1 = sqrt(*(double *)&a1);
  return a1;
}
