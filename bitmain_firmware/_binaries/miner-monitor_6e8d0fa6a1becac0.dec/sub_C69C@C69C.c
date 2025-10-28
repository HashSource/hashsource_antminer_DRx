_BYTE *__fastcall sub_C69C(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r5
  unsigned int v2; // r4
  unsigned __int8 *v3; // r7
  int v4; // r6
  unsigned int v5; // t1
  unsigned int v6; // t1
  size_t v7; // r0
  _BYTE *v8; // r0
  _BYTE *v9; // r7
  _BYTE *v10; // r4
  unsigned int v11; // r3
  unsigned int v12; // t1
  bool v13; // cc
  unsigned int v14; // r2
  unsigned int v15; // t1

  v1 = a1;
  if ( !a1 )
    return sub_C574("");
  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1;
    v4 = 0;
    do
    {
      while ( strchr(asc_11914, v2) )
      {
        v4 += 2;
        v5 = *++v3;
        v2 = v5;
        if ( !v5 )
          goto LABEL_11;
      }
      v13 = v2 > 0x1F;
      v6 = *++v3;
      v2 = v6;
      if ( v13 )
        ++v4;
      else
        v4 += 6;
    }
    while ( v2 );
LABEL_11:
    v7 = v4 + 3;
  }
  else
  {
    v7 = 3;
  }
  v8 = off_1B374(v7);
  v9 = v8;
  if ( !v8 )
    return v9;
  *v8 = 34;
  v10 = v8 + 1;
LABEL_14:
  v12 = *v1++;
  v11 = v12;
  if ( v12 )
  {
    do
    {
      v13 = v11 > 0x22;
      if ( v11 != 34 )
        v13 = v11 > 0x1F;
      if ( v13 && v11 != 92 )
      {
        *v10++ = v11;
        goto LABEL_14;
      }
      *v10 = 92;
      v14 = *(v1 - 1);
      if ( v14 == 12 )
      {
        v10[1] = 102;
        v10 += 2;
        goto LABEL_14;
      }
      if ( v14 > 0xC )
      {
        if ( v14 == 34 || v14 == 92 )
        {
          v10[1] = v14;
          v10 += 2;
          goto LABEL_14;
        }
        if ( v14 == 13 )
        {
          v10[1] = 114;
          v10 += 2;
          goto LABEL_14;
        }
      }
      else
      {
        switch ( v14 )
        {
          case 9u:
            v10[1] = 116;
            v10 += 2;
            goto LABEL_14;
          case 0xAu:
            v10[1] = 110;
            v10 += 2;
            goto LABEL_14;
          case 8u:
            v10[1] = 98;
            v10 += 2;
            goto LABEL_14;
        }
      }
      sprintf(v10 + 1, "u%04x", v14);
      v15 = *v1++;
      v11 = v15;
      v10 += 6;
    }
    while ( v15 );
  }
  v10[1] = v11;
  *v10 = 34;
  return v9;
}
