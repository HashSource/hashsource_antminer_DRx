int __fastcall sub_C740(unsigned __int8 *a1, int *a2)
{
  const unsigned __int16 **v4; // r0
  unsigned __int8 *v5; // r2
  const unsigned __int16 *v6; // r8
  unsigned __int8 *v7; // r3
  int v8; // r1
  int v9; // r6
  int result; // r0
  int v11; // r5
  unsigned __int8 *v12; // r4
  char *v13; // r0
  unsigned __int8 *v14; // r2
  bool v15; // zf
  int v16; // r0
  int v17; // r3
  unsigned __int8 *v18; // r3
  int v19; // r9
  unsigned int v20; // r4
  int v21; // r10
  unsigned __int8 *v22; // r11
  unsigned __int8 *v23; // r3
  char *v24; // r0
  int v25; // r0
  unsigned __int16 v26; // r3
  unsigned __int8 *v27; // r2
  int v28; // t1
  int v29; // r12
  int v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r1
  unsigned __int16 v33; // r3
  unsigned __int8 *v34; // [sp+4h] [bp-8h]

  if ( !a1 )
    off_21DCC("atolfp.c", 42, 0, "str != ((void *)0)");
  v4 = _ctype_b_loc();
  v5 = a1;
  v6 = *v4;
  do
  {
    v7 = v5++;
    v8 = *v7;
    v9 = v6[v8] & 0x2000;
  }
  while ( (v6[v8] & 0x2000) != 0 );
  if ( v8 == 45 )
  {
    v8 = v7[1];
    v7 = v5;
    v9 = 1;
  }
  if ( v8 == 43 )
    v8 = *++v7;
  if ( v8 != 46 )
  {
    result = v6[v8] & 0x800;
    if ( (v6[v8] & 0x800) == 0 )
      return result;
    if ( !v8 )
    {
      v11 = 0;
      goto LABEL_43;
    }
  }
  v12 = v7;
  v11 = 0;
  while ( 1 )
  {
    v13 = strchr("0123456789", v8);
    v14 = v12;
    v15 = v13 == 0;
    v16 = v13 - "0123456789";
    if ( v15 )
      break;
    v8 = v12[1];
    v11 = 10 * v11 + v16;
    ++v12;
    if ( !v14[1] )
      goto LABEL_43;
  }
  v17 = *v12;
  if ( !*v12 || (result = v6[v17] & 0x2000, (v6[v17] & 0x2000) != 0) )
  {
LABEL_43:
    if ( !v9 )
    {
      *a2 = v11;
      a2[1] = 0;
      return 1;
    }
    goto LABEL_40;
  }
  v15 = v17 == 46;
  v18 = v12 + 1;
  if ( v15 )
  {
    v19 = result;
    v20 = result;
    while ( 1 )
    {
      v21 = *v18;
      v22 = v18;
      v23 = v18 + 1;
      if ( !v21 )
        break;
      v34 = v23;
      v24 = strchr("0123456789", v21);
      v18 = v34;
      v15 = v24 == 0;
      v25 = v24 - "0123456789";
      if ( v15 )
        break;
      ++v19;
      v20 = 10 * v20 + v25;
      if ( v19 == 9 )
      {
        v21 = v22[1];
        v22 = v34;
        break;
      }
    }
    v26 = v6[v21];
    if ( (v26 & 0x800) != 0 )
    {
      v27 = v22;
      do
      {
        v28 = *++v27;
        v21 = v28;
        v26 = v6[v28];
      }
      while ( (v26 & 0x800) != 0 );
    }
    if ( !v21 || (v33 = v26 & 0x2000, (result = v33) != 0) )
    {
      if ( v19 )
      {
        v30 = 32;
        v31 = 0x80000000;
        v29 = 0;
        v32 = dword_170D4[v19];
        do
        {
          v20 *= 2;
          if ( v32 <= v20 )
          {
            v29 |= v31;
            v20 -= v32;
          }
          --v30;
          v31 >>= 1;
        }
        while ( v30 );
        if ( v32 < 2 * v20 )
          ++v29;
      }
      else
      {
        v29 = v20;
      }
      if ( !v9 )
        goto LABEL_41;
      if ( v29 )
      {
        v29 = -v29;
        v11 = ~v11;
LABEL_41:
        result = 1;
        *a2 = v11;
        a2[1] = v29;
        return result;
      }
LABEL_40:
      v11 = -v11;
      v29 = 0;
      goto LABEL_41;
    }
  }
  return result;
}
