unsigned __int16 *__fastcall sub_2AD6C(unsigned __int16 *a1, int a2, int a3)
{
  int v6; // r5
  bool v7; // zf
  int v8; // r5
  unsigned int v9; // r3
  unsigned int v10; // r3
  __int64 v11; // r0
  unsigned int v13; // r3
  unsigned int v14; // r3
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // [sp+Ch] [bp-64h] BYREF
  unsigned int v22; // [sp+10h] [bp-60h]
  int v23; // [sp+14h] [bp-5Ch]
  int v24; // [sp+18h] [bp-58h]
  int v25; // [sp+1Ch] [bp-54h]
  int v26; // [sp+20h] [bp-50h]
  int v27; // [sp+24h] [bp-4Ch]
  double s[9]; // [sp+28h] [bp-48h] BYREF

  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  memset(s, 0, sizeof(s));
  v6 = ((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFF;
  v7 = v6 == 0;
  v8 = v6 - 1;
  if ( v7 )
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  while ( 2 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    v21 = 2063597570;
    v22 = v9;
    if ( bswap32(v9) >> 16 << 16 == 2139029504 && sub_21500((unsigned __int16 *)&v21, 0, -1, 0) )
    {
      switch ( bswap32(*(_DWORD *)(a3 + 12)) )
      {
        case 1u:
          v17 = bswap32(*(_DWORD *)(a3 + 16));
          v18 = bswap32(*(_DWORD *)(a3 + 20));
          if ( v17 < 0 )
          {
            if ( v18 )
            {
              v18 = -v18;
              v20 = ~v17;
            }
            else
            {
              v20 = -v17;
            }
            s[5] = -((double)v20 + (double)(unsigned int)v18 * 2.32830644e-10);
          }
          else
          {
            s[5] = (double)v17 + (double)(unsigned int)v18 * 2.32830644e-10;
          }
          BYTE2(s[0]) = 1;
          goto LABEL_6;
        case 2u:
          v15 = bswap32(*(_DWORD *)(a3 + 16));
          v16 = bswap32(*(_DWORD *)(a3 + 20));
          if ( v15 < 0 )
          {
            if ( v16 )
            {
              v16 = -v16;
              v19 = ~v15;
            }
            else
            {
              v19 = -v15;
            }
            s[6] = -((double)v19 + (double)(unsigned int)v16 * 2.32830644e-10);
          }
          else
          {
            s[6] = (double)v15 + (double)(unsigned int)v16 * 2.32830644e-10;
          }
          BYTE2(s[0]) = 2;
          goto LABEL_6;
        case 3u:
          v14 = *(_DWORD *)(a3 + 24);
          BYTE2(s[0]) = 4;
          LODWORD(s[7]) = bswap32(v14);
          goto LABEL_6;
        case 4u:
          v13 = *(_DWORD *)(a3 + 24);
          BYTE2(s[0]) = 8;
          HIDWORD(s[7]) = bswap32(v13);
          goto LABEL_6;
        case 5u:
          v10 = *(_DWORD *)(a3 + 24);
          BYTE2(s[0]) = -16;
          BYTE1(s[0]) = bswap32(v10) & 0xF;
LABEL_6:
          --v8;
          LODWORD(v11) = &v21;
          HIDWORD(v11) = s;
          sub_27E00(v11, 0);
          if ( v8 == -1 )
            return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
          continue;
        default:
          sub_4FE78(3, "set_clock_fudge: default!");
          return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
      }
    }
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  }
}
