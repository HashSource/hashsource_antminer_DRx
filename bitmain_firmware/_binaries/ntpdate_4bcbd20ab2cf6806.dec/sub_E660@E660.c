int __fastcall sub_E660(int result)
{
  int v1; // r10
  int *v2; // r8
  int v3; // r9
  int *v4; // r2
  int v5; // r3
  int v6; // r10
  int i; // r4

  if ( dword_21334 )
  {
    v1 = dword_2133C;
    v2 = off_21330;
    v3 = dword_2133C;
    *off_21330 = result;
    if ( v1 > 1 )
    {
      result = -2836;
      v4 = v2 + 1;
      do
      {
        v5 = -2836 * (*(v4 - 1) / 127773) + 16807 * (*(v4 - 1) % 127773);
        if ( v5 <= 0 )
          v5 += 0x7FFFFFFF;
        *v4++ = v5;
      }
      while ( v4 != &v2[v3] );
    }
    off_21338 = v2;
    v6 = 10 * v1;
    off_21344 = (int)&v2[dword_21340];
    if ( v6 > 0 )
    {
      for ( i = 0; i != v6; ++i )
        result = sub_E5A8();
    }
  }
  else
  {
    *off_21330 = result;
  }
  return result;
}
