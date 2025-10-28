int *get_total_accept_rate()
{
  int *result; // r0
  int v1; // s12
  int *v2; // r3
  int v3; // s14
  int v4; // t1
  double *v5; // r1

  result = (int *)total_pools;
  if ( total_pools > 0 )
  {
    v1 = 0;
    v2 = (int *)pools;
    v3 = 0;
    result = (int *)(pools + 4 * total_pools);
    do
    {
      v4 = *v2++;
      v5 = (double *)(v4 + 1968);
      if ( v4 )
      {
        v3 = (int)((double)v3 + *(v5 - 1));
        v1 = (int)((double)v1 + *v5);
      }
    }
    while ( v2 != result );
  }
  return result;
}
