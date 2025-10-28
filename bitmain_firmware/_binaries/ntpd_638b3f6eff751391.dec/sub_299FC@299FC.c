unsigned __int16 *__fastcall sub_299FC(_WORD *a1, int a2, int a3)
{
  unsigned int v4; // r12
  char *v5; // r3
  char *v6; // r2
  int v7; // r10
  int v8; // r7
  int v9; // lr
  char *v10; // r0
  bool v11; // cf
  int v12; // r7
  char *i; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int **v17; // r0
  int **v18; // r4
  int *v19; // r3
  int v20; // r2
  __int16 v21; // r3
  int v22; // r2
  char *v23; // r12
  char *v24; // r0
  int *v25; // r3
  int **v26; // r2
  unsigned int v27; // r3
  char *v28; // r3
  double v29; // d16
  double v30; // d17
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // lr
  unsigned int v34; // r1
  unsigned int v35; // lr
  unsigned int v36; // r1
  unsigned int v37; // lr
  unsigned int v38; // r1
  int v39; // r1
  unsigned int v40; // s13
  unsigned int v41; // lr
  char v42; // lr
  char v43; // lr
  unsigned int v44; // r11
  bool v45; // cc
  int v46; // lr
  double v47; // d16
  int **v48; // lr
  double v49; // d16
  double v50; // d16
  int v51; // s13
  double v52; // d16
  unsigned int v53; // s13
  unsigned int v54; // r3
  double v55; // d17
  double v56; // d16
  int v58; // r2
  int *v59; // r1
  int *v60; // r3
  bool v61; // zf
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r3
  _DWORD *v66; // t0
  int *v67; // r0
  int *v68; // r1
  int *v69; // r2
  int *v70; // r3
  double v71; // d16
  int v72; // s13
  int v74; // [sp+14h] [bp-20h] BYREF
  int v75; // [sp+18h] [bp-1Ch]
  int v76; // [sp+1Ch] [bp-18h]
  int v77; // [sp+20h] [bp-14h]
  int v78; // [sp+24h] [bp-10h]
  int v79; // [sp+28h] [bp-Ch]
  int v80; // [sp+2Ch] [bp-8h]

  v4 = *(unsigned __int16 *)(a3 + 4);
  v5 = (char *)(a3 + 3);
  v6 = (char *)(a3 + 2);
  v7 = a3 + 40;
  v8 = ((v4 << 8) | (v4 >> 8)) & 0xFFF;
  if ( dword_7FF54 )
    v9 = 280;
  else
    v9 = 240;
  v10 = (char *)sub_28654((int)a1, a2, v6, v5, v9);
  v11 = v8 != 0;
  v12 = v8 - 1;
  for ( i = v10; v11; v7 += 32 )
  {
    if ( !i )
      break;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    HIWORD(v74) = *(_WORD *)(v7 - 28);
    if ( dword_7FF54 && *(_DWORD *)(v7 - 24) )
    {
      LOWORD(v74) = 10;
      v14 = *(_DWORD *)(v7 - 12);
      v15 = *(_DWORD *)(v7 - 8);
      v16 = *(_DWORD *)(v7 - 4);
      v76 = *(_DWORD *)(v7 - 16);
      v77 = v14;
      v78 = v15;
      v79 = v16;
    }
    else
    {
      LOWORD(v74) = 2;
      v75 = *(_DWORD *)(v7 - 32);
    }
    v17 = sub_21500((unsigned __int16 *)&v74, 0, -1, 0);
    v18 = v17;
    if ( v17 )
    {
      if ( *a1 == 10 )
      {
        v59 = v17[10];
        if ( v59 )
        {
          v60 = (int *)*((unsigned __int8 *)v17 + 56);
          v61 = v60 == (int *)4;
          if ( v60 == (int *)4 )
            v59 += 21;
          else
            v60 = v59 + 7;
          if ( v61 )
          {
            v62 = *v59;
            v66 = v59 + 1;
            v63 = v59[1];
            v64 = *++v66;
            v65 = v66[1];
          }
          else
          {
            v62 = *v60;
            v63 = v60[1];
            v64 = v60[2];
            v65 = v60[3];
          }
          *((_DWORD *)i + 62) = v62;
          *((_DWORD *)i + 63) = v63;
          *((_DWORD *)i + 64) = v64;
          *((_DWORD *)i + 65) = v65;
        }
        else
        {
          memset(i + 248, 0, 0x10u);
        }
        v67 = v18[5];
        v68 = v18[6];
        v69 = v18[7];
        v70 = v18[8];
        *((_DWORD *)i + 60) = 1;
        *((_DWORD *)i + 66) = v67;
        *((_DWORD *)i + 67) = v68;
        *((_DWORD *)i + 68) = v69;
        *((_DWORD *)i + 69) = v70;
      }
      else
      {
        v19 = v17[10];
        if ( v19 )
        {
          if ( v17[138] )
          {
            if ( *((_BYTE *)v17 + 56) == 4 || *((_BYTE *)v17 + 56) && (v58 = v19[6], (*(_DWORD *)i = v58) == 0) )
              *(_DWORD *)i = v19[20];
          }
          else
          {
            *(_DWORD *)i = v19[6];
          }
        }
        else
        {
          *(_DWORD *)i = 0;
        }
        v20 = dword_7FF54;
        *((_DWORD *)i + 1) = v17[4];
        if ( v20 )
          *((_DWORD *)i + 60) = 0;
      }
      v21 = *((_WORD *)v18 + 7);
      v22 = dword_CB470;
      v23 = i;
      i[10] = 0;
      v24 = i;
      *((_WORD *)i + 4) = v21;
      if ( v18 == (int **)v22 )
        i[10] = 2;
      v25 = v18[13];
      v26 = v18;
      if ( ((unsigned __int8)v25 & 1) != 0 )
      {
        i[10] |= 1u;
        v25 = v18[13];
      }
      if ( ((unsigned __int8)v25 & 8) != 0 )
      {
        i[10] |= 8u;
        v25 = v18[13];
      }
      if ( ((unsigned __int8)v25 & 0x20) != 0 )
      {
        i[10] |= 0x10u;
        v25 = v18[13];
      }
      if ( ((unsigned __int8)v25 & 0x40) != 0 )
        i[10] |= 4u;
      v27 = *((unsigned __int8 *)v18 + 104);
      if ( v27 == 4 )
      {
        i[10] |= 0x40u;
        v27 = *((unsigned __int8 *)v18 + 104);
      }
      if ( v27 > 5 )
        i[10] = ~((unsigned int)~((unsigned __int8)i[10] << 25) >> 25);
      v28 = i;
      i[11] = *((_BYTE *)v18 + 67);
      i[12] = *((_BYTE *)v18 + 47);
      *((_DWORD *)i + 7) = v18[25];
      i[14] = *((_BYTE *)v18 + 69);
      i[15] = *((_BYTE *)v18 + 70);
      i[16] = *((_BYTE *)v18 + 48);
      i[17] = *((_BYTE *)v18 + 71);
      i[18] = *((_BYTE *)v18 + 46);
      i[20] = *((_BYTE *)v18 + 106);
      i[21] = (unsigned __int8)v18[127];
      i[22] = (unsigned __int8)v18[27];
      v29 = *((double *)v18 + 52) * 65536.0;
      *((_WORD *)i + 12) = (unsigned __int16)v18[27];
      *((_DWORD *)i + 59) = bswap32((int)v29);
      i[23] = *((_BYTE *)v18 + 59);
      v30 = *((double *)v18 + 10);
      v31 = *((unsigned __int16 *)v18 + 22);
      *((_DWORD *)i + 11) = bswap32((unsigned int)(*((double *)v18 + 9) * 65536.0));
      *((_WORD *)i + 13) = ((_WORD)v31 << 8) | (v31 >> 8);
      *((_DWORD *)i + 12) = bswap32((unsigned int)(v30 * 65536.0));
      *((_DWORD *)i + 9) = v18[22];
      v32 = (unsigned int)v18[24];
      *((_DWORD *)i + 13) = bswap32((unsigned int)v18[23]);
      v33 = (unsigned int)v18[98];
      *((_DWORD *)i + 14) = bswap32(v32);
      v34 = (unsigned int)v18[99];
      *((_DWORD *)i + 15) = bswap32(v33);
      v35 = (unsigned int)v18[92];
      *((_DWORD *)i + 16) = bswap32(v34);
      v36 = (unsigned int)v18[93];
      *((_DWORD *)i + 17) = bswap32(v35);
      v37 = (unsigned int)v18[94];
      *((_DWORD *)i + 18) = bswap32(v36);
      v38 = (unsigned int)v18[95];
      *((_DWORD *)i + 19) = bswap32(v37);
      *((_DWORD *)i + 20) = bswap32(v38);
      v39 = (int)v18[32] - 1;
      do
      {
        v45 = v39 < 0;
        if ( v39 < 0 )
          v46 = 7;
        else
          v46 = v39;
        v47 = *(double *)&v18[2 * v46 + 34] * 65536.0;
        if ( v39 >= 0 )
          --v39;
        v48 = &v18[2 * v46];
        if ( v45 )
          v39 = 6;
        *((_DWORD *)v24 + 21) = bswap32((int)v47);
        v49 = *((double *)v48 + 25);
        if ( v49 >= 0.0 )
        {
          v40 = (int)v49;
          v41 = bswap32((unsigned int)((v49 - (double)(unsigned int)(int)v49) * 4294967300.0));
        }
        else
        {
          v50 = -v49;
          v51 = (int)v50;
          v41 = (unsigned int)((v50 - (double)(unsigned int)(int)v50) * 4294967300.0);
          if ( v41 )
          {
            v41 = bswap32(-v41);
            v40 = ~v51;
          }
          else
          {
            v40 = -v51;
          }
        }
        v24 += 4;
        *((_DWORD *)v28 + 30) = v41;
        *((_DWORD *)v28 + 29) = bswap32(v40);
        v28 += 8;
        v42 = *((_BYTE *)v26 + 360);
        v26 = (int **)((char *)v26 + 1);
        v43 = (unsigned __int8)v18[32] - v42;
        v44 = (unsigned __int8)(v43 + 7);
        if ( v44 > 7 )
          v23[180] = v43 - 1;
        else
          v23[180] = v44;
        ++v23;
      }
      while ( v26 != v18 + 2 );
      v52 = *((double *)v18 + 51);
      if ( v52 < 0.0 )
      {
        v71 = -v52;
        v72 = (int)v71;
        v54 = (unsigned int)((v71 - (double)(unsigned int)(int)v71) * 4294967300.0);
        if ( v54 )
        {
          v54 = bswap32(-v54);
          v53 = ~v72;
        }
        else
        {
          v53 = -v72;
        }
      }
      else
      {
        v53 = (int)v52;
        v54 = bswap32((unsigned int)((v52 - (double)(unsigned int)(int)v52) * 4294967300.0));
      }
      *((_DWORD *)i + 50) = v54;
      *((_DWORD *)i + 49) = bswap32(v53);
      v55 = sqrt(*((double *)v18 + 54));
      *((_DWORD *)i + 47) = bswap32((int)(*((double *)v18 + 52) * 65536.0));
      v56 = sqrt(*((double *)v18 + 53));
      *((_DWORD *)i + 48) = bswap32((unsigned int)(v55 * 65536.0));
      *((_DWORD *)i + 51) = bswap32((unsigned int)(v56 * 65536.0));
      i = sub_2824C();
    }
    v11 = v12-- != 0;
  }
  return sub_28778();
}
