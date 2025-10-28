int *__fastcall calc_mean(int *result, int a2)
{
  int *v2; // r12
  int v3; // r3
  int v4; // t1

  if ( a2 > 0 )
  {
    v2 = &result[a2];
    v3 = 0;
    do
    {
      v4 = *result++;
      v3 += v4;
    }
    while ( v2 != result );
  }
  return result;
}
