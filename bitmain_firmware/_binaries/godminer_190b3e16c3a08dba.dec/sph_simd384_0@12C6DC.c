_DWORD *__fastcall sph_simd384_0(_DWORD *result, char *src, size_t a3)
{
  size_t v3; // r6
  _DWORD *v4; // r5
  int v6; // r0
  size_t v7; // r4
  char *v8; // r0
  size_t v9; // r4
  int v10; // r3

  v3 = a3;
  if ( a3 )
  {
    v4 = result;
    do
    {
      while ( 1 )
      {
        v6 = v4[32];
        v7 = 128 - v6;
        v8 = (char *)v4 + v6;
        if ( v7 >= v3 )
          v7 = v3;
        v3 -= v7;
        result = memcpy(v8, src, v7);
        src += v7;
        v9 = v7 + v4[32];
        v4[32] = v9;
        if ( v9 == 128 )
          break;
        if ( !v3 )
          return result;
      }
      result = (_DWORD *)sub_124208((int)v4, 0);
      v10 = v4[65];
      v4[32] = 0;
      v4[65] = ++v10;
      if ( !v10 )
        ++v4[66];
    }
    while ( v3 );
  }
  return result;
}
