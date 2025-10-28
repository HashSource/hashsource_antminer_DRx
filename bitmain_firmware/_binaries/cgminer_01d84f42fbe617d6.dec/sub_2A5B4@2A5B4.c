_BYTE *__fastcall sub_2A5B4(_BYTE *a1, char *s)
{
  unsigned int v2; // r4
  signed int v4; // r0
  int v5; // r9
  int *v6; // r12
  int v7; // r8
  int v8; // r3
  __int64 v9; // r2
  char v10; // r12
  unsigned int v11; // r2
  unsigned int *v12; // r1
  _BYTE *result; // r0
  _BYTE *v14; // r3
  unsigned int v15; // t1
  int v17; // [sp+Ch] [bp-20h] BYREF
  unsigned int v18[5]; // [sp+10h] [bp-1Ch] BYREF
  unsigned int v19; // [sp+24h] [bp-8h]

  v2 = 0;
  v17 = 0;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  v4 = strlen(s);
  if ( v4 <= 0 )
  {
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = &v17;
      v7 = 6;
      v8 = dword_51788[(unsigned __int8)s[v5] + 287];
      while ( 1 )
      {
        v9 = 58LL * v2 + (unsigned int)v8;
        --v7;
        v8 = BYTE4(v9) & 0x3F;
        v6[6] = v9;
        --v6;
        if ( v7 == -1 )
          break;
        v2 = v6[6];
      }
      if ( v4 == ++v5 )
        break;
      v2 = v19;
    }
    v10 = v17;
    v11 = bswap32(v18[0]);
  }
  v12 = v18;
  result = a1 + 29;
  *a1 = v10;
  v14 = a1 + 5;
  while ( 1 )
  {
    *((_DWORD *)v14 - 1) = v11;
    v14 += 4;
    if ( v14 == result )
      break;
    v15 = v12[1];
    ++v12;
    v11 = bswap32(v15);
  }
  return result;
}
