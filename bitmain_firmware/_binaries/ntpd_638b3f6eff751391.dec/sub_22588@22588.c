int __fastcall sub_22588(int a1, int a2, _DWORD *a3)
{
  const void *v3; // r5
  int v7; // r9
  int v8; // r2
  int v9; // r2
  int v10; // r2
  _DWORD *v11; // r1
  const char *v12; // r0
  unsigned int v13; // r2
  int v15; // [sp+4h] [bp-8h]

  v3 = (const void *)(a1 + 16);
  v15 = a1 + 8;
  while ( 1 )
  {
    ++dword_CB43C;
    v7 = dword_CB23C[sub_2E254(v15)];
    if ( !v7 )
      break;
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(v7 + 12);
      if ( v8 != *(unsigned __int16 *)(a1 + 8) )
        goto LABEL_4;
      if ( v8 == 2 )
      {
        v9 = *(_DWORD *)(a1 + 12)
           - *(_DWORD *)(v7 + 16)
           + (*(_DWORD *)(a1 + 12) == *(_DWORD *)(v7 + 16))
           + *(_DWORD *)(v7 + 16)
           - *(_DWORD *)(a1 + 12);
      }
      else
      {
        if ( memcmp(v3, (const void *)(v7 + 20), 0x10u) )
          goto LABEL_4;
        v9 = *(_DWORD *)(a1 + 32) == *(_DWORD *)(v7 + 36);
      }
      if ( !v9 || *(unsigned __int16 *)(a1 + 10) != *(unsigned __int16 *)(v7 + 14) )
        goto LABEL_4;
      v10 = dword_7A1D4[7 * *(unsigned __int8 *)(v7 + 47) + a2];
      *a3 = v10;
      if ( a2 == 4 && v10 == 1 )
        break;
      if ( v10 == -1 )
        return 0;
      if ( v10 )
        goto LABEL_14;
LABEL_4:
      v7 = *(_DWORD *)v7;
      if ( !v7 )
        goto LABEL_25;
    }
    v13 = bswap32(*(_DWORD *)(a1 + 120));
    if ( (*(_DWORD *)(v7 + 392) != bswap32(*(_DWORD *)(a1 + 116)) || *(_DWORD *)(v7 + 396) != v13) && sub_224F4(a1) )
    {
      v7 = 0;
      *a3 = -1;
      return v7;
    }
LABEL_14:
    v11 = *(_DWORD **)(a1 + 64);
    if ( *(_DWORD **)(v7 + 40) == v11 )
      return v7;
    sub_21778(v7, v11);
    if ( *(_DWORD *)(v7 + 40) != *(_DWORD *)(a1 + 64) )
      return v7;
    if ( dword_7CF4C > 0 )
    {
      v12 = (const char *)sub_50CD0(v7 + 12);
      printf("Changed %s local address to match response\n", v12);
    }
  }
LABEL_25:
  v7 = 0;
  *a3 = dword_7A1D4[a2];
  return v7;
}
