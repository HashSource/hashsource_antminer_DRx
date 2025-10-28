int __fastcall sub_310AC(int a1)
{
  double v1; // d0
  int v2; // r4
  int v4; // r5
  bool v5; // cc
  int v6; // r1
  double *v7; // r7
  double v8; // d17
  double v9; // d18
  int result; // r0
  double v11; // d16
  double v12; // d16
  double v13; // d17
  int v14; // r6
  double v15; // d16
  double v16; // d18
  double v17; // d17
  double v18; // d16
  double v19; // d16
  double v20; // d20
  double v21; // d17
  double v22; // d18
  double v23; // d16
  double v24; // d21
  int v25; // r0
  double v26; // d16
  double v27; // d17
  int v28; // r2
  double v29; // d19
  int v30; // r3
  double v31; // d17
  double v32; // d8
  int v33; // r2
  double v34; // d8
  double *v35; // r4
  int v36; // r4
  double v37; // d16
  double v38; // d17
  double v39; // d16
  double v40; // d17
  double v41; // d16
  _DWORD *v42; // r3
  int v43; // r1
  double v44; // d16
  int v45; // s13
  int v46; // lr
  int v47; // r1
  unsigned int v48; // lr
  unsigned int v49; // r2
  int v50; // r3
  int v51; // lr
  int v52; // r2
  int v53; // r2
  int v54; // r3
  double v55; // d16
  double v56; // d18
  __int64 v57; // r2
  int32x2_t v58; // d17
  double v59; // d16
  int v60; // s13
  unsigned int v61; // lr
  int v62; // r1
  int v63; // r3
  int v64; // r2
  int v65; // r3

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 28);
  v4 = *(_DWORD *)(v2 + 3180);
  v5 = *(double *)(v2 + 3144) <= 0.0;
  v6 = (*(_DWORD *)(v2 + 3164) + 1) % 80;
  *(_DWORD *)(v2 + 3164) = v6;
  v7 = (double *)(v2 + 8 * (v6 + 8));
  v8 = *v7;
  v9 = v1 - *v7;
  result = v6 % 8;
  *(double *)(v2 + 8 * (v6 % 8 + 377)) = v1;
  v11 = v8 + v9 / (double)(5 * v4);
  *(double *)(v2 + 8 * (v6 % 8 + 385)) = v11;
  *v7 = v11;
  if ( !v5 && v11 <= 0.0 )
  {
    v58.n64_u32[0] = result - 4;
    v58.n64_u32[1] = result - 4;
    *(double *)(v2 + 720) = *(double *)(v2 + 720) + vcvt_n_f64_s32(v58, 3u);
  }
  *(double *)(v2 + 3144) = v11;
  if ( v6 )
    goto LABEL_13;
  v12 = *(double *)(v2 + 2992);
  v13 = *(double *)(v2 + 2984);
  *(_QWORD *)(v2 + 2992) = 0xC12E848000000000LL;
  *(_QWORD *)(v2 + 2984) = 0x412E848000000000LL;
  v14 = *(_DWORD *)(v2 + 768);
  *(double *)(v2 + 3000) = v12;
  *(double *)(v2 + 3008) = v13;
  if ( v12 < 100.0 )
  {
    v14 |= 1u;
    *(_DWORD *)(v2 + 768) = v14;
  }
  if ( v12 <= 0.0 )
  {
    *(_DWORD *)(v2 + 744) = 0;
    *(_DWORD *)(v2 + 748) = 0;
  }
  else
  {
    v15 = (v12 - v13) / v12;
    *(double *)(v2 + 744) = v15;
    if ( v15 >= 0.5 )
      goto LABEL_9;
  }
  v14 |= 4u;
  *(_DWORD *)(v2 + 768) = v14;
LABEL_9:
  if ( (v14 & 0xF) != 0 )
  {
    v17 = 16.0;
    *(_DWORD *)(v2 + 3180) = 2;
    *(_DWORD *)(v2 + 3184) = 0;
    v16 = 2.0;
  }
  else
  {
    v16 = (double)v4;
    v17 = (double)v4 * ((double)v4 * 4.0);
  }
  v18 = *(double *)(v2 + 720);
  *(_DWORD *)(v2 + 720) = 0;
  *(_DWORD *)(v2 + 724) = 0;
  v19 = (double)*(int *)(v2 + 3160) * v18 / 80.0;
  v20 = *(double *)(v2 + 704);
  *(double *)(v2 + 728) = v19;
  v21 = v19 / v17 + *(double *)(v2 + 712);
  *(double *)(v2 + 704) = v20 + v19 / v16;
  if ( v21 <= 2.0 )
  {
    *(double *)(v2 + 712) = v21;
    if ( v21 < -2.0 )
    {
      *(double *)(v2 + 712) = -2.0;
      *(_DWORD *)(v2 + 768) = v14 | 2;
    }
  }
  else
  {
    *(double *)(v2 + 712) = 2.0;
    *(_DWORD *)(v2 + 768) = v14 | 2;
  }
LABEL_13:
  if ( result != 7 )
    return result;
  v22 = *(double *)(v2 + 3096);
  v23 = *(double *)(v2 + 3128);
  v24 = *(double *)(v2 + 2992);
  v25 = 2 * *(_DWORD *)(v2 + 3196);
  *(_DWORD *)(v2 + 3196) = v25;
  v26 = (v22 - v23) * 0.5;
  if ( v26 > v24 )
    *(double *)(v2 + 2992) = v26;
  v27 = *(double *)(v2 + 3008);
  v28 = *(_DWORD *)(v2 + 3192) + 1;
  if ( v26 < *(double *)(v2 + 2984) )
    *(double *)(v2 + 2984) = v26;
  v29 = *(double *)(v2 + 3000);
  v30 = v28 % 10;
  *(_DWORD *)(v2 + 3192) = v28 % 10;
  if ( v26 >= (v29 + v27) * 0.5 )
  {
    v25 |= 1u;
    *(_DWORD *)(v2 + 3196) = v25;
  }
  if ( (v25 & 0x303C0F03) == 0x300C0300 )
  {
    if ( v30 )
      *(_DWORD *)(v2 + 768) |= 8u;
    v30 = 0;
    *(_DWORD *)(v2 + 3192) = 0;
  }
  v31 = *(double *)(v2 + 3064);
  result = v2 + 3032;
  v32 = *(double *)(v2 + 3032);
  v33 = 2 * *(_DWORD *)(v2 + 3200);
  *(_DWORD *)(v2 + 3200) = v33;
  v34 = (v32 - v31) * 0.5;
  if ( v34 >= *(double *)(v2 + 2976) )
    *(_DWORD *)(v2 + 3200) = v33 | 1;
  switch ( v30 )
  {
    case 0:
      v38 = (double)(*(_DWORD *)(v2 + 3176) - v6);
      v39 = -*(double *)(v2 + 728);
      *(double *)(v2 + 736) = v39;
      if ( fabs(v38) > 1.0 )
        goto LABEL_37;
      v63 = *(_DWORD *)(v2 + 3180);
      v64 = *(_DWORD *)(v2 + 3184) + 1;
      *(_DWORD *)(v2 + 3184) = v64;
      if ( v64 > 20 * v63 )
      {
        v65 = v63 + 1;
        if ( v65 > 10 )
          v65 = 10;
        *(_DWORD *)(v2 + 3180) = v65;
LABEL_37:
        *(_DWORD *)(v2 + 3176) = v6;
        *(_DWORD *)(v2 + 3184) = 0;
      }
      else
      {
        v39 = v39 - v38;
        *(double *)(v2 + 736) = v39;
      }
      v40 = v39 / 8000.0;
      v41 = *(double *)(v2 + 3152);
      v42 = (_DWORD *)(v2 + 48);
      v43 = *(_DWORD *)(v2 + 52);
      *(_DWORD *)(v2 + 56) = *(_DWORD *)(v2 + 48);
      *(_DWORD *)(v2 + 60) = v43;
      v44 = v41 + (double)*(int *)(v2 + 3160) * v40;
      if ( v44 < 0.0 )
      {
        v59 = -v44;
        v60 = (int)v59;
        v61 = (unsigned int)((v59 - (double)(unsigned int)(int)v59) * 4294967300.0);
        if ( !v61 )
        {
          v45 = -v60;
          v62 = *(_DWORD *)(v2 + 28);
          *v42 = *(_DWORD *)(v2 + 24);
          *(_DWORD *)(v2 + 52) = v62;
          goto LABEL_60;
        }
        v46 = -v61;
        v45 = ~v60;
      }
      else
      {
        v45 = (int)v44;
        v46 = (unsigned int)((v44 - (double)(unsigned int)(int)v44) * 4294967300.0);
      }
      v47 = *(_DWORD *)(v2 + 28);
      *v42 = *(_DWORD *)(v2 + 24);
      *(_DWORD *)(v2 + 52) = v47;
      if ( !v46 )
      {
LABEL_60:
        *(_DWORD *)(v2 + 48) -= v45;
        goto LABEL_46;
      }
      v48 = -v46;
      v49 = *(_DWORD *)(v2 + 52);
      v50 = (unsigned __int16)v49 + (unsigned __int16)v48;
      v51 = HIWORD(v49) + HIWORD(v48);
      v52 = *(_DWORD *)(v2 + 48);
      if ( (v50 & 0x10000) != 0 )
        ++v51;
      *(_DWORD *)(v2 + 52) = (unsigned __int16)v50 | (v51 << 16);
      v53 = ~v45 + v52;
      if ( (v51 & 0x10000) != 0 )
        ++v53;
      *(_DWORD *)(v2 + 48) = v53;
LABEL_46:
      v54 = *(unsigned __int8 *)(v2 + 3200);
      if ( v54 == 224 )
        goto LABEL_73;
      if ( *(unsigned __int8 *)(v2 + 3200) > 0xE0u )
      {
        if ( v54 != 248 )
        {
          if ( *(unsigned __int8 *)(v2 + 3200) <= 0xF8u )
          {
            if ( v54 != 240 )
              goto LABEL_64;
            goto LABEL_73;
          }
          if ( v54 != 252 && v54 != 254 )
            goto LABEL_64;
        }
        sub_30CD4(a1, 2);
        goto LABEL_52;
      }
      if ( v54 != 128 )
      {
        if ( v54 != 192 )
        {
          if ( !*(_BYTE *)(v2 + 3200) )
            goto LABEL_51;
LABEL_64:
          sub_30CD4(a1, 0);
          *(_DWORD *)(v2 + 768) |= 0x10u;
          goto LABEL_52;
        }
LABEL_73:
        sub_30CD4(a1, 1);
        goto LABEL_52;
      }
LABEL_51:
      sub_30CD4(a1, 0);
LABEL_52:
      v55 = *(double *)(v2 + 2960);
      v56 = *(double *)(v2 + 2968);
      result = 0;
      LODWORD(v57) = 0;
      WORD2(v57) = -31616;
      *(_QWORD *)(v2 + 2968) = 0xC12E848000000000LL;
      if ( v34 < v55 )
        v55 = v34;
      HIWORD(v57) = 16686;
      *(_QWORD *)(v2 + 2960) = v57;
      *(double *)(v2 + 2976) = (v55 + v56) * 0.5;
      return result;
    case 1:
      *(double *)(v2 + 2968) = v34;
      return result;
    case 2:
      v36 = v2 + 2960;
      v37 = *(double *)(v36 + 8);
      v35 = (double *)(v36 + 8);
      if ( v34 > v37 )
        goto LABEL_32;
      return result;
    case 9:
      v35 = (double *)(v2 + 2960);
LABEL_32:
      *v35 = v34;
      return result;
    default:
      return result;
  }
}
