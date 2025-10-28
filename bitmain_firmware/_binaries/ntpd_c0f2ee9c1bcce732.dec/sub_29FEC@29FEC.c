unsigned __int16 *__fastcall sub_29FEC(int a1, int a2, int a3)
{
  int v5; // r12
  _DWORD *v6; // r4
  int v7; // r9
  int *v8; // r11
  char v9; // r3
  bool v10; // zf
  int v11; // r3
  int v12; // r3
  unsigned int v13; // r3
  double v14; // d16
  unsigned int v15; // s13
  unsigned int v16; // r3
  double v17; // d16
  char *v18; // r0
  bool v19; // zf
  int v20; // r2
  int v21; // r3
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  double v33; // d16
  int v34; // s13
  int v35; // r3
  int v37; // [sp+8h] [bp-Ch]
  _DWORD *v38; // [sp+Ch] [bp-8h]

  if ( dword_7CF4C > 2 )
  {
    v37 = a2;
    puts("wants peer list summary");
    a2 = v37;
  }
  if ( dword_7FF54 )
    v5 = 72;
  else
    v5 = 32;
  v6 = sub_28654(a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), v5);
  if ( v6 )
  {
    v7 = 0;
    v38 = &unk_CB238;
    while ( 1 )
    {
      v8 = (int *)v38[1];
      ++v38;
      v9 = (char)v6;
      if ( v6 )
        v9 = 1;
      v10 = v8 == 0;
      if ( v8 )
        v10 = v6 == 0;
      if ( !v10 )
        break;
LABEL_57:
      if ( ++v7 <= 127 )
        v35 = v9 & 1;
      else
        v35 = 0;
      if ( !v35 )
        return sub_28778();
    }
    while ( 1 )
    {
      if ( dword_7CF4C > 3 )
      {
        puts("sum: got one");
        if ( *((_WORD *)v8 + 6) != 10 )
        {
LABEL_39:
          v20 = dword_7FF54;
          v6[1] = v8[4];
          v21 = v8[10];
          if ( v20 )
            v6[8] = 0;
          if ( v21 )
          {
            if ( v8[138] )
            {
              if ( *((_BYTE *)v8 + 56) == 4 || *((_BYTE *)v8 + 56) && (v22 = *(_DWORD *)(v21 + 24), (*v6 = v22) == 0) )
                *v6 = *(_DWORD *)(v21 + 80);
            }
            else
            {
              *v6 = *(_DWORD *)(v21 + 24);
            }
          }
          else
          {
            *v6 = 0;
          }
          goto LABEL_16;
        }
      }
      else if ( *((_WORD *)v8 + 6) != 10 )
      {
        goto LABEL_39;
      }
      if ( !dword_7FF54 )
      {
        v9 = (char)v6;
        if ( v6 )
          v9 = 1;
        goto LABEL_57;
      }
      v23 = v8[5];
      v24 = v8[6];
      v25 = v8[7];
      v26 = v8[8];
      v6[8] = 1;
      v6[14] = v23;
      v6[15] = v24;
      v6[16] = v25;
      v6[17] = v26;
      v27 = v8[10];
      if ( v27 )
      {
        v28 = v27 + 28;
        v29 = *(_DWORD *)(v27 + 28);
        v30 = *(_DWORD *)(v27 + 32);
        v31 = *(_DWORD *)(v28 + 8);
        v32 = *(_DWORD *)(v28 + 12);
        v6[10] = v29;
        v6[11] = v30;
        v6[12] = v31;
        v6[13] = v32;
      }
      else
      {
        memset(v6 + 10, 0, 0x10u);
      }
LABEL_16:
      v11 = dword_CB470;
      *((_WORD *)v6 + 4) = *((_WORD *)v8 + 7);
      v10 = v8 == (int *)v11;
      *((_BYTE *)v6 + 10) = *((_BYTE *)v8 + 69);
      *((_BYTE *)v6 + 11) = *((_BYTE *)v8 + 48);
      *((_BYTE *)v6 + 12) = *((_BYTE *)v8 + 70);
      LOBYTE(v11) = *((_BYTE *)v8 + 106);
      *((_BYTE *)v6 + 14) = 0;
      *((_BYTE *)v6 + 13) = v11;
      if ( v10 )
        *((_BYTE *)v6 + 14) = 2;
      v12 = v8[13];
      if ( (v12 & 1) != 0 )
      {
        *((_BYTE *)v6 + 14) |= 1u;
        v12 = v8[13];
      }
      if ( (v12 & 8) != 0 )
      {
        *((_BYTE *)v6 + 14) |= 8u;
        v12 = v8[13];
      }
      if ( (v12 & 0x20) != 0 )
      {
        *((_BYTE *)v6 + 14) |= 0x10u;
        v12 = v8[13];
      }
      if ( (v12 & 0x40) != 0 )
        *((_BYTE *)v6 + 14) |= 4u;
      v13 = *((unsigned __int8 *)v8 + 104);
      if ( v13 == 4 )
      {
        *((_BYTE *)v6 + 14) |= 0x40u;
        v13 = *((unsigned __int8 *)v8 + 104);
      }
      if ( v13 > 5 )
        *((_BYTE *)v6 + 14) = ~((unsigned int)~(*((unsigned __int8 *)v6 + 14) << 25) >> 25);
      *((_BYTE *)v6 + 15) = *((_BYTE *)v8 + 47);
      v14 = *((double *)v8 + 51);
      v6[4] = bswap32((int)(*((double *)v8 + 52) * 65536.0));
      if ( v14 < 0.0 )
      {
        v33 = -v14;
        v34 = (int)v33;
        v16 = (unsigned int)((v33 - (double)(unsigned int)(int)v33) * 4294967300.0);
        if ( v16 )
        {
          v16 = bswap32(-v16);
          v15 = ~v34;
        }
        else
        {
          v15 = -v34;
        }
      }
      else
      {
        v15 = (int)v14;
        v16 = bswap32((unsigned int)((v14 - (double)(unsigned int)(int)v14) * 4294967300.0));
      }
      v6[6] = v16;
      v6[5] = bswap32(v15);
      v17 = sqrt(*((double *)v8 + 54));
      v8 = (int *)*v8;
      v6[7] = bswap32((unsigned int)(v17 * 65536.0));
      v18 = sub_2824C();
      v9 = (char)v18;
      v6 = v18;
      if ( v18 )
        v9 = 1;
      v19 = v8 == 0;
      if ( v8 )
        v19 = v18 == 0;
      if ( v19 )
        goto LABEL_57;
    }
  }
  return sub_28778();
}
