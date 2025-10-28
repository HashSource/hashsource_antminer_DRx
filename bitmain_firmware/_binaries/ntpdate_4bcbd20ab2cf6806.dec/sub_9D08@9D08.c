int *__fastcall sub_9D08(int *result)
{
  int *v1; // r4
  unsigned int v2; // r3
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r1
  bool v8; // zf
  unsigned int v9; // r3
  int v10; // r0
  const char *v11; // r0
  int v12; // r1
  int v13; // r2
  unsigned int v14; // r12
  const char *v15; // r0
  int *v16; // r7
  int *v17; // r12
  int v18; // r3
  bool v19; // cc
  int v20; // r3
  const char *v21; // r0
  _BYTE v22[4]; // [sp+Ch] [bp-4Ch] BYREF
  int v23; // [sp+10h] [bp-48h]
  int v24; // [sp+14h] [bp-44h]
  int v25; // [sp+18h] [bp-40h]
  int v26; // [sp+1Ch] [bp-3Ch]
  int v27; // [sp+20h] [bp-38h]
  int v28; // [sp+24h] [bp-34h]
  int v29; // [sp+28h] [bp-30h]
  int v30; // [sp+2Ch] [bp-2Ch]
  int v31; // [sp+30h] [bp-28h]
  unsigned int v32; // [sp+34h] [bp-24h]
  unsigned int v33; // [sp+38h] [bp-20h]
  unsigned int v34; // [sp+3Ch] [bp-1Ch]

  v1 = result;
  if ( dword_21F80 )
  {
    v21 = (const char *)sub_ECA8(result + 1);
    result = (int *)printf("transmit(%s)\n", v21);
  }
  v2 = *((unsigned __int16 *)v1 + 37);
  if ( *((unsigned __int16 *)v1 + 34) > v2 && v2 <= 7 )
  {
    v16 = &v1[v2 + 42];
    v1[v2 + 51] = 0;
    v17 = &v1[2 * v2 + 27];
    v1[v2 + 19] = 0;
    v18 = (unsigned __int16)(v2 + 1);
    v16[1] = 0;
    result = 0;
    v19 = v18 < dword_212D0;
    *((_WORD *)v1 + 37) = v18;
    *v17 = 0;
    v17[1] = 0;
    if ( v19 )
      goto LABEL_6;
LABEL_19:
    v20 = dword_21F84;
    v1[15] = 0;
    dword_21F84 = v20 + 1;
    return result;
  }
  if ( (int)v2 >= dword_212D0 )
    goto LABEL_19;
LABEL_6:
  v22[1] = 0;
  v25 = 0;
  v27 = 0;
  v26 = 0;
  v29 = 0;
  v22[0] = ~(~((8 * dword_212D4) & 0x38) & 0x3C);
  v28 = 0;
  v31 = 0;
  v30 = 0;
  v22[2] = 3;
  v22[3] = -6;
  v23 = 256;
  v24 = 256;
  if ( dword_21F88 )
  {
    v34 = bswap32(dword_21F8C);
    sub_C348(v1 + 61);
    v3 = v1[62];
    v4 = dword_21F8C;
    v5 = (unsigned __int16)v3 + (unsigned __int16)dword_21F90;
    v6 = HIWORD(v3) + HIWORD(dword_21F90);
    v7 = v1[61];
    if ( (v5 & 0x10000) != 0 )
      ++v6;
    v8 = (v6 & 0x10000) == 0;
    if ( (v6 & 0x10000) != 0 )
      ++v7;
    v9 = (unsigned __int16)v5 | (v6 << 16);
    if ( !v8 )
      v1[61] = v7;
    v1[62] = v9;
    v32 = bswap32(v7);
    v33 = bswap32(v9);
    v10 = sub_D1B4(v4, v22, 48);
    result = sub_9C40((struct sockaddr *)(v1 + 1), v22, v10 + 48);
    if ( dword_21F80 > 1 )
    {
      v11 = (const char *)sub_ECA8(v1 + 1);
      result = (int *)printf("transmit auth to %s\n", v11);
    }
  }
  else
  {
    sub_C348(v1 + 61);
    v14 = bswap32(v1[61]);
    v33 = bswap32(v1[62]);
    v32 = v14;
    result = sub_9C40((struct sockaddr *)(v1 + 1), v22, 0x30u);
    if ( dword_21F80 > 1 )
    {
      v15 = (const char *)sub_ECA8(v1 + 1);
      result = (int *)printf("transmit to %s\n", v15);
    }
  }
  v12 = dword_212D8;
  v13 = dword_21F94;
  ++*((_WORD *)v1 + 34);
  v1[15] = v12 + v13;
  return result;
}
