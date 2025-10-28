int sub_D434()
{
  _DWORD *v0; // r11
  int *v1; // r2
  FILE *v2; // r0
  int v3; // r0
  int v4; // r5
  int *v5; // r6
  int v6; // r3
  int v7; // r3
  char *v8; // r4
  int v9; // r3
  int v10; // r9
  const char *v11; // r2
  char *v12; // r1
  _DWORD *i; // r6
  char *v14; // r8
  int v15; // r0
  int v16; // r4
  _DWORD *v17; // r7
  char *v18; // r9
  int v19; // r8
  int v20; // r10
  int *v21; // r4
  int v22; // r2
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r0
  int v27; // r1
  _DWORD *j; // r6
  unsigned int v29; // r7
  unsigned int v30; // r4
  unsigned int v31; // r0
  int v32; // r2
  char *v33; // r10
  int v34; // r2
  int *v35; // r0
  const char *v36; // r6
  FILE *v37; // r5
  int v38; // r4
  char *v39; // r0
  int v40; // r0
  int v41; // r0
  _DWORD *v42; // r4
  int v43; // r6
  int *k; // r0
  int v45; // r2
  const char ***v46; // r7
  int v47; // r3
  const char **v48; // r3
  int v49; // r0
  int v50; // r9
  _DWORD *v51; // r6
  int v52; // r8
  int v53; // r4
  int *m; // r6
  int v55; // r4
  int v56; // r3
  int n; // r4
  int v58; // r3
  const char **v59; // r6
  unsigned int v60; // r4
  int v61; // r0
  char *v62; // r2
  const char **v63; // r4
  char *v64; // r5
  size_t v65; // r6
  size_t v66; // r6
  int v67; // r2
  _DWORD *v68; // r5
  unsigned int v69; // r4
  int v70; // r4
  int v71; // r0
  int v72; // r9
  _DWORD *v73; // r11
  int v74; // r7
  int v75; // r10
  unsigned int v76; // r8
  int v77; // r2
  int v78; // r3
  const char *v79; // r0
  int ii; // r4
  int v81; // r2
  int *v82; // r0
  int *v83; // lr
  int v84; // r3
  const char *v85; // r0
  char *v86; // r1
  const char *v87; // r6
  size_t v88; // r0
  size_t v89; // r6
  char *v90; // r0
  const char *v91; // r3
  int v92; // r1
  int v93; // r0
  int v94; // r11
  int v95; // r0
  int v96; // r11
  int *v97; // r10
  int v98; // r3
  int v99; // r5
  int v100; // r4
  int v101; // r3
  int v102; // r5
  int v103; // r0
  int v104; // r0
  int v105; // r3
  const char *v106; // r8
  int v107; // r11
  _DWORD *jj; // r5
  int v109; // r0
  int v110; // r4
  int v111; // r0
  struct addrinfo *v112; // r6
  struct addrinfo *v113; // r3
  const char *v114; // r0
  int v115; // r4
  int v116; // r0
  struct addrinfo *ai_next; // r3
  int v118; // r3
  bool v119; // zf
  _BOOL4 v120; // r1
  const char *v121; // r0
  unsigned int v122; // r1
  _BOOL4 v123; // r3
  int v124; // r6
  int v125; // r7
  int kk; // r8
  const char **v127; // r3
  int v128; // r0
  _BOOL4 v129; // r5
  const char *v130; // r0
  int *mm; // r12
  int v132; // r2
  int *v133; // r7
  const char *v134; // r0
  int v135; // r0
  const char *v136; // r1
  size_t v137; // r0
  size_t v138; // r2
  int result; // r0
  int v140; // r7
  int v141; // r5
  int v142; // r6
  int v143; // r4
  int v144; // r6
  int v145; // r2
  char v146; // r3
  int v147; // r2
  char v148; // r3
  int v149; // r2
  char v150; // r3
  int v151; // r2
  char v152; // r3
  FILE *v153; // r8
  int v154; // r10
  int v155; // r0
  FILE *v156; // r0
  int *v157; // [sp+2Ch] [bp-178h]
  void *srca; // [sp+34h] [bp-170h]
  const char *src; // [sp+34h] [bp-170h]
  struct addrinfo *v160; // [sp+38h] [bp-16Ch]
  struct addrinfo *v161; // [sp+38h] [bp-16Ch]
  _DWORD *v162; // [sp+3Ch] [bp-168h]
  _DWORD *v163; // [sp+3Ch] [bp-168h]
  _DWORD *v164; // [sp+3Ch] [bp-168h]
  int v165; // [sp+3Ch] [bp-168h]
  int v166; // [sp+40h] [bp-164h]
  int v167; // [sp+44h] [bp-160h]
  int v168; // [sp+48h] [bp-15Ch]
  _DWORD *v169; // [sp+4Ch] [bp-158h]
  int v170; // [sp+54h] [bp-150h] BYREF
  struct addrinfo *ai; // [sp+58h] [bp-14Ch] BYREF
  _WORD v172[14]; // [sp+5Ch] [bp-148h] BYREF
  _DWORD v173[7]; // [sp+78h] [bp-12Ch] BYREF
  int v174; // [sp+94h] [bp-110h] BYREF
  int v175; // [sp+98h] [bp-10Ch]
  _DWORD v176[4]; // [sp+9Ch] [bp-108h] BYREF
  int v177; // [sp+ACh] [bp-F8h]
  _DWORD v178[7]; // [sp+B0h] [bp-F4h] BYREF
  int v179; // [sp+CCh] [bp-D8h] BYREF
  int v180; // [sp+D0h] [bp-D4h]
  int v181; // [sp+D4h] [bp-D0h]
  int v182; // [sp+D8h] [bp-CCh]
  int v183; // [sp+DCh] [bp-C8h]
  int v184; // [sp+E0h] [bp-C4h]
  int v185; // [sp+E4h] [bp-C0h]
  int v186; // [sp+E8h] [bp-BCh] BYREF
  int v187; // [sp+ECh] [bp-B8h]
  int v188; // [sp+F0h] [bp-B4h]
  int v189; // [sp+F4h] [bp-B0h]
  int v190; // [sp+F8h] [bp-ACh]
  int v191; // [sp+FCh] [bp-A8h]
  int v192; // [sp+100h] [bp-A4h]
  int v193; // [sp+104h] [bp-A0h] BYREF
  unsigned int v194; // [sp+108h] [bp-9Ch]
  int v195; // [sp+10Ch] [bp-98h]
  int v196; // [sp+110h] [bp-94h]
  int v197; // [sp+114h] [bp-90h]
  int v198; // [sp+118h] [bp-8Ch]
  int v199; // [sp+11Ch] [bp-88h]
  _DWORD dest[7]; // [sp+120h] [bp-84h] BYREF
  int v201; // [sp+13Ch] [bp-68h] BYREF
  unsigned int v202; // [sp+140h] [bp-64h]
  int v203; // [sp+144h] [bp-60h]
  int v204; // [sp+148h] [bp-5Ch]
  int v205; // [sp+14Ch] [bp-58h]
  int v206; // [sp+150h] [bp-54h]
  int v207; // [sp+154h] [bp-50h]
  _QWORD s[9]; // [sp+158h] [bp-4Ch] BYREF

  v0 = (_DWORD *)sub_4F524(168);
  memcpy(v0, &unk_C9CC0, 0xA8u);
  memset(&unk_C9CC0, 0, 0xA8u);
  v1 = (int *)dword_7CDF8;
  if ( dword_7CDF8 )
  {
    while ( *v1 )
      v1 = (int *)*v1;
  }
  else
  {
    v1 = &dword_7CDF8;
  }
  *v0 = 0;
  *v1 = (int)v0;
  if ( (*((_DWORD *)off_7954C + 356) & 0xF) != 0 )
  {
    v2 = fopen(*((const char **)off_7954C + 358), "w");
    if ( v2 )
    {
      v3 = sub_D3E0(v2, 0);
      v4 = v3;
      if ( v3 )
        fprintf((FILE *)stderr, "--saveconfigquit %s error %d\n", *((const char **)off_7954C + 358), v3);
      else
        fprintf((FILE *)stderr, "configuration saved to %s\n", *((const char **)off_7954C + 358));
      exit(v4);
    }
    v35 = _errno_location();
    v36 = (const char *)*((_DWORD *)off_7954C + 358);
    v37 = (FILE *)stderr;
    v38 = *v35;
    v39 = strerror(*v35);
    fprintf(v37, "can not create save file %s, error %d %s\n", v36, v38, v39);
    exit(v38);
  }
  v5 = (int *)sub_10DB4(v0[40]);
  if ( v5 )
  {
    if ( (*((_DWORD *)off_7954C + 228) & 0xF) != 0 || (*((_DWORD *)off_7954C + 180) & 0xF) != 0 )
    {
      v11 = (const char *)&unk_665CC;
      if ( dword_794D8 )
        v11 = ", exiting";
      sub_4FE78(3, "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s", v11);
      if ( dword_794D8 )
LABEL_87:
        exit(1);
    }
    else
    {
      do
      {
        v8 = (char *)v5[1];
        v170 = -1;
        if ( v8 )
          v8 = (char *)sub_4F4E8(v8);
        v9 = *v5;
        if ( *v5 == 311 )
        {
          v10 = 1;
        }
        else if ( *v5 <= 311 )
        {
          if ( v9 )
          {
            if ( v9 != 259 )
              goto LABEL_17;
            v10 = 0;
          }
          else
          {
            if ( !v8 )
              off_7C9FC("ntp_config.c", 2489, 2, "if_name != ((void *)0)");
            v33 = strchr(v8, 47);
            if ( v33 )
            {
              *v33 = 0;
              if ( sub_14720((int)v8, v172) )
              {
                v10 = 5;
                sscanf(v33 + 1, "%d", &v170);
                if ( v172[0] == 2 )
                  v34 = 32;
                else
                  v34 = 128;
                if ( v34 > (v170 | (v170 >> 31)) )
                  v170 |= v170 >> 31;
                else
                  v170 = v34;
              }
              else
              {
                v10 = 4;
                *v33 = 47;
              }
            }
            else if ( sub_14720((int)v8, v172) )
            {
              v10 = 5;
            }
            else
            {
              v10 = 4;
            }
          }
        }
        else if ( v9 == 313 )
        {
          v10 = 2;
        }
        else
        {
          if ( v9 != 405 )
LABEL_17:
            off_7C9FC("ntp_config.c", 2479, 2, "0");
          v10 = 3;
        }
        v6 = v5[2];
        if ( v6 == 307 )
        {
          v7 = 1;
        }
        else if ( v6 == 324 )
        {
          v7 = 0;
        }
        else
        {
          if ( v6 != 288 )
            off_7C9FC("ntp_config.c", 2537, 2, "0");
          v7 = 2;
        }
        sub_148DC(v10, v8, v170, v7);
        sub_2D720(dword_CB548 + 2);
        if ( v8 )
          free(v8);
        v5 = (int *)sub_10D84(v5);
      }
      while ( v5 );
    }
  }
  sub_142B8();
  v12 = (char *)v0[16];
  if ( v12 )
    sub_2E368(2, v12);
  for ( i = (_DWORD *)sub_10DB4(v0[15]); i; i = (_DWORD *)sub_10D84(i) )
  {
    v14 = (char *)sub_182B8(*i);
    v15 = sub_1E278(v14);
    v16 = v15;
    if ( dword_7CF4C > 3 )
      printf("enabling filegen for %s statistics '%s%s'\n", v14, *(const char **)(v15 + 4), *(const char **)(v15 + 8));
    *(_BYTE *)(v16 + 17) = ~((unsigned int)~(*(unsigned __int8 *)(v16 + 17) << 25) >> 25);
  }
  v17 = (_DWORD *)sub_10DB4(v0[17]);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = (char *)sub_182B8(*v17);
      v19 = sub_1E278(v18);
      v20 = *(unsigned __int8 *)(v19 + 17) | 0x80;
      v21 = (int *)sub_10DB4(v17[1]);
      if ( v21 )
        break;
LABEL_59:
      sub_1E100(v19, v18);
      v17 = (_DWORD *)sub_10D84(v17);
      if ( !v17 )
        goto LABEL_60;
    }
    while ( 1 )
    {
      v22 = *v21;
      if ( *v21 == 399 )
        break;
      if ( v22 == 408 )
      {
        v32 = v21[2];
        if ( v32 == 290 )
        {
          v20 |= 0x80u;
        }
        else if ( v32 > 290 )
        {
          if ( v32 == 323 )
          {
            v20 |= 1u;
          }
          else
          {
            if ( v32 != 345 )
            {
LABEL_86:
              sub_4FE78(3, "Unknown filegen flag token %d", v32);
              goto LABEL_87;
            }
            v20 &= ~1u;
          }
        }
        else
        {
          if ( v32 != 283 )
            goto LABEL_86;
          v20 &= ~0x80u;
        }
LABEL_58:
        v21 = (int *)sub_10D84(v21);
        if ( !v21 )
          goto LABEL_59;
      }
      else
      {
        if ( v22 != 293 )
        {
          sub_4FE78(3, "Unknown filegen option token %d", v22);
          exit(1);
        }
        v18 = (char *)v21[2];
        v21 = (int *)sub_10D84(v21);
        if ( !v21 )
          goto LABEL_59;
      }
    }
    v23 = v21[2];
    if ( v23 != 347 )
    {
      if ( v23 <= 347 )
      {
        if ( v23 != 280 && v23 != 342 && v23 != 258 )
LABEL_57:
          off_7C9FC("ntp_config.c", 2056, 2, "0");
      }
      else if ( v23 != 404 && v23 != 407 && v23 != 362 )
      {
        goto LABEL_57;
      }
    }
    goto LABEL_58;
  }
LABEL_60:
  v24 = v0[28];
  if ( v24 )
  {
    if ( off_794DC != aEtc )
    {
      free(off_794DC);
      v24 = v0[28];
    }
    off_794DC = (char *)sub_4F4E8(v24);
  }
  v25 = v0[32];
  if ( v25 )
  {
    if ( off_794E8 != &unk_7CDFC )
    {
      free(off_794E8);
      v25 = v0[32];
    }
    off_794E8 = (_UNKNOWN *)sub_4F4E8(v25);
  }
  v26 = v0[27];
  if ( v26 )
    sub_2E1E8(v26);
  v27 = v0[29];
  if ( v0[24] )
    dword_CAAB0 = v0[24];
  if ( v27 )
  {
    if ( dword_7CF4C > 3 )
    {
      printf("set info_auth_keyid to %08lx\n", v27);
      v27 = v0[29];
    }
    dword_CB50C = v27;
  }
  for ( j = (_DWORD *)sub_10DB4(v0[31]); j; j = (_DWORD *)sub_10D84(j) )
  {
    if ( *j == 105 )
    {
      sub_4DE88(j[2], 1);
    }
    else if ( *j == 45 )
    {
      v29 = j[2];
      v30 = HIWORD(v29);
      while ( (unsigned __int16)v29 >= v30 )
      {
        v31 = v30;
        v30 = (unsigned __int16)(v30 + 1);
        sub_4DE88(v31, 1);
      }
    }
  }
  v40 = dword_CB50C;
  if ( dword_CB50C )
  {
    dword_CAB88 = dword_CB50C;
  }
  else
  {
    v40 = 0xFFFF;
    dword_CAB88 = 0xFFFF;
  }
  if ( sub_4DD08(v40) )
  {
    dword_CAB80 = 16;
    dword_CAB84 = dword_CB748;
  }
  else
  {
    v49 = sub_504EC();
    dword_CAB84 = 4;
    dword_CAB80 = 16;
    v170 = v49;
    sub_4E0E4(dword_CAB88, 4, &v170);
    sub_4DE88(dword_CAB88, 1);
  }
  v41 = v0[14];
  dword_CB50C = dword_CAB88;
  v42 = (_DWORD *)sub_10DB4(v41);
  if ( v42 )
  {
    v43 = -1;
    do
    {
      switch ( *v42 )
      {
        case 0x10A:
          v43 = 25;
          break;
        case 0x112:
          v43 = 18;
          break;
        case 0x114:
          v43 = 19;
          break;
        case 0x12C:
          v43 = 17;
          break;
        case 0x14C:
          v43 = 15;
          break;
        case 0x14D:
          v43 = 22;
          break;
        case 0x14F:
          v43 = 14;
          break;
        case 0x150:
          v43 = 21;
          break;
        case 0x153:
          v43 = 16;
          break;
        case 0x165:
          v43 = 26;
          break;
        default:
          off_7C9FC("ntp_config.c", 1921, 2, "0");
          break;
      }
      sub_26A68(v43, 0, 0);
      v42 = (_DWORD *)sub_10D84(v42);
    }
    while ( v42 );
  }
  for ( k = (int *)sub_10DB4(v0[18]); k; k = (int *)sub_10D84(k) )
  {
    v45 = *k;
    if ( *k == 337 )
    {
      dword_7A1CC = k[2];
    }
    else if ( v45 == 341 )
    {
      dword_7A1D0 = k[2];
    }
    else
    {
      if ( v45 != 264 )
      {
        sub_4FE78(3, "Unknown discard option token %d", v45);
        exit(1);
      }
      dword_7A1C8 = k[2];
    }
  }
  v46 = (const char ***)sub_10DB4(v0[19]);
  if ( v46 )
  {
    while ( 1 )
    {
      memset(v173, 0, sizeof(v173));
      if ( !*v46 )
        break;
      LOWORD(v173[0]) = (unsigned __int16)(*v46)[1];
      if ( sub_C118(**v46, v173) == 1 )
      {
        v47 = -268;
        v175 = 0;
        v176[0] = 0;
        v174 = LOWORD(v173[0]);
        v176[1] = 0;
        if ( LOWORD(v173[0]) != 10 )
          v47 = -1;
        v176[2] = 0;
        v176[3] = 0;
        v177 = 0;
        if ( LOWORD(v173[0]) == 10 )
          memset(v176, 255, sizeof(v176));
        else
          v175 = v47;
        if ( !v46[1]
          || (v174 = 0,
              v175 = 0,
              memset(v176, 0, sizeof(v176)),
              v177 = 0,
              v48 = v46[1],
              LOWORD(v174) = (unsigned __int16)v48[1],
              sub_C118(*v48, &v174) == 1) )
        {
          v50 = 0;
          goto LABEL_162;
        }
        sub_4FE78(3, "restrict: error in mask '%s' on line %d. Ignoring...", *v46[1], v46[3]);
      }
      else
      {
        sub_4FE78(3, "restrict: error in address '%s' on line %d. Ignoring...", **v46, v46[3]);
      }
LABEL_143:
      v46 = (const char ***)sub_10D84(v46);
      if ( !v46 )
        goto LABEL_187;
    }
    v50 = 1;
    v174 = 0;
    v175 = 0;
    memset(v176, 0, sizeof(v176));
    v177 = 0;
LABEL_162:
    v51 = (_DWORD *)sub_10DB4(v46[2]);
    if ( v51 )
    {
      v52 = 0;
      v53 = 0;
      do
      {
        switch ( *v51 )
        {
          case 0x12B:
            v53 = (unsigned __int16)v53 | 0x1000;
            break;
          case 0x133:
            v53 = (unsigned __int16)v53 | 1;
            break;
          case 0x13F:
            v53 = (unsigned __int16)v53 | 0x400;
            break;
          case 0x140:
            v53 = (unsigned __int16)v53 | 0x800;
            break;
          case 0x142:
            v53 = (unsigned __int16)v53 | 0x20;
            break;
          case 0x148:
            v53 = (unsigned __int16)v53 | 0x200;
            break;
          case 0x15A:
            v53 = (unsigned __int16)v53 | 0x80;
            break;
          case 0x15C:
            v53 = (unsigned __int16)v53 | 0x10;
            break;
          case 0x15D:
            v53 = (unsigned __int16)v53 | 0x40;
            break;
          case 0x15F:
            v53 = (unsigned __int16)v53 | 2;
            break;
          case 0x160:
            v53 = (unsigned __int16)v53 | 0x100;
            break;
          case 0x161:
            v53 = (unsigned __int16)v53 | 4;
            break;
          case 0x163:
            v52 = 0x2000;
            break;
          case 0x192:
            v53 = (unsigned __int16)v53 | 8;
            break;
          default:
            off_7C9FC("ntp_config.c", 2260, 2, "0");
            return result;
        }
        v51 = (_DWORD *)sub_10D84(v51);
      }
      while ( v51 );
      v51 = (_DWORD *)(v53 & 0x800);
    }
    else
    {
      v52 = 0;
      v53 = 0;
    }
    if ( v50 )
    {
      LOWORD(v173[0]) = 2;
      sub_2CC48(1, v173, &v174, v52, v53);
      LOWORD(v173[0]) = 10;
    }
    sub_2CC48(1, v173, &v174, v52, v53);
    if ( v51 && !dword_7CE00 )
    {
      dword_7CE00 = 1;
      fprintf(
        (FILE *)stderr,
        "%s\n",
        "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
      sub_4FE78(4, "mssntp restrict bit ignored, this ntpd was configured without --enable-ntp-signd.");
    }
    goto LABEL_143;
  }
LABEL_187:
  for ( m = (int *)sub_10DB4(v0[21]); m; m = (int *)sub_10D84(m) )
  {
    v56 = *m;
    if ( *m == 304 )
    {
      v55 = 9;
    }
    else if ( *m <= 304 )
    {
      switch ( v56 )
      {
        case 285:
          v55 = 5;
          break;
        case 301:
          v55 = 10;
          break;
        case 260:
          v55 = 8;
          break;
        default:
          goto LABEL_194;
      }
    }
    else if ( v56 == 384 )
    {
      v55 = 3;
    }
    else if ( v56 == 385 )
    {
      v55 = 6;
    }
    else
    {
      if ( v56 != 358 )
LABEL_194:
        off_7C9FC("ntp_config.c", 2380, 2, "0");
      v55 = 4;
    }
    sub_20854(v55);
  }
  sub_BBC8(v0[22], 1);
  sub_BBC8(v0[23], 0);
  for ( n = sub_10DB4(v0[33]); n; n = sub_10D84(n) )
  {
    v58 = *(_DWORD *)n;
    if ( *(_DWORD *)n == 45 )
    {
      dword_7BE6C &= ~(unsigned int)sub_C1A0(*(char **)(n + 8));
    }
    else if ( v58 == 61 )
    {
      dword_7BE6C = (int)sub_C1A0(*(char **)(n + 8));
    }
    else if ( v58 == 43 )
    {
      dword_7BE6C |= (unsigned int)sub_C1A0(*(char **)(n + 8));
    }
  }
  v59 = (const char **)sub_10DB4(v0[35]);
  if ( v59 )
  {
    v60 = 0;
    do
    {
      if ( v60 <= 8 )
      {
        v61 = sub_4F4E8(*v59);
        v62 = &name[4 * v60++];
        *((_DWORD *)v62 + 8) = v61;
        *(_DWORD *)&name[4 * v60 + 32] = 0;
      }
      else
      {
        sub_4FE78(6, "phone: Number of phone entries exceeds %lu. Ignoring phone %s...", 9, *v59);
      }
      v59 = (const char **)sub_10D84(v59);
    }
    while ( v59 );
  }
  v63 = (const char **)sub_10DB4(v0[36]);
  if ( v63 )
  {
    v64 = 0;
    do
    {
      v65 = strlen(*v63);
      v66 = v65 + strlen(v63[1]) + 2;
      v64 = (char *)sub_4F478(v64, v66, 0, 0);
      snprintf(v64, v66, "%s=%s", *v63, v63[1]);
      if ( v63[2] )
        v67 = 32;
      else
        v67 = 0;
      sub_1CE68(v64, v66, v67);
      v63 = (const char **)sub_10D84(v63);
    }
    while ( v63 );
    if ( v64 )
      free(v64);
  }
  v68 = (_DWORD *)sub_10DB4(v0[37]);
  if ( v68 )
  {
    v69 = 0;
    do
    {
      if ( v69 <= 7 )
        byte_CB460[v69++] = *v68;
      else
        sub_4FE78(6, "ttl: Number of TTL entries exceeds %lu. Ignoring TTL %d...", 8, *v68);
      v68 = (_DWORD *)sub_10D84(v68);
    }
    while ( v68 );
    v70 = v69 - 1;
  }
  else
  {
    v70 = -1;
  }
  v71 = v0[38];
  LOWORD(v178[0]) = 0;
  dword_CB4D4 = v70;
  v72 = sub_10DB4(v71);
  if ( v72 )
  {
    v162 = v0;
    while ( 1 )
    {
      v73 = (_DWORD *)sub_10DB4(*(_DWORD *)(v72 + 4));
      if ( v73 )
        break;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v183 = 0;
      v184 = 0;
      v185 = 0;
      v82 = (int *)sub_C118(**(const char ***)v72, &v179);
      if ( v82 == (int *)1 )
      {
        HIWORD(v179) = 3912;
        goto LABEL_492;
      }
LABEL_253:
      v72 = sub_10D84(v72);
      if ( !v72 )
      {
        v0 = v162;
        goto LABEL_255;
      }
    }
    v74 = 0;
    v75 = 0;
    v76 = 0;
    do
    {
      if ( *v73 == 365 )
      {
        v77 = v73[2];
        if ( (unsigned int)(v77 - 1) > 0xFFFE )
        {
          sub_4FE78(3, "invalid port number %d, trap ignored", v77);
          v74 = 1;
          v77 = v73[2];
        }
        v76 = (unsigned __int16)v77;
      }
      else if ( *v73 == 310 )
      {
        v78 = v73[2];
        memset(v178, 0, sizeof(v178));
        LOWORD(v178[0]) = *(_DWORD *)(v78 + 4);
        if ( sub_C118(*(const char **)v78, v178) != 1 )
          goto LABEL_253;
        v75 = sub_15BD4(v178);
        if ( !v75 )
        {
          v74 = 1;
          v79 = (const char *)sub_50CD0(v178);
          sub_4FE78(3, "can't find interface with address %s", v79);
        }
      }
      v73 = (_DWORD *)sub_10D84(v73);
    }
    while ( v73 );
    if ( v74 )
      goto LABEL_253;
    v179 = 0;
    v180 = 0;
    v181 = 0;
    v182 = 0;
    v183 = 0;
    v184 = 0;
    v185 = 0;
    v82 = (int *)sub_C118(**(const char ***)v72, &v179);
    if ( v82 != (int *)1 )
      goto LABEL_253;
    if ( v76 )
      v84 = (v76 << 8) | (v76 >> 8);
    else
      LOWORD(v84) = 3912;
    HIWORD(v179) = v84;
    if ( v75 )
    {
      LOWORD(v179) = v178[0];
    }
    else
    {
LABEL_492:
      if ( (unsigned __int16)v179 == 2 )
        v83 = (_DWORD *)&stru_A608;
      else
        v82 = (_DWORD *)(&stru_A640 + 4);
      if ( (unsigned __int16)v179 == 2 )
        HIWORD(v83) = 12;
      else
        HIWORD(v82) = 12;
      if ( (unsigned __int16)v179 == 2 )
        v75 = *v83;
      else
        v75 = *v82;
    }
    if ( !sub_1C824(&v179, v75, 0, 4) )
    {
      v85 = (const char *)sub_50CD0(&v179);
      sub_4FE78(3, "can't set trap for %s", v85);
    }
    goto LABEL_253;
  }
LABEL_255:
  for ( ii = sub_10DB4(v0[39]); ii; ii = sub_10D84(ii) )
  {
    v81 = *(_DWORD *)ii;
    if ( *(_DWORD *)ii == 321 )
    {
      sub_2E368(4, *(char **)(ii + 8));
      continue;
    }
    if ( *(int *)ii <= 321 )
    {
      if ( v81 == 270 )
      {
        sub_26A68(4, 0, 0);
        continue;
      }
      if ( v81 > 270 )
      {
        if ( v81 == 273 )
        {
          sub_26A68(20, *(_DWORD *)(ii + 8), 0);
          continue;
        }
        if ( v81 == 287 )
        {
          v86 = *(char **)(ii + 8);
          if ( *v86 )
          {
            sub_2E368(1, v86);
          }
          else
          {
            dword_CB57C = (unsigned __int8)*v86;
            sub_4FE78(6, "config: driftfile disabled\n");
          }
          continue;
        }
LABEL_260:
        sub_4FE78(3, "config_vars(): unexpected token %d", v81);
        continue;
      }
      if ( v81 != 263 )
        goto LABEL_260;
    }
    else
    {
      if ( v81 != 377 )
      {
        if ( v81 > 377 )
        {
          if ( v81 == 389 )
          {
            sub_26A68(23, 0, 0);
            continue;
          }
          if ( v81 == 403 )
          {
            *(_QWORD *)&dword_7A5F0 = *(_QWORD *)(ii + 8);
            continue;
          }
        }
        else
        {
          if ( v81 == 326 )
          {
            v153 = fopen(*(const char **)(ii + 8), "a");
            if ( v153 )
            {
              if ( (dword_7BE6C & 1) != 0 )
                sub_4FE78(5, "logging to file %s", *(const char **)(ii + 8));
              if ( dword_CF6F0 )
              {
                v154 = fileno((FILE *)dword_CF6F0);
                if ( v154 != fileno(v153) )
                  fclose((FILE *)dword_CF6F0);
              }
              dword_CF6F0 = (int)v153;
              dword_7BE68 = 0;
            }
            else
            {
              sub_4FE78(3, "Cannot open log file %s", *(const char **)(ii + 8));
            }
            continue;
          }
          if ( v81 == 363 )
          {
            sub_2E368(3, *(char **)(ii + 8));
            continue;
          }
        }
        goto LABEL_260;
      }
      if ( dword_C9CBC )
        free((void *)dword_C9CBC);
      v87 = *(const char **)(ii + 8);
      v88 = strlen(v87);
      if ( !v88 )
        goto LABEL_488;
      if ( v87[v88 - 1] == 47 )
      {
        v88 = sub_4F4E8(v87);
LABEL_488:
        dword_C9CBC = v88;
        continue;
      }
      v89 = v88 + 2;
      v90 = (char *)sub_4F524(v88 + 2);
      v91 = *(const char **)(ii + 8);
      dword_C9CBC = (int)v90;
      snprintf(v90, v89, "%s%c", v91, 47);
    }
  }
  v92 = v0[11];
  if ( v92 )
    sub_26A68(1, v92, 0);
  v93 = sub_10DB4(v0[12]);
  if ( v93 )
  {
    v163 = v0;
    v94 = v93;
    do
    {
      v186 = 0;
      v187 = 0;
      v188 = 0;
      v189 = 0;
      v190 = 0;
      v191 = 0;
      v192 = 0;
      LOWORD(v186) = *(_DWORD *)(v94 + 4);
      if ( sub_C118(*(const char **)v94, &v186) == 1 )
        sub_26A68(6, 0, &v186);
      v94 = sub_10D84(v94);
    }
    while ( v94 );
    v0 = v163;
    dword_CB4AC = 1;
  }
  v95 = sub_10DB4(v0[13]);
  if ( v95 )
  {
    v164 = v0;
    v96 = v95;
    do
    {
      v186 = 0;
      v187 = 0;
      v188 = 0;
      v189 = 0;
      v190 = 0;
      v191 = 0;
      v192 = 0;
      LOWORD(v186) = *(_DWORD *)(v96 + 4);
      if ( sub_C118(*(const char **)v96, &v186) == 1 )
        sub_26A68(6, 0, &v186);
      v96 = sub_10D84(v96);
    }
    while ( v96 );
    v0 = v164;
    sub_26A68(6, 1, 0);
  }
  v97 = (int *)sub_10DB4(v0[9]);
  if ( v97 )
  {
    v169 = v0;
    while ( 1 )
    {
      v98 = *v97;
      if ( *v97 == 364 )
      {
        v125 = 3;
        v124 = dword_7A2BC;
      }
      else if ( v98 == 359 )
      {
        v124 = 1;
        v125 = 1;
      }
      else
      {
        if ( v98 > 359 )
        {
          if ( v98 != 364 && v98 != 378 )
LABEL_312:
            off_7C9FC("ntp_config.c", 3371, 2, "hmode != -1");
        }
        else
        {
          if ( v98 == 268 )
          {
            v124 = 1;
            v125 = 5;
            goto LABEL_313;
          }
          if ( v98 != 329 )
            goto LABEL_312;
        }
        v124 = 1;
        v125 = 3;
      }
LABEL_313:
      v99 = sub_10DB4(v97[2]);
      if ( v99 )
      {
        v100 = 0;
        while ( 1 )
        {
          v101 = *(_DWORD *)(v99 + 8);
          if ( v101 == 350 )
          {
            v100 |= 0x200u;
          }
          else if ( v101 <= 350 )
          {
            switch ( v101 )
            {
              case 271:
                v100 |= 0x40u;
                break;
              case 305:
                v100 |= 0x100u;
                break;
              case 262:
                v100 |= 0x800u;
                break;
              default:
                goto LABEL_320;
            }
          }
          else if ( v101 == 367 )
          {
            v100 |= 0x20u;
          }
          else if ( v101 > 367 )
          {
            if ( v101 == 396 )
            {
              v100 |= 0x400u;
            }
            else
            {
              if ( v101 != 406 )
LABEL_320:
                off_7C9FC("ntp_config.c", 3380, 2, "0");
              v100 |= 0x1000u;
            }
          }
          else
          {
            if ( v101 != 366 )
              goto LABEL_320;
            v100 |= 2u;
          }
          v99 = sub_10D84(v99);
          if ( !v99 )
            goto LABEL_337;
        }
      }
      v100 = 0;
LABEL_337:
      v102 = 0;
      v193 = 0;
      v194 = 0;
      v195 = 0;
      v196 = 0;
      v197 = 0;
      v198 = 0;
      v199 = 0;
      v103 = v97[1];
      LOWORD(v193) = *(_DWORD *)(v103 + 4);
      v104 = sub_BD2C(*(const char **)v103, &v193, &ai, 0);
      if ( v104 != -1 )
      {
        if ( v104 == 1 )
        {
          v161 = ai;
          if ( v124 > 0 && ai )
          {
            ai_next = ai;
            do
            {
              ++v102;
              memcpy(&v193, ai_next->ai_addr, ai_next->ai_addrlen);
              v118 = *v97;
              if ( (unsigned __int16)v193 == 2 )
              {
                v122 = bswap32(v194);
                if ( HIWORD(v122) << 16 != 2139029504 && (v122 & 0xFF000000) == 0x7F000000 && v122 != 2130706433 )
                  goto LABEL_381;
              }
              v119 = v118 == 378;
              if ( v118 != 378 )
                v119 = v118 == 359;
              if ( (v119 || v118 == 364)
                && ((unsigned __int16)v193 == 2
                  ? (v120 = (bswap32(v194) & 0xF0000000) == -536870912)
                  : (v120 = (unsigned __int8)v195 == 255),
                    v120)
                || v118 == 329
                && ((unsigned __int16)v193 == 2
                  ? (v123 = (bswap32(v194) & 0xF0000000) != -536870912)
                  : (v123 = (unsigned __int8)v195 != 255),
                    v123) )
              {
LABEL_381:
                v121 = (const char *)sub_50CD0(&v193);
                sub_4FE78(3, "attempt to configure invalid address %s", v121);
              }
              else if ( (unsigned __int16)v193 != 10 || dword_CB864 )
              {
                sub_22304(&v193, 0, v125, v97[6], v97[3], v97[4], v100, v97[5], v97[7], "*");
              }
              ai_next = ai->ai_next;
              ai = ai_next;
            }
            while ( v102 != v124 && ai_next );
          }
          freeaddrinfo(v161);
        }
        else
        {
          sub_4FE78(6, "Deferring DNS for %s %d", *(const char **)v97[1], v124);
          v105 = v97[1];
          v165 = v97[3];
          v106 = *(const char **)v105;
          v166 = v97[4];
          v107 = v97[6];
          v160 = *(struct addrinfo **)(v105 + 4);
          v167 = v97[5];
          v168 = v97[7];
          if ( dword_C9D6C
            || ((strcpy(name, "/tmp/ntpXXXXXX"), v155 = mkstemp(name), v155 != -1)
              ? (FILE *)(v156 = fdopen(v155, "r+"), dword_C9D6C = (int)v156)
              : (v156 = (FILE *)dword_C9D6C),
                v156) )
          {
            if ( dword_7CF4C )
              printf("resolving %s\n", v106);
            fprintf(
              (FILE *)dword_C9D6C,
              "%s %d %d %d %d %d %d %d %d %u %s\n",
              v106,
              v124,
              v160,
              v125,
              v107,
              v165,
              v166,
              v100,
              v167,
              v168,
              "*");
            if ( dword_7CF4C > 1 )
              printf(
                "config: %s %d %d %d %d %d %d %x %d %u %s\n",
                v106,
                v124,
                v160,
                v125,
                v107,
                v165,
                v166,
                v100,
                v167,
                v168,
                "*");
          }
          else
          {
            sub_4FE78(3, "open failed for %s: %m", name);
          }
        }
      }
      v97 = (int *)sub_10D84(v97);
      if ( !v97 )
      {
        v0 = v169;
        break;
      }
    }
  }
  for ( jj = (_DWORD *)sub_10DB4(v0[10]); jj; jj = (_DWORD *)sub_10D84(jj) )
  {
    if ( *jj )
    {
      v109 = sub_21604();
      v110 = v109;
      if ( v109 )
      {
        sub_2310C(v109, "GONE");
        sub_218BC(v110);
      }
    }
    else
    {
      memset(dest, 0, sizeof(dest));
      v111 = jj[1];
      LOWORD(dest[0]) = *(_DWORD *)(v111 + 4);
      if ( sub_BD2C(*(const char **)v111, dest, &ai, 0) == 1 )
      {
        v112 = ai;
        if ( ai )
        {
          v113 = ai;
          do
          {
            memcpy(dest, v113->ai_addr, v113->ai_addrlen);
            if ( dword_7CF4C > 0 )
            {
              v114 = (const char *)sub_50CD0(dest);
              printf("searching for %s\n", v114);
            }
            v115 = 0;
            while ( 1 )
            {
              v116 = sub_21500(dest, v115, -1, 0);
              v115 = v116;
              if ( !v116 )
                break;
              if ( (*(_DWORD *)(v116 + 52) & 1) != 0 )
              {
                sub_2310C(v116, "GONE");
                sub_218BC(v115);
                break;
              }
            }
            ai = ai->ai_next;
            v113 = ai;
          }
          while ( ai );
        }
        freeaddrinfo(v112);
      }
    }
  }
  for ( kk = sub_10DB4(v0[20]); kk; kk = sub_10D84(kk) )
  {
    v127 = *(const char ***)kk;
    v201 = 0;
    v202 = 0;
    v203 = 0;
    v204 = 0;
    v205 = 0;
    v206 = 0;
    v207 = 0;
    v128 = sub_C118(*v127, &v201);
    if ( (unsigned __int16)v201 == 2 && bswap32(v202) >> 16 << 16 == 2139029504 )
    {
      v129 = v128 != 1;
    }
    else
    {
      v129 = 1;
      v130 = (const char *)sub_50CD0(&v201);
      sub_4FE78(3, "inappropriate address %s for the fudge command, line ignored", v130);
    }
    memset(s, 0, sizeof(s));
    for ( mm = (int *)sub_10DB4(*(_DWORD *)(kk + 4)); mm; mm = (int *)sub_10D84(mm) )
    {
      v132 = *mm;
      if ( *mm == 298 )
      {
        v151 = mm[2];
        BYTE2(s[0]) = ~((unsigned int)~(BYTE2(s[0]) << 25) >> 25);
        if ( v151 )
          v152 = BYTE1(s[0]) | 8;
        else
          v152 = BYTE1(s[0]) & 0xF7;
        BYTE1(s[0]) = v152;
      }
      else if ( *mm > 298 )
      {
        if ( v132 == 386 )
        {
          LODWORD(s[7]) = mm[2];
          BYTE2(s[0]) |= 4u;
        }
        else if ( v132 > 386 )
        {
          if ( v132 == 390 )
          {
            s[5] = *((_QWORD *)mm + 1);
            BYTE2(s[0]) |= 1u;
          }
          else
          {
            if ( v132 != 391 )
            {
LABEL_411:
              v133 = mm;
              srca = (void *)*mm;
              v134 = (const char *)sub_50CD0(&v201);
              sub_4FE78(3, "Unexpected fudge internal flag 0x%x for %s\n", srca, v134);
              v135 = *v133;
              if ( !*v133 )
                v135 = 1;
              exit(v135);
            }
            s[6] = *((_QWORD *)mm + 1);
            BYTE2(s[0]) |= 2u;
          }
        }
        else
        {
          if ( v132 != 373 )
            goto LABEL_411;
          HIDWORD(s[7]) = 0;
          v136 = (const char *)mm[2];
          BYTE2(s[0]) |= 8u;
          v157 = mm;
          src = v136;
          v137 = strlen(v136);
          if ( v137 >= 4 )
            v138 = 4;
          else
            v138 = v137;
          memcpy((char *)&s[7] + 4, src, v138);
          mm = v157;
        }
      }
      else if ( v132 == 296 )
      {
        v149 = mm[2];
        BYTE2(s[0]) |= 0x20u;
        if ( v149 )
          v150 = BYTE1(s[0]) | 2;
        else
          v150 = BYTE1(s[0]) & 0xFD;
        BYTE1(s[0]) = v150;
      }
      else if ( v132 > 296 )
      {
        v147 = mm[2];
        BYTE2(s[0]) |= 0x40u;
        if ( v147 )
          v148 = BYTE1(s[0]) | 4;
        else
          v148 = BYTE1(s[0]) & 0xFB;
        BYTE1(s[0]) = v148;
      }
      else
      {
        if ( v132 != 295 )
          goto LABEL_411;
        v145 = mm[2];
        BYTE2(s[0]) |= 0x10u;
        if ( v145 )
          v146 = BYTE1(s[0]) | 1;
        else
          v146 = BYTE1(s[0]) & 0xFE;
        BYTE1(s[0]) = v146;
      }
    }
    if ( !v129 )
      sub_27E00(&v201, s, 0);
  }
  result = sub_10DB4(v0[34]);
  v140 = result;
  if ( result )
  {
    v141 = 0;
    do
    {
      v143 = *(_DWORD *)(v140 + 8);
      if ( !strcmp((const char *)v143, "lowdelay") )
      {
        v141 = 1;
        goto LABEL_448;
      }
      if ( !strcmp((const char *)v143, "throughput") )
      {
        v141 = 2;
        goto LABEL_448;
      }
      if ( !strcmp((const char *)v143, "reliability") )
      {
        v141 = 3;
        goto LABEL_448;
      }
      if ( !strcmp((const char *)v143, "mincost") )
      {
        v141 = 4;
        goto LABEL_448;
      }
      if ( !strcmp((const char *)v143, "routine") )
      {
LABEL_447:
        v141 = 5;
        goto LABEL_448;
      }
      if ( *(_BYTE *)v143 == 99 )
      {
        v144 = *(unsigned __int8 *)(v143 + 1);
        if ( v144 == 115 && *(_BYTE *)(v143 + 2) == 48 && !*(_BYTE *)(v143 + 3) )
          goto LABEL_447;
        if ( !strcmp((const char *)v143, "priority")
          || v144 == 115 && *(_BYTE *)(v143 + 2) == 49 && !*(_BYTE *)(v143 + 3) )
        {
LABEL_531:
          v141 = 6;
          goto LABEL_448;
        }
        if ( !strcmp((const char *)v143, "immediate")
          || v144 == 115 && *(_BYTE *)(v143 + 2) == 50 && !*(_BYTE *)(v143 + 3) )
        {
LABEL_541:
          v141 = 7;
          goto LABEL_448;
        }
        if ( !strcmp((const char *)v143, "flash") )
        {
          v141 = 8;
        }
        else if ( v144 == 115 && *(_BYTE *)(v143 + 2) == 51 && !*(_BYTE *)(v143 + 3) )
        {
          v141 = 8;
        }
      }
      else
      {
        if ( !strcmp((const char *)v143, "priority") )
          goto LABEL_531;
        if ( !strcmp((const char *)v143, "immediate") )
          goto LABEL_541;
        if ( !strcmp((const char *)v143, "flash") )
          v141 = 8;
      }
LABEL_448:
      if ( !strcmp((const char *)v143, "flashoverride") )
        goto LABEL_431;
      if ( *(_BYTE *)v143 == 99 )
      {
        v142 = *(unsigned __int8 *)(v143 + 1);
        if ( v142 == 115 && *(_BYTE *)(v143 + 2) == 52 && !*(_BYTE *)(v143 + 3) )
        {
LABEL_431:
          v141 = 9;
          goto LABEL_432;
        }
        if ( !strcmp((const char *)v143, "critical")
          || v142 == 115 && *(_BYTE *)(v143 + 2) == 53 && !*(_BYTE *)(v143 + 3) )
        {
LABEL_451:
          v141 = 10;
          goto LABEL_432;
        }
        if ( !strcmp((const char *)v143, "internetcontrol")
          || v142 == 115 && *(_BYTE *)(v143 + 2) == 54 && !*(_BYTE *)(v143 + 3) )
        {
LABEL_517:
          v141 = 11;
          goto LABEL_432;
        }
        if ( !strcmp((const char *)v143, "netcontrol")
          || v142 == 115 && *(_BYTE *)(v143 + 2) == 55 && !*(_BYTE *)(v143 + 3) )
        {
LABEL_520:
          v141 = 12;
          goto LABEL_432;
        }
      }
      else
      {
        if ( !strcmp((const char *)v143, "critical") )
          goto LABEL_451;
        if ( !strcmp((const char *)v143, "internetcontrol") )
          goto LABEL_517;
        if ( !strcmp((const char *)v143, "netcontrol") )
          goto LABEL_520;
      }
      if ( !v141 )
      {
        sub_4FE78(3, "parse error, qos %s not accepted\n", (const char *)v143);
        goto LABEL_433;
      }
LABEL_432:
      dword_794FC = v141;
LABEL_433:
      result = sub_10D84(v140);
      v140 = result;
    }
    while ( result );
  }
  return result;
}
