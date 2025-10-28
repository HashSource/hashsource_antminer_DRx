float *__fastcall find_min_and_max_float(float *result, int a2, float *a3, float *a4)
{
  float v4; // s14
  float v5; // s13
  float *v6; // r1
  float v7; // s15

  v4 = -INFINITY;
  v5 = INFINITY;
  if ( a2 > 0 )
  {
    v6 = &result[a2];
    do
    {
      v7 = *result++;
      if ( v7 < v5 )
        v5 = v7;
      if ( v7 > v4 )
        v4 = v7;
    }
    while ( result != v6 );
  }
  *a3 = v5;
  *a4 = v4;
  return result;
}
