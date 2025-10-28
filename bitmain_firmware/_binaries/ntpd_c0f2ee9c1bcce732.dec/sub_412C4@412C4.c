int __fastcall sub_412C4(int a1)
{
  int v1; // r8
  _DWORD *v3; // r5
  int v4; // r3
  double v5; // d16
  int v6; // s13
  int v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int result; // r0
  int v15; // r1
  int v16; // r6
  double v17; // d18
  int v18; // r9
  double v19; // d19
  double v20; // d20
  double v21; // d21
  double v22; // d22
  double v23; // d23
  double v24; // d24
  double v25; // d25
  double v26; // d16
  double v27; // d30
  double v28; // d18
  double v29; // d16
  int v30; // r3
  double *v31; // r1
  double v32; // d0
  double v33; // d12
  double v34; // d12
  double v35; // d5
  double v36; // d4
  double v37; // d7
  double v38; // d31
  double v39; // d30
  double v40; // d29
  double v41; // d28
  double v42; // d27
  double v43; // d26
  double v44; // d25
  double v45; // d24
  double v46; // d23
  double v47; // d22
  double v48; // d21
  double v49; // d20
  double v50; // d19
  double v51; // d2
  double v52; // d16
  double v53; // d1
  double v54; // d0
  double v55; // d8
  double v56; // d9
  double v57; // d10
  double v58; // d11
  double v59; // d3
  double v60; // d18
  double v61; // d17
  unsigned int v62; // r3
  unsigned int v63; // r1
  int v64; // r2
  int v65; // r3
  bool v66; // zf
  int v67; // r1
  int v68; // r3
  int v69; // r2
  int v70; // r2
  int v71; // r3
  int v72; // r0
  int v73; // r1
  int v74; // r4
  int v75; // r12
  int v76; // r2
  double v77; // d4
  double v78; // d7
  double v79; // d4
  double v80; // d22
  double v81; // d16
  double *v82; // r1
  int v83; // r2
  int v84; // r3
  double v85; // d17
  double v86; // d18
  double v87; // d16
  int v88; // r2
  int v89; // r2
  int v90; // r12
  double *v91; // r2
  int v92; // r1
  double v93; // d18
  double v94; // d17
  int v95; // r12
  int v96; // r2
  int v97; // r3
  unsigned __int8 v98; // r1
  int v99; // r4
  int v100; // r2
  int v101; // r0
  int v102; // r0
  int v103; // r3
  double v104; // d16
  int v105; // s13
  unsigned int v106; // r2
  int v107; // [sp+4h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD **)(*(_DWORD *)(v1 + 60) + 28);
  v107 = *(_DWORD *)(v1 + 60);
  if ( (int)v3[291] <= 0 )
    return sub_40818(v1, *(_BYTE *)(a1 + 92), *(_DWORD *)(a1 + 76), *(_DWORD *)(a1 + 80));
  v4 = *(_DWORD *)(a1 + 88);
  v5 = (double)v4 / 8000.0;
  if ( v5 < 0.0 )
  {
    v104 = -v5;
    v105 = (int)v104;
    v106 = (unsigned int)((v104 - (double)(unsigned int)(int)v104) * 4294967300.0);
    if ( !v106 )
    {
      v6 = -v105;
      goto LABEL_83;
    }
    v7 = -v106;
    v6 = ~v105;
  }
  else
  {
    v6 = (int)v5;
    v7 = (unsigned int)((v5 - (double)(unsigned int)(int)v5) * 4294967300.0);
  }
  if ( v7 )
  {
    v8 = -v7;
    v9 = *(_DWORD *)(a1 + 80);
    v10 = (unsigned __int16)v9 + (unsigned __int16)v8;
    v11 = HIWORD(v9) + HIWORD(v8);
    v12 = *(_DWORD *)(a1 + 76);
    if ( (v10 & 0x10000) != 0 )
      ++v11;
    *(_DWORD *)(a1 + 80) = (unsigned __int16)v10 | (v11 << 16);
    v13 = ~v6 + v12;
    if ( (v11 & 0x10000) != 0 )
      ++v13;
    *(_DWORD *)(a1 + 76) = v13;
    goto LABEL_10;
  }
LABEL_83:
  *(_DWORD *)(a1 + 76) -= v6;
LABEL_10:
  result = *(_DWORD *)(a1 + 76);
  v15 = *(_DWORD *)(a1 + 80);
  v3[222] = result;
  v3[223] = v15;
  if ( v4 <= 0 )
    goto LABEL_68;
  v16 = 0;
  do
  {
LABEL_26:
    v17 = *(double *)&v3[2 * (unsigned __int8)~*(_BYTE *)(a1 + 92 + v16) + 292];
    if ( v17 > 6000.0 )
    {
      v17 = 6000.0;
      ++v3[806];
    }
    else if ( v17 < -6000.0 )
    {
      v17 = -6000.0;
      ++v3[806];
    }
    v18 = *(_DWORD *)(*(_DWORD *)(v1 + 60) + 28);
    v19 = *(double *)(v18 + 3296);
    *(double *)(v18 + 3304) = v19;
    v20 = *(double *)(v18 + 3288);
    *(double *)(v18 + 3296) = v20;
    v21 = *(double *)(v18 + 3280);
    *(double *)(v18 + 3288) = v21;
    v22 = *(double *)(v18 + 3272);
    *(double *)(v18 + 3280) = v22;
    v23 = *(double *)(v18 + 3264);
    *(double *)(v18 + 3272) = v23;
    v24 = *(double *)(v18 + 3256);
    *(double *)(v18 + 3264) = v24;
    v25 = *(double *)(v18 + 3248);
    *(double *)(v18 + 3256) = v25;
    v26 = *(double *)(v18 + 3240);
    *(double *)(v18 + 3248) = v26;
    v27 = 1000.0;
    v28 = v17
        - (v20 * 0.488486
         + v19 * 0.5844676
         + v21 * 2.704384
         + v22 * 1.645032
         + v23 * 4.644557
         + v24 * 1.879165
         + v25 * 3.522634
         + v26 * 0.7315738);
    *(double *)(v18 + 3240) = v28;
    v29 = v26 * 0.003156599
        + v28 * 0.006176213
        + v25 * 0.007567487
        + v24 * 0.00434458
        + v23 * 0.01190128
        + v22 * 0.00434458
        + v21 * 0.007567487
        + v20 * 0.003156599
        + v19 * 0.006176213;
    *(double *)(v18 + 3608) = v29 * 0.25;
    if ( v29 > 1000.0 )
    {
      v29 = 1000.0;
      v27 = -1000.0;
    }
    else if ( v29 < -1000.0 )
    {
      v29 = -1000.0;
    }
    else
    {
      v27 = -v29;
    }
    v30 = *(_DWORD *)(v18 + 3616);
    v31 = (double *)(v18 + 8 * (v30 + 414));
    v32 = v27 * *v31;
    *v31 = v29;
    *(_DWORD *)(v18 + 3616) = (v30 + 1) % 10;
    if ( v32 < 0.0 )
      v33 = -sqrt(-v32);
    else
      v33 = sqrt(v32);
    v34 = v33 * 0.02538771;
    v35 = *(double *)(v18 + 3592);
    *(double *)(v18 + 3600) = v35;
    v36 = *(double *)(v18 + 3584);
    *(double *)(v18 + 3592) = v36;
    v37 = *(double *)(v18 + 3576);
    *(double *)(v18 + 3584) = v37;
    v38 = *(double *)(v18 + 3568);
    *(double *)(v18 + 3576) = v38;
    v39 = *(double *)(v18 + 3560);
    *(double *)(v18 + 3568) = v39;
    v40 = *(double *)(v18 + 3552);
    *(double *)(v18 + 3560) = v40;
    v41 = *(double *)(v18 + 3544);
    *(double *)(v18 + 3552) = v41;
    v42 = *(double *)(v18 + 3536);
    *(double *)(v18 + 3544) = v42;
    v43 = *(double *)(v18 + 3528);
    *(double *)(v18 + 3536) = v43;
    v44 = *(double *)(v18 + 3520);
    *(double *)(v18 + 3528) = v44;
    v45 = *(double *)(v18 + 3512);
    *(double *)(v18 + 3520) = v45;
    v46 = *(double *)(v18 + 3504);
    *(double *)(v18 + 3512) = v46;
    v47 = *(double *)(v18 + 3496);
    *(double *)(v18 + 3504) = v47;
    v48 = *(double *)(v18 + 3488);
    *(double *)(v18 + 3496) = v48;
    v49 = *(double *)(v18 + 3480);
    *(double *)(v18 + 3488) = v49;
    v50 = *(double *)(v18 + 3472);
    *(double *)(v18 + 3480) = v50;
    v51 = *(double *)(v18 + 3464);
    *(double *)(v18 + 3472) = v51;
    v52 = *(double *)(v18 + 3624) + 0.000125;
    v53 = *(double *)(v18 + 3456);
    *(double *)(v18 + 3464) = v53;
    v54 = *(double *)(v18 + 3448);
    *(double *)(v18 + 3456) = v54;
    v55 = *(double *)(v18 + 3440);
    *(double *)(v18 + 3448) = v55;
    v56 = *(double *)(v18 + 3432);
    *(double *)(v18 + 3440) = v56;
    v57 = *(double *)(v18 + 3424);
    *(double *)(v18 + 3432) = v57;
    v58 = *(double *)(v18 + 3416);
    *(double *)(v18 + 3424) = v58;
    v59 = *(double *)(v18 + 3408);
    *(double *)(v18 + 3416) = v59;
    *(double *)(v18 + 3624) = v52;
    v60 = *(double *)(v18 + 3400);
    *(double *)(v18 + 3408) = v60;
    v61 = *(double *)(v18 + 3392);
    *(double *)(v18 + 3392) = v34;
    *(double *)(v18 + 3400) = v61;
    if ( v52 <= 0.000416666667 )
      goto LABEL_20;
    v71 = 11;
    v72 = *(_DWORD *)(v18 + 888);
    v73 = *(_DWORD *)(v18 + 892);
    v74 = (*(_DWORD *)(v18 + 4656) + 1) % 8;
    *(_DWORD *)(v18 + 4656) = v74;
    v75 = v18 + (v74 << 7) + 3632;
    v76 = v18 + (v74 << 7) + 3736;
    v77 = v36 * 0.1084671 + v35 * 0.02538771 + v37 * 0.2003159;
    v78 = -1000000.0;
    v79 = v77
        + v38 * 0.2985303
        + v39 * 0.4003697
        + v40 * 0.5028552
        + v41 * 0.6028795
        + v42 * 0.6973249
        + v43 * 0.7831828
        + v44 * 0.8576717
        + v45 * 0.9183463
        + v46 * 0.9631951
        + v47 * 0.9907208;
    v80 = 1000000.0;
    *(double *)(v18 + 3624) = v52 - 0.000416666667;
    *(double *)(v75 + 8) = -((v79
                            + v48
                            + v49 * 0.9907208
                            + v50 * 0.9631951
                            + v51 * 0.9183463
                            + v53 * 0.8576717
                            + v54 * 0.7831828
                            + v55 * 0.6973249
                            + v56 * 0.6028795
                            + v57 * 0.5028552
                            + v58 * 0.4003697
                            + v59 * 0.2985303
                            + v60 * 0.2003159
                            + v61 * 0.1084671
                            + v34)
                           * 6.0);
    *(_DWORD *)v75 = v72;
    *(_DWORD *)(v75 + 4) = v73;
    do
    {
      v81 = *(double *)(v76 - 16);
      *(double *)(v76 - 8) = v81;
      v76 -= 8;
      if ( v81 > v78 )
        v78 = v81;
      if ( v81 < v80 )
        v80 = v81;
      --v71;
    }
    while ( v71 );
    v82 = (double *)(v18 + (v74 << 7) + 3648);
    v83 = 0;
    *(_DWORD *)(v18 + (v74 << 7) + 3752) = 0;
    v84 = 1;
    v85 = 0.0;
    *(double *)(v18 + (v74 << 7) + 3736) = v78 - v80;
    v86 = v80 + (v78 - v80) * 0.45;
    while ( 1 )
    {
      v87 = *v82++;
      v83 *= 2;
      if ( v86 < v87 )
        v83 |= 1u;
      if ( (unsigned int)(v84 - 1) <= 1 )
      {
LABEL_44:
        v85 = v85 + v87 - v80;
        goto LABEL_45;
      }
      if ( v84 == 11 )
        break;
      if ( v86 < v87 )
        goto LABEL_44;
      v85 = v85 + v78 - v87;
LABEL_45:
      if ( ++v84 == 12 )
      {
        *(_DWORD *)(v18 + (v74 << 7) + 3752) = v83;
        goto LABEL_48;
      }
    }
    *(_DWORD *)(v18 + (v74 << 7) + 3752) = v83;
    v85 = v85 + v78 - v87;
LABEL_48:
    v88 = *(_DWORD *)(v18 + 4664);
    *(double *)(v18 + (v74 << 7) + 3744) = v85 / ((v78 - v80) * 11.0);
    if ( v88 <= 0 )
    {
      if ( v74 == *(_DWORD *)(v18 + 4660) )
        goto LABEL_52;
    }
    else
    {
      v89 = v88 - 1;
      *(_DWORD *)(v18 + 4664) = v89;
      if ( !v89 )
      {
        *(_DWORD *)(v18 + 4660) = v74;
LABEL_52:
        v90 = -1;
        v91 = (double *)(v18 + 3752);
        v92 = 0;
        v93 = 0.0;
        do
        {
          while ( (*(_DWORD *)v91 & 0x601) != 0x600 || *(v91 - 2) < 800.0 )
          {
            ++v92;
            v91 += 16;
            if ( v92 == 8 )
              goto LABEL_61;
          }
          v94 = *(v91 - 1);
          v91 += 16;
          if ( v94 > v93 )
            v90 = v92;
          ++v92;
          if ( v94 > v93 )
            v93 = v94;
        }
        while ( v92 != 8 );
LABEL_61:
        if ( v90 != -1 )
        {
          v95 = v18 + (v90 << 7);
          v96 = *(_DWORD *)(v95 + 3632);
          v97 = *(_DWORD *)(v95 + 3636);
          v98 = *(_DWORD *)(v95 + 3752) >> 1;
          *(_QWORD *)(v18 + 1136) = *(_QWORD *)(v95 + 3736);
          sub_40818(v1, v98, v96, v97);
          *(_DWORD *)(v18 + 4664) = 88;
        }
      }
    }
LABEL_20:
    v62 = v3[223];
    v63 = v3[809];
    v64 = (unsigned __int16)v62 + (unsigned __int16)v63;
    v65 = HIWORD(v62) + HIWORD(v63);
    if ( (v64 & 0x10000) != 0 )
      ++v65;
    v66 = (v65 & 0x10000) == 0;
    v67 = v3[808] + v3[222];
    v68 = (unsigned __int16)v64 | (v65 << 16);
    v69 = v3[807];
    v3[223] = v68;
    v70 = v69 + 1;
    if ( !v66 )
      ++v67;
    v3[222] = v67;
    result = v70 >> 31;
    v3[807] = v70 % 8000;
    if ( v70 % 8000 )
    {
      if ( ++v16 >= *(_DWORD *)(a1 + 88) )
        break;
      goto LABEL_26;
    }
    v99 = *(_DWORD *)(*(_DWORD *)(v1 + 60) + 28);
    v100 = *(_DWORD *)(v99 + 3224);
    v101 = *(_DWORD *)(v99 + 1144);
    if ( v100 )
    {
      if ( v100 > 100 )
      {
        v102 = v101 - 4;
        if ( v102 >= 0 )
          goto LABEL_66;
        *(_DWORD *)(v99 + 1144) = 0;
      }
    }
    else
    {
      v102 = v101 + 4;
      if ( v102 > 255 )
        v102 = 255;
LABEL_66:
      *(_DWORD *)(v99 + 1144) = v102;
    }
    ++v16;
    result = sub_4D950();
    *(_DWORD *)(v99 + 3224) = 0;
  }
  while ( v16 < *(_DWORD *)(a1 + 88) );
LABEL_68:
  if ( (*(_BYTE *)(v107 + 752) & 2) != 0 )
    v3[804] = 2;
  else
    v3[804] = 1;
  v103 = *(_BYTE *)(v107 + 752) & 4;
  if ( (*(_BYTE *)(v107 + 752) & 4) != 0 )
    v103 = 127;
  v3[805] = v103;
  return result;
}
