int *__fastcall find_min_and_max_int(int *result, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // lr
  int v5; // r4
  int *v6; // r1
  int v7; // r12
  int v8; // t1

  if ( a2 > 0 )
  {
    v4 = *result;
    if ( a2 == 1 )
    {
      v5 = *result;
    }
    else
    {
      v6 = &result[a2];
      v5 = *result++;
      do
      {
        v8 = *result++;
        v7 = v8;
        if ( v4 >= v8 )
          v4 = v7;
        if ( v5 < v7 )
          v5 = v7;
      }
      while ( result != v6 );
    }
    *a3 = v4;
    *a4 = v5;
  }
  return result;
}
