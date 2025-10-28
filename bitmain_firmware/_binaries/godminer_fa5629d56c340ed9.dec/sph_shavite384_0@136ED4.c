unsigned int *__fastcall sph_shavite384_0(unsigned int *result, char *src, unsigned int a3)
{
  unsigned int v3; // r6
  unsigned int *v4; // r7
  unsigned int i; // r5
  size_t v7; // r4
  char *v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3

  v3 = a3;
  v4 = result;
  for ( i = result[32]; v3; result = (unsigned int *)sub_12FFD8(v4, v4) )
  {
    while ( 1 )
    {
      v7 = 128 - i;
      v8 = (char *)v4 + i;
      if ( 128 - i >= v3 )
        v7 = v3;
      i += v7;
      result = (unsigned int *)memcpy(v8, src, v7);
      v3 -= v7;
      src += v7;
      if ( i == 128 )
        break;
      if ( !v3 )
        goto LABEL_12;
    }
    i = 0;
    v9 = v4[49] + 1024;
    v4[49] = v9;
    if ( !v9 )
    {
      v10 = v4[50] + 1;
      v4[50] = v10;
      if ( !v10 )
      {
        v11 = v4[51] + 1;
        v4[51] = v11;
        if ( !v11 )
          ++v4[52];
      }
    }
  }
LABEL_12:
  v4[32] = i;
  return result;
}
