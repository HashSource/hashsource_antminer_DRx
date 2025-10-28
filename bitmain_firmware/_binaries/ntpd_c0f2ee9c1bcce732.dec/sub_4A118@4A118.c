void __fastcall sub_4A118(int a1)
{
  int v2; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r3
  _DWORD *v6; // r0
  int v7; // r4

  while ( 2 )
  {
    v2 = *(_DWORD *)(a1 + 68);
    v3 = *(_DWORD *)(a1 + 100);
    do
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v2 + 16);
        --v3;
        if ( (v4 & 0x40) != 0 )
          break;
        if ( (unsigned __int16)v4 >> 12 == 6 )
          goto LABEL_6;
LABEL_3:
        *(_DWORD *)(v2 + 28) = 0;
        v2 += 64;
        if ( v3 <= 0 )
          goto LABEL_8;
      }
      free(*(void **)(v2 + 24));
      v5 = *(_DWORD *)(v2 + 16);
      *(_DWORD *)(v2 + 24) = 0;
      v5 &= ~0x40u;
      *(_DWORD *)(v2 + 16) = v5;
      if ( (unsigned __int16)v5 >> 12 != 6 )
        goto LABEL_3;
LABEL_6:
      v6 = *(_DWORD **)(v2 + 28);
      if ( !v6 )
        goto LABEL_3;
      sub_42960(v6);
      *(_DWORD *)(v2 + 28) = 0;
      v2 += 64;
    }
    while ( v3 > 0 );
LABEL_8:
    v7 = *(_DWORD *)(a1 + 80);
    if ( v7 )
    {
      memcpy((void *)a1, *(const void **)(a1 + 80), 0x84u);
      memcpy(*(void **)(a1 + 68), (const void *)(v7 + 132), *(_DWORD *)(v7 + 100) << 6);
      free(*(void **)(a1 + 80));
      *(_DWORD *)(a1 + 80) = 0;
      continue;
    }
    break;
  }
}
