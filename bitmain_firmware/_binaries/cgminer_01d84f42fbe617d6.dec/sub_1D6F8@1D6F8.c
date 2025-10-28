int __fastcall sub_1D6F8(int a1)
{
  int v1; // r11
  unsigned __int64 v2; // d17
  int v3; // r5
  int v4; // r4
  int v6; // r8
  int v7; // lr
  int v8; // r12
  int v9; // r7
  int v10; // r6
  int v11; // r4
  int v12; // r3
  int v13; // r10
  size_t v14; // r0
  unsigned int v15; // r12
  unsigned __int8 *v16; // r3
  int v17; // r1
  size_t v18; // r4
  int v19; // r0
  unsigned int v20; // r2
  unsigned int v21; // r12
  int v22; // lr
  int v23; // r8
  int v24; // r7
  int v25; // r6
  unsigned int v26; // r0
  int v27; // r1
  unsigned int v28; // r12
  unsigned int v29; // r0
  int v30; // r1
  unsigned int v31; // r12
  unsigned int v32; // r0
  size_t v33; // r0
  _DWORD *v34; // r6
  int v35; // r1
  unsigned int v36; // r2
  unsigned int v37; // r3
  int v38; // r1
  unsigned int v39; // r2
  unsigned int v40; // r3
  int v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r6
  int v46; // r3
  const char *v47; // r3
  char *v48; // r0
  int v49; // r7
  int v50; // r3
  int v51; // r6
  int v52; // r9
  int v53; // r2
  int v54; // r12
  int v55; // lr
  unsigned int v56; // r8
  int v57; // r3
  int v58; // r1
  int v59; // r0
  int v60; // r0
  int v61; // r4
  bool v62; // zf
  int v63; // r3
  bool v64; // zf
  int v65; // r9
  int v66; // r3
  int v67; // r2
  int v68; // r0
  int v69; // r3
  _DWORD *v70; // r2
  int v71; // r3
  int v72; // r2
  int v73; // r3
  int v74; // r3
  _DWORD *v75; // r0
  _DWORD *v76; // r4
  void *v77; // r0
  int v78; // r3
  int v79; // r3
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r2
  int v84; // r3
  int v85; // r11
  int v86; // r3
  unsigned int v87; // r10
  size_t v88; // r0
  unsigned int v89; // r9
  unsigned __int8 *v90; // r4
  int v91; // r8
  int v92; // r1
  int v93; // r12
  int v94; // r2
  int v95; // r0
  unsigned int v96; // r3
  unsigned int v97; // r10
  int v98; // r8
  unsigned int v99; // r2
  unsigned int v100; // r3
  int v101; // r1
  unsigned int v102; // r2
  unsigned int v103; // r3
  size_t v104; // r11
  int v105; // r0
  unsigned int v106; // r2
  unsigned int v107; // r3
  int v108; // r0
  unsigned int v109; // r2
  unsigned int v110; // r3
  unsigned int v111; // r0
  unsigned int v112; // r3
  _DWORD *v113; // r2
  int v114; // r3
  int v115; // r2
  int v116; // r2
  int v117; // r4
  size_t v118; // r6
  _DWORD *v119; // r0
  _DWORD *v120; // r8
  int v121; // r1
  unsigned int v122; // r6
  int v123; // r11
  int v124; // r5
  _DWORD *v125; // r4
  _DWORD *v126; // r10
  int v127; // r6
  char *v128; // r7
  unsigned int v129; // r3
  int v130; // r3
  _DWORD *v131; // r3
  unsigned int v132; // r1
  unsigned int v133; // r2
  bool v134; // cc
  int v135; // r2
  int v136; // r3
  signed int v137; // s16
  double v138; // d8
  int v139; // r1
  int v140; // r2
  int v141; // r3
  struct tm *v142; // r0
  int j; // r3
  int v144; // r1
  int v145; // r2
  int v146; // r3
  int v147; // r0
  int v148; // r1
  int v149; // r2
  int v150; // r3
  int v151; // r2
  int v152; // r3
  const char *v153; // r3
  unsigned __int64 v154; // r0
  int v155; // [sp+8h] [bp-87Ch]
  unsigned int i; // [sp+8h] [bp-87Ch]
  _DWORD *v157; // [sp+Ch] [bp-878h]
  int v158; // [sp+10h] [bp-874h]
  int v159; // [sp+14h] [bp-870h]
  time_t timer; // [sp+18h] [bp-86Ch] BYREF
  int s2; // [sp+1Ch] [bp-868h] BYREF
  int v162; // [sp+20h] [bp-864h]
  int v163; // [sp+24h] [bp-860h]
  int v164; // [sp+28h] [bp-85Ch]
  int v165; // [sp+2Ch] [bp-858h]
  int v166; // [sp+30h] [bp-854h]
  int v167; // [sp+34h] [bp-850h]
  int v168; // [sp+38h] [bp-84Ch]
  char s[68]; // [sp+3Ch] [bp-848h] BYREF
  char v170[2052]; // [sp+80h] [bp-804h] BYREF

  v3 = a1;
  v157 = *(_DWORD **)(a1 + 260);
  if ( *(_BYTE *)(a1 + 282) )
    return 1;
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_DWORD *)(a1 + 16);
  s2 = *(_DWORD *)(a1 + 32);
  v12 = *(_DWORD *)(a1 + 4);
  v166 = v7;
  v167 = v8;
  v168 = v12;
  v162 = v6;
  v163 = v9;
  v164 = v10;
  v165 = v11;
  sub_29460(s, &s2, 32);
  if ( pthread_rwlock_rdlock(&stru_61550) )
    sub_B76C("block_exists", 5325);
  v13 = dword_61570;
  if ( dword_61570 )
  {
    v14 = strlen(s);
    v15 = -1640531527;
    v16 = (unsigned __int8 *)s;
    v17 = -1640531527;
    v18 = v14;
    v134 = v14 > 0xB;
    v19 = -17973521;
    v20 = v18;
    if ( v134 )
    {
      do
      {
        v20 -= 12;
        v1 = v16[7];
        v21 = (v16[6] << 16) + (v16[5] << 8) + v16[4] + (v1 << 24) + v15;
        v22 = (v16[2] << 16) + (v16[1] << 8) + *v16;
        v23 = v16[3];
        v24 = v16[11];
        v25 = (v16[10] << 16) + (v16[9] << 8) + v16[8];
        v16 += 12;
        v26 = v25 + (v24 << 24) + v19;
        v27 = (v22 + (v23 << 24) - v21 - v26 + v17) ^ (v26 >> 13);
        v28 = (v21 - v26 - v27) ^ (v27 << 8);
        v29 = (v26 - v27 - v28) ^ (v28 >> 13);
        v30 = (v27 - v28 - v29) ^ (v29 >> 12);
        v31 = (v28 - v29 - v30) ^ (v30 << 16);
        v32 = (v29 - v30 - v31) ^ (v31 >> 5);
        v17 = (v30 - v31 - v32) ^ (v32 >> 3);
        v15 = (v31 - v32 - v17) ^ (v17 << 10);
        v19 = (v32 - v17 - v15) ^ (v15 >> 15);
      }
      while ( v20 > 0xB );
    }
    v33 = v19 + v18;
    switch ( v20 )
    {
      case 1u:
        goto LABEL_21;
      case 2u:
        goto LABEL_20;
      case 3u:
        goto LABEL_19;
      case 4u:
        goto LABEL_18;
      case 5u:
        goto LABEL_17;
      case 6u:
        goto LABEL_16;
      case 7u:
        goto LABEL_15;
      case 8u:
        goto LABEL_14;
      case 9u:
        goto LABEL_13;
      case 0xAu:
        goto LABEL_12;
      case 0xBu:
        v33 += v16[10] << 24;
LABEL_12:
        v33 += v16[9] << 16;
LABEL_13:
        v33 += v16[8] << 8;
LABEL_14:
        v15 += v16[7] << 24;
LABEL_15:
        v15 += v16[6] << 16;
LABEL_16:
        v15 += v16[5] << 8;
LABEL_17:
        v15 += v16[4];
LABEL_18:
        v17 += v16[3] << 24;
LABEL_19:
        v17 += v16[2] << 16;
LABEL_20:
        v17 += v16[1] << 8;
LABEL_21:
        v17 += *v16;
        break;
      default:
        break;
    }
    v34 = *(_DWORD **)(dword_61570 + 68);
    v35 = (v17 - v15 - v33) ^ (v33 >> 13);
    v36 = (v15 - v33 - v35) ^ (v35 << 8);
    v37 = (v33 - v35 - v36) ^ (v36 >> 13);
    v38 = (v35 - v36 - v37) ^ (v37 >> 12);
    v39 = (v36 - v37 - v38) ^ (v38 << 16);
    v40 = (v37 - v38 - v39) ^ (v39 >> 5);
    v41 = (v38 - v39 - v40) ^ (v40 >> 3);
    v13 = *(_DWORD *)(*v34
                    + 12
                    * (((v40 - v41 - ((v39 - v40 - v41) ^ (v41 << 10)))
                      ^ (((v39 - v40 - v41) ^ (v41 << 10)) >> 15))
                     & (v34[1] - 1)));
    if ( !v13 )
      goto LABEL_24;
    do
    {
      v13 -= v34[5];
LABEL_24:
      if ( !v13 || v18 == *(_DWORD *)(v13 + 92) && !memcmp(*(const void **)(v13 + 88), s, v18) )
        break;
      v13 = *(_DWORD *)(v13 + 84);
    }
    while ( v13 );
  }
  if ( pthread_rwlock_unlock(&stru_61550) )
    sub_B700("block_exists", 5327);
  off_60178();
  if ( v13 )
  {
    v42 = memcmp(v157 + 134, &s2, 0x20u);
    if ( v42 )
    {
      v42 = memcmp(&s2, dword_6157C, 0x20u);
      if ( v42 )
      {
        v4 = (unsigned __int8)byte_630C1;
        if ( byte_630C1 )
        {
          if ( byte_632F0 || (v4 = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6 )
          {
            v4 = 0;
            snprintf(v170, 0x800u, "Stale data from pool %d", *v157);
            v42 = sub_38438(7, v170, 0);
          }
        }
      }
      else
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(v170, 0x800u, "Pool %d now up to date", *v157);
          sub_38438(7, v170, 0);
        }
        v4 = 1;
        v80 = v162;
        v81 = v163;
        v82 = v164;
        v157[134] = s2;
        v157[135] = v80;
        v157[136] = v81;
        v157[137] = v82;
        v42 = v165;
        v43 = v166;
        v83 = v167;
        v84 = v168;
        v157[138] = v165;
        v157[139] = v43;
        v157[140] = v83;
        v157[141] = v84;
      }
    }
    else
    {
      v4 = 1;
    }
    if ( *(_BYTE *)(v3 + 280) )
    {
      v44 = dword_611AC - 3;
      v134 = (unsigned int)(dword_611AC - 3) > 1;
      *(_DWORD *)(v3 + 336) = ++dword_6136C;
      if ( !v134 || (v45 = *(_DWORD *)(v3 + 260), v42 = sub_1D644(), v45 == v42) )
      {
        if ( *(_BYTE *)(v3 + 284) )
        {
          v46 = (unsigned __int8)byte_630C1;
          if ( byte_630C1 )
          {
            if ( byte_632F0 || byte_630C0 || (v46 = dword_60964, dword_60964 > 6) )
            {
              snprintf(v170, 0x800u, "Stratum from pool %d requested work restart", *v157);
              v42 = sub_38438(7, v170, 0);
            }
          }
        }
        else
        {
          v46 = (unsigned __int8)byte_630C1;
          if ( byte_630C1 )
          {
            if ( byte_632F0 || byte_630C0 || (v46 = dword_60964, dword_60964 > 6) )
            {
              v47 = "";
              if ( *(_BYTE *)(v3 + 324) )
                v47 = "GBT ";
              snprintf(v170, 0x800u, "%sLONGPOLL from pool %d requested work restart", v47, **(_DWORD **)(v3 + 260));
              v42 = sub_38438(7, v170, 0);
            }
          }
        }
        sub_16C8C(v42, v43, v44, v46);
      }
    }
    goto LABEL_41;
  }
  v48 = (char *)calloc(0x68u, 1u);
  v49 = (int)v48;
  if ( !v48 )
  {
    strcpy(v170, "test_work_current OOM");
    sub_38438(3, v170, 1);
    sub_16724(1);
  }
  strcpy(v48, s);
  v50 = dword_640BC++;
  *(_DWORD *)(v49 + 100) = v50;
  if ( pthread_rwlock_wrlock(&stru_61550) )
    sub_B550("test_work_current", 5392);
  v51 = dword_61570;
  if ( !dword_61570 )
  {
    *(_DWORD *)(v49 + 76) = 0;
    *(_DWORD *)(v49 + 88) = v49;
    v158 = 0;
    *(_DWORD *)(v49 + 92) = strlen((const char *)v49);
    goto LABEL_105;
  }
  if ( *(_DWORD *)(*(_DWORD *)(dword_61570 + 68) + 12) <= 6u )
  {
    *(_DWORD *)(v49 + 88) = v49;
    *(_DWORD *)(v49 + 76) = 0;
    v158 = 0;
    *(_DWORD *)(v49 + 92) = strlen((const char *)v49);
    goto LABEL_137;
  }
  v52 = dword_61570 + 68;
  v53 = 1;
  while ( 2 )
  {
    v54 = v52;
    v52 = 0;
    v55 = 0;
    v56 = 0;
    do
    {
      ++v56;
      if ( v53 )
      {
        v57 = *(_DWORD *)(v54 + 8);
        if ( v57 )
        {
          v59 = *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
          v58 = 1;
          for ( v57 += v59; v57; v57 += v59 )
          {
            if ( v58 == v53 )
              break;
            v57 = *(_DWORD *)(v57 + 8);
            ++v58;
            if ( !v57 )
              break;
          }
        }
        else
        {
          v58 = 1;
        }
      }
      else
      {
        v57 = v54;
        v58 = 0;
      }
      v60 = v54;
      v61 = v53;
      v54 = v57;
      while ( v58 )
      {
LABEL_69:
        v62 = v61 == 0;
        if ( v61 )
          v62 = v54 == 0;
        if ( v62 )
        {
          if ( !v60 )
            goto LABEL_128;
          v13 = *(_DWORD *)(v60 + 8);
          if ( v13 )
            v13 += *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
LABEL_76:
          --v58;
          if ( !v55 )
            goto LABEL_125;
LABEL_77:
          if ( v60 )
          {
            *(_DWORD *)(v55 + 8) = v60 - *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
            v63 = v55 - *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
            v55 = v60;
            v60 = v13;
            goto LABEL_79;
          }
          *(_DWORD *)(v55 + 8) = 0;
          v55 = 0;
          v60 = v13;
        }
        else
        {
          v79 = *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
          v1 = *(_DWORD *)(v54 - v79 + 100);
          v13 = *(_DWORD *)(v60 - v79 + 100) - v1;
          if ( v13 > 0 )
          {
            v1 = *(_DWORD *)(v54 + 8);
            if ( v1 )
              v1 += v79;
            goto LABEL_113;
          }
          if ( !v60 )
          {
LABEL_128:
            v13 = v60;
            goto LABEL_76;
          }
          v13 = *(_DWORD *)(v60 + 8);
          --v58;
          if ( v13 )
            v13 += v79;
          if ( v55 )
            goto LABEL_77;
LABEL_125:
          if ( v60 )
          {
            v55 = v60;
            v63 = 0;
            v60 = v13;
            v52 = v55;
            goto LABEL_79;
          }
          v52 = 0;
          v60 = v13;
          v55 = 0;
        }
      }
      while ( 1 )
      {
        v64 = v54 == 0;
        if ( v54 )
          v64 = v61 == 0;
        if ( v64 )
          break;
        v78 = *(_DWORD *)(v54 + 8);
        if ( v78 )
          v13 = *(_DWORD *)(v51 + 68);
        else
          v1 = v58;
        if ( v78 )
        {
          v13 = *(_DWORD *)(v13 + 20);
          v1 = v78 + v13;
        }
LABEL_113:
        --v61;
        if ( v55 )
        {
          v13 = v60;
          v60 = v54;
          v54 = v1;
          goto LABEL_77;
        }
        v55 = v54;
        v63 = 0;
        v54 = v1;
        v52 = v55;
LABEL_79:
        *(_DWORD *)(v55 + 4) = v63;
        if ( v58 )
          goto LABEL_69;
      }
    }
    while ( v54 );
    if ( v55 )
      *(_DWORD *)(v55 + 8) = 0;
    if ( v56 > 1 )
    {
      v53 *= 2;
      if ( !v52 )
      {
        v55 = 0;
        break;
      }
      continue;
    }
    break;
  }
  *(_DWORD *)(*(_DWORD *)(v51 + 68) + 16) = v55;
  v65 = v52 - *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
  dword_61570 = v65;
  v66 = *(_DWORD *)(v65 + 72);
  v158 = *(_DWORD *)(v65 + 100);
  if ( v66 || *(_DWORD *)(v65 + 76) )
  {
    v67 = *(_DWORD *)(v65 + 68);
    v68 = *(_DWORD *)(v67 + 20);
    if ( v65 == *(_DWORD *)(v67 + 16) - v68 )
    {
      *(_DWORD *)(v67 + 16) = v66 + v68;
      v66 = *(_DWORD *)(v65 + 72);
    }
    if ( v66 )
    {
      v51 = v65;
      *(_DWORD *)(v66 + *(_DWORD *)(*(_DWORD *)(v65 + 68) + 20) + 8) = *(_DWORD *)(v65 + 76);
      v69 = *(_DWORD *)(v65 + 76);
    }
    else
    {
      v69 = *(_DWORD *)(v65 + 76);
      v51 = v69;
      dword_61570 = v69;
    }
    if ( v69 )
      *(_DWORD *)(v69 + *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20) + 4) = *(_DWORD *)(v65 + 72);
    v70 = *(_DWORD **)(v51 + 68);
    v71 = 12 * ((v70[1] - 1) & *(_DWORD *)(v65 + 96));
    --*(_DWORD *)(*v70 + v71 + 4);
    v72 = **(_DWORD **)(v51 + 68);
    if ( *(_DWORD *)(v72 + v71) == v65 + 68 )
      *(_DWORD *)(v72 + v71) = *(_DWORD *)(v65 + 84);
    v73 = *(_DWORD *)(v65 + 80);
    if ( v73 )
      *(_DWORD *)(v73 + 16) = *(_DWORD *)(v65 + 84);
    v74 = *(_DWORD *)(v65 + 84);
    if ( v74 )
      *(_DWORD *)(v74 + 12) = *(_DWORD *)(v65 + 80);
    --*(_DWORD *)(*(_DWORD *)(v51 + 68) + 12);
  }
  else
  {
    v51 = 0;
    free(**(void ***)(v65 + 68));
    free(*(void **)(v65 + 68));
    dword_61570 = 0;
  }
  free((void *)v65);
  *(_DWORD *)(v49 + 88) = v49;
  *(_DWORD *)(v49 + 76) = 0;
  *(_DWORD *)(v49 + 92) = strlen((const char *)v49);
  if ( !v51 )
  {
LABEL_105:
    *(_DWORD *)(v49 + 72) = 0;
    dword_61570 = v49;
    v75 = malloc(0x2Cu);
    v76 = v75;
    *(_DWORD *)(v49 + 68) = v75;
    if ( v75 )
    {
      v155 = v49 + 68;
      *v75 = 0;
      v75[3] = 0;
      v75[4] = 0;
      v75[5] = 0;
      v75[6] = 0;
      v75[7] = 0;
      v75[8] = 0;
      v75[9] = 0;
      v75[10] = 0;
      v75[1] = 32;
      v75[4] = v49 + 68;
      v75[2] = 5;
      v75[5] = 68;
      v77 = malloc(0x180u);
      *v76 = v77;
      if ( v77 )
      {
        memset(v77, 0, 0x180u);
        v51 = v49;
        v76[10] = -1609490463;
        goto LABEL_138;
      }
    }
LABEL_251:
    exit(-1);
  }
LABEL_137:
  v155 = v49 + 68;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v51 + 68) + 16) + 8) = v49;
  *(_DWORD *)(v49 + 72) = *(_DWORD *)(*(_DWORD *)(v51 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(v51 + 68) + 20);
  *(_DWORD *)(*(_DWORD *)(v51 + 68) + 16) = v49 + 68;
  v76 = *(_DWORD **)(v51 + 68);
LABEL_138:
  v85 = -17973521;
  ++v76[3];
  v86 = *(_DWORD *)(v51 + 68);
  v87 = -1640531527;
  *(_DWORD *)(v49 + 96) = -17973521;
  *(_DWORD *)(v49 + 68) = v86;
  v88 = strlen((const char *)v49);
  v89 = v88;
  if ( v88 <= 0xB )
  {
    v91 = -1640531527;
    v90 = (unsigned __int8 *)v49;
  }
  else
  {
    v90 = (unsigned __int8 *)v49;
    v91 = -1640531527;
    do
    {
      v89 -= 12;
      v92 = (v90[2] << 16) + (v90[1] << 8) + *v90;
      v93 = v90[3];
      v94 = (v90[6] << 16) + (v90[5] << 8) + v90[4];
      v95 = v90[7];
      v96 = (v90[10] << 16) + (v90[9] << 8) + v90[8] + (v90[11] << 24) + v85;
      v90 += 12;
      v97 = v94 + (v95 << 24) + v87;
      v98 = (v92 + (v93 << 24) - v96 - v97 + v91) ^ (v96 >> 13);
      v99 = (v97 - v96 - v98) ^ (v98 << 8);
      v100 = (v96 - v98 - v99) ^ (v99 >> 13);
      v101 = (v98 - v99 - v100) ^ (v100 >> 12);
      v102 = (v99 - v100 - v101) ^ (v101 << 16);
      v103 = (v100 - v101 - v102) ^ (v102 >> 5);
      v91 = (v101 - v102 - v103) ^ (v103 >> 3);
      v87 = (v102 - v103 - v91) ^ (v91 << 10);
      v85 = (v103 - v91 - v87) ^ (v87 >> 15);
      *(_DWORD *)(v49 + 96) = v85;
    }
    while ( v89 > 0xB );
    v88 = strlen((const char *)v49);
  }
  v104 = v88 + v85;
  *(_DWORD *)(v49 + 96) = v104;
  switch ( v89 )
  {
    case 1u:
      goto LABEL_153;
    case 2u:
      goto LABEL_152;
    case 3u:
      goto LABEL_151;
    case 4u:
      goto LABEL_150;
    case 5u:
      goto LABEL_149;
    case 6u:
      goto LABEL_148;
    case 7u:
      goto LABEL_147;
    case 8u:
      goto LABEL_146;
    case 9u:
      goto LABEL_145;
    case 0xAu:
      goto LABEL_144;
    case 0xBu:
      v104 += v90[10] << 24;
      *(_DWORD *)(v49 + 96) = v104;
LABEL_144:
      v104 += v90[9] << 16;
      *(_DWORD *)(v49 + 96) = v104;
LABEL_145:
      v104 += v90[8] << 8;
      *(_DWORD *)(v49 + 96) = v104;
LABEL_146:
      v87 += v90[7] << 24;
LABEL_147:
      v87 += v90[6] << 16;
LABEL_148:
      v87 += v90[5] << 8;
LABEL_149:
      v87 += v90[4];
LABEL_150:
      v91 += v90[3] << 24;
LABEL_151:
      v91 += v90[2] << 16;
LABEL_152:
      v91 += v90[1] << 8;
LABEL_153:
      v91 += *v90;
      break;
    default:
      break;
  }
  v105 = (v91 - v87 - v104) ^ (v104 >> 13);
  v106 = (v87 - v104 - v105) ^ (v105 << 8);
  v107 = (v104 - v105 - v106) ^ (v106 >> 13);
  v108 = (v105 - v106 - v107) ^ (v107 >> 12);
  v109 = (v106 - v107 - v108) ^ (v108 << 16);
  v110 = (v107 - v108 - v109) ^ (v109 >> 5);
  v111 = v108 - v109 - v110;
  v112 = (v110 - (v111 ^ (v110 >> 3)) - ((v109 - v110 - (v111 ^ (v110 >> 3))) ^ ((v111 ^ (v110 >> 3)) << 10)))
       ^ (((v109 - v110 - (v111 ^ (v110 >> 3))) ^ ((v111 ^ (v110 >> 3)) << 10)) >> 15);
  *(_DWORD *)(v49 + 96) = v112;
  v113 = *(_DWORD **)(v51 + 68);
  v114 = 12 * (v112 & (v113[1] - 1));
  ++*(_DWORD *)(*v113 + v114 + 4);
  v115 = *(_DWORD *)(**(_DWORD **)(v51 + 68) + v114);
  *(_DWORD *)(v49 + 80) = 0;
  *(_DWORD *)(v49 + 84) = v115;
  v116 = **(_DWORD **)(v51 + 68) + v114;
  if ( *(_DWORD *)v116 )
  {
    *(_DWORD *)(*(_DWORD *)v116 + 12) = v155;
    v116 = **(_DWORD **)(v51 + 68) + v114;
  }
  *(_DWORD *)v116 = v155;
  if ( *(_DWORD *)(**(_DWORD **)(v51 + 68) + v114 + 4) >= (unsigned int)(10
                                                                       * (*(_DWORD *)(**(_DWORD **)(v51 + 68) + v114 + 8)
                                                                        + 1)) )
  {
    v117 = *(_DWORD *)(v49 + 68);
    if ( *(_DWORD *)(v117 + 36) != 1 )
    {
      v118 = 24 * *(_DWORD *)(v117 + 4);
      v119 = malloc(v118);
      v120 = v119;
      if ( !v119 )
        goto LABEL_251;
      memset(v119, 0, v118);
      *(_DWORD *)(v117 + 24) = (((2 * *(_DWORD *)(v117 + 4) - 1) & *(_DWORD *)(v117 + 12)) != 0)
                             + (*(_DWORD *)(v117 + 12) >> (*(_BYTE *)(v117 + 8) + 1));
      *(_DWORD *)(*(_DWORD *)(v49 + 68) + 28) = 0;
      v121 = *(_DWORD *)(v49 + 68);
      v122 = *(_DWORD *)(v121 + 4);
      if ( v122 )
      {
        v159 = v3;
        v123 = 0;
        v124 = v49;
        for ( i = 0; i < v122; ++i )
        {
          v125 = *(_DWORD **)(*(_DWORD *)v121 + v123);
          if ( v125 )
          {
            while ( 1 )
            {
              v126 = (_DWORD *)v125[4];
              v127 = 3 * ((2 * v122 - 1) & v125[7]);
              v128 = (char *)&v120[v127];
              v129 = *((_DWORD *)v128 + 1) + 1;
              *((_DWORD *)v128 + 1) = v129;
              if ( v129 > *(_DWORD *)(v121 + 24) )
              {
                ++*(_DWORD *)(v121 + 28);
                *((_DWORD *)v128 + 2) = sub_48EC0(*((_DWORD *)v128 + 1), *(_DWORD *)(*(_DWORD *)(v124 + 68) + 24));
              }
              v125[3] = 0;
              v125[4] = v120[v127];
              v130 = v120[v127];
              if ( v130 )
                *(_DWORD *)(v130 + 12) = v125;
              v120[v127] = v125;
              v121 = *(_DWORD *)(v124 + 68);
              if ( !v126 )
                break;
              v122 = *(_DWORD *)(v121 + 4);
              v125 = v126;
            }
            v122 = *(_DWORD *)(v121 + 4);
          }
          v123 += 12;
        }
        v49 = v124;
        v3 = v159;
      }
      free(*(void **)v121);
      *(_DWORD *)(*(_DWORD *)(v49 + 68) + 4) *= 2;
      ++*(_DWORD *)(*(_DWORD *)(v49 + 68) + 8);
      **(_DWORD **)(v49 + 68) = v120;
      v131 = *(_DWORD **)(v49 + 68);
      v132 = v131[3];
      v133 = v131[7];
      v134 = v133 > v132 >> 1;
      if ( v133 <= v132 >> 1 )
        v135 = 0;
      else
        v135 = v131[8];
      if ( v134 )
        ++v135;
      v131[8] = v135;
      v136 = *(_DWORD *)(v49 + 68);
      if ( *(_DWORD *)(v136 + 32) > 1u )
        *(_DWORD *)(v136 + 36) = 1;
    }
  }
  LODWORD(v2) = 8 * (29 - *(unsigned __int8 *)(v3 + 72));
  v137 = bswap32(*(_DWORD *)(v3 + 72)) & 0xFFFFFF;
  v138 = sub_493C8(vshld_u64(0xFFFFu, v2)) / (double)v137;
  if ( v138 != dbl_60080 )
  {
    v154 = sub_494C0(LODWORD(v138), HIDWORD(v138));
    sub_11130(v154, byte_61574, 8u, 0);
    dbl_60080 = v138;
    if ( byte_630C1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
      {
        snprintf(v170, 0x800u, "Network diff set to %s", byte_61574);
        sub_38438(7, v170, 0);
      }
    }
  }
  if ( pthread_rwlock_unlock(&stru_61550) )
    sub_B700("test_work_current", 5408);
  off_60178();
  if ( v158 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v170, 0x800u, "Deleted block %d from database", v158);
    sub_38438(7, v170, 0);
  }
  if ( pthread_mutex_lock(&stru_63F78) )
    sub_B4E4("set_curblock", 5302);
  if ( pthread_rwlock_wrlock(&stru_63F90) )
    sub_B550("set_curblock", 5302);
  sub_2B13C(&dword_63618, v139, v140, v141);
  strcpy(dest, s);
  timer = dword_63618;
  dword_6157C[0] = s2;
  dword_6157C[1] = v162;
  dword_6157C[2] = v163;
  dword_6157C[3] = v164;
  unk_6158C = v165;
  unk_61590 = v166;
  unk_61594 = v167;
  unk_61598 = v168;
  v142 = localtime(&timer);
  snprintf(byte_6159C, 0x20u, "[%02d:%02d:%02d]", v142->tm_hour, v142->tm_min, v142->tm_sec);
  if ( pthread_rwlock_unlock(&stru_63F90) )
    sub_B700("set_curblock", 5307);
  if ( pthread_mutex_unlock(&stru_63F78) )
    sub_B694("set_curblock", 5307);
  off_60178();
  for ( j = 0; j != 57; ++j )
  {
    if ( dest[j] != 48 )
      break;
  }
  strncpy(byte_615BC, &dest[j], 8u);
  byte_615C4 = 0;
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v170, 0x800u, "New block: %s... diff %s", dest, byte_61574);
    sub_38438(7, v170, 0);
  }
  v144 = v162;
  v145 = v163;
  v146 = v164;
  v62 = dword_640BC == 1;
  v157[134] = s2;
  v157[135] = v144;
  v157[136] = v145;
  v157[137] = v146;
  v147 = v165;
  v148 = v166;
  v149 = v167;
  v150 = v168;
  v157[138] = v165;
  v157[139] = v148;
  v157[140] = v149;
  v157[141] = v150;
  if ( v62 )
  {
    v4 = 0;
LABEL_41:
    *(_BYTE *)(v3 + 280) = 0;
    return v4;
  }
  v151 = *(unsigned __int8 *)(v3 + 280);
  *(_DWORD *)(v3 + 336) = ++dword_6136C;
  if ( v151 )
  {
    v152 = (unsigned __int8)byte_630C1;
    if ( *(_BYTE *)(v3 + 284) )
    {
      if ( byte_630C1 )
      {
        if ( byte_632F0 || byte_630C0 || (v152 = dword_60964, dword_60964 > 6) )
        {
          snprintf(v170, 0x800u, "Stratum from pool %d detected new block", *v157);
          v147 = sub_38438(7, v170, 0);
        }
      }
    }
    else if ( byte_630C1 )
    {
      if ( byte_632F0 || byte_630C0 || (v152 = dword_60964, dword_60964 > 6) )
      {
        v153 = "";
        if ( *(_BYTE *)(v3 + 324) )
          v153 = "GBT ";
        snprintf(v170, 0x800u, "%sLONGPOLL from pool %d detected new block", v153, **(_DWORD **)(v3 + 260));
        v147 = sub_38438(7, v170, 0);
      }
    }
  }
  else if ( byte_64219 )
  {
    v152 = *((unsigned __int8 *)v157 + 868);
    if ( !*((_BYTE *)v157 + 868) )
    {
      v152 = (unsigned __int8)byte_630C1;
      if ( byte_630C1 )
      {
        if ( byte_632F0 || byte_630C0 || (v152 = dword_60964, dword_60964 > 6) )
        {
          strcpy(v170, "New block detected on network before pool notification");
          v147 = sub_38438(7, v170, 0);
        }
      }
    }
  }
  else
  {
    v152 = *((unsigned __int8 *)v157 + 868);
    if ( !*((_BYTE *)v157 + 868) )
    {
      v152 = (unsigned __int8)byte_630C1;
      if ( byte_630C1 )
      {
        if ( byte_632F0 || byte_630C0 || (v152 = dword_60964, dword_60964 > 6) )
        {
          strcpy(v170, "New block detected on network");
          v147 = sub_38438(7, v170, 0);
        }
      }
    }
  }
  sub_16C8C(v147, v148, v151, v152);
  v4 = 1;
  *(_BYTE *)(v3 + 280) = 0;
  return v4;
}
