int __fastcall sub_352A0(_DWORD *a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r8
  int result; // r0
  int v5; // r7
  unsigned int v6; // r2
  int v7; // r11
  int v8; // r3
  int v9; // r3
  bool v10; // zf
  int v11; // r10
  unsigned __int8 *v12; // r0
  int v13; // t1
  bool v14; // zf
  unsigned __int8 *v15; // r3
  int v16; // r1
  int v17; // r2
  unsigned __int8 *v18; // r0
  char *v19; // r2
  char *v20; // r10
  int v21; // r1
  const unsigned __int16 **v22; // r0
  const unsigned __int16 *v23; // r3
  int v24; // r0
  unsigned __int8 v25; // r0
  char v26; // r1
  unsigned int v27; // r1
  unsigned __int8 *v28; // r10
  int v29; // r0
  int v30; // r1
  bool v31; // cc
  unsigned __int8 *v32; // r2
  int v33; // r1
  int v34; // r6
  int v35; // r1
  int v36; // r1
  int v37; // r0
  int v38; // r1
  int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // r3
  unsigned __int8 *v43; // r3
  int v44; // r1
  int v45; // r2
  unsigned __int8 *v46; // r0
  char *p_src; // r3
  int v48; // r2
  unsigned __int8 *v49; // r3
  int v50; // r1
  int v51; // r2
  unsigned __int8 *v52; // r0
  unsigned __int8 *v53; // r3
  int v54; // r1
  int v55; // r2
  unsigned __int8 *v56; // r0
  int v57; // r0
  unsigned __int8 *v58; // r3
  unsigned __int8 *v59; // r12
  int v60; // r2
  int v61; // r2
  int v62; // r0
  int v63; // r2
  int v64; // r0
  unsigned __int8 *v65; // r3
  int v66; // r0
  unsigned __int8 *v67; // r2
  int v68; // r12
  unsigned __int8 *v69; // r1
  unsigned __int8 *v70; // lr
  unsigned __int8 *v71; // r2
  int v72; // r0
  int v73; // r12
  char *v74; // r1
  char *v75; // lr
  char v76; // r0
  char v77; // r2
  int v78; // r1
  int v79; // r0
  unsigned __int8 *v80; // r2
  unsigned __int8 *v81; // r12
  int v82; // r1
  char v83; // r2
  unsigned __int8 *v84; // r2
  unsigned __int8 *v85; // r3
  unsigned __int8 *v86; // r12
  int v87; // t1
  __int16 v88; // r1
  struct tm *v89; // r0
  int v90; // r6
  int v91; // r1
  int v92; // r1
  int v93; // r3
  int v94; // r2
  int v95; // r3
  int v96; // r2
  double v97; // d17
  double v98; // d16
  unsigned int v99; // r6
  int v100; // r7
  const char *v101; // r0
  double v102; // d16
  bool v103; // zf
  int v104; // r2
  int v105; // t1
  int v106; // r0
  int v107; // r12
  int v108; // t1
  int v109; // r2
  int v110; // r1
  int v111; // t1
  int v112; // r0
  int v113; // r12
  int v114; // t1
  int v115; // r2
  int v116; // r1
  int v117; // t1
  int v118; // r0
  int v119; // r12
  int v120; // t1
  int v121; // [sp+20h] [bp-B4h]
  unsigned int v122; // [sp+24h] [bp-B0h]
  unsigned int v123; // [sp+28h] [bp-ACh]
  time_t v124; // [sp+30h] [bp-A4h] BYREF
  int v125; // [sp+34h] [bp-A0h] BYREF
  int v126; // [sp+38h] [bp-9Ch]
  int v127; // [sp+3Ch] [bp-98h]
  unsigned int v128; // [sp+40h] [bp-94h]
  int v129; // [sp+44h] [bp-90h] BYREF
  int v130; // [sp+48h] [bp-8Ch]
  __int16 v131; // [sp+4Ch] [bp-88h]
  char src; // [sp+50h] [bp-84h] BYREF
  unsigned __int8 v133; // [sp+51h] [bp-83h] BYREF
  char v134; // [sp+52h] [bp-82h] BYREF
  char s1[125]; // [sp+53h] [bp-81h] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = (int)sub_27AAC(a1, &src, 128, &v125);
  LOWORD(v5) = result;
  if ( !result )
    return result;
  if ( result <= 7 )
    return sub_27040(v1, 2);
  if ( dword_7CF4C > 0 )
    result = printf("nmea: gpsread %d %s\n", result, &src);
  if ( src == 36 )
  {
    result = strncmp(s1, "RMC", 3u);
    if ( result )
    {
      result = strncmp(s1, "GGA", 3u);
      if ( result )
      {
        result = strncmp(s1, "GLL", 3u);
        if ( result )
        {
          result = strncmp(s1, "ZDG", 3u);
          if ( result )
          {
            result = strncmp(s1, "ZDA", 3u);
            if ( result )
              return result;
            v7 = 3;
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 2;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    else
    {
      v7 = 0;
    }
    v8 = *(unsigned __int8 *)(v1 + 59);
    if ( (v8 & 0xF) == 0 || (v6 = byte_7A78C[v7], (v8 & v6) != 0) )
    {
      if ( !*(_DWORD *)(v3 + 8) || v7 == 4 )
      {
        v9 = v133;
        v10 = v133 == 0;
        if ( v133 )
          v10 = v133 == 42;
        v11 = !v10;
        if ( v10 )
        {
          v12 = &v133;
        }
        else
        {
          v6 = (unsigned int)&v134;
          v11 = 0;
          do
          {
            v11 ^= v9;
            v12 = (unsigned __int8 *)v6;
            v13 = *(unsigned __int8 *)v6++;
            v9 = v13;
            v14 = v13 == 42;
            if ( v13 != 42 )
              v14 = v9 == 0;
          }
          while ( !v14 );
        }
        if ( v9 == 42 && v12[1] && v12[2] && !v12[3] && sub_4F53C(v12 + 1, &v124, v6) && v11 == v124 )
        {
          *(_BYTE *)(v3 + v7 + 22) = 1;
          goto LABEL_33;
        }
        if ( v7 && !*(_BYTE *)(v3 + v7 + 22) )
        {
LABEL_33:
          v129 = 0;
          v130 = 0;
          v131 = 0;
          switch ( v7 )
          {
            case 1:
              v49 = &v133;
              v50 = 6;
              while ( 1 )
              {
                v51 = *(v49 - 1);
                v52 = v49++;
                if ( !v51 )
                  break;
                if ( v51 == 44 )
                  --v50;
                if ( !v50 )
                {
                  if ( *v52 == 48 )
                  {
                    *(_BYTE *)(v2 + 32) = 3;
                    goto LABEL_93;
                  }
                  break;
                }
              }
              *(_BYTE *)(v2 + 32) = 0;
LABEL_93:
              p_src = &src;
              while ( 1 )
              {
                v20 = p_src++;
                v21 = (unsigned __int8)*v20;
                if ( !*v20 )
                  goto LABEL_47;
                if ( v21 == 44 )
                  goto LABEL_84;
              }
            case 2:
              v43 = &v133;
              v44 = 6;
              while ( 1 )
              {
                v45 = *(v43 - 1);
                v46 = v43++;
                if ( !v45 )
                  break;
                if ( v45 == 44 )
                  --v44;
                if ( !v44 )
                {
                  if ( *v46 == 65 )
                  {
                    *(_BYTE *)(v2 + 32) = 0;
                    goto LABEL_79;
                  }
                  break;
                }
              }
              *(_BYTE *)(v2 + 32) = 3;
LABEL_79:
              p_src = &src;
              v48 = 5;
              while ( 1 )
              {
                v20 = p_src++;
                v21 = (unsigned __int8)*v20;
                if ( !*v20 )
                  goto LABEL_47;
                if ( v21 == 44 )
                  --v48;
                if ( !v48 )
                  goto LABEL_84;
              }
            case 3:
              goto LABEL_42;
            case 4:
              v15 = &v133;
              v16 = 6;
              while ( 1 )
              {
                v17 = *(v15 - 1);
                v18 = v15++;
                if ( !v17 )
                  break;
                if ( v17 == 44 )
                  --v16;
                if ( !v16 )
                {
                  if ( *v18 == 48 )
                  {
                    *(_BYTE *)(v2 + 32) = 3;
                    goto LABEL_43;
                  }
                  break;
                }
              }
LABEL_42:
              *(_BYTE *)(v2 + 32) = 0;
LABEL_43:
              v19 = &src;
              while ( 1 )
              {
                v20 = v19++;
                if ( !*v20 )
                  break;
                if ( *v20 == 44 )
                {
                  v21 = (unsigned __int8)v20[1];
                  v20 = v19;
                  goto LABEL_47;
                }
              }
              v21 = (unsigned __int8)*v20;
              goto LABEL_47;
            default:
              v53 = &v133;
              v54 = 2;
              break;
          }
          while ( 1 )
          {
            v55 = *(v53 - 1);
            v56 = v53++;
            if ( !v55 )
              break;
            if ( v55 == 44 )
              --v54;
            if ( !v54 )
            {
              if ( *v56 == 65 )
              {
                *(_BYTE *)(v2 + 32) = 0;
                goto LABEL_105;
              }
              break;
            }
          }
          *(_BYTE *)(v2 + 32) = 3;
LABEL_105:
          p_src = &src;
          while ( 1 )
          {
            v20 = p_src++;
            v21 = (unsigned __int8)*v20;
            if ( !*v20 )
              break;
            if ( v21 == 44 )
            {
LABEL_84:
              v21 = (unsigned __int8)v20[1];
              v20 = p_src;
              break;
            }
          }
LABEL_47:
          v121 = v21;
          v22 = _ctype_b_loc();
          v23 = *v22;
          if ( ((*v22)[v121] & 0x800) != 0
            && (v24 = (unsigned __int8)v20[1], (v23[v24] & 0x800) != 0)
            && (v23[(unsigned __int8)v20[2]] & 0x800) != 0
            && (v23[(unsigned __int8)v20[3]] & 0x800) != 0
            && (v23[(unsigned __int8)v20[4]] & 0x800) != 0
            && (v23[(unsigned __int8)v20[5]] & 0x800) != 0 )
          {
            BYTE2(v130) = v24 + 10 * v121 - 16;
            v122 = BYTE2(v130);
            HIBYTE(v130) = v20[3] - 16 + 10 * v20[2];
            v123 = HIBYTE(v130);
            v25 = v20[4];
            v26 = v20[5] - 16;
            *(_DWORD *)(v2 + 192) = 0;
            v27 = (unsigned __int8)(v26 + 10 * v25);
            LOBYTE(v131) = v27;
            if ( v20[6] == 46 )
            {
              v60 = (unsigned __int8)v20[7];
              if ( (v23[v60] & 0x800) != 0 )
              {
                v61 = 100000000 * (v60 - 48);
                *(_DWORD *)(v2 + 192) = v61;
                v62 = (unsigned __int8)v20[8];
                if ( (v23[v62] & 0x800) != 0 )
                {
                  v63 = v61 + 10000000 * v62 - 480000000;
                  *(_DWORD *)(v2 + 192) = v63;
                  v64 = (unsigned __int8)v20[9];
                  if ( (v23[v64] & 0x800) != 0 )
                    *(_DWORD *)(v2 + 192) = v63 + 1000000 * v64 - 48000000;
                }
              }
            }
            result = v122;
            if ( v122 <= 0x17 && v123 <= 0x3B && v27 <= 0x3B && *(int *)(v2 + 192) <= 1000000000 )
            {
              if ( HIWORD(v130) != *(unsigned __int16 *)(v3 + 18) || *(unsigned __int8 *)(v3 + 20) != v27 )
              {
                v28 = (unsigned __int8 *)(v2 + 40);
                v5 = (unsigned __int16)v5;
                *(_DWORD *)(v2 + 168) = (unsigned __int16)v5;
                memcpy((void *)(v2 + 40), &src, (unsigned __int16)v5 + 1);
                v29 = v125;
                v30 = v126;
                v31 = dword_7CF4C <= 0;
                *(_DWORD *)v3 = v125;
                *(_DWORD *)(v3 + 4) = v30;
                *(_DWORD *)(v2 + 216) = v29;
                *(_DWORD *)(v2 + 220) = v30;
                if ( !v31 )
                  printf("nmea: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
                if ( v7 )
                {
                  if ( (unsigned __int8)(v7 - 3) <= 1u )
                  {
                    v65 = &v133;
                    v66 = 2;
                    v67 = &v133;
                    while ( 1 )
                    {
                      v68 = *(v67 - 1);
                      v69 = v67 - 1;
                      v70 = v67++;
                      if ( !v68 )
                        break;
                      if ( v68 == 44 )
                        --v66;
                      if ( !v66 )
                      {
                        v69 = v70;
                        break;
                      }
                    }
                    v71 = &v133;
                    v72 = 3;
                    BYTE1(v130) = v69[1] - 16 + 10 * *v69;
                    while ( 1 )
                    {
                      v73 = *(v71 - 1);
                      v74 = (char *)(v71 - 1);
                      v75 = (char *)v71++;
                      if ( !v73 )
                        break;
                      if ( v73 == 44 )
                        --v72;
                      if ( !v72 )
                      {
                        v74 = v75;
                        break;
                      }
                    }
                    v76 = v74[1];
                    v77 = *v74;
                    v78 = 4;
                    LOBYTE(v130) = v76 - 16 + 10 * v77;
                    while ( 1 )
                    {
                      v79 = *(v65 - 1);
                      v80 = v65 - 1;
                      v81 = v65++;
                      if ( !v79 )
                        break;
                      if ( v79 == 44 )
                        --v78;
                      if ( !v78 )
                      {
                        v80 = v81;
                        break;
                      }
                    }
                    v5 = 1000;
                    v37 = v80[3] + 12208 + 1000 * *v80;
                    LOWORD(v129) = v37 + 100 * v80[1] + 10 * v80[2];
                  }
                  else
                  {
                    v124 = (unsigned __int8)v131 + 60 * (60 * BYTE2(v130) + HIBYTE(v130));
                    v34 = time(0) - 43200;
                    sub_5AA04(v34, 86400);
                    sub_5AA04(v124 - v35, 86400);
                    v124 = v34 + v36 + (v36 < 0 ? 0x15180 : 0);
                    v37 = (int)gmtime(&v124);
                    if ( v37 )
                    {
                      v38 = *(_DWORD *)(v37 + 12);
                      v39 = *(_DWORD *)(v37 + 16);
                      BYTE2(v130) = *(_DWORD *)(v37 + 8);
                      BYTE1(v130) = v38;
                      LOBYTE(v130) = v39 + 1;
                      v40 = *(_DWORD *)(v37 + 20);
                      v41 = *(_DWORD *)(v37 + 28);
                      HIBYTE(v130) = *(_DWORD *)(v37 + 4);
                      v42 = *(_DWORD *)v37;
                      LOWORD(v129) = v40 + 1900;
                      HIWORD(v129) = v41 + 1;
                      LOBYTE(v131) = v42;
                    }
                    else
                    {
                      v129 = 0;
                      LOWORD(v130) = 0;
                    }
                  }
                }
                else
                {
                  v32 = &v133;
                  v33 = 9;
                  while ( 1 )
                  {
                    v57 = *(v32 - 1);
                    v58 = v32 - 1;
                    v59 = v32++;
                    if ( !v57 )
                      break;
                    if ( v57 == 44 )
                      --v33;
                    if ( !v33 )
                    {
                      v58 = v59;
                      break;
                    }
                  }
                  BYTE1(v130) = v58[1] - 16 + 10 * *v58;
                  v88 = v58[5] - 528;
                  LOBYTE(v130) = v58[3] - 16 + 10 * v58[2];
                  LOWORD(v129) = v88 + 10 * v58[4];
                  v124 = time(0);
                  v89 = gmtime(&v124);
                  v5 = (unsigned __int16)v129;
                  v90 = v89->tm_year + 1880;
                  sub_5AA04(v90, 100);
                  v37 = sub_5AA04(v5 - v91, 100);
                  if ( v92 < 0 )
                    LOWORD(v92) = v92 + 100;
                  LOWORD(v129) = v90 + v92;
                }
                if ( (unsigned int)(unsigned __int8)v130 - 1 <= 0xB && BYTE1(v130) && BYTE1(v130) <= 0x1Fu )
                {
                  v82 = BYTE2(v130);
                  v83 = HIBYTE(v130);
                  *(_BYTE *)(v3 + 20) = v131;
                  *(_BYTE *)(v3 + 18) = v82;
                  *(_BYTE *)(v3 + 19) = v83;
                  if ( (*(_BYTE *)(v2 + 752) & 8) != 0 )
                  {
                    if ( v7 == 1 )
                    {
                      v109 = 2;
                      do
                      {
                        v85 = v28;
                        v111 = *v28++;
                        v110 = v111;
                        if ( !v111 )
                          break;
                        v85 = v28;
                        if ( v110 == 44 )
                          --v109;
                      }
                      while ( v109 );
                      v82 = (int)v85;
                      v112 = 2;
                      do
                      {
                        v84 = (unsigned __int8 *)v82;
                        v114 = *(unsigned __int8 *)v82++;
                        v113 = v114;
                        if ( !v114 )
                          break;
                        v84 = (unsigned __int8 *)v82;
                        if ( v113 == 44 )
                          --v112;
                      }
                      while ( v112 );
                    }
                    else if ( v7 )
                    {
                      if ( v7 == 2 )
                      {
                        do
                        {
                          v85 = v28;
                          v105 = *v28++;
                          v104 = v105;
                          if ( !v105 )
                            break;
                          v85 = v28;
                        }
                        while ( v104 != 44 );
                        v82 = (int)v85;
                        v106 = 2;
                        do
                        {
                          v84 = (unsigned __int8 *)v82;
                          v108 = *(unsigned __int8 *)v82++;
                          v107 = v108;
                          if ( !v108 )
                            break;
                          v84 = (unsigned __int8 *)v82;
                          if ( v107 == 44 )
                            --v106;
                        }
                        while ( v106 );
                      }
                      else
                      {
                        v84 = 0;
                        v85 = 0;
                      }
                    }
                    else
                    {
                      v115 = 3;
                      do
                      {
                        v85 = v28;
                        v117 = *v28++;
                        v116 = v117;
                        if ( !v117 )
                          break;
                        v85 = v28;
                        if ( v116 == 44 )
                          --v115;
                      }
                      while ( v115 );
                      v82 = (int)v85;
                      v118 = 2;
                      do
                      {
                        v84 = (unsigned __int8 *)v82;
                        v120 = *(unsigned __int8 *)v82++;
                        v119 = v120;
                        if ( !v120 )
                          break;
                        v84 = (unsigned __int8 *)v82;
                        if ( v119 == 44 )
                          --v118;
                      }
                      while ( v118 );
                    }
                    v37 = 95;
                    while ( v85 )
                    {
                      while ( 1 )
                      {
                        v86 = v85;
                        v87 = *v85++;
                        v82 = v87;
                        if ( v87 == 44 )
                          break;
                        if ( v82 != 46 )
                          *(v85 - 1) = 95;
                      }
                      if ( v84 <= v86 )
                        break;
                      v85 = v84;
                    }
                    if ( v84 )
                    {
                      v93 = *(_DWORD *)(v2 + 168);
                      v94 = v93 + 38;
                      v95 = v93 - 2;
                      v96 = v2 + v94;
                      v82 = *(unsigned __int8 *)(v96 + 2);
                      if ( !*(_BYTE *)(v96 + 2) )
                      {
                        v82 = v2 + v95;
                        *(_BYTE *)(v96 + 1) = 95;
                        *(_BYTE *)(v2 + v95 + 40) = 95;
                      }
                    }
                  }
                  v97 = (double)*(int *)(v2 + 192);
                  HIWORD(v129) = 0;
                  v98 = v97 * 0.000000001;
                  if ( v97 * 0.000000001 < 0.0 )
                  {
                    v102 = -v98;
                    v99 = (unsigned int)((v102 - (double)(unsigned int)(int)v102) * 4294967300.0);
                    v103 = v99 == 0;
                    if ( v99 )
                      v99 = -v99;
                    else
                      v37 = (int)v102;
                    if ( v103 )
                      v5 = -v37;
                    else
                      v82 = (int)v102;
                    if ( !v103 )
                      v5 = ~v82;
                  }
                  else
                  {
                    v5 = (int)v98;
                    v99 = (unsigned int)((v98 - (double)(unsigned int)(int)v98) * 4294967300.0);
                  }
                  v100 = v5 + sub_4ECD0(&v129);
                  if ( v7 == 4 )
                  {
                    if ( !*(_DWORD *)(v3 + 8) )
                    {
                      *(_DWORD *)(v3 + 8) = 1;
                      if ( (dword_7BE6C & 0x100) != 0 )
                      {
                        v101 = (const char *)sub_50BEC(v1 + 12);
                        sub_4FE78(6, "%s using only $GPZDG", v101);
                      }
                    }
                    --v100;
                  }
                  v127 = v100;
                  v128 = v99;
                  return sub_27430((_DWORD *)v2, v100, v99, v125, v126);
                }
                else
                {
                  return sub_27040(v1, 5);
                }
              }
              return result;
            }
            if ( dword_7CF4C > 0 )
              printf(
                "NMEA hour/min/sec/nsec range %02d:%02d:%02d.%09ld\n",
                *(_DWORD *)(v2 + 180),
                *(_DWORD *)(v2 + 184),
                *(_DWORD *)(v2 + 188),
                *(_DWORD *)(v2 + 192));
          }
          else if ( dword_7CF4C > 0 )
          {
            printf(
              "NMEA time code %c%c%c%c%c%c non-numeric",
              v121,
              (unsigned __int8)v20[1],
              (unsigned __int8)v20[2],
              (unsigned __int8)v20[3],
              (unsigned __int8)v20[4],
              (unsigned __int8)v20[5]);
          }
          return sub_27040(v1, 6);
        }
        return sub_27040(v1, 2);
      }
    }
  }
  return result;
}
