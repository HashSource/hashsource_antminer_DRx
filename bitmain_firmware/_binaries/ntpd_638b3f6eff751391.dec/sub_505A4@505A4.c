int __fastcall sub_505A4(int result)
{
  int v1; // r10
  int *v2; // r8
  int v3; // r9
  int *v4; // r2
  int v5; // r3
  int v6; // r10
  int i; // r4

  if ( dword_7BEA4 )
  {
    v1 = dword_7BEAC;
    v2 = off_7BEA0;
    v3 = dword_7BEAC;
    *off_7BEA0 = result;
    if ( v1 > 1 )
    {
      result = -2836;
      v4 = v2 + 1;
      do
      {
        v5 = -2836 * (*(v4 - 1) / 127773) + 16807 * (*(v4 - 1) - (_DWORD)&loc_1F31C * (*(v4 - 1) / 127773));
        if ( v5 <= 0 )
          v5 += 0x7FFFFFFF;
        *v4++ = v5;
      }
      while ( v4 != &v2[v3] );
    }
    off_7BEA8 = v2;
    v6 = 10 * v1;
    off_7BEB4 = &v2[dword_7BEB0];
    if ( v6 > 0 )
    {
      for ( i = 0; i != v6; ++i )
        result = sub_504EC();
    }
  }
  else
  {
    *off_7BEA0 = result;
  }
  return result;
}
