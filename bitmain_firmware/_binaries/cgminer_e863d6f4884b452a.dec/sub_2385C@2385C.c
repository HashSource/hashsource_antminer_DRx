int __fastcall sub_2385C(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r4
  size_t v9; // r6
  int v10; // r3
  int v11; // r0
  unsigned __int8 *v12; // r12
  unsigned int v13; // r5
  int v14; // r10
  int v15; // r7
  int v16; // r2
  int v17; // r3
  unsigned int v18; // r5
  unsigned int v19; // r3
  int v20; // r2
  unsigned int v21; // r1
  unsigned int v22; // r3
  int v23; // r2
  unsigned int v24; // r1
  unsigned int v25; // r3
  size_t v26; // r4
  int *v27; // r0
  char *v28; // r0
  int v29; // r8
  int v30; // r3
  int v31; // r5
  int v32; // lr
  int v33; // r7
  int v34; // r3
  int v35; // r2
  unsigned int v36; // r12
  int v37; // r6
  int v38; // r4
  int v39; // r1
  int v40; // r0
  int v41; // r4
  bool v42; // zf
  int v43; // r9
  int v44; // r9
  int v45; // r6
  bool v46; // zf
  int v47; // r10
  int v48; // r2
  _DWORD *v49; // r0
  int v50; // r2
  unsigned int v51; // r3
  unsigned int v52; // r5
  int v53; // r4
  unsigned int v54; // r3
  unsigned int v55; // r5
  int v56; // r4
  int v57; // r4
  int v58; // r5
  int v59; // r4
  int v60; // r4
  int v61; // r3
  unsigned int v62; // lr
  unsigned __int8 *v63; // r9
  _DWORD *v64; // r4
  int v65; // r7
  unsigned int v66; // r6
  int v67; // r3
  size_t v68; // r0
  unsigned int v69; // r10
  unsigned __int8 *v70; // r11
  int v71; // r4
  int v72; // r1
  int v73; // r0
  int v74; // r3
  unsigned __int8 *v75; // r9
  int v76; // r12
  unsigned int v77; // r1
  unsigned int v78; // r3
  int v79; // r2
  unsigned int v80; // r3
  unsigned int v81; // r1
  int v82; // r2
  unsigned int v83; // r3
  unsigned int v84; // r1
  size_t v85; // r7
  int v86; // r3
  unsigned int v87; // r6
  unsigned int v88; // r7
  int v89; // r3
  unsigned int v90; // r6
  unsigned int v91; // r7
  int v92; // r3
  unsigned int v93; // r3
  int v94; // r3
  int v95; // r2
  int v96; // r2
  int v97; // r1
  int *v98; // r2
  __int64 v99; // r2
  int v100; // r4
  _DWORD *v101; // r6
  unsigned int v102; // r0
  unsigned int v103; // r3
  int v104; // r2
  unsigned int v105; // r4
  int v106; // r9
  _DWORD *v107; // r5
  _DWORD *v108; // r7
  int v109; // r4
  char *v110; // r11
  unsigned int v111; // r1
  int v112; // r3
  _DWORD *v113; // r3
  unsigned int v114; // r2
  unsigned int v115; // r1
  bool v116; // cc
  int v117; // r2
  int v118; // r3
  unsigned int v119; // r6
  double v120; // d8
  struct tm *v121; // r0
  int v122; // r7
  char *v123; // r3
  int v124; // t1
  int v125; // r1
  int v126; // r2
  int v127; // r3
  int v128; // r1
  int v129; // r2
  int v130; // r3
  int v131; // r1
  int v132; // r10
  int v133; // r6
  int v134; // r6
  int v135; // r4
  int v136; // r0
  int v137; // r5
  int v138; // r2
  int v139; // r1
  int v140; // r6
  _DWORD *v141; // r0
  int v142; // r1
  int v143; // r0
  int v144; // r2
  int v145; // r3
  _DWORD *v146; // r0
  void *v147; // r0
  int v148; // r6
  int v149; // r0
  int v150; // r1
  int v151; // r2
  int v152; // r3
  int v153; // r1
  int v154; // r2
  int v155; // r3
  int v156; // r4
  int *v157; // r0
  char *v158; // r3
  char *v159; // r3
  int *v160; // r0
  unsigned __int64 v161; // r0
  int *v162; // r0
  int *v163; // r0
  int *v164; // r0
  int *v165; // r0
  int *v166; // r0
  void *v167; // r0
  int v168; // [sp+14h] [bp-890h]
  _DWORD *v170; // [sp+20h] [bp-884h]
  int v171; // [sp+28h] [bp-87Ch]
  unsigned int i; // [sp+28h] [bp-87Ch]
  int v173; // [sp+2Ch] [bp-878h]
  int s1; // [sp+3Ch] [bp-868h] BYREF
  int v175; // [sp+40h] [bp-864h]
  int v176; // [sp+44h] [bp-860h]
  int v177; // [sp+48h] [bp-85Ch]
  int v178; // [sp+4Ch] [bp-858h]
  int v179; // [sp+50h] [bp-854h]
  int v180; // [sp+54h] [bp-850h]
  int v181; // [sp+58h] [bp-84Ch]
  char s[12]; // [sp+5Ch] [bp-848h] BYREF
  char v183; // [sp+68h] [bp-83Ch] BYREF
  time_t v184[513]; // [sp+A0h] [bp-804h] BYREF

  v168 = *(unsigned __int8 *)(a1 + 338);
  if ( *(_BYTE *)(a1 + 338) )
    return *(unsigned __int8 *)(a1 + 338);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 16);
  v170 = *(_DWORD **)(a1 + 316);
  s1 = *(_DWORD *)(a1 + 4);
  v175 = v2;
  v176 = v3;
  v177 = v4;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 32);
  v178 = *(_DWORD *)(a1 + 20);
  v179 = v5;
  v180 = v6;
  v181 = v7;
  if ( pthread_rwlock_rdlock(&stru_6F318) )
  {
    v157 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v157,
      "cgminer.c",
      "block_exists",
      5657);
    goto LABEL_13;
  }
  if ( dword_6F338 )
  {
    v8 = -17973521;
    v9 = strlen(s);
    v10 = -1640531527;
    v11 = -1640531527;
    if ( v9 > 0xB )
    {
      v12 = (unsigned __int8 *)&v183;
      v62 = v9;
      v13 = -1640531527;
      do
      {
        v14 = *(v12 - 6);
        v62 -= 12;
        v15 = *(v12 - 7);
        v16 = *(v12 - 10);
        v63 = v12;
        v17 = *(v12 - 2);
        v12 += 12;
        v18 = v13 + (v14 << 16) + (v15 << 8) + *(v12 - 20) + (*(v12 - 17) << 24);
        v19 = *(v12 - 16) + (v17 << 16) + (*(v12 - 15) << 8) + (*(v12 - 13) << 24) + v8;
        v20 = ((v16 << 16) + (*(v12 - 23) << 8) + *(v12 - 24) + (*(v12 - 21) << 24) - v18 - v19 + v11) ^ (v19 >> 13);
        v21 = (v18 - v19 - v20) ^ (v20 << 8);
        v22 = (v19 - v20 - v21) ^ (v21 >> 13);
        v23 = (v20 - v21 - v22) ^ (v22 >> 12);
        v24 = (v21 - v22 - v23) ^ (v23 << 16);
        v25 = (v22 - v23 - v24) ^ (v24 >> 5);
        v11 = (v23 - v24 - v25) ^ (v25 >> 3);
        v13 = (v24 - v25 - v11) ^ (v11 << 10);
        v8 = (v25 - v11 - v13) ^ (v13 >> 15);
      }
      while ( v62 > 0xB );
      v10 = (v24 - v25 - v11) ^ (v11 << 10);
    }
    else
    {
      v62 = v9;
      v63 = (unsigned __int8 *)s;
    }
    v26 = v8 + v9;
    switch ( v62 )
    {
      case 1u:
        goto LABEL_59;
      case 2u:
        goto LABEL_58;
      case 3u:
        goto LABEL_57;
      case 4u:
        goto LABEL_56;
      case 5u:
        goto LABEL_55;
      case 6u:
        goto LABEL_54;
      case 7u:
        goto LABEL_53;
      case 8u:
        goto LABEL_52;
      case 9u:
        goto LABEL_51;
      case 0xAu:
        goto LABEL_50;
      case 0xBu:
        v26 += v63[10] << 24;
LABEL_50:
        v26 += v63[9] << 16;
LABEL_51:
        v26 += v63[8] << 8;
LABEL_52:
        v10 += v63[7] << 24;
LABEL_53:
        v10 += v63[6] << 16;
LABEL_54:
        v10 += v63[5] << 8;
LABEL_55:
        v10 += v63[4];
LABEL_56:
        v11 += v63[3] << 24;
LABEL_57:
        v11 += v63[2] << 16;
LABEL_58:
        v11 += v63[1] << 8;
LABEL_59:
        v11 += *v63;
        break;
      default:
        break;
    }
    v48 = v11 - v10;
    v49 = *(_DWORD **)(dword_6F338 + 68);
    v50 = (v48 - v26) ^ (v26 >> 13);
    v51 = (v10 - v26 - v50) ^ (v50 << 8);
    v52 = (v26 - v50 - v51) ^ (v51 >> 13);
    v53 = (v50 - v51 - v52) ^ (v52 >> 12);
    v54 = (v51 - v52 - v53) ^ (v53 << 16);
    v55 = (v52 - v53 - v54) ^ (v54 >> 5);
    v56 = (v53 - v54 - v55) ^ (v55 >> 3);
    v57 = *(_DWORD *)(*v49
                    + 12
                    * ((v49[1] - 1)
                     & ((v55 - v56 - ((v54 - v55 - v56) ^ (v56 << 10)))
                      ^ (((v54 - v55 - v56) ^ (v56 << 10)) >> 15))));
    if ( v57 )
    {
      v58 = -v49[5];
      v59 = v57 - v49[5];
      if ( v59 )
      {
        while ( v9 != *(_DWORD *)(v59 + 92) || memcmp(*(const void **)(v59 + 88), s, v9) )
        {
          v60 = *(_DWORD *)(v59 + 84);
          if ( v60 )
          {
            v59 = v60 + v58;
            if ( v59 )
              continue;
          }
          goto LABEL_11;
        }
        if ( !pthread_rwlock_unlock(&stru_6F318) )
        {
          off_6CB70();
          if ( !memcmp(v170 + 136, &s1, 0x20u) )
          {
            v61 = 1;
          }
          else
          {
            v149 = memcmp(&s1, dword_6F344, 0x20u);
            v61 = (unsigned __int8)byte_6FA71;
            if ( !v149 )
            {
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf((char *)v184, 0x800u, "Pool %d now up to date", *v170);
                sub_343C4(7, v184, 0);
              }
              v168 = 1;
              v150 = v175;
              v151 = v176;
              v152 = v177;
              v170[136] = s1;
              v170[137] = v150;
              v170[138] = v151;
              v170[139] = v152;
              v153 = v179;
              v154 = v180;
              v155 = v181;
              v170[140] = v178;
              v170[141] = v153;
              v170[142] = v154;
              v170[143] = v155;
              goto LABEL_71;
            }
            if ( byte_6FA71 )
            {
              if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
              {
                snprintf((char *)v184, 0x800u, "Stale data from pool %d", *v170);
                sub_343C4(7, v184, 0);
              }
              else
              {
                v168 = (unsigned __int8)byte_6FA70;
              }
LABEL_71:
              if ( *(_BYTE *)(a1 + 336) )
              {
                v116 = (unsigned int)(dword_6DB74 - 3) > 1;
                *(_DWORD *)(a1 + 396) = ++dword_6DDF0;
                if ( !v116 || (v156 = *(_DWORD *)(a1 + 316), v156 == sub_1E098()) )
                {
                  if ( *(_BYTE *)(a1 + 340) )
                  {
                    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                    {
                      snprintf((char *)v184, 0x800u, "Stratum from pool %d requested work restart", *v170);
                      sub_343C4(7, v184, 0);
                    }
                  }
                  else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                  {
                    v158 = &byte_57FF0;
                    if ( *(_BYTE *)(a1 + 384) )
                      v158 = "GBT ";
                    snprintf(
                      (char *)v184,
                      0x800u,
                      "%sLONGPOLL from pool %d requested work restart",
                      v158,
                      **(_DWORD **)(a1 + 316));
                    sub_343C4(7, v184, 0);
                  }
                  sub_1B73C();
                }
              }
              goto LABEL_80;
            }
          }
          v168 = v61;
          goto LABEL_71;
        }
        goto LABEL_12;
      }
    }
  }
LABEL_11:
  if ( pthread_rwlock_unlock(&stru_6F318) )
  {
LABEL_12:
    v27 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v27,
      "cgminer.c",
      "block_exists",
      5659);
    goto LABEL_13;
  }
  off_6CB70();
  v28 = (char *)calloc(0x68u, 1u);
  v29 = (int)v28;
  if ( !v28 )
  {
    strcpy((char *)v184, "test_work_current OOM");
    sub_343C4(3, v184, 1);
    sub_1B070(1, 1);
  }
  strcpy(v28, s);
  v30 = dword_73A18;
  *(_DWORD *)(v29 + 100) = dword_73A18;
  dword_73A18 = v30 + 1;
  v173 = pthread_rwlock_wrlock(&stru_6F318);
  if ( v173 )
  {
    v160 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v160,
      "cgminer.c",
      "test_work_current",
      5731);
    goto LABEL_13;
  }
  v31 = dword_6F338;
  if ( !dword_6F338 )
  {
    *(_DWORD *)(v29 + 88) = v29;
    *(_DWORD *)(v29 + 76) = 0;
    *(_DWORD *)(v29 + 92) = strlen((const char *)v29);
    goto LABEL_185;
  }
  if ( *(_DWORD *)(*(_DWORD *)(dword_6F338 + 68) + 12) <= 6u )
  {
    *(_DWORD *)(v29 + 88) = v29;
    *(_DWORD *)(v29 + 76) = 0;
    *(_DWORD *)(v29 + 92) = strlen((const char *)v29);
LABEL_82:
    v171 = v29 + 68;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v31 + 68) + 16) + 8) = v29;
    *(_DWORD *)(v29 + 72) = *(_DWORD *)(*(_DWORD *)(v31 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
    *(_DWORD *)(*(_DWORD *)(v31 + 68) + 16) = v29 + 68;
    v64 = *(_DWORD **)(v31 + 68);
    goto LABEL_83;
  }
  v32 = dword_6F338 + 68;
  v33 = 1;
  while ( 2 )
  {
    v34 = v32;
    v32 = 0;
    v35 = 0;
    v36 = 0;
    do
    {
      ++v36;
      if ( v33 )
      {
        v37 = *(_DWORD *)(v34 + 8);
        if ( v37 && (v38 = *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20), (v37 += v38) != 0) )
        {
          v39 = 1;
          do
          {
            if ( v39 == v33 )
            {
              v40 = v39;
              goto LABEL_28;
            }
            v37 = *(_DWORD *)(v37 + 8);
            ++v39;
            if ( !v37 )
              break;
            v37 += v38;
          }
          while ( v37 );
          v40 = v33;
        }
        else
        {
          v40 = v33;
          v39 = 1;
        }
      }
      else
      {
        v37 = v34;
        v40 = 0;
        v39 = 0;
      }
LABEL_28:
      v41 = v34;
      v34 = v37;
      while ( v39 )
      {
        v46 = v34 == 0;
        if ( v34 )
          v46 = v40 == 0;
        if ( v46 )
        {
          if ( !v41 )
            goto LABEL_162;
          v47 = *(_DWORD *)(v41 + 8);
          if ( v47 )
            v47 += *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
        }
        else
        {
          v132 = *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
          if ( *(_DWORD *)(v41 - v132 + 100) - *(_DWORD *)(v34 - v132 + 100) > 0 )
          {
            v133 = *(_DWORD *)(v34 + 8);
            v44 = v133 + v132;
            if ( !v133 )
            {
              v44 = 0;
              --v40;
              if ( !v35 )
                goto LABEL_157;
              goto LABEL_36;
            }
LABEL_35:
            --v40;
            if ( !v35 )
            {
LABEL_157:
              v35 = v34;
              v34 = v44;
              goto LABEL_158;
            }
LABEL_36:
            *(_DWORD *)(v35 + 8) = v34 - *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
            if ( v34 )
            {
LABEL_37:
              v45 = v35 - *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
              v35 = v34;
              v34 = v44;
              goto LABEL_38;
            }
            v35 = 0;
            v34 = v44;
            continue;
          }
          if ( !v41 )
          {
LABEL_162:
            v47 = v41;
            goto LABEL_46;
          }
          v134 = *(_DWORD *)(v41 + 8);
          v47 = v132 + v134;
          if ( !v134 )
            v47 = 0;
        }
LABEL_46:
        --v39;
        if ( v35 )
        {
          if ( v41 )
          {
            v44 = v34;
            v34 = v41;
            v148 = v41 - *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
            v41 = v47;
            *(_DWORD *)(v35 + 8) = v148;
            goto LABEL_37;
          }
          *(_DWORD *)(v35 + 8) = 0;
          v35 = 0;
          v41 = v47;
          continue;
        }
        v35 = v41;
        v41 = v47;
LABEL_158:
        v32 = v35;
        v45 = 0;
        if ( !v35 )
          continue;
LABEL_38:
        *(_DWORD *)(v35 + 4) = v45;
      }
      v42 = v40 == 0;
      if ( v40 )
        v42 = v34 == 0;
      if ( !v42 )
      {
        v43 = *(_DWORD *)(v34 + 8);
        if ( v43 )
          v44 = v43 + *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
        else
          v44 = v39;
        goto LABEL_35;
      }
    }
    while ( v34 );
    if ( v35 )
      *(_DWORD *)(v35 + 8) = 0;
    if ( v36 > 1 )
    {
      v33 *= 2;
      if ( !v32 )
      {
        v35 = 0;
        break;
      }
      continue;
    }
    break;
  }
  *(_DWORD *)(*(_DWORD *)(v31 + 68) + 16) = v35;
  v135 = v32 - *(_DWORD *)(*(_DWORD *)(v31 + 68) + 20);
  v136 = *(_DWORD *)(v135 + 72);
  dword_6F338 = v135;
  v173 = *(_DWORD *)(v135 + 100);
  if ( !v136 )
  {
    v140 = *(_DWORD *)(v135 + 76);
    v137 = *(_DWORD *)(v135 + 68);
    if ( !v140 )
    {
      v167 = *(void **)v137;
      v31 = 0;
      free(v167);
      free(*(void **)(v135 + 68));
      dword_6F338 = 0;
      goto LABEL_184;
    }
    v139 = *(_DWORD *)(v137 + 20);
    v138 = v135 + 68;
    if ( v135 == *(_DWORD *)(v137 + 16) - v139 )
      goto LABEL_239;
LABEL_243:
    v31 = v140;
    dword_6F338 = v140;
    goto LABEL_175;
  }
  v137 = *(_DWORD *)(v135 + 68);
  v138 = v135 + 68;
  v139 = *(_DWORD *)(v137 + 20);
  if ( v135 != *(_DWORD *)(v137 + 16) - v139 )
    goto LABEL_174;
LABEL_239:
  *(_DWORD *)(v137 + 16) = v139 + v136;
  v136 = *(_DWORD *)(v135 + 72);
  if ( !v136 )
  {
    v140 = *(_DWORD *)(v135 + 76);
    goto LABEL_243;
  }
  v139 = *(_DWORD *)(*(_DWORD *)(v135 + 68) + 20);
LABEL_174:
  v31 = v135;
  *(_DWORD *)(v139 + v136 + 8) = *(_DWORD *)(v135 + 76);
  v140 = *(_DWORD *)(v135 + 76);
LABEL_175:
  v141 = *(_DWORD **)(v31 + 68);
  if ( v140 )
  {
    *(_DWORD *)(v140 + v141[5] + 4) = *(_DWORD *)(v135 + 72);
    v141 = *(_DWORD **)(v31 + 68);
  }
  v142 = 12 * ((v141[1] - 1) & *(_DWORD *)(v135 + 96));
  --*(_DWORD *)(*v141 + v142 + 4);
  v143 = **(_DWORD **)(v31 + 68);
  if ( *(_DWORD *)(v143 + v142) == v138 )
    *(_DWORD *)(v143 + v142) = *(_DWORD *)(v135 + 84);
  v144 = *(_DWORD *)(v135 + 84);
  v145 = *(_DWORD *)(v135 + 80);
  if ( v145 )
  {
    *(_DWORD *)(v145 + 16) = v144;
    v144 = *(_DWORD *)(v135 + 84);
  }
  if ( v144 )
    *(_DWORD *)(v144 + 12) = *(_DWORD *)(v135 + 80);
  --*(_DWORD *)(*(_DWORD *)(v31 + 68) + 12);
LABEL_184:
  free((void *)v135);
  *(_DWORD *)(v29 + 88) = v29;
  *(_DWORD *)(v29 + 76) = 0;
  *(_DWORD *)(v29 + 92) = strlen((const char *)v29);
  if ( v31 )
    goto LABEL_82;
LABEL_185:
  *(_DWORD *)(v29 + 72) = 0;
  dword_6F338 = v29;
  v146 = malloc(0x2Cu);
  v64 = v146;
  *(_DWORD *)(v29 + 68) = v146;
  if ( !v146 )
    goto LABEL_257;
  memset(v146 + 3, 0, 0x20u);
  v171 = v29 + 68;
  v64[4] = v29 + 68;
  v64[1] = 32;
  v64[2] = 5;
  v64[5] = 68;
  v147 = calloc(0x180u, 1u);
  *v64 = v147;
  if ( !v147 )
    goto LABEL_257;
  v31 = v29;
  v64[10] = -1609490463;
LABEL_83:
  v65 = -17973521;
  v66 = -1640531527;
  ++v64[3];
  v67 = *(_DWORD *)(v31 + 68);
  *(_DWORD *)(v29 + 96) = -17973521;
  *(_DWORD *)(v29 + 68) = v67;
  v68 = strlen((const char *)v29);
  v69 = v68;
  if ( v68 <= 0xB )
  {
    v71 = -1640531527;
    v75 = (unsigned __int8 *)v29;
  }
  else
  {
    v70 = (unsigned __int8 *)(v29 + 12);
    v71 = -1640531527;
    do
    {
      v72 = *(v70 - 2);
      v69 -= 12;
      v73 = *(v70 - 3);
      v74 = *(v70 - 6);
      v75 = v70;
      v76 = *(v70 - 7);
      v70 += 12;
      v77 = (v72 << 16) + (v73 << 8) + *(v70 - 16) + (*(v70 - 13) << 24) + v65;
      v78 = (v74 << 16) + (v76 << 8) + *(v70 - 20) + (*(v70 - 17) << 24) + v66;
      v79 = ((*(v70 - 22) << 16) + (*(v70 - 23) << 8) + *(v70 - 24) + (*(v70 - 21) << 24) - v77 - v78 + v71)
          ^ (v77 >> 13);
      v80 = (v78 - v77 - v79) ^ (v79 << 8);
      v81 = (v77 - v79 - v80) ^ (v80 >> 13);
      v82 = (v79 - v80 - v81) ^ (v81 >> 12);
      v83 = (v80 - v81 - v82) ^ (v82 << 16);
      v84 = (v81 - v82 - v83) ^ (v83 >> 5);
      v71 = (v82 - v83 - v84) ^ (v84 >> 3);
      v66 = (v83 - v84 - v71) ^ (v71 << 10);
      v65 = (v84 - v71 - v66) ^ (v66 >> 15);
      *(_DWORD *)(v29 + 96) = v65;
    }
    while ( v69 > 0xB );
    v68 = strlen((const char *)v29);
  }
  v85 = v65 + v68;
  *(_DWORD *)(v29 + 96) = v85;
  switch ( v69 )
  {
    case 1u:
      goto LABEL_98;
    case 2u:
      goto LABEL_97;
    case 3u:
      goto LABEL_96;
    case 4u:
      goto LABEL_95;
    case 5u:
      goto LABEL_94;
    case 6u:
      goto LABEL_93;
    case 7u:
      goto LABEL_92;
    case 8u:
      goto LABEL_91;
    case 9u:
      goto LABEL_90;
    case 0xAu:
      goto LABEL_89;
    case 0xBu:
      v85 += v75[10] << 24;
      *(_DWORD *)(v29 + 96) = v85;
LABEL_89:
      v85 += v75[9] << 16;
      *(_DWORD *)(v29 + 96) = v85;
LABEL_90:
      v85 += v75[8] << 8;
      *(_DWORD *)(v29 + 96) = v85;
LABEL_91:
      v66 += v75[7] << 24;
LABEL_92:
      v66 += v75[6] << 16;
LABEL_93:
      v66 += v75[5] << 8;
LABEL_94:
      v66 += v75[4];
LABEL_95:
      v71 += v75[3] << 24;
LABEL_96:
      v71 += v75[2] << 16;
LABEL_97:
      v71 += v75[1] << 8;
LABEL_98:
      v71 += *v75;
      break;
    default:
      break;
  }
  v86 = (v71 - v66 - v85) ^ (v85 >> 13);
  v87 = (v66 - v85 - v86) ^ (v86 << 8);
  v88 = (v85 - v86 - v87) ^ (v87 >> 13);
  v89 = (v86 - v87 - v88) ^ (v88 >> 12);
  v90 = (v87 - v88 - v89) ^ (v89 << 16);
  v91 = (v88 - v89 - v90) ^ (v90 >> 5);
  v92 = (v89 - v90 - v91) ^ (v91 >> 3);
  v93 = (v91 - v92 - ((v90 - v91 - v92) ^ (v92 << 10))) ^ (((v90 - v91 - v92) ^ (v92 << 10)) >> 15);
  *(_DWORD *)(v29 + 96) = v93;
  v94 = 12 * (v93 & (*(_DWORD *)(*(_DWORD *)(v31 + 68) + 4) - 1));
  ++*(_DWORD *)(**(_DWORD **)(v31 + 68) + v94 + 4);
  v95 = *(_DWORD *)(**(_DWORD **)(v31 + 68) + v94);
  *(_DWORD *)(v29 + 80) = 0;
  *(_DWORD *)(v29 + 84) = v95;
  v96 = **(_DWORD **)(v31 + 68);
  v97 = *(_DWORD *)(v96 + v94);
  v98 = (int *)(v96 + v94);
  if ( v97 )
  {
    *(_DWORD *)(v97 + 12) = v171;
    v98 = (int *)(**(_DWORD **)(v31 + 68) + v94);
  }
  *v98 = v171;
  v99 = *(_QWORD *)(**(_DWORD **)(v31 + 68) + v94 + 4);
  if ( (unsigned int)v99 >= 10 * (HIDWORD(v99) + 1) )
  {
    v100 = *(_DWORD *)(v29 + 68);
    if ( *(_DWORD *)(v100 + 36) != 1 )
    {
      v101 = calloc(24 * *(_DWORD *)(v100 + 4), 1u);
      if ( v101 )
      {
        v102 = *(_DWORD *)(v100 + 12);
        v103 = v102 >> (*(_QWORD *)(v100 + 8) + 1);
        if ( ((2 * *(_DWORD *)(v100 + 4) - 1) & v102) != 0 )
          ++v103;
        *(_DWORD *)(v100 + 24) = v103;
        *(_DWORD *)(*(_DWORD *)(v29 + 68) + 28) = 0;
        v104 = *(_DWORD *)(v29 + 68);
        v105 = *(_DWORD *)(v104 + 4);
        if ( v105 )
        {
          v106 = 0;
          for ( i = 0; i < v105; ++i )
          {
            v107 = *(_DWORD **)(*(_DWORD *)v104 + v106);
            if ( v107 )
            {
              while ( 1 )
              {
                v108 = (_DWORD *)v107[4];
                v109 = 3 * ((2 * v105 - 1) & v107[7]);
                v110 = (char *)&v101[v109];
                v111 = *((_DWORD *)v110 + 1) + 1;
                *((_DWORD *)v110 + 1) = v111;
                if ( v111 > *(_DWORD *)(v104 + 24) )
                {
                  ++*(_DWORD *)(v104 + 28);
                  *((_DWORD *)v110 + 2) = sub_49878(*((_DWORD *)v110 + 1), *(_DWORD *)(*(_DWORD *)(v29 + 68) + 24));
                }
                v107[3] = 0;
                v107[4] = v101[v109];
                v112 = v101[v109];
                if ( v112 )
                  *(_DWORD *)(v112 + 12) = v107;
                v101[v109] = v107;
                v104 = *(_DWORD *)(v29 + 68);
                if ( !v108 )
                  break;
                v105 = *(_DWORD *)(v104 + 4);
                v107 = v108;
              }
              v105 = *(_DWORD *)(v104 + 4);
            }
            v106 += 12;
          }
        }
        free(*(void **)v104);
        *(_DWORD *)(*(_DWORD *)(v29 + 68) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(v29 + 68) + 8);
        **(_DWORD **)(v29 + 68) = v101;
        v113 = *(_DWORD **)(v29 + 68);
        v114 = v113[7];
        v115 = v113[3];
        v116 = v114 > v115 >> 1;
        if ( v114 <= v115 >> 1 )
          v117 = 0;
        else
          v117 = v113[8];
        if ( v116 )
          ++v117;
        v113[8] = v117;
        v118 = *(_DWORD *)(v29 + 68);
        if ( *(_DWORD *)(v118 + 32) > 1u )
          *(_DWORD *)(v118 + 36) = 1;
        goto LABEL_125;
      }
LABEL_257:
      exit(-1);
    }
  }
LABEL_125:
  v119 = bswap32(*(_DWORD *)(a1 + 72));
  v120 = sub_4A0AC(
           0xFFFF << (8 * (29 - *(_BYTE *)(a1 + 72))),
           (0xFFFF << (8 * (29 - *(_BYTE *)(a1 + 72)) - 32)) | (0xFFFFu >> (32 - 8 * (29 - *(_BYTE *)(a1 + 72)))))
       / (double)(v119 & 0xFFFFFF);
  if ( v120 != dbl_6CA90 )
  {
    v161 = sub_4A178(LODWORD(v120), HIDWORD(v120));
    sub_16DA4(v161, byte_6F33C, 8u, 0);
    dbl_6CA90 = v120;
    if ( byte_6FA71 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        snprintf((char *)v184, 0x800u, "Network diff set to %s", byte_6F33C);
        sub_343C4(7, v184, 0);
      }
    }
  }
  if ( pthread_rwlock_unlock(&stru_6F318) )
  {
    v162 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v162,
      "cgminer.c",
      "test_work_current",
      5747);
    goto LABEL_13;
  }
  off_6CB70();
  if ( v173 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf((char *)v184, 0x800u, "Deleted block %d from database", v173);
    sub_343C4(7, v184, 0);
  }
  if ( pthread_mutex_lock(&stru_733A8) )
  {
    v163 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v163,
      "cgminer.c",
      "set_curblock",
      5634);
    goto LABEL_13;
  }
  if ( pthread_rwlock_wrlock(&stru_733C0) )
  {
    v165 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v165,
      "cgminer.c",
      "set_curblock",
      5634);
    goto LABEL_13;
  }
  sub_2A69C(&dword_737A8);
  strcpy(byte_72C40, s);
  v184[0] = dword_737A8;
  dword_6F344[0] = s1;
  dword_6F344[1] = v175;
  dword_6F344[2] = v176;
  dword_6F344[3] = v177;
  unk_6F354 = v178;
  unk_6F358 = v179;
  unk_6F35C = v180;
  unk_6F360 = v181;
  v121 = localtime(v184);
  snprintf(byte_6F364, 0x20u, "[%02d:%02d:%02d]", v121->tm_hour, v121->tm_min, v121->tm_sec);
  if ( pthread_rwlock_unlock(&stru_733C0) )
  {
    v164 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v164,
      "cgminer.c",
      "set_curblock",
      5639);
    goto LABEL_13;
  }
  v122 = pthread_mutex_unlock(&stru_733A8);
  if ( v122 )
  {
    v166 = _errno_location();
    snprintf(
      (char *)v184,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v166,
      "cgminer.c",
      "set_curblock",
      5639);
LABEL_13:
    sub_343C4(3, v184, 1);
    sub_1B070(1, 1);
  }
  off_6CB70();
  v123 = byte_72C40;
  do
  {
    v124 = (unsigned __int8)*v123++;
    if ( v124 != 48 )
      break;
    ++v122;
  }
  while ( v122 != 57 );
  strncpy(byte_6F384, &byte_72C40[v122], 8u);
  byte_6F38C = 0;
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf((char *)v184, 0x800u, "New block: %s... diff %s", byte_72C40, byte_6F33C);
    sub_343C4(7, v184, 0);
  }
  v125 = v175;
  v126 = v176;
  v127 = v177;
  v42 = dword_73A18 == 1;
  v170[136] = s1;
  v170[137] = v125;
  v170[138] = v126;
  v170[139] = v127;
  v128 = v179;
  v129 = v180;
  v130 = v181;
  v170[140] = v178;
  v170[141] = v128;
  v170[142] = v129;
  v170[143] = v130;
  if ( !v42 )
  {
    v131 = *(unsigned __int8 *)(a1 + 336);
    *(_DWORD *)(a1 + 396) = ++dword_6DDF0;
    if ( v131 )
    {
      if ( *(_BYTE *)(a1 + 340) )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf((char *)v184, 0x800u, "Stratum from pool %d detected new block", *v170);
          sub_343C4(7, v184, 0);
        }
      }
      else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        v159 = &byte_57FF0;
        if ( *(_BYTE *)(a1 + 384) )
          v159 = "GBT ";
        snprintf((char *)v184, 0x800u, "%sLONGPOLL from pool %d detected new block", v159, **(_DWORD **)(a1 + 316));
        sub_343C4(7, v184, 0);
      }
    }
    else if ( byte_73322 )
    {
      if ( !*((_BYTE *)v170 + 916) && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        strcpy((char *)v184, "New block detected on network before pool notification");
        sub_343C4(7, v184, 0);
      }
    }
    else if ( !*((_BYTE *)v170 + 916) && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy((char *)v184, "New block detected on network");
      sub_343C4(7, v184, 0);
    }
    sub_1B73C();
    v168 = 1;
  }
LABEL_80:
  *(_BYTE *)(a1 + 336) = 0;
  return v168;
}
