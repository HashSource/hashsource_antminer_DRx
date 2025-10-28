int __fastcall sub_21414(int a1)
{
  unsigned __int64 v1; // d17
  int v2; // r11
  int v3; // r4
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  size_t v10; // r0
  size_t v11; // r5
  unsigned int v12; // r12
  int v13; // lr
  unsigned int v14; // r0
  int v15; // r1
  unsigned __int8 *v16; // r3
  unsigned int v17; // r0
  unsigned int v18; // r2
  int v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // r2
  int v22; // r1
  unsigned int v23; // r0
  unsigned int v24; // r2
  size_t v25; // lr
  int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r3
  int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r3
  int v32; // r1
  _DWORD *v33; // r6
  int v34; // r3
  int v35; // r4
  int v36; // r3
  int v37; // r2
  int *v38; // r0
  int v39; // r1
  int v40; // r0
  int v41; // r2
  int v42; // r12
  int v43; // r9
  unsigned int v44; // r6
  int v45; // r3
  int v46; // lr
  int v47; // r3
  int v48; // r7
  int v49; // r5
  int v50; // r3
  int v51; // r8
  int v52; // r3
  bool v53; // zf
  int v54; // r8
  int v55; // r3
  int v56; // r8
  int v57; // r8
  int v58; // r3
  int v59; // r3
  int v60; // r8
  int v61; // r12
  bool v62; // zf
  int v63; // r6
  int v64; // r4
  int v65; // r2
  int v66; // r4
  int v67; // r3
  int v68; // r2
  int v69; // r1
  int v70; // r3
  int v71; // r2
  int v72; // r3
  _DWORD *v73; // r1
  int v74; // r2
  int v75; // r1
  int v76; // r2
  int v77; // r2
  int v78; // r3
  _DWORD *v79; // r0
  _DWORD *v80; // r4
  void *v81; // r0
  int v82; // r10
  size_t v83; // r8
  unsigned __int8 *v84; // r4
  unsigned int v85; // r7
  int v86; // r5
  unsigned int v87; // r7
  unsigned int v88; // r3
  int v89; // r5
  unsigned int v90; // r2
  unsigned int v91; // r3
  int v92; // r1
  unsigned int v93; // r2
  unsigned int v94; // r3
  size_t v95; // r0
  unsigned int v96; // r3
  int v97; // r1
  unsigned int v98; // r2
  unsigned int v99; // r3
  int v100; // r1
  unsigned int v101; // r2
  unsigned int v102; // r3
  int v103; // r1
  unsigned int v104; // r3
  _DWORD *v105; // r2
  int v106; // r3
  int v107; // r2
  int v108; // r4
  size_t v109; // r5
  _DWORD *v110; // r0
  _DWORD *v111; // r7
  int v112; // r3
  int v113; // r11
  _DWORD *v114; // r4
  _DWORD *v115; // r10
  _DWORD *v116; // r3
  int v117; // r5
  _DWORD *v118; // r8
  unsigned int v119; // r2
  int v120; // r3
  _DWORD *v121; // r3
  int v122; // r2
  int v123; // r3
  unsigned int v124; // r4
  unsigned __int64 v125; // r0
  double v126; // d8
  unsigned __int64 v127; // r0
  int *v128; // r0
  int *v129; // r0
  int *v130; // r0
  struct tm *v131; // r0
  int *v132; // r0
  int *v133; // r0
  char *v134; // r2
  int i; // r3
  int v136; // t1
  int v137; // r1
  int v138; // r2
  int v139; // r3
  int v140; // r1
  int v141; // r2
  int v142; // r3
  const char *v143; // r3
  int v144; // r1
  int v145; // r2
  int v146; // r3
  int v147; // r1
  int v148; // r2
  int v149; // r3
  int v150; // r5
  const char *v151; // r3
  int v152; // r0
  char *v153; // r0
  int v154; // r0
  _DWORD *v156; // [sp+10h] [bp-87Ch]
  int v157; // [sp+14h] [bp-878h]
  unsigned int v158; // [sp+14h] [bp-878h]
  int v159; // [sp+18h] [bp-874h]
  int v160; // [sp+1Ch] [bp-870h]
  time_t timer; // [sp+20h] [bp-86Ch] BYREF
  char s[2044]; // [sp+24h] [bp-868h] BYREF
  char v163[60]; // [sp+824h] [bp-68h] BYREF
  int v164; // [sp+868h] [bp-24h] BYREF
  int v165; // [sp+86Ch] [bp-20h]
  int v166; // [sp+870h] [bp-1Ch]
  int v167; // [sp+874h] [bp-18h]
  int v168; // [sp+878h] [bp-14h]
  int v169; // [sp+87Ch] [bp-10h]
  int v170; // [sp+880h] [bp-Ch]
  int v171; // [sp+884h] [bp-8h]

  v2 = a1;
  v156 = *(_DWORD **)(a1 + 316);
  if ( !*(_BYTE *)(a1 + 338) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 12);
    v6 = *(_DWORD *)(a1 + 16);
    v164 = *(_DWORD *)(a1 + 4);
    v165 = v4;
    v166 = v5;
    v167 = v6;
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(_DWORD *)(a1 + 28);
    v9 = *(_DWORD *)(a1 + 32);
    v168 = *(_DWORD *)(a1 + 20);
    v169 = v7;
    v170 = v8;
    v171 = v9;
    sub_13948(&stru_754E4, "cgminer.c", "block_exists", 5655);
    if ( dword_75504 )
    {
      v10 = strlen(v163);
      v11 = v10;
      if ( v10 <= 0xB )
      {
        v12 = v10;
        v13 = -17973521;
        v14 = -1640531527;
        v15 = -1640531527;
        v16 = (unsigned __int8 *)v163;
      }
      else
      {
        v12 = v10;
        v13 = -17973521;
        v14 = -1640531527;
        v15 = -1640531527;
        v16 = (unsigned __int8 *)v163;
        do
        {
          v17 = (v16[6] << 16) + (v16[5] << 8) + v16[4] + (v16[7] << 24) + v14;
          v18 = (v16[10] << 16) + (v16[9] << 8) + v16[8] + (v16[11] << 24) + v13;
          v19 = ((v16[2] << 16) + (v16[1] << 8) + *v16 + (v16[3] << 24) - v17 - v18 + v15) ^ (v18 >> 13);
          v20 = (v17 - v18 - v19) ^ (v19 << 8);
          v21 = (v18 - v19 - v20) ^ (v20 >> 13);
          v22 = (v19 - v20 - v21) ^ (v21 >> 12);
          v23 = (v20 - v21 - v22) ^ (v22 << 16);
          v24 = (v21 - v22 - v23) ^ (v23 >> 5);
          v15 = (v22 - v23 - v24) ^ (v24 >> 3);
          v14 = (v23 - v24 - v15) ^ (v15 << 10);
          v13 = (v24 - v15 - v14) ^ (v14 >> 15);
          v16 += 12;
          v12 -= 12;
        }
        while ( v12 > 0xB );
      }
      v25 = v13 + v11;
      switch ( v12 )
      {
        case 1u:
          goto LABEL_20;
        case 2u:
          goto LABEL_19;
        case 3u:
          goto LABEL_18;
        case 4u:
          goto LABEL_17;
        case 5u:
          goto LABEL_16;
        case 6u:
          goto LABEL_15;
        case 7u:
          goto LABEL_14;
        case 8u:
          goto LABEL_13;
        case 9u:
          goto LABEL_12;
        case 0xAu:
          goto LABEL_11;
        case 0xBu:
          v25 += v16[10] << 24;
LABEL_11:
          v25 += v16[9] << 16;
LABEL_12:
          v25 += v16[8] << 8;
LABEL_13:
          v14 += v16[7] << 24;
LABEL_14:
          v14 += v16[6] << 16;
LABEL_15:
          v14 += v16[5] << 8;
LABEL_16:
          v14 += v16[4];
LABEL_17:
          v15 += v16[3] << 24;
LABEL_18:
          v15 += v16[2] << 16;
LABEL_19:
          v15 += v16[1] << 8;
LABEL_20:
          v15 += *v16;
          break;
        default:
          break;
      }
      v26 = (v15 - v14 - v25) ^ (v25 >> 13);
      v27 = (v14 - v25 - v26) ^ (v26 << 8);
      v28 = (v25 - v26 - v27) ^ (v27 >> 13);
      v29 = (v26 - v27 - v28) ^ (v28 >> 12);
      v30 = (v27 - v28 - v29) ^ (v29 << 16);
      v31 = (v28 - v29 - v30) ^ (v30 >> 5);
      v32 = (v29 - v30 - v31) ^ (v31 >> 3);
      v33 = *(_DWORD **)(dword_75504 + 68);
      v34 = *(_DWORD *)(*v33
                      + 12
                      * (((v31 - v32 - ((v30 - v31 - v32) ^ (v32 << 10)))
                        ^ (((v30 - v31 - v32) ^ (v32 << 10)) >> 15))
                       & (v33[1] - 1)));
      if ( v34 )
        v35 = v34 - v33[5];
      else
        v35 = 0;
      while ( 1 )
      {
        if ( !v35 )
          goto LABEL_254;
        if ( v11 == *(_DWORD *)(v35 + 92) && !memcmp(*(const void **)(v35 + 88), v163, v11) )
          break;
        v36 = *(_DWORD *)(v35 + 84);
        if ( !v36 )
          goto LABEL_254;
        v35 = v36 - v33[5];
      }
      v154 = sub_139B4(&stru_754E4, "cgminer.c", "block_exists", 5657);
      off_72D00(v154);
      if ( !memcmp(v156 + 136, &v164, 0x20u) )
      {
        v3 = 1;
      }
      else if ( !memcmp(&v164, dword_75508, 0x20u) )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(s, 0x800u, "Pool %d now up to date", *v156);
          sub_3F1C0(7, s, 0);
        }
        v144 = v165;
        v145 = v166;
        v146 = v167;
        v156[136] = v164;
        v156[137] = v144;
        v156[138] = v145;
        v156[139] = v146;
        v147 = v169;
        v148 = v170;
        v149 = v171;
        v156[140] = v168;
        v156[141] = v147;
        v156[142] = v148;
        v156[143] = v149;
        v3 = 1;
      }
      else if ( byte_75C09 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
        {
          snprintf(s, 0x800u, "Stale data from pool %d", *v156);
          sub_3F1C0(7, s, 0);
          v3 = 0;
        }
        else
        {
          v3 = 0;
        }
      }
      else
      {
        v3 = 0;
      }
      if ( *(_BYTE *)(v2 + 336) )
      {
        *(_DWORD *)(v2 + 396) = ++dword_73E78;
        if ( sub_BDE0() || (v150 = *(_DWORD *)(v2 + 316), v150 == sub_14838()) )
        {
          if ( *(_BYTE *)(v2 + 340) )
          {
            if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              snprintf(s, 0x800u, "Stratum from pool %d requested work restart", *v156);
              sub_3F1C0(7, s, 0);
            }
          }
          else if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            if ( *(_BYTE *)(v2 + 384) )
              v151 = "GBT ";
            else
              v151 = &byte_67C50;
            snprintf(s, 0x800u, "%sLONGPOLL from pool %d requested work restart", v151, **(_DWORD **)(v2 + 316));
            sub_3F1C0(7, s, 0);
          }
          sub_15F3C();
        }
      }
      goto LABEL_253;
    }
LABEL_254:
    v152 = sub_139B4(&stru_754E4, "cgminer.c", "block_exists", 5657);
    off_72D00(v152);
    v153 = (char *)calloc(0x68u, 1u);
    v63 = (int)v153;
    if ( !v153 )
    {
      strcpy(s, "test_work_current OOM");
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    strcpy(v153, v163);
    v37 = dword_79C68;
    *(_DWORD *)(v63 + 100) = dword_79C68;
    dword_79C68 = v37 + 1;
    if ( pthread_rwlock_wrlock(&stru_754E4) )
    {
      v38 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v38,
        "cgminer.c",
        "test_work_current",
        5729);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    v39 = dword_75504;
    if ( !dword_75504 )
    {
      v159 = 0;
LABEL_112:
      *(_DWORD *)(v63 + 76) = 0;
      *(_DWORD *)(v63 + 88) = v63;
      *(_DWORD *)(v63 + 92) = strlen((const char *)v63);
      v78 = dword_75504;
      if ( dword_75504 )
      {
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 16) + 8) = v63;
        *(_DWORD *)(v63 + 72) = *(_DWORD *)(*(_DWORD *)(v78 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(v78 + 68) + 20);
        *(_DWORD *)(*(_DWORD *)(v78 + 68) + 16) = v63 + 68;
      }
      else
      {
        dword_75504 = v63;
        *(_DWORD *)(v63 + 72) = 0;
        v79 = malloc(0x2Cu);
        v80 = v79;
        *(_DWORD *)(v63 + 68) = v79;
        if ( !v79 )
          exit(-1);
        *v79 = 0;
        v79[3] = 0;
        v79[4] = 0;
        v79[5] = 0;
        v79[6] = 0;
        v79[7] = 0;
        v79[8] = 0;
        v79[9] = 0;
        v79[10] = 0;
        v79[4] = v63 + 68;
        v79[1] = 32;
        v79[2] = 5;
        v79[5] = 68;
        v81 = malloc(0x180u);
        *v80 = v81;
        if ( !v81 )
          exit(-1);
        memset(v81, 0, 0x180u);
        *(_DWORD *)(*(_DWORD *)(v63 + 68) + 40) = -1609490463;
      }
      v82 = dword_75504;
      ++*(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 12);
      *(_DWORD *)(v63 + 68) = *(_DWORD *)(v82 + 68);
      *(_DWORD *)(v63 + 96) = -17973521;
      v83 = strlen((const char *)v63);
      if ( v83 <= 0xB )
      {
        v84 = (unsigned __int8 *)v63;
        v85 = -1640531527;
        v86 = -1640531527;
      }
      else
      {
        v84 = (unsigned __int8 *)v63;
        v85 = -1640531527;
        v86 = -1640531527;
        do
        {
          v87 = (v84[6] << 16) + (v84[5] << 8) + v84[4] + (v84[7] << 24) + v85;
          v88 = v84[8] + *(_DWORD *)(v63 + 96) + (v84[9] << 8) + (v84[10] << 16) + (v84[11] << 24);
          v89 = ((v84[2] << 16) + (v84[1] << 8) + *v84 + (v84[3] << 24) - v88 - v87 + v86) ^ (v88 >> 13);
          v90 = (v87 - v88 - v89) ^ (v89 << 8);
          v91 = (v88 - v89 - v90) ^ (v90 >> 13);
          v92 = (v89 - v90 - v91) ^ (v91 >> 12);
          v93 = (v90 - v91 - v92) ^ (v92 << 16);
          v94 = (v91 - v92 - v93) ^ (v93 >> 5);
          v86 = (v92 - v93 - v94) ^ (v94 >> 3);
          v85 = (v93 - v94 - v86) ^ (v86 << 10);
          *(_DWORD *)(v63 + 96) = (v94 - v86 - v85) ^ (v85 >> 15);
          v84 += 12;
          v83 -= 12;
        }
        while ( v83 > 0xB );
      }
      v95 = strlen((const char *)v63) + *(_DWORD *)(v63 + 96);
      *(_DWORD *)(v63 + 96) = v95;
      switch ( v83 )
      {
        case 1u:
          goto LABEL_135;
        case 2u:
          goto LABEL_134;
        case 3u:
          goto LABEL_133;
        case 4u:
          goto LABEL_132;
        case 5u:
          goto LABEL_131;
        case 6u:
          goto LABEL_130;
        case 7u:
          goto LABEL_129;
        case 8u:
          goto LABEL_128;
        case 9u:
          goto LABEL_127;
        case 0xAu:
          goto LABEL_126;
        case 0xBu:
          *(_DWORD *)(v63 + 96) = v95 + (v84[10] << 24);
LABEL_126:
          *(_DWORD *)(v63 + 96) += v84[9] << 16;
LABEL_127:
          *(_DWORD *)(v63 + 96) += v84[8] << 8;
LABEL_128:
          v85 += v84[7] << 24;
LABEL_129:
          v85 += v84[6] << 16;
LABEL_130:
          v85 += v84[5] << 8;
LABEL_131:
          v85 += v84[4];
LABEL_132:
          v86 += v84[3] << 24;
LABEL_133:
          v86 += v84[2] << 16;
LABEL_134:
          v86 += v84[1] << 8;
LABEL_135:
          v86 += *v84;
          break;
        default:
          break;
      }
      v96 = *(_DWORD *)(v63 + 96);
      v97 = (v86 - v85 - v96) ^ (v96 >> 13);
      v98 = (v85 - v96 - v97) ^ (v97 << 8);
      v99 = (v96 - v97 - v98) ^ (v98 >> 13);
      v100 = (v97 - v98 - v99) ^ (v99 >> 12);
      v101 = (v98 - v99 - v100) ^ (v100 << 16);
      v102 = (v99 - v100 - v101) ^ (v101 >> 5);
      v103 = (v100 - v101 - v102) ^ (v102 >> 3);
      v104 = (v102 - v103 - ((v101 - v102 - v103) ^ (v103 << 10))) ^ (((v101 - v102 - v103) ^ (v103 << 10)) >> 15);
      *(_DWORD *)(v63 + 96) = v104;
      v105 = *(_DWORD **)(v82 + 68);
      v106 = 12 * (v104 & (v105[1] - 1));
      ++*(_DWORD *)(*v105 + v106 + 4);
      *(_DWORD *)(v63 + 84) = *(_DWORD *)(**(_DWORD **)(v82 + 68) + v106);
      *(_DWORD *)(v63 + 80) = 0;
      v107 = *(_DWORD *)(**(_DWORD **)(v82 + 68) + v106);
      if ( v107 )
        *(_DWORD *)(v107 + 12) = v63 + 68;
      *(_DWORD *)(**(_DWORD **)(v82 + 68) + v106) = v63 + 68;
      if ( *(_DWORD *)(**(_DWORD **)(v82 + 68) + v106 + 4) >= (unsigned int)(10
                                                                           * (*(_DWORD *)(**(_DWORD **)(v82 + 68)
                                                                                        + v106
                                                                                        + 8)
                                                                            + 1)) )
      {
        v108 = *(_DWORD *)(v63 + 68);
        if ( *(_DWORD *)(v108 + 36) != 1 )
        {
          v109 = 24 * *(_DWORD *)(v108 + 4);
          v110 = malloc(v109);
          v111 = v110;
          if ( !v110 )
            exit(-1);
          memset(v110, 0, v109);
          *(_DWORD *)(v108 + 24) = (((2 * *(_DWORD *)(v108 + 4) - 1) & *(_DWORD *)(v108 + 12)) != 0)
                                 + (*(_DWORD *)(v108 + 12) >> (*(_BYTE *)(v108 + 8) + 1));
          *(_DWORD *)(*(_DWORD *)(v63 + 68) + 28) = 0;
          v112 = *(_DWORD *)(v63 + 68);
          if ( *(_DWORD *)(v112 + 4) )
          {
            v158 = 0;
            v160 = v2;
            v113 = 0;
            do
            {
              v114 = *(_DWORD **)(*(_DWORD *)v112 + v113);
              if ( v114 )
              {
                do
                {
                  v115 = (_DWORD *)v114[4];
                  v116 = *(_DWORD **)(v63 + 68);
                  v117 = 3 * ((2 * v116[1] - 1) & v114[7]);
                  v118 = &v111[3 * ((2 * v116[1] - 1) & v114[7])];
                  v119 = v118[1] + 1;
                  v118[1] = v119;
                  if ( v119 > v116[6] )
                  {
                    ++v116[7];
                    v118[2] = sub_59EE8(v118[1], *(_DWORD *)(*(_DWORD *)(v63 + 68) + 24));
                  }
                  v114[3] = 0;
                  v114[4] = v111[v117];
                  v120 = v111[v117];
                  if ( v120 )
                    *(_DWORD *)(v120 + 12) = v114;
                  v111[v117] = v114;
                  v114 = v115;
                }
                while ( v115 );
              }
              ++v158;
              v112 = *(_DWORD *)(v63 + 68);
              v113 += 12;
            }
            while ( *(_DWORD *)(v112 + 4) > v158 );
            v2 = v160;
          }
          free(*(void **)v112);
          *(_DWORD *)(*(_DWORD *)(v63 + 68) + 4) *= 2;
          ++*(_DWORD *)(*(_DWORD *)(v63 + 68) + 8);
          **(_DWORD **)(v63 + 68) = v111;
          v121 = *(_DWORD **)(v63 + 68);
          if ( v121[7] <= v121[3] >> 1 )
            v122 = 0;
          else
            v122 = v121[8] + 1;
          v121[8] = v122;
          v123 = *(_DWORD *)(v63 + 68);
          if ( *(_DWORD *)(v123 + 32) > 1u )
            *(_DWORD *)(v123 + 36) = 1;
        }
      }
      v124 = bswap32(*(_DWORD *)(v2 + 72));
      LODWORD(v1) = 8 * (29 - *(unsigned __int8 *)(v2 + 72));
      v125 = vshld_u64(0xFFFFu, v1);
      v126 = sub_5A3F0(v125, HIDWORD(v125)) / (double)(v124 & 0xFFFFFF);
      if ( v126 != dbl_72C18 )
      {
        v127 = sub_5A4E8(LODWORD(v126), HIDWORD(v126));
        sub_DF7C(v127, byte_754B8, 8u, 0);
        dbl_72C18 = v126;
        if ( byte_75C09 )
        {
          if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
          {
            snprintf(s, 0x800u, "Network diff set to %s", byte_754B8);
            sub_3F1C0(7, s, 0);
          }
        }
      }
      if ( pthread_rwlock_unlock(&stru_754E4) )
      {
        v128 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v128,
          "cgminer.c",
          "test_work_current",
          5745);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      if ( v159 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "Deleted block %d from database", v159);
        sub_3F1C0(7, s, 0);
      }
      if ( pthread_mutex_lock(&stru_79AA0) )
      {
        v129 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v129, "cgminer.c", "set_curblock", 5632);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      if ( pthread_rwlock_wrlock(&stru_79AB8) )
      {
        v130 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v130,
          "cgminer.c",
          "set_curblock",
          5632);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      sub_2FE30(&dword_790C0);
      strcpy(byte_79C74, v163);
      dword_75508[0] = v164;
      dword_75508[1] = v165;
      dword_75508[2] = v166;
      dword_75508[3] = v167;
      unk_75518 = v168;
      unk_7551C = v169;
      unk_75520 = v170;
      unk_75524 = v171;
      timer = dword_790C0;
      v131 = localtime(&timer);
      snprintf(&byte_754B8[8], 0x20u, "[%02d:%02d:%02d]", v131->tm_hour, v131->tm_min, v131->tm_sec);
      if ( pthread_rwlock_unlock(&stru_79AB8) )
      {
        v132 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v132,
          "cgminer.c",
          "set_curblock",
          5637);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      if ( pthread_mutex_unlock(&stru_79AA0) )
      {
        v133 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v133,
          "cgminer.c",
          "set_curblock",
          5637);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      if ( byte_79C74[0] == 48 )
      {
        v134 = byte_79C74;
        for ( i = 1; i != 57; ++i )
        {
          v136 = (unsigned __int8)*++v134;
          if ( v136 != 48 )
            break;
        }
      }
      else
      {
        i = 0;
      }
      strncpy(byte_754AC, &byte_79C74[i], 8u);
      byte_754B4 = 0;
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "New block: %s... diff %s", byte_79C74, byte_754B8);
        sub_3F1C0(7, s, 0);
      }
      v137 = v165;
      v138 = v166;
      v139 = v167;
      v156[136] = v164;
      v156[137] = v137;
      v156[138] = v138;
      v156[139] = v139;
      v140 = v169;
      v141 = v170;
      v142 = v171;
      v156[140] = v168;
      v156[141] = v140;
      v156[142] = v141;
      v156[143] = v142;
      if ( dword_79C68 == 1 )
      {
        v3 = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 396) = ++dword_73E78;
        if ( *(_BYTE *)(v2 + 336) )
        {
          if ( *(_BYTE *)(v2 + 340) )
          {
            if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              snprintf(s, 0x800u, "Stratum from pool %d detected new block", *v156);
              sub_3F1C0(7, s, 0);
            }
          }
          else if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            if ( *(_BYTE *)(v2 + 384) )
              v143 = "GBT ";
            else
              v143 = &byte_67C50;
            snprintf(s, 0x800u, "%sLONGPOLL from pool %d detected new block", v143, **(_DWORD **)(v2 + 316));
            sub_3F1C0(7, s, 0);
          }
        }
        else if ( byte_79DC9 )
        {
          if ( !*((_BYTE *)v156 + 916) && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            strcpy(s, "New block detected on network before pool notification");
            sub_3F1C0(7, s, 0);
          }
        }
        else if ( !*((_BYTE *)v156 + 916) && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(s, "New block detected on network");
          sub_3F1C0(7, s, 0);
        }
        sub_15F3C();
        v3 = 1;
      }
LABEL_253:
      *(_BYTE *)(v2 + 336) = 0;
      return v3;
    }
    if ( *(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 12) <= 6u )
    {
      v159 = 0;
      goto LABEL_112;
    }
    v40 = dword_75504 + 68;
    v41 = 1;
    v157 = v63;
LABEL_85:
    if ( !v40 )
    {
      v63 = v157;
      v64 = 0;
      v42 = 0;
LABEL_91:
      v65 = dword_75504;
      *(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 16) = v42;
      v66 = v64 - *(_DWORD *)(*(_DWORD *)(v65 + 68) + 20);
      dword_75504 = v66;
      v159 = *(_DWORD *)(v66 + 100);
      v67 = *(_DWORD *)(v66 + 72);
      if ( v67 || *(_DWORD *)(v66 + 76) )
      {
        v68 = *(_DWORD *)(v66 + 68);
        v69 = *(_DWORD *)(v68 + 20);
        if ( v66 == *(_DWORD *)(v68 + 16) - v69 )
          *(_DWORD *)(v68 + 16) = v67 + v69;
        v70 = *(_DWORD *)(v66 + 72);
        if ( v70 )
          *(_DWORD *)(v70 + *(_DWORD *)(*(_DWORD *)(v66 + 68) + 20) + 8) = *(_DWORD *)(v66 + 76);
        else
          dword_75504 = *(_DWORD *)(v66 + 76);
        v71 = *(_DWORD *)(v66 + 76);
        if ( v71 )
          *(_DWORD *)(v71 + *(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 20) + 4) = *(_DWORD *)(v66 + 72);
        v72 = dword_75504;
        v73 = *(_DWORD **)(dword_75504 + 68);
        v74 = 12 * ((v73[1] - 1) & *(_DWORD *)(v66 + 96));
        --*(_DWORD *)(*v73 + v74 + 4);
        v75 = **(_DWORD **)(v72 + 68);
        if ( *(_DWORD *)(v75 + v74) == v66 + 68 )
          *(_DWORD *)(v75 + v74) = *(_DWORD *)(v66 + 84);
        v76 = *(_DWORD *)(v66 + 80);
        if ( v76 )
          *(_DWORD *)(v76 + 16) = *(_DWORD *)(v66 + 84);
        v77 = *(_DWORD *)(v66 + 84);
        if ( v77 )
          *(_DWORD *)(v77 + 12) = *(_DWORD *)(v66 + 80);
        --*(_DWORD *)(*(_DWORD *)(v72 + 68) + 12);
      }
      else
      {
        free(**(void ***)(v66 + 68));
        free(*(void **)(v66 + 68));
        dword_75504 = 0;
      }
      free((void *)v66);
      goto LABEL_112;
    }
    v42 = 0;
    v43 = 0;
    v44 = 0;
LABEL_37:
    ++v44;
    if ( v41 )
    {
      v45 = v40;
      v46 = 0;
      while ( 1 )
      {
        ++v46;
        v47 = *(_DWORD *)(v45 + 8);
        if ( !v47 )
          break;
        v45 = v47 + *(_DWORD *)(*(_DWORD *)(v39 + 68) + 20);
        if ( !v45 || v46 == v41 )
          goto LABEL_44;
      }
      v45 = 0;
    }
    else
    {
      v45 = v40;
      v46 = 0;
    }
LABEL_44:
    v48 = v40;
    v40 = v45;
    v49 = v41;
    while ( 1 )
    {
      if ( v46 )
      {
        v53 = v49 == 0;
        if ( v49 )
          v53 = v40 == 0;
        if ( v53 )
        {
          if ( v48 )
          {
            v55 = *(_DWORD *)(v48 + 8);
            v54 = v55 ? v55 + *(_DWORD *)(*(_DWORD *)(v39 + 68) + 20) : 0;
          }
          else
          {
            v54 = 0;
          }
          --v46;
          v52 = v48;
          v48 = v54;
        }
        else
        {
          v56 = *(_DWORD *)(*(_DWORD *)(v39 + 68) + 20);
          if ( *(_DWORD *)(v48 - v56 + 100) - *(_DWORD *)(v40 - v56 + 100) > 0 )
          {
            v59 = *(_DWORD *)(v40 + 8);
            v60 = v59 ? v59 + v56 : 0;
            --v49;
            v52 = v40;
            v40 = v60;
          }
          else
          {
            if ( v48 )
            {
              v58 = *(_DWORD *)(v48 + 8);
              v57 = v58 ? v58 + v56 : 0;
            }
            else
            {
              v57 = 0;
            }
            --v46;
            v52 = v48;
            v48 = v57;
          }
        }
      }
      else
      {
        v62 = v40 == 0;
        if ( v40 )
          v62 = v49 == 0;
        if ( v62 )
        {
          if ( !v40 )
          {
            if ( v42 )
              *(_DWORD *)(v42 + 8) = 0;
            if ( v44 <= 1 )
            {
              v64 = v43;
              v63 = v157;
              goto LABEL_91;
            }
            v41 *= 2;
            v40 = v43;
            goto LABEL_85;
          }
          goto LABEL_37;
        }
        v50 = *(_DWORD *)(v40 + 8);
        v51 = v50 ? v50 + *(_DWORD *)(*(_DWORD *)(v39 + 68) + 20) : 0;
        --v49;
        v52 = v40;
        v40 = v51;
      }
      if ( v42 )
        break;
      if ( v52 )
      {
        v43 = v52;
        v61 = 0;
LABEL_76:
        *(_DWORD *)(v52 + 4) = v61;
        goto LABEL_77;
      }
      v43 = 0;
LABEL_77:
      v42 = v52;
    }
    if ( !v52 )
    {
      *(_DWORD *)(v42 + 8) = 0;
      goto LABEL_77;
    }
    *(_DWORD *)(v42 + 8) = v52 - *(_DWORD *)(*(_DWORD *)(v39 + 68) + 20);
    v61 = v42 - *(_DWORD *)(*(_DWORD *)(v39 + 68) + 20);
    goto LABEL_76;
  }
  return 1;
}
