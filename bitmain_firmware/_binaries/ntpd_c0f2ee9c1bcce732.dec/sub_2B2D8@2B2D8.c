unsigned __int16 *__fastcall sub_2B2D8(unsigned __int16 *a1, int a2, int a3)
{
  char *v4; // r2
  char *v5; // r3
  double *v6; // r4
  int v7; // r12
  _DWORD *v8; // r12
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r3
  int v18; // r3
  bool v19; // zf
  int v20; // r2
  int v21; // r3

  if ( dword_CAAD4 )
  {
    v4 = (char *)(a3 + 2);
    v5 = (char *)(a3 + 3);
    v6 = (double *)&unk_CAB10;
    if ( dword_7FF54 )
      v7 = 64;
    else
      v7 = 28;
    v8 = sub_28654((int)a1, a2, v4, v5, v7);
    while ( 1 )
    {
      if ( (*((_BYTE *)v6 - 2) & 1) != 0 )
      {
        if ( *((_WORD *)v6 - 26) == 2 )
        {
          v18 = *((_DWORD *)v6 - 6);
          v19 = v18 == dword_CA608;
          if ( v18 == dword_CA608 )
            *v8 = 0;
          v20 = dword_7FF54;
          if ( !v19 )
            *v8 = *(_DWORD *)(v18 + 24);
          v21 = *((_DWORD *)v6 - 12);
          if ( v20 )
            v8[7] = 0;
          v8[1] = v21;
          goto LABEL_10;
        }
        if ( dword_7FF54 )
        {
          v9 = *(_DWORD *)(*((_DWORD *)v6 - 6) + 32);
          v10 = *(_DWORD *)(*((_DWORD *)v6 - 6) + 36);
          v11 = *(_DWORD *)(*((_DWORD *)v6 - 6) + 40);
          v8[8] = *(_DWORD *)(*((_DWORD *)v6 - 6) + 28);
          v8[9] = v9;
          v8[10] = v10;
          v8[11] = v11;
          v12 = *((_DWORD *)v6 - 11);
          v13 = *((_DWORD *)v6 - 10);
          v14 = *((_DWORD *)v6 - 9);
          v15 = *((_DWORD *)v6 - 8);
          v8[7] = 1;
          v8[12] = v12;
          v8[13] = v13;
          v8[14] = v14;
          v8[15] = v15;
LABEL_10:
          v16 = dword_CB548;
          *((_WORD *)v8 + 4) = *((_WORD *)v6 - 25);
          *((_WORD *)v8 + 5) = (*((_WORD *)v6 - 2) << 8) | HIBYTE(*((_WORD *)v6 - 2));
          v8[3] = bswap32(v16 - *((_DWORD *)v6 - 5));
          v8[4] = bswap32(v16 - *((_DWORD *)v6 - 3));
          v8[5] = bswap32(*((_DWORD *)v6 - 2));
          v8[6] = bswap32(*((unsigned __int8 *)v6 - 2));
          v8 = sub_2824C();
        }
      }
      v6 = (double *)((char *)v6 + 52);
      if ( v6 == (double *)((char *)&dbl_CABA8 + 4) )
        return sub_28778();
    }
  }
  return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
