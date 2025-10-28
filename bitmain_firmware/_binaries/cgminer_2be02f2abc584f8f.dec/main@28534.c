void __fastcall __noreturn main(int a1, const char **a2, char **a3)
{
  _DWORD *v3; // r6
  int v4; // r3
  int v5; // r4
  int v6; // r5
  const char **v7; // r7
  int v8; // r0
  char *v9; // r6
  char *v10; // r7
  char *v11; // r0
  unsigned __int8 *v12; // r5
  unsigned __int8 *v13; // r4
  int v14; // r6
  int v15; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r6
  void *v18; // r0
  int v19; // r10
  size_t v20; // r8
  unsigned int v21; // r7
  int v22; // r6
  unsigned int v23; // r7
  unsigned int v24; // r3
  int v25; // r6
  unsigned int v26; // r2
  unsigned int v27; // r3
  int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r3
  size_t v31; // r0
  unsigned int v32; // r3
  int v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // r1
  unsigned int v37; // r2
  unsigned int v38; // r3
  int v39; // r1
  unsigned int v40; // r3
  _DWORD *v41; // r2
  int v42; // r3
  int v43; // r2
  int v44; // r4
  size_t v45; // r6
  _DWORD *v46; // r0
  _DWORD *v47; // r7
  int v48; // r3
  _DWORD *v49; // r4
  _DWORD *v50; // r10
  _DWORD *v51; // r3
  int v52; // r6
  char *v53; // r8
  unsigned int v54; // r2
  int v55; // r3
  _DWORD *v56; // r3
  int v57; // r2
  int v58; // r3
  char *v59; // r5
  _DWORD *v60; // r0
  const char *v61; // r2
  _DWORD *v62; // r3
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r4
  FILE *v68; // r4
  signed int v69; // r0
  char *v70; // r4
  char *v71; // r4
  char *v72; // r4
  char *v73; // r4
  char *v74; // r4
  int v75; // r0
  bool v76; // zf
  int v77; // r3
  bool v78; // zf
  int *v79; // r6
  int v80; // r4
  char *v81; // r5
  int i; // r4
  int v83; // r2
  int v84; // r4
  int v85; // r3
  char *v86; // r7
  int v87; // r4
  unsigned int v88; // r5
  int *v89; // r0
  int *v90; // r0
  int v91; // r12
  int v92; // r0
  int j; // r3
  int v94; // r2
  int v95; // r0
  int v96; // r2
  int v97; // r3
  int v98; // r0
  int v99; // r12
  int v100; // r2
  int v101; // r3
  int v102; // t1
  int v103; // r5
  int v104; // r4
  const char *v105; // r7
  size_t v106; // r8
  const char *v107; // r10
  size_t v108; // r8
  char *v109; // r0
  __sighandler_t v110; // r4
  __sighandler_t v111; // r0
  bool v112; // zf
  __pid_t v113; // r0
  int v114; // r7
  int k; // r4
  int v116; // r5
  int m; // r8
  _DWORD *v118; // r7
  int v119; // r4
  _DWORD *v120; // r0
  int v121; // r6
  int *v122; // r4
  int n; // r4
  int v124; // r5
  int ii; // r4
  int v126; // r3
  int v127; // r4
  int v128; // r4
  int jj; // r4
  int v130; // r2
  int *v131; // r1
  int v132; // r1
  int v133; // lr
  int v134; // r12
  int v135; // r0
  int v136; // r4
  int v137; // r4
  int v138; // r4
  int *v139; // r0
  int v140; // r0
  int v141; // r2
  int v142; // r3
  int v143; // t1
  int *v144; // r0
  int v145; // r0
  int v146; // r10
  int v147; // r12
  int v148; // r1
  int v149; // r3
  int v150; // t1
  int *v151; // r3
  int v152; // r0
  int v153; // t1
  int kk; // r3
  int v155; // r4
  int v156; // r3
  int v157; // r2
  int v158; // r0
  int v159; // r7
  int v160; // r4
  int v161; // r5
  int v162; // r0
  _DWORD *v163; // r9
  int v164; // r3
  int v165; // r12
  int v166; // r1
  int v167; // r3
  int v168; // t1
  int *v169; // r3
  int v170; // r0
  int v171; // t1
  int v172; // r3
  int mm; // r3
  int v174; // r4
  int v175; // r3
  int v176; // r2
  int v177; // r0
  int v178; // r7
  int v179; // r4
  int v180; // r7
  char v181; // [sp+10h] [bp-29DCh] BYREF
  char v182[4088]; // [sp+1018h] [bp-19D4h] BYREF
  const char **v183; // [sp+2024h] [bp-9C8h]
  char *s; // [sp+2028h] [bp-9C4h]
  unsigned int v185; // [sp+202Ch] [bp-9C0h]
  int *v186; // [sp+2030h] [bp-9BCh]
  int v187; // [sp+2034h] [bp-9B8h] BYREF
  char ptr[256]; // [sp+203Ch] [bp-9B0h] BYREF
  char dest[2048]; // [sp+213Ch] [bp-8B0h] BYREF
  struct sigaction act; // [sp+293Ch] [bp-B0h] BYREF

  v187 = a1;
  v183 = a2;
  byte_75AE0 = 0;
  strcpy(dword_75AE8, "cgminer.log");
  strcpy(word_75BE8, "a+");
  if ( sysconf(84) == 1 )
    off_72D00 = (int (__fastcall *)(_DWORD))sched_yield;
  v3 = malloc(4 * (v187 + 1));
  dword_73EDC = (int)v3;
  v4 = v187;
  if ( v187 > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = v183;
    do
    {
      v3[v5] = _strdup(v7[v5]);
      ++v6;
      v4 = v187;
      ++v5;
    }
    while ( v187 > v6 );
  }
  v3[v4] = 0;
  sub_138D8(&stru_793D4, "cgminer.c", "main", 11332);
  sub_138D8(&stru_79924, "cgminer.c", "main", 11333);
  sub_138D8(&stru_79870, "cgminer.c", "main", 11334);
  sub_138D8(&stru_79AD8, "cgminer.c", "main", 11335);
  sub_13868(&rwlock, "cgminer.c", "main", 11335);
  sub_138D8(&stru_78D9C, "cgminer.c", "main", 11336);
  sub_138D8(&stru_7537C, "cgminer.c", "main", 11337);
  sub_138D8(&stru_79AA0, "cgminer.c", "main", 11338);
  sub_13868(&stru_79AB8, "cgminer.c", "main", 11338);
  sub_138D8(&mutex, "cgminer.c", "main", 11339);
  sub_13868(&stru_754E4, "cgminer.c", "main", 11340);
  sub_13868(&stru_79328, "cgminer.c", "main", 11341);
  sub_13868(&stru_79718, "cgminer.c", "main", 11342);
  sub_13868(&stru_797C8, "cgminer.c", "main", 11343);
  sub_138D8(&stru_75304, "cgminer.c", "main", 11345);
  if ( pthread_cond_init(&stru_75320, 0) )
  {
    strcpy(dest, "Failed to pthread_cond_init lp_cond");
    sub_3F1C0(3, dest, 1);
    sub_17CF0(1, 0);
  }
  sub_138D8(&stru_796F4, "cgminer.c", "main", 11349);
  if ( pthread_cond_init(&stru_79BA8, 0) )
  {
    strcpy(dest, "Failed to pthread_cond_init restart_cond");
    sub_3F1C0(3, dest, 1);
    sub_17CF0(1, 0);
  }
  if ( pthread_cond_init(&stru_791F0, 0) )
  {
    strcpy(dest, "Failed to pthread_cond_init gws_cond");
    sub_3F1C0(3, dest, 1);
    sub_17CF0(1, 0);
  }
  v8 = sub_2F760(0);
  dword_796E8 = v8;
  if ( !v8 )
  {
    strcpy(dest, "Failed to create getq");
    sub_3F1C0(3, dest, 1);
    sub_17CF0(1, 0);
  }
  dword_73E64 = v8 + 12;
  snprintf(byte_739E4, 0x100u, "%s %s", "cgminer", a49);
  act.sa_handler = (__sighandler_t)sub_1832C;
  act.sa_flags = 0;
  sigemptyset(&act.sa_mask);
  sigaction(15, &act, &stru_79158);
  sigaction(2, &act, &stru_79A14);
  signal(13, (__sighandler_t)1);
  dword_79DC4 = (int)v182;
  strcpy(v182, "/usr/bin");
  dword_7997C = (int)&v181;
  v9 = _strdup(*v183);
  v10 = (char *)dword_7997C;
  v11 = dirname(v9);
  strcpy(v10, v11);
  free(v9);
  *(_WORD *)(dword_7997C + strlen((const char *)dword_7997C)) = 47;
  dword_73E8C = 8;
  dword_73E80 = 9;
  dword_73E88 = 10;
  v12 = (unsigned __int8 *)calloc(0x68u, 1u);
  if ( !v12 )
  {
    strcpy(dest, "main OOM");
    sub_3F1C0(3, dest, 1);
    sub_132C4(1);
  }
  v14 = 36;
  do
  {
    v13 = v12;
    *(_WORD *)&v12[strlen((const char *)v12)] = 48;
    --v14;
  }
  while ( v14 );
  *((_DWORD *)v12 + 19) = 0;
  s = (char *)v12;
  *((_DWORD *)v12 + 22) = v12;
  *((_DWORD *)v12 + 23) = strlen((const char *)v12);
  v15 = dword_75504;
  if ( dword_75504 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 16) + 8) = v12;
    *((_DWORD *)v12 + 18) = *(_DWORD *)(*(_DWORD *)(v15 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(v15 + 68) + 20);
    *(_DWORD *)(*(_DWORD *)(v15 + 68) + 16) = v12 + 68;
  }
  else
  {
    dword_75504 = (int)v12;
    *((_DWORD *)v12 + 18) = 0;
    v16 = malloc(0x2Cu);
    v17 = v16;
    *((_DWORD *)v12 + 17) = v16;
    if ( !v16 )
      exit(-1);
    memset(v16, 0, 0x2Cu);
    v17[4] = v12 + 68;
    v17[1] = 32;
    v17[2] = 5;
    v17[5] = 68;
    v18 = malloc(0x180u);
    *v17 = v18;
    if ( !v18 )
      exit(-1);
    memset(v18, 0, 0x180u);
    *(_DWORD *)(*((_DWORD *)v12 + 17) + 40) = -1609490463;
  }
  v19 = dword_75504;
  ++*(_DWORD *)(*(_DWORD *)(dword_75504 + 68) + 12);
  *((_DWORD *)v12 + 17) = *(_DWORD *)(v19 + 68);
  *((_DWORD *)v12 + 24) = -17973521;
  v20 = strlen(s);
  if ( v20 <= 0xB )
  {
    v21 = -1640531527;
    v22 = -1640531527;
  }
  else
  {
    v21 = -1640531527;
    v22 = -1640531527;
    do
    {
      v23 = (v13[6] << 16) + (v13[5] << 8) + v13[4] + (v13[7] << 24) + v21;
      v24 = v13[8] + *((_DWORD *)v12 + 24) + (v13[9] << 8) + (v13[10] << 16) + (v13[11] << 24);
      v25 = ((v13[2] << 16) + (v13[1] << 8) + *v13 + (v13[3] << 24) - v24 - v23 + v22) ^ (v24 >> 13);
      v26 = (v23 - v24 - v25) ^ (v25 << 8);
      v27 = (v24 - v25 - v26) ^ (v26 >> 13);
      v28 = (v25 - v26 - v27) ^ (v27 >> 12);
      v29 = (v26 - v27 - v28) ^ (v28 << 16);
      v30 = (v27 - v28 - v29) ^ (v29 >> 5);
      v22 = (v28 - v29 - v30) ^ (v30 >> 3);
      v21 = (v29 - v30 - v22) ^ (v22 << 10);
      *((_DWORD *)v12 + 24) = (v30 - v22 - v21) ^ (v21 >> 15);
      v13 += 12;
      v20 -= 12;
    }
    while ( v20 > 0xB );
  }
  v31 = strlen(s) + *((_DWORD *)v12 + 24);
  *((_DWORD *)v12 + 24) = v31;
  switch ( v20 )
  {
    case 1u:
      goto LABEL_40;
    case 2u:
      goto LABEL_39;
    case 3u:
      goto LABEL_38;
    case 4u:
      goto LABEL_37;
    case 5u:
      goto LABEL_36;
    case 6u:
      goto LABEL_35;
    case 7u:
      goto LABEL_34;
    case 8u:
      goto LABEL_33;
    case 9u:
      goto LABEL_32;
    case 0xAu:
      goto LABEL_31;
    case 0xBu:
      *((_DWORD *)v12 + 24) = v31 + (v13[10] << 24);
LABEL_31:
      *((_DWORD *)v12 + 24) += v13[9] << 16;
LABEL_32:
      *((_DWORD *)v12 + 24) += v13[8] << 8;
LABEL_33:
      v21 += v13[7] << 24;
LABEL_34:
      v21 += v13[6] << 16;
LABEL_35:
      v21 += v13[5] << 8;
LABEL_36:
      v21 += v13[4];
LABEL_37:
      v22 += v13[3] << 24;
LABEL_38:
      v22 += v13[2] << 16;
LABEL_39:
      v22 += v13[1] << 8;
LABEL_40:
      v22 += *v13;
      break;
    default:
      break;
  }
  v32 = *((_DWORD *)v12 + 24);
  v33 = (v22 - v21 - v32) ^ (v32 >> 13);
  v34 = (v21 - v32 - v33) ^ (v33 << 8);
  v35 = (v32 - v33 - v34) ^ (v34 >> 13);
  v36 = (v33 - v34 - v35) ^ (v35 >> 12);
  v37 = (v34 - v35 - v36) ^ (v36 << 16);
  v38 = (v35 - v36 - v37) ^ (v37 >> 5);
  v39 = (v36 - v37 - v38) ^ (v38 >> 3);
  v40 = (v38 - v39 - ((v37 - v38 - v39) ^ (v39 << 10))) ^ (((v37 - v38 - v39) ^ (v39 << 10)) >> 15);
  *((_DWORD *)v12 + 24) = v40;
  v41 = *(_DWORD **)(v19 + 68);
  v42 = 12 * (v40 & (v41[1] - 1));
  ++*(_DWORD *)(*v41 + v42 + 4);
  *((_DWORD *)v12 + 21) = *(_DWORD *)(**(_DWORD **)(v19 + 68) + v42);
  *((_DWORD *)v12 + 20) = 0;
  v43 = *(_DWORD *)(**(_DWORD **)(v19 + 68) + v42);
  if ( v43 )
    *(_DWORD *)(v43 + 12) = v12 + 68;
  *(_DWORD *)(**(_DWORD **)(v19 + 68) + v42) = v12 + 68;
  if ( *(_DWORD *)(**(_DWORD **)(v19 + 68) + v42 + 4) >= (unsigned int)(10
                                                                      * (*(_DWORD *)(**(_DWORD **)(v19 + 68) + v42 + 8)
                                                                       + 1)) )
  {
    v44 = *((_DWORD *)v12 + 17);
    if ( *(_DWORD *)(v44 + 36) != 1 )
    {
      v45 = 24 * *(_DWORD *)(v44 + 4);
      v46 = malloc(v45);
      v47 = v46;
      if ( !v46 )
        exit(-1);
      memset(v46, 0, v45);
      *(_DWORD *)(v44 + 24) = (((2 * *(_DWORD *)(v44 + 4) - 1) & *(_DWORD *)(v44 + 12)) != 0)
                            + (*(_DWORD *)(v44 + 12) >> (*(_BYTE *)(v44 + 8) + 1));
      *(_DWORD *)(*((_DWORD *)v12 + 17) + 28) = 0;
      v48 = *((_DWORD *)v12 + 17);
      if ( *(_DWORD *)(v48 + 4) )
      {
        v186 = 0;
        v185 = 0;
        do
        {
          v49 = *(_DWORD **)((char *)v186 + *(_DWORD *)v48);
          if ( v49 )
          {
            do
            {
              v50 = (_DWORD *)v49[4];
              v51 = (_DWORD *)*((_DWORD *)v12 + 17);
              v52 = 3 * ((2 * v51[1] - 1) & v49[7]);
              v53 = (char *)&v47[3 * ((2 * v51[1] - 1) & v49[7])];
              v54 = *((_DWORD *)v53 + 1) + 1;
              *((_DWORD *)v53 + 1) = v54;
              if ( v54 > v51[6] )
              {
                ++v51[7];
                *((_DWORD *)v53 + 2) = sub_59EE8(*((_DWORD *)v53 + 1), *(_DWORD *)(*((_DWORD *)v12 + 17) + 24));
              }
              v49[3] = 0;
              v49[4] = v47[v52];
              v55 = v47[v52];
              if ( v55 )
                *(_DWORD *)(v55 + 12) = v49;
              v47[v52] = v49;
              v49 = v50;
            }
            while ( v50 );
          }
          ++v185;
          v48 = *((_DWORD *)v12 + 17);
          v186 += 3;
        }
        while ( *(_DWORD *)(v48 + 4) > v185 );
      }
      free(*(void **)v48);
      *(_DWORD *)(*((_DWORD *)v12 + 17) + 4) *= 2;
      ++*(_DWORD *)(*((_DWORD *)v12 + 17) + 8);
      **((_DWORD **)v12 + 17) = v47;
      v56 = (_DWORD *)*((_DWORD *)v12 + 17);
      if ( v56[7] <= v56[3] >> 1 )
        v57 = 0;
      else
        v57 = v56[8] + 1;
      v56[8] = v57;
      v58 = *((_DWORD *)v12 + 17);
      if ( *(_DWORD *)(v58 + 32) > 1u )
        *(_DWORD *)(v58 + 36) = 1;
    }
  }
  strcpy(byte_79C74, s);
  dword_79490 = (int)&dword_79490;
  dword_79494 = (int)&dword_79490;
  sub_59384(&off_72440, "Options for both config file and command line");
  sub_59384(&off_72C4C, "Options for command line only");
  sub_59454(&v187, v183, 58988);
  if ( v187 != 1 )
  {
    strcpy(dest, "Unexpected extra commandline arguments");
    sub_3F1C0(3, dest, 1);
    sub_17CF0(1, 0);
  }
  if ( !byte_73D18 )
  {
    dword_73D10 = (int)malloc(0x1000u);
    sub_127F8((char *)dword_73D10);
    if ( access((const char *)dword_73D10, 4) )
    {
      free((void *)dword_73D10);
      dword_73D10 = 0;
    }
    else
    {
      sub_132D4((const char *)dword_73D10);
    }
  }
  if ( byte_73E70 || dword_73E74 )
  {
    if ( byte_79921 )
    {
      strcpy(dest, "Cannot use benchmark mode with scrypt");
      sub_3F1C0(3, dest, 1);
      sub_132C4(1);
    }
    v59 = (char *)sub_1B088();
    v60 = malloc(0xFFu);
    *((_DWORD *)v59 + 43) = v60;
    if ( dword_73E74 )
      v61 = "Benchfile";
    else
      v61 = "Benchmark";
    v62 = v60;
    v63 = *(_DWORD *)v61;
    v64 = *((_DWORD *)v61 + 1);
    v65 = *((_DWORD *)v61 + 2);
    *v62 = v63;
    v62[1] = v64;
    *((_WORD *)v62 + 4) = v65;
    v66 = *((_DWORD *)v59 + 43);
    *((_DWORD *)v59 + 45) = v66;
    *((_DWORD *)v59 + 46) = v66;
    *((_DWORD *)v59 + 44) = v66;
    *((_DWORD *)v59 + 150) = v66;
    strncpy(v59 + 48, "?", 7u);
    v67 = 0;
    v59[55] = 0;
    sub_BE00((int)v59);
    v59[97] = 0;
    byte_75AA8 = 1;
    do
    {
      sub_2CE9C((char *)&unk_73EE8 + 160 * v67, &a000000029c6bf4[324 * v67], 160);
      sub_2CE9C((char *)&unk_748E8 + 160 * v67, &a00000002c01f50[324 * v67], 160);
      ++v67;
    }
    while ( v67 != 16 );
    sub_128FC((int)dword_75538);
  }
  if ( !dword_739E0 )
    goto LABEL_103;
  v68 = fopen((const char *)dword_739E0, "rb");
  memset(ptr, 0, sizeof(ptr));
  if ( !v68 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(dest, 0x800u, "Open miner version file %s error", (const char *)dword_739E0);
      sub_3F1C0(3, dest, 0);
      goto LABEL_99;
    }
LABEL_100:
    if ( byte_75C08 || dword_734EC > 2 )
      goto LABEL_102;
LABEL_103:
    if ( dword_739D0 )
    {
      byte_75AE0 = 1;
      strcpy(dword_75AE8, (const char *)dword_739D0);
      if ( dword_739DC )
        strcpy(word_75BE8, (const char *)dword_739DC);
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(dest, 0x800u, "Log file path: %s Open flag: %s", dword_75AE8, word_75BE8);
        sub_3F1C0(3, dest, 0);
      }
    }
    if ( dword_739D8 )
    {
      memset(ptr, 0, sizeof(ptr));
      if ( dword_739D4 )
      {
        if ( !*(_BYTE *)dword_739D4 )
        {
          strcpy(dest, "Log work asic num empty");
          sub_3F1C0(3, dest, 1);
          sub_132C4(1);
        }
        v75 = strtol((const char *)dword_739D4, 0, 10);
        dword_75758 = v75;
        v76 = v75 == 32;
        if ( v75 != 32 )
          v76 = v75 == 1;
        if ( !v76 && v75 != 64 )
        {
          strcpy(dest, "Log work asic num must be 1, 32, 64");
          sub_3F1C0(3, dest, 1);
          sub_132C4(1);
        }
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(dest, 0x800u, "Log work path: %s Asic num: %s", (const char *)dword_739D8, (const char *)dword_739D4);
          sub_3F1C0(3, dest, 0);
        }
      }
      else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(dest, 0x800u, "Log work path: %s", (const char *)dword_739D8);
        sub_3F1C0(3, dest, 0);
      }
      sprintf(ptr, "%s.txt", (const char *)dword_739D8);
      dword_7575C = (int)fopen(ptr, "a+");
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(dest, 0x800u, "Log work open file %s", ptr);
        sub_3F1C0(3, dest, 0);
      }
      v77 = dword_75758;
      if ( dword_75758 == 1 )
      {
        sprintf(ptr, "%s%02d.txt", (const char *)dword_739D8, 1);
        dword_75760 = (int)fopen(ptr, "a+");
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(dest, 0x800u, "Log work open asic %d file %s", dword_75758, ptr);
          sub_3F1C0(3, dest, 0);
        }
      }
      else
      {
        v78 = dword_75758 == 32;
        if ( dword_75758 != 32 )
          v78 = dword_75758 == 64;
        if ( v78 && dword_75758 >= 0 )
        {
          v79 = &dword_7575C;
          v80 = 0;
          do
          {
            sprintf(ptr, "%s%02d_%02d.txt", (const char *)dword_739D8, v77, v80);
            v79[1] = (int)fopen(ptr, "a+");
            ++v79;
            if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
            {
              snprintf(dest, 0x800u, "Log work open asic %d file %s", dword_75758, ptr);
              sub_3F1C0(3, dest, 0);
            }
            ++v80;
            v77 = dword_75758;
          }
          while ( dword_75758 >= v80 );
        }
      }
      if ( byte_75864 )
      {
        v81 = &byte_75864;
        for ( i = 0; i != 65; ++i )
        {
          sprintf(ptr, "%s_diff_%02d.txt", (const char *)dword_739D8, i);
          *((_DWORD *)v81 + 1) = fopen(ptr, "a+");
          v81 += 4;
          if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
          {
            snprintf(dest, 0x800u, "Log work open diff file %s", ptr);
            sub_3F1C0(3, dest, 0);
          }
        }
      }
    }
    if ( byte_79BE0 )
    {
      byte_72C00 = 0;
    }
    else if ( byte_72C00 )
    {
      sub_27560();
    }
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(dest, 0x800u, "Started %s", byte_739E4);
      sub_3F1C0(4, dest, 0);
    }
    if ( dword_73D10 )
    {
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(dest, 0x800u, "Loaded configuration file %s", (const char *)dword_73D10);
        sub_3F1C0(7, dest, 0);
      }
      if ( dword_73DE4 == -1 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
        {
          strcpy(dest, "Error in configuration file, partially loaded.");
          sub_3F1C0(4, dest, 0);
        }
        if ( byte_72C00 && (byte_78D98 || byte_75C08 || dword_734EC > 3) )
        {
          strcpy(dest, "Start cgminer with -T to see what failed to load.");
          sub_3F1C0(4, dest, 0);
        }
      }
      else if ( !dword_73DE4 )
      {
        if ( (byte_78D98 || byte_75C08 || dword_734EC > 3)
          && ((strcpy(dest, "Fatal JSON error in configuration file."), sub_3F1C0(4, dest, 0), byte_78D98) || byte_75C08)
          || dword_734EC > 3 )
        {
          strcpy(dest, "Configuration file could not be used.");
          sub_3F1C0(4, dest, 0);
        }
      }
      free((void *)dword_73D10);
      dword_73D10 = 0;
    }
    *(_WORD *)(dword_79DC4 + strlen((const char *)dword_79DC4)) = 47;
    if ( byte_79920 )
      byte_75C08 = 1;
    if ( dword_72BF8 < 0 )
    {
      if ( byte_79921 )
        v83 = 30;
      else
        v83 = 60;
      dword_72BF8 = v83;
    }
    dword_7596C = 8;
    dword_7914C = (int)calloc(8u, 0x40u);
    if ( !dword_7914C )
    {
      strcpy(dest, "Failed to calloc control_thr");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    v84 = 0;
    dword_75970 = 0;
    sub_276AC((int)&unk_797F0);
    sub_276AC((int)&unk_78D18);
    sub_276AC((int)&unk_798A0);
    sub_276AC((int)&unk_79498);
    sub_276AC((int)&unk_79BE8);
    sub_276AC((int)&unk_79DD8);
    sub_276AC((int)&unk_79518);
    sub_276AC((int)&unk_738F0);
    sub_276AC((int)&unk_79E70);
    sub_276AC((int)&unk_795A0);
    sub_276AC((int)&unk_79740);
    sub_276AC((int)&unk_79B10);
    sub_276AC((int)&unk_78DB8);
    sub_276AC((int)&unk_79CC0);
    sub_276AC((int)&unk_78EC0);
    sub_276AC((int)&unk_79350);
    sub_276AC((int)&unk_792A8);
    sub_276AC((int)&unk_78FC0);
    sub_276AC((int)&unk_79988);
    sub_276AC((int)&unk_790C8);
    sub_276AC((int)&unk_79040);
    sub_276AC((int)&unk_79628);
    sub_276AC((int)&unk_793F0);
    sub_276AC((int)&unk_79220);
    sub_276AC((int)&unk_79D40);
    sub_276AC((int)&unk_78F40);
    sub_276AC((int)&unk_78E38);
    off_797FC(0);
    off_78D24(0);
    off_798AC(0);
    off_794A4(0);
    off_79BF4(0);
    off_79DE4(0);
    off_79524(0);
    off_738FC(0);
    off_79E7C(0);
    off_795AC(0);
    off_7974C(0);
    off_79B1C(0);
    off_78DC4(0);
    off_79CCC(0);
    off_78ECC(0);
    off_7935C(0);
    off_792B4(0);
    off_78FCC(0);
    off_79994(0);
    off_790D4(0);
    off_7904C(0);
    off_79634(0);
    off_793FC(0);
    off_7922C(0);
    off_79D4C(0);
    off_78F4C(0);
    off_78E44(0);
    dword_79CB8 = 0;
    v85 = dword_797E8;
    if ( dword_797E8 > 0 )
    {
      do
      {
        sub_278FC(*(pthread_rwlock_t **)(dword_796F0 + 4 * v84++));
        v85 = dword_797E8;
      }
      while ( dword_797E8 > v84 );
    }
    if ( !v85 )
    {
      strcpy(dest, "All devices disabled, cannot mine!");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    dword_73E90 = v85;
    if ( !dword_73CEC )
    {
      sub_13948(&stru_797C8, "cgminer.c", "load_temp_cutoffs", 1448);
      v91 = dword_797E8;
      v92 = dword_796F0;
      for ( j = 0; j < v91; ++j )
      {
        v94 = *(_DWORD *)(v92 + 4 * j);
        if ( !*(_DWORD *)(v94 + 184) )
          *(_DWORD *)(v94 + 184) = 95;
      }
      v95 = sub_139B4(&stru_797C8, "cgminer.c", "load_temp_cutoffs", 1454);
      off_72D00(v95);
      goto LABEL_225;
    }
    v86 = strtok((char *)dword_73CEC, ",");
    if ( v86 )
    {
      v87 = 0;
      do
      {
        if ( v87 >= dword_797E8 )
        {
          strcpy(dest, "Too many values passed to set temp cutoff");
          sub_3F1C0(3, dest, 1);
          sub_132C4(1);
        }
        v88 = strtol(v86, 0, 10);
        if ( v88 > 0xC8 )
        {
          strcpy(dest, "Invalid value passed to set temp cutoff");
          sub_3F1C0(3, dest, 1);
          sub_132C4(1);
        }
        if ( pthread_rwlock_rdlock(&stru_797C8) )
        {
          v89 = _errno_location();
          snprintf(
            dest,
            0x800u,
            "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
            *v89,
            "cgminer.c",
            "load_temp_cutoffs",
            1441);
          sub_3F1C0(3, dest, 1);
          sub_132C4(1);
        }
        *(_DWORD *)(*(_DWORD *)(dword_796F0 + 4 * v87) + 184) = v88;
        if ( pthread_rwlock_unlock(&stru_797C8) )
        {
          v90 = _errno_location();
          snprintf(
            dest,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v90,
            "cgminer.c",
            "load_temp_cutoffs",
            1443);
          sub_3F1C0(3, dest, 1);
          sub_132C4(1);
        }
        off_72D00(0);
        ++v87;
        v86 = strtok(0, ",");
      }
      while ( v86 );
      if ( v87 > 1 )
        goto LABEL_225;
    }
    else
    {
      v88 = 0;
      v87 = 0;
    }
    sub_13948(&stru_797C8, "cgminer.c", "load_temp_cutoffs", 1460);
    v96 = dword_797E8;
    v97 = dword_796F0;
    while ( v87 < v96 )
      *(_DWORD *)(*(_DWORD *)(v97 + 4 * v87++) + 184) = v88;
    v98 = sub_139B4(&stru_797C8, "cgminer.c", "load_temp_cutoffs", 1463);
    off_72D00(v98);
LABEL_225:
    v99 = dword_797E8;
    if ( dword_797E8 > 0 )
    {
      v100 = dword_796F0 - 4;
      v101 = 0;
      do
      {
        v102 = *(_DWORD *)(v100 + 4);
        v100 += 4;
        *(_DWORD *)(v102 + 312) = 99999999;
        ++v101;
      }
      while ( v99 > v101 );
    }
    if ( !byte_79A08 )
    {
      dword_73E80 += dword_73E90;
      dword_73E88 = dword_73E80 + 1;
      sub_15280();
    }
    if ( !dword_791E8 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
      {
        strcpy(dest, "Need to specify at least one pool server.");
        sub_3F1C0(4, dest, 0);
      }
      if ( !byte_72C00 || !sub_26504(0) )
      {
        strcpy(dest, "Pool setup failed");
        sub_3F1C0(3, dest, 1);
        sub_17CF0(1, 0);
      }
    }
    if ( dword_791E8 > 0 )
    {
      v103 = 0;
      do
      {
        v104 = *(_DWORD *)(dword_79488 + 4 * v103);
        *(_DWORD *)(v104 + 404) = 99999999;
        *(_DWORD *)(v104 + 440) = 99999999;
        if ( !*(_DWORD *)(v104 + 176) )
        {
          if ( !*(_DWORD *)(v104 + 184) )
            *(_DWORD *)(v104 + 184) = calloc(1u, 1u);
          v105 = *(const char **)(v104 + 180);
          if ( !v105 )
          {
            snprintf(dest, 0x800u, "No login credentials supplied for pool %u %s", v103, *(const char **)(v104 + 172));
            sub_3F1C0(3, dest, 1);
            sub_17CF0(1, 0);
          }
          v106 = strlen(*(const char **)(v104 + 180));
          v107 = *(const char **)(v104 + 184);
          v108 = v106 + strlen(v107) + 2;
          v109 = (char *)malloc(v108);
          *(_DWORD *)(v104 + 176) = v109;
          if ( !v109 )
          {
            strcpy(dest, "Failed to malloc userpass");
            sub_3F1C0(3, dest, 1);
            sub_17CF0(1, 0);
          }
          snprintf(v109, v108, "%s:%s", v105, v107);
        }
        ++v103;
      }
      while ( dword_791E8 > v103 );
    }
    dword_73E6C = *(_DWORD *)dword_79488;
    if ( byte_78D98 )
      openlog("cgminer", 1, 8);
    if ( dword_75974 )
    {
      if ( pipe((int *)dest) < 0 )
      {
        perror("pipe - failed to create pipe for --monitor");
        exit(1);
      }
      fflush((FILE *)stderr);
      if ( dup2(*(int *)&dest[4], 2) < 0 )
      {
        perror("dup2 - failed to alias stderr to write end of pipe for --monitor");
        exit(1);
      }
      if ( close(*(int *)&dest[4]) < 0 )
      {
        perror("close - failed to close write end of pipe for --monitor");
        exit(1);
      }
      v110 = signal(13, (__sighandler_t)1);
      v111 = signal(13, (__sighandler_t)1);
      v112 = (__sighandler_t)((char *)v111 + 1) == 0;
      if ( v111 != (__sighandler_t)-1 )
        v112 = (__sighandler_t)((char *)v110 + 1) == 0;
      if ( v112 )
      {
        perror("signal - failed to edit signal mask for --monitor");
        exit(1);
      }
      v113 = fork();
      dword_73ED8 = v113;
      if ( v113 < 0 )
      {
        perror("fork - failed to fork child process for --monitor");
        exit(1);
      }
      if ( !v113 )
      {
        if ( dup2(*(int *)dest, 0) < 0 )
        {
          perror("dup2 - in child, failed to alias read end of pipe to stdin for --monitor");
          exit(1);
        }
        close(*(int *)dest);
        execl("/bin/bash", "/bin/bash", "-c", dword_75974, 0);
        perror("execl - in child failed to exec user specified command for --monitor");
        exit(1);
      }
      if ( close(*(int *)dest) < 0 )
      {
        perror("close - failed to close read end of pipe for --monitor");
        exit(1);
      }
    }
    dword_796A8 = (int)calloc(dword_79CB8, 4u);
    if ( !dword_796A8 )
    {
      strcpy(dest, "Failed to calloc mining_thr");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    for ( k = 0; k < dword_79CB8; ++k )
    {
      v114 = dword_796A8;
      *(_DWORD *)(v114 + 4 * k) = calloc(1u, 0x40u);
      if ( !*(_DWORD *)(dword_796A8 + 4 * k) )
      {
        snprintf(dest, 0x800u, "Failed to calloc mining_thr[%d]", k);
        sub_3F1C0(3, dest, 1);
        sub_17CF0(1, 0);
      }
    }
    v116 = 0;
    for ( m = 0; m < dword_797E8; ++m )
    {
      v118 = *(_DWORD **)(dword_796F0 + 4 * m);
      v119 = v118[37];
      v120 = malloc(4 * (v119 + 1));
      v118[38] = v120;
      v120[v119] = 0;
      v118[24] = 4;
      if ( (int)v118[37] > 0 )
      {
        v121 = 0;
        do
        {
          v122 = (int *)sub_13B98(v116);
          *v122 = v116;
          v122[9] = (int)v118;
          v122[1] = v121;
          if ( (*(int (**)(void))(v118[1] + 44))() )
          {
            if ( sub_346C4(v122, 0, sub_E854, v122) )
            {
              snprintf(dest, 0x800u, "thread %d create failed", *v122);
              sub_3F1C0(3, dest, 1);
              sub_17CF0(1, 0);
            }
            *(_DWORD *)(v118[38] + 4 * v121) = v122;
            if ( v118[8] != 1 )
            {
              if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
              {
                snprintf(dest, 0x800u, "Pushing sem post to thread %d", *v122);
                sub_3F1C0(7, dest, 0);
              }
              sub_3470C(v122 + 4, "cgminer.c", "main", 11737);
            }
          }
          ++v121;
          ++v116;
        }
        while ( v118[37] > v121 );
      }
    }
    if ( !byte_73E70 && !dword_73E74 )
    {
      for ( n = 0; n < dword_791E8; ++n )
      {
        v124 = *(_DWORD *)(dword_79488 + 4 * n);
        sub_BE00(v124);
        *(_BYTE *)(v124 + 97) = 1;
      }
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(dest, "Probing for an alive pool");
        sub_3F1C0(7, dest, 0);
      }
      for ( ii = 0; ii < dword_791E8; ++ii )
      {
        v126 = *(_DWORD *)(dword_79488 + 4 * ii);
        *(_BYTE *)(v126 + 292) = 1;
        pthread_create((pthread_t *)(v126 + 288), 0, (void *(*)(void *))start_routine, (void *)v126);
      }
      v127 = 60;
      do
      {
        sleep(1u);
        if ( byte_75358 )
          goto LABEL_345;
        --v127;
      }
      while ( v127 );
      v128 = 0;
      while ( !byte_75358 )
      {
        if ( !v128 )
        {
          if ( ((byte_78D98 || byte_75C08 || dword_734EC > 2)
             && ((strcpy(dest, "No servers were found that could be used to get work from."),
                  sub_3F1C0(3, dest, 0),
                  byte_78D98)
              || byte_75C08)
             || dword_734EC > 2)
            && ((strcpy(dest, "Please check the details from the list below of the servers you have input"),
                 sub_3F1C0(3, dest, 0),
                 byte_78D98)
             || byte_75C08)
            || dword_734EC > 2 )
          {
            strcpy(
              dest,
              "Most likely you have input the wrong URL, forgotten to add a port, or have not set up workers");
            sub_3F1C0(3, dest, 0);
          }
          for ( jj = 0; jj < dword_791E8; ++jj )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
            {
              snprintf(
                dest,
                0x800u,
                "Pool: %d  URL: %s  User: %s  Password: %s",
                jj,
                *(const char **)(*(_DWORD *)(dword_79488 + 4 * jj) + 172),
                *(const char **)(*(_DWORD *)(dword_79488 + 4 * jj) + 180),
                *(const char **)(*(_DWORD *)(dword_79488 + 4 * jj) + 184));
              sub_3F1C0(4, dest, 0);
            }
          }
          if ( !byte_72C00 )
          {
LABEL_336:
            strcpy(dest, "No servers could be used! Exiting.");
            sub_3F1C0(3, dest, 1);
            sub_17CF0(0, 0);
          }
          if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 2 )
          {
            v128 = 1;
            goto LABEL_338;
          }
          strcpy(dest, "Press any key to exit, or cgminer will wait indefinitely for an alive pool.");
          sub_3F1C0(3, dest, 0);
          v128 = 1;
        }
        if ( !byte_72C00 )
          goto LABEL_336;
LABEL_338:
        if ( dword_79480 )
          v130 = *(__int16 *)(dword_79480 + 4) + 1;
        else
          v130 = -1;
        wtouchln((WINDOW *)dword_79480, 0, v130, 1);
        wrefresh((WINDOW *)dword_79480);
        halfdelay(10);
        if ( wgetch((WINDOW *)stdscr) != -1 )
        {
          strcpy(dest, "No servers could be used! Exiting.");
          sub_3F1C0(3, dest, 1);
          sub_17CF0(0, 0);
        }
        cbreak();
      }
    }
LABEL_345:
    dbl_78D10 = 0.0;
    v131 = (int *)dbl_73E00;
    do
    {
      *(_QWORD *)v131 = 0;
      v131 += 2;
    }
    while ( v131 != &dword_73E60 );
    v132 = 0;
    dword_73E60 = 0;
    v133 = dword_797E8;
    v134 = dword_796F0;
    while ( v132 < v133 )
    {
      v135 = *(_DWORD *)(v134 + 4 * v132);
      *(_QWORD *)(v135 + 80) = 0;
      *(_QWORD *)(v135 + 48) = 0;
      ++v132;
    }
    sub_2FE30(&dword_73DF0);
    sub_2FE30(&dword_73EA4);
    sub_2FE30(&unk_73DF8);
    sub_116DC(byte_73EAC, 0x28u, &dword_73DF0);
    dword_73DE8 = 2;
    v136 = dword_7914C;
    if ( sub_346C4(dword_7914C + 128, 0, sub_19E58, 0) )
    {
      strcpy(dest, "watchpool thread create failed");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    pthread_detach(*(_DWORD *)(v136 + 140));
    dword_73DEC = 3;
    v137 = dword_7914C;
    if ( sub_346C4(dword_7914C + 192, 0, sub_1E2E4, 0) )
    {
      strcpy(dest, "watchdog thread create failed");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    pthread_detach(*(_DWORD *)(v137 + 204));
    dword_73AE8 = 5;
    if ( sub_346C4(dword_7914C + 320, 0, sub_E624, dword_7914C + 320) )
    {
      strcpy(dest, "API thread create failed");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    dword_75978 = 7;
    v138 = dword_7914C;
    if ( sub_346C4(dword_7914C + 448, 0, sub_27458, dword_7914C + 448) )
    {
      strcpy(dest, "input thread create failed");
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    pthread_detach(*(_DWORD *)(v138 + 460));
    if ( dword_7596C != 8 )
    {
      snprintf(dest, 0x800u, "incorrect total_control_threads (%d) should be 8", dword_7596C);
      sub_3F1C0(3, dest, 1);
      sub_17CF0(1, 0);
    }
    if ( !nice(-10) && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(dest, "Unable to set thread to high priority");
      sub_3F1C0(7, dest, 0);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( byte_79974 )
        {
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            strcpy(dest, "Work update message received");
            sub_3F1C0(7, dest, 0);
          }
          sub_2FE30(&unk_73CF8);
          if ( pthread_rwlock_rdlock(&stru_79718) )
          {
            v139 = _errno_location();
            snprintf(
              dest,
              0x800u,
              "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
              *v139,
              "cgminer.c",
              "signal_work_update",
              5622);
            sub_3F1C0(3, dest, 1);
            sub_132C4(1);
          }
          v140 = dword_79CB8;
          if ( dword_79CB8 > 0 )
          {
            v141 = dword_796A8 - 4;
            v142 = 0;
            do
            {
              v143 = *(_DWORD *)(v141 + 4);
              v141 += 4;
              *(_BYTE *)(v143 + 63) = 1;
              ++v142;
            }
            while ( v140 > v142 );
          }
          if ( pthread_rwlock_unlock(&stru_79718) )
          {
            v144 = _errno_location();
            snprintf(
              dest,
              0x800u,
              "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v144,
              "cgminer.c",
              "signal_work_update",
              5625);
            sub_3F1C0(3, dest, 1);
            sub_132C4(1);
          }
          off_72D00(0);
        }
        byte_79974 = 0;
        sub_14838();
        v145 = sub_14838();
        v146 = v145;
        if ( dword_739C4 == 4 )
        {
          v146 = sub_BE9C(v145);
          goto LABEL_412;
        }
        if ( dword_739C4 == 3 )
        {
          v147 = dword_791E8;
          if ( dword_791E8 <= 0 )
            goto LABEL_390;
          v148 = dword_79488;
          if ( *(_DWORD *)(*(_DWORD *)dword_79488 + 64) >= *(_DWORD *)(*(_DWORD *)dword_79488 + 60) )
          {
            v149 = 0;
            while ( ++v149 != dword_791E8 )
            {
              v150 = *(_DWORD *)(v148 + 4);
              v148 += 4;
              if ( *(_DWORD *)(v150 + 64) < *(_DWORD *)(v150 + 60) )
                goto LABEL_393;
            }
            v151 = (int *)dword_79488;
            v152 = dword_79488 + 4 * dword_791E8;
            do
            {
              v153 = *v151++;
              *(_DWORD *)(v153 + 64) = 0;
            }
            while ( v151 != (int *)v152 );
LABEL_390:
            if ( v147 <= dword_7597C + 1 )
              dword_7597C = 0;
            else
              ++dword_7597C;
          }
LABEL_393:
          for ( kk = 0; ; kk = v159 )
          {
            v159 = kk + 1;
            if ( dword_791E8 <= kk )
              goto LABEL_405;
            v155 = *(_DWORD *)(dword_79488 + 4 * dword_7597C);
            v156 = *(_DWORD *)(v155 + 64);
            v157 = *(_DWORD *)(v155 + 60);
            *(_DWORD *)(v155 + 64) = v156 + 1;
            if ( v156 < v157 )
            {
              if ( !sub_BE54(v155) )
              {
                if ( v155 )
                {
                  v146 = v155;
                }
                else
                {
LABEL_405:
                  if ( dword_791E8 > 0 )
                  {
                    v160 = 0;
                    while ( 1 )
                    {
                      v161 = sub_C024(v160);
                      if ( !sub_BF88(v161) )
                        break;
                      if ( ++v160 >= dword_791E8 )
                        goto LABEL_412;
                    }
                    if ( v161 )
                      v146 = v161;
                  }
                }
                break;
              }
              if ( byte_796ED )
              {
                v158 = sub_C024(0);
                --*(_DWORD *)(v158 + 64);
              }
            }
            if ( ++dword_7597C >= dword_791E8 )
              dword_7597C = 0;
          }
        }
LABEL_412:
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(dest, 0x800u, "Selecting pool %d for work", *(_DWORD *)v146);
          sub_3F1C0(7, dest, 0);
        }
        v186 = &dword_739C0;
LABEL_419:
        if ( !*(_BYTE *)(v146 + 640) )
          break;
        while ( !*(_BYTE *)(v146 + 641) || !*(_BYTE *)(v146 + 643) )
        {
          v162 = sub_14838();
          v163 = (_DWORD *)v162;
          v164 = v186[1];
          if ( v164 == 4 )
          {
            v163 = (_DWORD *)sub_BE9C(v162);
            goto LABEL_454;
          }
          if ( v164 == 3 || !byte_796ED )
          {
            v165 = dword_791E8;
            if ( dword_791E8 <= 0 )
              goto LABEL_432;
            v166 = dword_79488;
            if ( *(_DWORD *)(*(_DWORD *)dword_79488 + 60) <= *(_DWORD *)(*(_DWORD *)dword_79488 + 64) )
            {
              v167 = 0;
              while ( ++v167 != dword_791E8 )
              {
                v168 = *(_DWORD *)(v166 + 4);
                v166 += 4;
                if ( *(_DWORD *)(v168 + 64) < *(_DWORD *)(v168 + 60) )
                  goto LABEL_435;
              }
              v169 = (int *)dword_79488;
              v170 = dword_79488 + 4 * dword_791E8;
              do
              {
                v171 = *v169++;
                *(_DWORD *)(v171 + 64) = 0;
              }
              while ( v169 != (int *)v170 );
LABEL_432:
              v172 = dword_7597C + 1;
              if ( v165 <= dword_7597C + 1 )
                v172 = 0;
              dword_7597C = v172;
            }
LABEL_435:
            for ( mm = 0; ; mm = v178 )
            {
              v178 = mm + 1;
              if ( dword_791E8 <= mm )
                goto LABEL_447;
              v174 = *(_DWORD *)(dword_79488 + 4 * dword_7597C);
              v175 = *(_DWORD *)(v174 + 64);
              v176 = *(_DWORD *)(v174 + 60);
              *(_DWORD *)(v174 + 64) = v175 + 1;
              if ( v175 < v176 )
              {
                if ( !sub_BE54(v174) )
                {
                  if ( v174 )
                  {
                    v163 = (_DWORD *)v174;
                  }
                  else
                  {
LABEL_447:
                    if ( dword_791E8 > 0 )
                    {
                      v179 = 0;
                      while ( 1 )
                      {
                        v180 = sub_C024(v179);
                        if ( !sub_BF88(v180) )
                          break;
                        if ( ++v179 >= dword_791E8 )
                          goto LABEL_454;
                      }
                      if ( v180 )
                        v163 = (_DWORD *)v180;
                    }
                  }
                  break;
                }
                if ( byte_796ED )
                {
                  v177 = sub_C024(0);
                  --*(_DWORD *)(v177 + 64);
                }
              }
              if ( ++dword_7597C >= dword_791E8 )
                dword_7597C = 0;
            }
          }
LABEL_454:
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            snprintf(dest, 0x800u, "Selecting pool %d for work", *v163);
            sub_3F1C0(7, dest, 0);
          }
          sub_2FF20(5000);
          if ( (_DWORD *)v146 != v163 )
          {
            v146 = (int)v163;
            goto LABEL_419;
          }
        }
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(dest, "Generated stratum work");
          sub_3F1C0(7, dest, 0);
        }
        sub_2FF20(10);
      }
      if ( dword_73E74 )
        break;
      if ( byte_73E70 )
      {
        MEMORY[0x1B8] = 0;
        MEMORY[0x1BC] = 1077936128;
        MEMORY[0xD4] = dword_75538[0];
        MEMORY[0xD8] = dword_75538[1];
        MEMORY[0xDC] = dword_75538[2];
        MEMORY[0xE0] = dword_75538[3];
        MEMORY[0xE4] = unk_75548;
        MEMORY[0xE8] = unk_7554C;
        MEMORY[0xEC] = unk_75550;
        MEMORY[0xF0] = unk_75554;
        MEMORY[0x12C] = 0;
        MEMORY[0x152] = 1;
        MEMORY[0x13C] = *(_DWORD *)dword_79488;
        sub_2FE30(464);
        sub_2FAE0(472, 464);
        MEMORY[0x1F8] = 66;
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(dest, "Generated benchmark work");
          sub_3F1C0(7, dest, 0);
        }
LABEL_474:
        sub_22D4C(0);
      }
    }
    sub_162D4(0);
    MEMORY[0x152] = 1;
    MEMORY[0x13C] = *(_DWORD *)dword_79488;
    sub_2FE30(464);
    sub_2FAE0(472, 464);
    MEMORY[0x1F8] = 66;
    sub_E210(0);
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      strcpy(dest, "Generated benchfile work");
      sub_3F1C0(7, dest, 0);
    }
    goto LABEL_474;
  }
  v69 = fread(ptr, 1u, 0x100u, v68);
  if ( v69 > 0 )
  {
    v70 = strchr(ptr, 10);
    if ( v70 )
    {
      memcpy(::dest, ptr, v70 - ptr);
      strcpy(byte_75658, v70 + 1);
    }
    else
    {
      strcpy(::dest, ptr);
    }
    v71 = (char *)&unk_759B8 + strlen(::dest) - 1;
    if ( *(v71 - 1120) == 10 )
      *(v71 - 1120) = 0;
    v72 = (char *)&unk_759B8 + strlen(::dest) - 1;
    if ( *(v72 - 1120) == 13 )
      *(v72 - 1120) = 0;
    v73 = (char *)&unk_759B8 + strlen(byte_75658) - 1;
    if ( *(v73 - 864) == 10 )
      *(v73 - 864) = 0;
    v74 = (char *)&unk_759B8 + strlen(byte_75658) - 1;
    if ( *(v74 - 864) == 13 )
      *(v74 - 864) = 0;
  }
  else
  {
    if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 2 )
      goto LABEL_100;
    snprintf(dest, 0x800u, "Read miner version file %s error %d", (const char *)dword_739E0, v69);
    sub_3F1C0(3, dest, 0);
  }
LABEL_99:
  if ( byte_78D98 )
  {
LABEL_102:
    snprintf(dest, 0x800u, "Miner compile time: %s type: %s", ::dest, byte_75658);
    sub_3F1C0(3, dest, 0);
    goto LABEL_103;
  }
  goto LABEL_100;
}
