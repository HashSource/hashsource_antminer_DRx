int __fastcall sub_3B148(int a1)
{
  double v1; // d0
  int v2; // r4
  double v3; // d24
  double v4; // d26
  double v5; // d28
  double v6; // d17
  double v7; // d19
  double v8; // d20
  double v9; // d21
  double v10; // d22
  double v11; // d23
  double v12; // d25
  double v13; // d27
  double v14; // d8
  int v15; // r3
  int v16; // r1
  char *v17; // r10
  double v18; // d6
  int v19; // r12
  double v20; // d18
  int v21; // r3
  double v22; // d17
  double v23; // d8
  double v24; // d16
  double v25; // d29
  double v26; // d5
  double v27; // d8
  double v28; // d5
  int v29; // r0
  double v30; // d17
  double v31; // d21
  int v32; // kr00_4
  double v33; // d23
  int v34; // r8
  int v35; // r6
  double v36; // d16
  int v37; // r7
  double *v38; // r8
  double v39; // d18
  int v40; // r6
  double v41; // d16
  double v42; // d0
  double v43; // d5
  int v44; // r8
  double v45; // d17
  double *v46; // r3
  double *v47; // r2
  double v48; // d20
  double v49; // d19
  int v50; // r3
  double v51; // r0
  int v52; // r3
  double v53; // d16
  double v54; // d0
  double *v55; // r12
  double v56; // d5
  double v57; // d22
  double *v58; // r7
  double v59; // d17
  double v60; // d8
  double v61; // d21
  double *v62; // r8
  double v63; // d19
  double v64; // d20
  double v65; // d8
  double v66; // r0
  double v67; // d16
  double v68; // d18
  double v69; // d17
  int v70; // r7
  int v71; // r3
  int v72; // r2
  int v73; // r7
  int v74; // r2
  int v75; // r3
  double v76; // d16
  double v77; // d17
  double v78; // d16
  int v79; // r3
  double v80; // d16
  double *v81; // r3
  double v82; // d16
  bool v83; // fzf
  bool v84; // fnf
  int v85; // r3
  int v86; // r2
  bool v87; // zf
  int v88; // r2
  int v89; // r0
  double v90; // d0
  int v91; // r8
  int v92; // r2
  int v93; // r6
  double v94; // d16
  int v95; // r3
  int v96; // r1
  int v97; // r3
  double v98; // d0
  double v99; // d16
  double v100; // d17
  int v101; // r12
  int v102; // r0
  int v103; // r1
  int v104; // r2
  int v105; // r2
  double v106; // d16
  int v107; // r2
  double v108; // d18
  double v109; // d0
  double v110; // d16
  double v111; // d16
  double v112; // d8
  double v113; // r0
  int v114; // r2
  int v115; // r3
  int v116; // r3
  int v117; // r2
  double v118; // d0
  int v119; // r0
  double v120; // d17
  int v121; // r1
  double v122; // d16
  double v123; // d16
  int v125; // [sp+34h] [bp-B8h]
  double v126; // [sp+58h] [bp-94h]
  int v127; // [sp+58h] [bp-94h]
  int v128; // [sp+58h] [bp-94h]
  int v129; // [sp+58h] [bp-94h]
  int v130; // [sp+60h] [bp-8Ch]
  char s[132]; // [sp+68h] [bp-84h] BYREF

  v130 = *(_DWORD *)(a1 + 60);
  v2 = *(_DWORD *)(v130 + 28);
  if ( *(_DWORD *)&buf[8724] )
  {
    v3 = *(double *)&buf[8756];
    v4 = *(double *)&buf[8748];
    v5 = *(double *)&buf[8740];
    v6 = *(double *)&buf[8732];
    v7 = *(double *)&buf[8828];
    v8 = *(double *)&buf[8820];
    v9 = *(double *)&buf[8812];
    v10 = *(double *)&buf[8804];
    v11 = *(double *)&buf[8796];
    v12 = *(double *)&buf[8788];
    v13 = *(double *)&buf[8780];
    v14 = *(double *)&buf[8772];
  }
  else
  {
    *(_DWORD *)&buf[8724] = 1;
    memset(&buf[8772], 0, 0x48u);
    v14 = 0.0;
    memset(&buf[8844], 0, 0x148u);
    memset(&buf[9172], 0, 0x2A80u);
    memset(&buf[20052], 0, 0x2A80u);
    memset(&buf[30932], 0, 0xC800u);
    memset(&unk_94270, 0, 0xC800u);
    memset(&unk_A0A70, 0, 0x140u);
    memset(&unk_A0BB0, 0, 0x140u);
    memset(&unk_A0CF0, 0, 0xC800u);
    memset(&unk_AD4F0, 0, 0xC800u);
    memset(&unk_B9CF0, 0, 0x140u);
    memset(&unk_B9E30, 0, 0x140u);
    memset(&unk_B9F70, 0, 0xFA00u);
    v13 = 0.0;
    v12 = 0.0;
    v11 = 0.0;
    v10 = 0.0;
    v9 = 0.0;
    v8 = 0.0;
    v7 = 0.0;
    v6 = 0.0;
    v5 = 0.0;
    v4 = 0.0;
    v3 = 0.0;
  }
  v15 = *(_DWORD *)(v2 + 2176);
  *(double *)&buf[8740] = v6;
  *(double *)&buf[8780] = v14;
  *(double *)&buf[8836] = v7;
  *(double *)&buf[8828] = v8;
  *(double *)&buf[8820] = v9;
  *(double *)&buf[8804] = v11;
  *(double *)&buf[8764] = v3;
  *(double *)&buf[8756] = v4;
  v126 = dbl_7B1B0[v15];
  v16 = dword_C9970;
  *(double *)&buf[8748] = v5;
  *(double *)&buf[8812] = v10;
  *(double *)&buf[8796] = v12;
  v17 = &buf[8 * dword_C9970 + 8196];
  *(double *)&buf[8788] = v13;
  v18 = dbl_7B1B0[(v15 + 20) % 80];
  v19 = *(_DWORD *)(v2 + 2196);
  *(_DWORD *)(v2 + 2176) = (v15 + 1) % 80;
  *(double *)&buf[8732] = v1 * 5.0 - (v4 * -3.48174 + v3 * 0.8360961 + v5 * 5.452988 + v6 * -3.807229);
  v20 = *(double *)(v2 + 2160);
  *(double *)&buf[8772] = v1
                        - (v8 * -2.765914
                         + v7 * 0.4897278
                         + v9 * 8.110921
                         + v10 * -15.17732
                         + v11 * 19.75197
                         + v12 * -18.14365
                         + v13 * 11.59783
                         + v14 * -4.73504);
  v21 = (v19 + 1) % 480000;
  dword_C9970 = (v16 + 1) % 1360;
  v22 = v6 * -0.01149947 + *(double *)&buf[8732] * 0.003281435 + v5 * 0.01654858 + v4 * -0.01149947 + v3 * 0.003281435;
  v23 = v14 * -0.02375732
      + *(double *)&buf[8772] * 0.008203628
      + v13 * 0.03353214
      + v12 * -0.04080258
      + v11 * 0.04605479;
  v24 = v22 * v126 / 680.0;
  v25 = v22 * v18 / 680.0;
  *(double *)(v2 + 2160) = v20 - *((double *)v17 + 122);
  *((double *)v17 + 122) = v24;
  v26 = *(double *)(v2 + 2168);
  *(double *)(v2 + 2160) = *(double *)(v2 + 2160) + v24;
  *(double *)(v2 + 2168) = v26 - *(double *)&buf[8 * v16 + 20052];
  *(double *)&buf[8 * v16 + 20052] = v25;
  v27 = v23 + v10 * -0.04080258 + v9 * 0.03353214 + v8 * -0.02375732 + v7 * 0.008203628;
  *(double *)(v2 + 2168) = *(double *)(v2 + 2168) + v25;
  v28 = dbl_C9998;
  v29 = dword_C9974 + 20;
  v30 = dbl_7B1B0[dword_C9974];
  v31 = dbl_C9990;
  v32 = dword_C9974 + 10;
  v33 = dbl_C99A0;
  v34 = dword_C9978;
  v35 = (dword_C9974 + 20) / 80;
  *(_DWORD *)(v2 + 2196) = v21;
  v127 = v34;
  v36 = dbl_7B1B0[v29 - 80 * v35];
  dword_C9974 = v32 % 80;
  v37 = 8 * v34;
  v38 = (double *)((char *)&unk_94158 + 8 * v34);
  v39 = *(double *)&buf[v37 + 30932];
  v40 = v21 % 8000;
  LODWORD(v51) = dword_C9988;
  v41 = v27 * v36 * 0.25;
  v42 = v28 - v38[35];
  v43 = dbl_C9980;
  v38[35] = v41;
  v44 = LODWORD(v51);
  v45 = v27 * v30 * 0.25;
  *(double *)&buf[v37 + 30932] = v45;
  v46 = (double *)((char *)&unk_A0A70 + 8 * LODWORD(v51));
  v47 = (double *)((char *)&unk_A0BB0 + 8 * LODWORD(v51));
  v48 = *v46;
  v49 = *v47;
  *v46 = v45;
  *v47 = v41;
  v50 = *(_DWORD *)(v2 + 3292);
  dbl_C9998 = v41 + v42;
  HIDWORD(v51) = v2 + 216 * v50 + 2208;
  dbl_C9980 = v45 + v43 - v39;
  dbl_C9990 = v45 + v31 - v48;
  dbl_C99A0 = v41 + v33 - v49;
  v52 = *(_DWORD *)(v2 + 4328);
  *(double *)(HIDWORD(v51) + 40) = sqrt((v41 + v42) * (v41 + v42) + dbl_C9980 * dbl_C9980) / 800.0;
  if ( (v52 & 1) == 0 )
  {
    LODWORD(v51) = a1;
    sub_39FE8(v51, (int)(*(double *)(v130 + 728) * 8000.0));
    v127 = dword_C9978;
    LODWORD(v51) = dword_C9988;
    v37 = 8 * dword_C9978;
    v44 = dword_C9988;
  }
  v53 = v27 * dbl_7B1B0[dword_C99A8];
  v54 = dbl_C99C0;
  v55 = (double *)((char *)&unk_AD4F0 + v37);
  v56 = *(double *)((char *)&unk_AD4F0 + v37);
  v57 = dbl_C99C8;
  v58 = (double *)((char *)&unk_A0CF0 + v37);
  v59 = *v58;
  v60 = v27 * dbl_7B1B0[(dword_C99A8 + 20) % 80];
  v61 = dbl_C99B8;
  dword_C99A8 = (dword_C99A8 + 12) % 80;
  v62 = &dbl_BA0C0[v44];
  v63 = *(v62 - 82);
  v64 = *(v62 - 122);
  v65 = v60 * 0.25;
  *v55 = v65;
  *(v62 - 82) = v65;
  HIDWORD(v66) = v2 + 216 * *(_DWORD *)(v2 + 3292) + 2312;
  v67 = v53 * 0.25;
  v68 = dbl_C99B0;
  *v58 = v67;
  *(v62 - 122) = v67;
  dbl_C99C0 = v65 + v54 - v56;
  dbl_C99B0 = v67 + v68 - v59;
  dbl_C99C8 = v65 + v57 - v63;
  dbl_C99B8 = v67 + v61 - v64;
  v69 = sqrt(dbl_C99C0 * dbl_C99C0 + dbl_C99B0 * dbl_C99B0) / 800.0;
  v70 = 4328;
  v71 = *(_DWORD *)(v2 + 4328);
  if ( (v71 & 1) != 0 )
    v70 = 1;
  *(double *)(HIDWORD(v66) + 40) = v69;
  if ( (v71 & 1) == 0 )
  {
    LODWORD(v66) = a1;
    sub_39FE8(v66, (int)(*(double *)(v130 + 736) * 8000.0));
    v71 = *(_DWORD *)(v2 + v70);
    v127 = dword_C9978;
    v70 = v71 & 1;
    LODWORD(v51) = dword_C9988;
  }
  v72 = *(_DWORD *)(v2 + 2196);
  HIDWORD(v51) = (LODWORD(v51) + 1) % 40;
  dword_C9978 = (v127 + 1) % 6400;
  dword_C9988 = HIDWORD(v51);
  if ( !v72 )
  {
    ++*(_DWORD *)(v2 + 56);
    if ( v70 )
    {
      if ( (v71 & 0x1000) != 0 )
        *(_DWORD *)(v2 + 2196) = 472000;
      goto LABEL_13;
    }
    LODWORD(v51) = sub_399F8(a1);
    v71 = *(_DWORD *)(v2 + 4328);
    if ( !LODWORD(v51) )
      *(_DWORD *)(v2 + 56) = 0;
    v70 = v71 & 1;
  }
  if ( v70 )
  {
LABEL_13:
    v73 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 28);
    v74 = *(_DWORD *)(v73 + 2192);
    v75 = v73 + 216 * *(_DWORD *)(v73 + 3292) + 2200;
    v76 = *(double *)(v73 + 216 * *(_DWORD *)(v73 + 3292) + 2248);
    v77 = *(double *)(v73 + 216 * *(_DWORD *)(v73 + 3292) + 2360);
    if ( v76 > *(double *)(v73 + 216 * *(_DWORD *)(v73 + 3292) + 2256) )
      *(double *)(v73 + 216 * *(_DWORD *)(v73 + 3292) + 2256) = v76;
    v78 = *(double *)(v75 + 152);
    if ( v78 > v77 )
      *(double *)(v75 + 160) = v78;
    switch ( v74 )
    {
      case 6400:
        *(_DWORD *)(v73 + 2136) = *(_DWORD *)(v73 + 2132);
        break;
      case 120:
        dbl_C99E0 = *(double *)(v73 + 2160);
        dbl_C99D0 = dbl_C99E0;
        dbl_C99D8 = dbl_C99E0;
        break;
      case 1600:
        v118 = *(double *)(v73 + 2168) * *(double *)(v73 + 2168);
        dbl_C99D8 = *(double *)(v73 + 2160);
        v119 = *(_DWORD *)(v73 + 2128);
        v120 = *(double *)(v73 + 2168);
        dbl_C99E8 = sqrt(v118 + dbl_C99D8 * dbl_C99D8);
        v121 = *(_DWORD *)(v73 + 2176);
        v122 = v120 / (double)v119;
        *(double *)(v73 + 2184) = v122;
        if ( v122 < 0.0 )
        {
          *(_DWORD *)(v73 + 2176) = v121 - 1;
          if ( v121 - 1 < 0 )
            *(_DWORD *)(v73 + 2176) = v121 + 79;
        }
        else
        {
          *(_DWORD *)(v73 + 2176) = v121 + 1;
          if ( v121 + 1 > 79 )
            *(_DWORD *)(v73 + 2176) = v121 - 79;
        }
        break;
      case 4000:
        dbl_C99D0 = *(double *)(v73 + 2160);
        break;
    }
    v79 = *(_DWORD *)(v73 + 2196);
    *(_DWORD *)(v73 + 2192) = v74 + 1;
    HIDWORD(v51) = v79 % 8000;
    if ( v79 % 8000 == *(_DWORD *)(v73 + 2136) )
    {
      v109 = *(double *)(v73 + 2168) * *(double *)(v73 + 2168);
      v110 = *(double *)(v73 + 2160);
      *(_DWORD *)(v73 + 4328) &= 0xFFFFFF9F;
      v111 = sqrt(v109 + v110 * v110);
      *(double *)&dword_C99F0 = v111;
      v112 = dbl_C99E8;
      *(double *)(v73 + 4312) = dbl_C99E8;
      sub_39F88(v111);
      *(double *)(v73 + 4320) = v112;
      if ( v112 >= 1000.0 && v112 >= 10.0 )
      {
        LODWORD(v113) = a1;
        v123 = dbl_C99D8 - dbl_C99D0;
        dbl_C99D0 = dbl_C99D0 - dbl_C99E0;
        dbl_C99D8 = v123;
        sub_3A4B0(v113);
      }
      else
      {
        LODWORD(v113) = a1;
        *(_DWORD *)(v73 + 4328) |= 0x20u;
        sub_3A4B0(v113);
      }
      v115 = *(_DWORD *)(v73 + 4328);
      if ( (v115 & 0x60) != 0 )
        v114 = 4340;
      else
        v115 = 4340;
      if ( (*(_DWORD *)(v73 + 4328) & 0x60) != 0 )
        v116 = *(_DWORD *)(v73 + v114);
      else
        v116 = *(_DWORD *)(v73 + v115);
      if ( (*(_DWORD *)(v73 + 4328) & 0x60) != 0 )
        *(_DWORD *)(v73 + v114) = ++v116;
      if ( v116 > 40 )
        *(_DWORD *)(v73 + 4332) |= 2u;
      sub_39F10(a1);
      v71 = *(_DWORD *)(v2 + 4328);
      HIDWORD(v51) = 0;
      v117 = v73 + 216 * *(_DWORD *)(v73 + 3292) + 2192;
      *(_QWORD *)(v117 + 64) = 0;
      *(_QWORD *)(v117 + 168) = 0;
      *(_DWORD *)(v73 + 2192) = 0;
    }
    else
    {
      v71 = *(_DWORD *)(v2 + 4328);
    }
    goto LABEL_24;
  }
  v86 = *(_DWORD *)(v2 + 3280);
  if ( v86 )
  {
    if ( *(double *)(v86 + 72) >= 50.0 )
    {
      HIDWORD(v51) = *(_DWORD *)(v86 + 32);
      if ( SHIDWORD(v51) % 8000 == v40 )
      {
        LODWORD(v51) = SHIDWORD(v51) / -8000 + 60;
        v87 = (v71 & 2) == 0;
        *(_DWORD *)(v2 + 2192) = 0;
        *(_DWORD *)(v2 + 56) = 0;
        HIDWORD(v51) = (unsigned __int64)(2290649225LL * SLODWORD(v51)) >> 32;
        v71 |= 1u;
        if ( v87 )
          *(_DWORD *)(v2 + 2132) = v40;
        *(_DWORD *)(v2 + 4328) = v71;
        if ( v87 )
          *(_DWORD *)(v2 + 2136) = v40;
        v88 = 15 * (SLODWORD(v51) / 60);
        v89 = SLODWORD(v51) % 60;
        if ( !v87 )
          v88 = *(_DWORD *)(v2 + 2132);
        *(_DWORD *)(v2 + 4304) = v89;
        if ( !v87 )
          *(_DWORD *)(v2 + 2136) = v88;
      }
    }
  }
LABEL_24:
  if ( (v71 & 0x100) != 0 )
  {
    v98 = dbl_C99A0 * dbl_C99A0;
    v99 = dbl_C9990;
  }
  else
  {
    if ( (v71 & 0x200) == 0 )
    {
      v80 = 0.0;
      goto LABEL_27;
    }
    v99 = dbl_C99B8;
    v98 = dbl_C99C8 * dbl_C99C8;
  }
  v80 = sqrt(v98 + v99 * v99) / 5.0;
LABEL_27:
  LODWORD(v51) = *(_DWORD *)(v2 + 2128);
  v81 = &dbl_BA0C0[v40];
  v82 = *(v81 - 42) + (v80 - *(v81 - 42)) / (double)SLODWORD(v51);
  v83 = v82 == dbl_C99F8;
  v84 = v82 < dbl_C99F8;
  *(v81 - 42) = v82;
  if ( !v84 && !v83 )
  {
    v85 = v40 - 48;
    dbl_C99F8 = v82;
    if ( v40 - 48 < 0 )
      v85 = v40 + 7936;
    dword_C9A00 = v40;
    if ( v40 - 48 < 0 )
      v85 += 16;
    dbl_C9A08 = fabs(dbl_BA0C0[v85 - 42]);
  }
  if ( !v40 )
  {
    v90 = dbl_C99F8;
    *(double *)(v2 + 2144) = dbl_C99F8;
    sub_39F88(v51);
    LODWORD(v51) = &unk_CA080;
    v91 = *(_DWORD *)(a1 + 60);
    v92 = dword_C9A00 - 40;
    if ( dword_C9A00 - 40 < 0 )
      v92 = dword_C9A00 + 7960;
    dword_C9A00 = v92;
    v93 = *(_DWORD *)(v91 + 28);
    v94 = *(double *)(v93 + 2144);
    *(double *)(v2 + 2152) = v90;
    if ( !dword_C9A10 )
    {
      dword_C9A14 = 0;
      dword_C9A18 = 0;
      LODWORD(v51) = 1;
      dword_C9A1C = 0;
      dword_C9A10 = 1;
    }
    v95 = ++dword_C9A20;
    if ( v94 < 2500.0 || (v100 = *(double *)(v93 + 2152), v100 < 15.0) )
    {
      v96 = *(_DWORD *)(v93 + 4328);
      dword_C9A24 = 0;
      dword_C9A28 = 0;
      *(_DWORD *)(v93 + 4328) = v96 & 0xFFFFFFED;
      dword_C9A2C = 0;
    }
    else
    {
      LODWORD(v51) = *(_DWORD *)(v93 + 4328);
      v128 = LODWORD(v51);
      if ( (LOWORD(v51) & 0x300) != 0 )
      {
        v101 = dword_C9A14;
        v102 = dword_C9A18;
        dword_C9A14 = v92;
        dword_C9A18 = v101;
        dword_C9A1C = v102;
        if ( v101 >= v92 )
        {
          if ( v102 <= v101 )
          {
            if ( v102 >= v92 )
            {
              dword_C9A30 = v102;
              v101 = v102;
              goto LABEL_72;
            }
            goto LABEL_71;
          }
        }
        else if ( v102 >= v101 )
        {
          if ( v102 <= v92 )
          {
            dword_C9A30 = v102;
            v101 = v102;
LABEL_72:
            v103 = (v101 - dword_C9A34) % 8000;
            if ( v103 )
            {
              if ( dword_C9A28 >= dword_C9A24 )
              {
                dword_C9A3C = v95;
                dword_C9A24 = dword_C9A28;
                dword_C9A28 = 0;
                dword_C9A40 = dword_C9A34;
              }
            }
            else if ( ++dword_C9A28 > 10
                   && (v128 & 1) != 0
                   && ((v128 & 0x10) != 0 || v95 - dword_C9A38 <= *(_DWORD *)(v93 + 2128)) )
            {
              *(_DWORD *)(v93 + 2132) = v101;
              *(_DWORD *)(v93 + 4328) = v128 | 2;
            }
            if ( (*(_BYTE *)(v91 + 752) & 8) != 0 )
            {
              v104 = *(_DWORD *)(v93 + 4328);
              if ( (v104 & 1) == 0 )
              {
                sprintf(
                  s,
                  "wwv1 %04x %3d %4d %5.0f %5.1f %5d %4d %4d %4d",
                  v104,
                  *(_DWORD *)(v93 + 2116),
                  v101,
                  v94,
                  v100,
                  v103,
                  dword_C9A2C,
                  dword_C9A28,
                  dword_C9A24);
                sub_2DDBC(a1 + 12, s);
                if ( dword_7CF4C )
                  puts(s);
                v101 = dword_C9A30;
              }
            }
            LODWORD(v51) = *(_DWORD *)(v93 + 2128);
            if ( ++dword_C9A2C >= SLODWORD(v51) )
            {
              v105 = dword_C9A28;
              v125 = dword_C9A24;
              if ( dword_C9A28 >= dword_C9A24 )
              {
                v125 = dword_C9A28;
                dword_C9A24 = dword_C9A28;
                v105 = dword_C9A34;
                dword_C9A3C = dword_C9A20;
                dword_C9A40 = dword_C9A34;
              }
              dword_C9A34 = v101;
              if ( v125 )
                v101 = dword_C9A40;
              else
                v105 = dword_C9A20;
              if ( !v125 )
              {
                dword_C9A40 = v101;
                dword_C9A3C = v105;
              }
              v129 = *(_DWORD *)(v93 + 4328);
              v106 = (double)((v101 - dword_C9A44) % 8000);
              if ( (v129 & 0x10) != 0 )
              {
                v107 = (int)v106;
                if ( (int)v106 < 0 )
                  v107 = -v107;
                if ( (double)v107 >= 12.0 )
                {
                  if ( dword_C9A48 < -2 )
                  {
                    if ( SLODWORD(v51) > 8 )
                    {
                      *(_DWORD *)(v93 + 2128) = SLODWORD(v51) >> 1;
                      dword_C9A48 = 0;
                    }
                  }
                  else
                  {
                    --dword_C9A48;
                  }
                }
                else
                {
                  v108 = v106 * 0.5 / (double)(3 * (dword_C9A3C - dword_C9A38)) + *(double *)(v93 + 24);
                  if ( v108 <= 1.5 )
                  {
                    if ( v108 < -1.5 )
                      v108 = -1.5;
                    *(double *)(v93 + 24) = v108;
                  }
                  else
                  {
                    *(double *)(v93 + 24) = 1.5;
                  }
                  if ( (double)v107 < 6.0 )
                  {
                    if ( dword_C9A48 > 2 )
                    {
                      if ( SLODWORD(v51) < 1024 )
                      {
                        *(_DWORD *)(v93 + 2128) = 2 * LODWORD(v51);
                        dword_C9A48 = 0;
                      }
                    }
                    else
                    {
                      ++dword_C9A48;
                    }
                  }
                }
              }
              if ( (*(_BYTE *)(v91 + 752) & 8) != 0 )
              {
                sprintf(
                  s,
                  "wwv2 %04x %5.0f %5.1f %5d %4d %4d %4d %4.0f %7.2f",
                  v129,
                  *(double *)(v93 + 2144),
                  *(double *)(v93 + 2152),
                  v101,
                  *(_DWORD *)(v93 + 2128),
                  v125,
                  dword_C9A3C - dword_C9A38,
                  v106,
                  *(double *)(v93 + 24) * 1000000.0 / 8000.0);
                LODWORD(v51) = sub_2DDBC(a1 + 12, s);
                if ( dword_7CF4C )
                  LODWORD(v51) = puts(s);
                v101 = dword_C9A40;
                v129 = *(_DWORD *)(v93 + 4328);
              }
              dword_C9A44 = v101;
              dword_C9A38 = dword_C9A3C;
              *(_DWORD *)(v93 + 4328) = v129 | 0x10;
              dword_C9A24 = 0;
              dword_C9A28 = 0;
              dword_C9A2C = 0;
            }
            else
            {
              dword_C9A34 = v101;
            }
            goto LABEL_57;
          }
LABEL_71:
          v101 = v92;
          dword_C9A30 = v92;
          goto LABEL_72;
        }
        dword_C9A30 = v101;
        goto LABEL_72;
      }
    }
LABEL_57:
    v97 = *(_DWORD *)(v2 + 4328);
    if ( (v97 & 2) == 0 )
      *(_DWORD *)(v2 + 4332) |= 8u;
    dbl_C99F8 = 0.0;
    if ( (v97 & 1) == 0 )
      LODWORD(v51) = sub_39F10(a1);
  }
  return LODWORD(v51);
}
