int __fastcall jsonp_dtostr(char *a1, size_t a2, int a3, int a4)
{
  int v4; // s0
  int v5; // s1
  bool v6; // zf
  const char *v7; // r2
  unsigned int v10; // r0
  unsigned int v11; // r6
  int v12; // r1
  char *v13; // r0
  char *v14; // r5
  char *v15; // r0
  unsigned __int8 *v16; // r4
  int v17; // r3
  _BYTE *v18; // r5
  int v19; // t1
  size_t v20; // r2
  char *v22; // r3

  v6 = a3 == 0;
  if ( a3 )
    a4 = a3;
  LOWORD(v7) = 10156;
  if ( v6 )
    a4 = 17;
  HIWORD(v7) = (unsigned int)"rity_pool" >> 16;
  v10 = snprintf(a1, a2, v7, a4, v4, v5);
  if ( a2 > v10 )
  {
    v11 = v10;
    v12 = *(unsigned __int8 *)localeconv()->decimal_point;
    if ( v12 != 46 )
    {
      v13 = strchr(a1, v12);
      if ( v13 )
        *v13 = 46;
    }
    v14 = strchr(a1, 46);
    v15 = strchr(a1, 101);
    if ( v14 )
    {
LABEL_10:
      if ( !v15 )
        return v11;
      goto LABEL_11;
    }
    if ( v15 )
    {
LABEL_11:
      v16 = (unsigned __int8 *)(v15 + 2);
      v17 = (unsigned __int8)v15[2];
      if ( v15[1] != 45 )
      {
        v18 = v15 + 1;
        if ( v17 != 48 )
        {
LABEL_14:
          if ( v16 != v18 )
          {
            v20 = v11 - (v16 - (unsigned __int8 *)a1);
            v11 -= v16 - v18;
            memmove(v18, v16, v20);
          }
          return v11;
        }
        do
LABEL_13:
          v19 = *++v16;
        while ( v19 == 48 );
        goto LABEL_14;
      }
      if ( v17 == 48 )
      {
        v18 = v15 + 2;
        goto LABEL_13;
      }
      return v11;
    }
    if ( v11 + 3 < a2 )
    {
      a1[v11] = 46;
      v22 = &a1[v11];
      v11 += 2;
      v22[1] = 48;
      a1[v11] = 0;
      v15 = strchr(a1, 101);
      goto LABEL_10;
    }
  }
  return -1;
}
