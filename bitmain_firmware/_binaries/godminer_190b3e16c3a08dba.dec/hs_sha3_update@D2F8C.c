int *__fastcall hs_sha3_update(int *result, char *a2, size_t a3)
{
  int v3; // r8
  unsigned int v4; // r4
  int *v5; // r7
  size_t v7; // r6
  int v8; // r1
  char *v9; // r8
  size_t v10; // r9
  size_t v11; // r2

  v3 = result[98];
  if ( v3 < 0 )
    return result;
  v4 = result[99];
  v5 = result;
  v7 = a3;
  result = (int *)sub_12DB24(v3 + a3, v4);
  v5[98] = v8;
  if ( v3 )
  {
    v10 = v4 - v3;
    if ( v7 >= v4 - v3 )
      v11 = v4 - v3;
    else
      v11 = v7;
    result = (int *)memcpy((char *)v5 + v3 + 200, a2, v11);
    if ( v7 < v10 )
      return result;
    a2 += v10;
    v7 -= v10;
    result = (int *)sub_D24E8(v5, (int)(v5 + 50), v4);
  }
  for ( ; v4 <= v7; a2 += v4 )
  {
    v9 = a2;
    if ( ((unsigned __int8)a2 & 7) != 0 )
    {
      v9 = (char *)(v5 + 50);
      memcpy(v5 + 50, a2, v4);
    }
    v7 -= v4;
    result = (int *)sub_D24E8(v5, (int)v9, v4);
  }
  if ( v7 )
    return (int *)memcpy(v5 + 50, a2, v7);
  return result;
}
