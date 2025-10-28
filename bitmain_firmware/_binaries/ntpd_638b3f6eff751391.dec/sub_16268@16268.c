int __fastcall sub_16268(_BYTE *a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v5; // r7
  size_t v6; // r10
  bool v7; // cc
  int v8; // r6
  char *v9; // r5
  size_t v10; // r0
  int v11; // r4
  char *v12; // r5
  size_t v13; // r8
  int v14; // r9
  int v15; // r10
  char *v16; // r7
  int v17; // t1
  char *v18; // lr
  bool v19; // zf
  char *v20; // r3
  size_t v21; // r0
  bool v22; // cf
  int v23; // r7
  size_t v24; // r10
  size_t v25; // r0
  char *v26; // r4
  int v27; // r3
  char *v28; // r3
  size_t v29; // r0
  size_t v31; // [sp+8h] [bp-5Ch]
  _BYTE *v32; // [sp+Ch] [bp-58h]
  char *v33; // [sp+10h] [bp-54h]
  char s[64]; // [sp+24h] [bp-40h] BYREF

  v3 = 774;
  v5 = *((__int16 *)&off_5DE80 + a2 + 534);
  if ( (unsigned int)(v5 + 144) > 0x306 )
    return 0;
  v7 = a3 > 0x1A4;
  if ( a3 > 0x1A4 )
    v3 = 2;
  else
    a3 += (unsigned int)&off_5DE80;
  v8 = 631 - v5;
  if ( !v7 )
    v3 = *(unsigned __int8 *)(a3 + 1820);
  v9 = (&off_5DE80)[v3];
  v10 = sub_161C0(0, v9);
  v33 = v9;
  if ( v5 >= 0 )
    v11 = 0;
  else
    v11 = -v5;
  if ( v8 >= 171 )
    v8 = 171;
  v31 = v10;
  strcpy(s, "syntax error, unexpected %s");
  if ( v11 >= v8 )
  {
    v24 = v10;
    v14 = 0;
    v23 = 1;
  }
  else
  {
    v32 = a1;
    v12 = &aSyntaxErrorUne[2 * v11 + 26 + 2 * v5];
    v13 = v10;
    v14 = 0;
    v15 = 1;
    v16 = &s[27];
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *((__int16 *)v12 + 1);
        v12 += 2;
        if ( v17 == v11 )
        {
          v18 = &s[4 * v15 + 60];
          if ( v11 != 1 )
            break;
        }
        if ( ++v11 == v8 )
          goto LABEL_22;
      }
      v19 = v15++ == 5;
      if ( v19 )
        break;
      v20 = (&off_5DE80)[v11++];
      *((_DWORD *)v18 - 20) = v20;
      v21 = sub_161C0(0, v20);
      v22 = __CFADD__(v21, v13);
      v13 += v21;
      if ( v22 )
        v14 |= 1u;
      v16 = (char *)stpcpy(v16);
      if ( v11 == v8 )
      {
LABEL_22:
        v23 = v15;
        v24 = v13;
        a1 = v32;
        goto LABEL_23;
      }
    }
    a1 = v32;
    v23 = 1;
    v24 = v31;
    s[27] = 0;
  }
LABEL_23:
  v25 = strlen(s);
  v22 = __CFADD__(v25, v24);
  v6 = v25 + v24;
  if ( v22 )
    v14 |= 1u;
  if ( v14 )
    return -1;
  if ( a1 )
  {
    v26 = s;
    v27 = (unsigned __int8)s[0];
    while ( 1 )
    {
      *a1 = v27;
      if ( !v27 )
        break;
      v19 = v27 == 37;
      v27 = (unsigned __int8)v26[1];
      if ( v19 && v27 == 115 && v23 > v14 )
      {
        v28 = &s[4 * v14++ + 60];
        v29 = sub_161C0((int)a1, *((char **)v28 - 20));
        v27 = (unsigned __int8)v26[2];
        v26 += 2;
        a1 += v29;
      }
      else
      {
        ++a1;
        ++v26;
      }
    }
  }
  return v6;
}
