unsigned int *__fastcall sph_echo224_0(unsigned int *result, char *src, size_t n)
{
  unsigned int *v3; // r7
  unsigned int v4; // r5
  size_t v5; // r6
  size_t v6; // r4
  char *v7; // r8
  char *v8; // r0
  bool v9; // cf
  int v10; // r3
  int v11; // r3

  v3 = result;
  v4 = result[48];
  v5 = n;
  v6 = 192 - v4;
  if ( 192 - v4 > n )
  {
    result = (unsigned int *)memcpy((char *)result + v4, src, n);
    v3[48] = v4 + v5;
  }
  else
  {
    v7 = src;
    if ( n )
    {
      do
      {
        while ( 1 )
        {
          if ( v6 >= v5 )
            v6 = v5;
          v8 = (char *)v3 + v4;
          v4 += v6;
          result = (unsigned int *)memcpy(v8, v7, v6);
          v5 -= v6;
          v7 += v6;
          if ( v4 == 192 )
            break;
          v6 = 192 - v4;
          if ( !v5 )
            goto LABEL_13;
        }
        v4 = 0;
        v9 = v3[66] < 0xFFFFFA00;
        v3[66] += 1536;
        if ( !v9 )
        {
          v10 = v3[67] + 1;
          v3[67] = v10;
          if ( !v10 )
          {
            v11 = v3[68] + 1;
            v3[68] = v11;
            if ( !v11 )
              ++v3[69];
          }
        }
        result = sub_F1734(v3);
        v6 = 192;
      }
      while ( v5 );
    }
LABEL_13:
    v3[48] = v4;
  }
  return result;
}
