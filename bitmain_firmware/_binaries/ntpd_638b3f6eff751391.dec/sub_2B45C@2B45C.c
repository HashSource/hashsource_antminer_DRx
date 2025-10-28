unsigned __int16 *__fastcall sub_2B45C(unsigned __int16 *a1, int a2, int a3)
{
  char *v4; // r2
  char *v5; // r3
  int v6; // r12
  char *v7; // r0
  int v8; // r4
  char *v9; // r5
  int v10; // r2
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r3
  char *v14; // r0
  int v15; // r11
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r2
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3

  if ( !dword_CAC24 )
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  v4 = (char *)(a3 + 2);
  v5 = (char *)(a3 + 3);
  if ( dword_7FF54 )
    v6 = 72;
  else
    v6 = 32;
  v7 = (char *)sub_28654((int)a1, a2, v4, v5, v6);
  v8 = dword_CABE0;
  v9 = v7;
  if ( (_UNKNOWN *)dword_CABE0 != &unk_CABDC && v7 )
  {
    while ( 1 )
    {
      v15 = dword_CB548;
      v16 = sub_5A860(dword_CB548 - *(_DWORD *)(v8 + 24), *(_DWORD *)(v8 + 20));
      v17 = *(_DWORD *)(v8 + 20);
      v18 = bswap32(*(_DWORD *)(v8 + 12));
      *((_DWORD *)v9 + 1) = bswap32(v15 - *(_DWORD *)(v8 + 28));
      *((_DWORD *)v9 + 2) = v18;
      *((_DWORD *)v9 + 3) = bswap32(v17);
      *(_DWORD *)v9 = bswap32(v16);
      if ( *(_WORD *)(v8 + 32) != 10 )
        break;
      if ( dword_7FF54 )
      {
        v20 = *(_DWORD *)(v8 + 40);
        v21 = *(_DWORD *)(v8 + 44);
        v22 = *(_DWORD *)(v8 + 48);
        v23 = *(_DWORD *)(v8 + 52);
        *((_DWORD *)v9 + 8) = 1;
        *((_DWORD *)v9 + 10) = v20;
        *((_DWORD *)v9 + 11) = v21;
        *((_DWORD *)v9 + 12) = v22;
        *((_DWORD *)v9 + 13) = v23;
        v24 = *(_DWORD *)(*(_DWORD *)(v8 + 60) + 32);
        v25 = *(_DWORD *)(*(_DWORD *)(v8 + 60) + 36);
        v26 = *(_DWORD *)(*(_DWORD *)(v8 + 60) + 40);
        *((_DWORD *)v9 + 14) = *(_DWORD *)(*(_DWORD *)(v8 + 60) + 28);
        *((_DWORD *)v9 + 15) = v24;
        *((_DWORD *)v9 + 16) = v25;
        *((_DWORD *)v9 + 17) = v26;
LABEL_15:
        v13 = *(unsigned __int8 *)(v8 + 68);
        *((_WORD *)v9 + 14) = *(_WORD *)(v8 + 64);
        *((_DWORD *)v9 + 6) = bswap32(v13);
        v9[30] = *(_BYTE *)(v8 + 66);
        v9[31] = *(_BYTE *)(v8 + 67);
        v14 = sub_2824C();
        v8 = *(_DWORD *)(v8 + 4);
        v9 = v14;
        if ( (_UNKNOWN *)v8 == &unk_CABDC || !v14 )
          return sub_28778();
      }
      else
      {
        v8 = *(_DWORD *)(v8 + 4);
        if ( (_UNKNOWN *)v8 == &unk_CABDC )
          return sub_28778();
      }
    }
    v10 = dword_7FF54;
    *((_DWORD *)v9 + 4) = *(_DWORD *)(v8 + 36);
    if ( v10 )
      *((_DWORD *)v9 + 8) = 0;
    if ( *(_BYTE *)(v8 + 68) == 4 )
    {
      *((_DWORD *)v9 + 5) = *(_DWORD *)(*(_DWORD *)(v8 + 60) + 80);
    }
    else if ( *(_BYTE *)(v8 + 68) )
    {
      v11 = *(_DWORD *)(v8 + 60);
      v12 = *(_DWORD *)(v11 + 24);
      *((_DWORD *)v9 + 5) = v12;
      if ( !v12 )
        *((_DWORD *)v9 + 5) = *(_DWORD *)(v11 + 80);
    }
    else
    {
      *((_DWORD *)v9 + 5) = 4;
    }
    goto LABEL_15;
  }
  return sub_28778();
}
