unsigned __int16 *__fastcall sub_2B62C(unsigned __int16 *a1, int a2, int a3)
{
  int v5; // r12
  char *v6; // r0
  int v7; // r4
  char *v8; // r5
  int v9; // r2
  char *v10; // r0
  int v11; // r6
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // [sp+Ch] [bp-8h]

  if ( dword_7CF4C > 2 )
  {
    v20 = a2;
    puts("wants monitor 0 list");
    a2 = v20;
    if ( dword_CAC24 )
      goto LABEL_3;
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  }
  if ( !dword_CAC24 )
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
LABEL_3:
  if ( dword_7FF54 )
    v5 = 48;
  else
    v5 = 24;
  v6 = (char *)sub_28654((int)a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), v5);
  v7 = dword_CABE0;
  v8 = v6;
  if ( (_UNKNOWN *)dword_CABE0 != &unk_CABDC && v6 )
  {
    while ( 1 )
    {
      v11 = dword_CB548;
      v12 = sub_5A860(dword_CB548 - *(_DWORD *)(v7 + 24), *(_DWORD *)(v7 + 20));
      v13 = bswap32(*(_DWORD *)(v7 + 12));
      v14 = bswap32(*(_DWORD *)(v7 + 20));
      *((_DWORD *)v8 + 1) = bswap32(v11 - *(_DWORD *)(v7 + 28));
      *((_DWORD *)v8 + 2) = v13;
      *((_DWORD *)v8 + 3) = v14;
      *(_DWORD *)v8 = bswap32(v12);
      if ( *(_WORD *)(v7 + 32) != 10 )
        break;
      if ( dword_7FF54 )
      {
        v16 = *(_DWORD *)(v7 + 40);
        v17 = *(_DWORD *)(v7 + 44);
        v18 = *(_DWORD *)(v7 + 48);
        v19 = *(_DWORD *)(v7 + 52);
        *((_DWORD *)v8 + 6) = 1;
        *((_DWORD *)v8 + 8) = v16;
        *((_DWORD *)v8 + 9) = v17;
        *((_DWORD *)v8 + 10) = v18;
        *((_DWORD *)v8 + 11) = v19;
LABEL_11:
        *((_WORD *)v8 + 10) = *(_WORD *)(v7 + 64);
        v8[22] = *(_BYTE *)(v7 + 66);
        v8[23] = *(_BYTE *)(v7 + 67);
        v10 = sub_2824C();
        v7 = *(_DWORD *)(v7 + 4);
        v8 = v10;
        if ( (_UNKNOWN *)v7 == &unk_CABDC || !v10 )
          return sub_28778();
      }
      else
      {
        v7 = *(_DWORD *)(v7 + 4);
        if ( (_UNKNOWN *)v7 == &unk_CABDC )
          return sub_28778();
      }
    }
    v9 = dword_7FF54;
    *((_DWORD *)v8 + 4) = *(_DWORD *)(v7 + 36);
    if ( v9 )
      *((_DWORD *)v8 + 6) = 0;
    goto LABEL_11;
  }
  return sub_28778();
}
