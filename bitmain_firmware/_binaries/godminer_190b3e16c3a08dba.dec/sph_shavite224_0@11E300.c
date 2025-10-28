_DWORD *__fastcall sph_shavite224_0(_DWORD *result, char *src, unsigned int a3)
{
  unsigned int v3; // r6
  _DWORD *v4; // r7
  int v5; // r5
  size_t v7; // r4
  char *v8; // r0
  int v9; // r3

  v3 = a3;
  v4 = result;
  v5 = result[16];
  while ( v3 )
  {
    v7 = 64 - v5;
    v8 = (char *)v4 + v5;
    if ( 64 - v5 >= v3 )
      v7 = v3;
    v5 += v7;
    result = memcpy(v8, src, v7);
    v3 -= v7;
    src += v7;
    if ( v5 == 64 )
    {
      v5 = 0;
      v9 = v4[25] + 512;
      v4[25] = v9;
      if ( !v9 )
        ++v4[26];
      result = (_DWORD *)sub_111FF0(v4, v4);
    }
  }
  v4[16] = v5;
  return result;
}
