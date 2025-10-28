int platform_topol_init()
{
  double *file; // r0
  double *v1; // r11
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r10
  const char *v7; // r9
  size_t v8; // r0
  char *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r9
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r9
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  _DWORD *v18; // r0
  _DWORD *v19; // r8
  _DWORD *v20; // r0
  int v21; // r0
  int v22; // r2
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v27; // r0
  int v28; // r2
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  int v31; // r9
  int v32; // r0
  size_t v33; // r9
  void *v34; // r0
  _DWORD *v35; // r0
  int v36; // r6
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r6
  int v40; // r0
  _DWORD *v41; // r0
  int v42; // r6
  int v43; // r0
  _DWORD *v44; // r0
  int v45; // r6
  int v46; // r0
  _DWORD *v47; // r0
  int v48; // r8
  int v49; // r0
  _DWORD *v50; // r0
  _DWORD *v51; // r8
  char *v52; // r2
  _DWORD *v53; // r0
  int v54; // r8
  int v55; // r0
  _DWORD *v56; // r0
  int v57; // r8
  int v58; // r0
  size_t v59; // r0
  int v60; // r6
  void *v61; // r0
  _DWORD *v62; // r0
  int v63; // r6
  int v64; // r0
  _DWORD *v65; // r0
  int v66; // r6
  int v67; // r0
  _DWORD *v68; // r0
  int v69; // r6
  int v70; // r0
  _DWORD *v71; // r0
  int v72; // r6
  int v73; // r0
  int v74; // r3
  _DWORD *v75; // r0
  _DWORD *v76; // r0
  _DWORD *v77; // r11
  _DWORD *v78; // r0
  int v79; // r7
  int v80; // r0
  int v81; // r0
  int v82; // r9
  _DWORD *v83; // r9
  _DWORD *v84; // r0
  _DWORD *v85; // r7
  _DWORD *v86; // r0
  const char *v87; // r6
  int v88; // r3
  _DWORD *v89; // r0
  int v90; // r6
  int v91; // r0
  int v92; // r0
  char *v93; // r1
  _DWORD *v94; // r0
  _DWORD *v95; // r6
  _DWORD *v96; // r0
  int v97; // r7
  char **v98; // r8
  const char *v99; // r0
  const char *v100; // r1
  const char *v101; // r10
  const char *v102; // t1
  char *v103; // r1
  int v104; // r6
  _DWORD *v105; // r0
  _DWORD *v106; // r8
  _DWORD *v107; // r0
  const char **v108; // r7
  const char *v109; // r0
  const char *v110; // r1
  const char *v111; // r8
  const char *v112; // t1
  int v113; // r0
  int v114; // r2
  int v115; // r0
  int v116; // r2
  _DWORD *v117; // r3
  _DWORD *v118; // r0
  _DWORD *v119; // r0
  int v120; // r8
  _DWORD *v121; // r0
  _DWORD *v122; // r0
  int v123; // r9
  char **v124; // r6
  int v125; // r4
  const char *v126; // r7
  const char *v127; // r1
  const char *v128; // t1
  int v129; // r2
  _DWORD *v130; // r0
  int v131; // r6
  int v132; // r0
  int v133; // r4
  int v134; // r5
  int v135; // r0
  int v136; // r3
  int v137; // r6
  int v138; // r5
  int v139; // r4
  char *v140; // r1
  char *v141; // r0
  unsigned int *v142; // r3
  unsigned int v143; // r2
  unsigned int v144; // r2
  int v145; // r0
  int v146; // r3
  _DWORD *v147; // r0
  _DWORD *v148; // r0
  _DWORD *v149; // r11
  _DWORD *v150; // r0
  int v151; // r7
  int v152; // r0
  int v153; // r0
  int v154; // r10
  _DWORD *v155; // r10
  _DWORD *v156; // r0
  _DWORD *v157; // r7
  _DWORD *v158; // r0
  const char *v159; // r6
  int v160; // r3
  _DWORD *v161; // r0
  int v162; // r6
  int v163; // r0
  int v164; // r0
  char *v165; // r1
  _DWORD *v166; // r0
  _DWORD *v167; // r6
  _DWORD *v168; // r0
  int v169; // r7
  char **v170; // r8
  const char *v171; // r0
  const char *v172; // r1
  const char *v173; // r9
  const char *v174; // t1
  char *v175; // r1
  int v176; // r6
  _DWORD *v177; // r0
  _DWORD *v178; // r8
  _DWORD *v179; // r0
  const char **v180; // r7
  const char *v181; // r0
  const char *v182; // r1
  const char *v183; // r8
  const char *v184; // t1
  int v185; // r2
  int v186; // r3
  int v187; // r0
  int v188; // r0
  int v189; // r0
  int v190; // [sp+10h] [bp-1124h]
  _DWORD *v191; // [sp+14h] [bp-1120h]
  int v192; // [sp+14h] [bp-1120h]
  unsigned int v193; // [sp+18h] [bp-111Ch]
  _DWORD *v194; // [sp+18h] [bp-111Ch]
  unsigned int v195; // [sp+18h] [bp-111Ch]
  _DWORD *v196; // [sp+1Ch] [bp-1118h]
  _DWORD *v197; // [sp+1Ch] [bp-1118h]
  double *v198; // [sp+1Ch] [bp-1118h]
  double *v199; // [sp+20h] [bp-1114h]
  _DWORD *v200; // [sp+20h] [bp-1114h]
  int v201; // [sp+24h] [bp-1110h]
  int v202; // [sp+28h] [bp-110Ch]
  char v203[252]; // [sp+34h] [bp-1100h] BYREF
  char v204[4100]; // [sp+130h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v203);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    v190 = -1;
    logfmt_raw(v204, 0x1000u, 0, 1379332, 1379316);
    V_UNLOCK();
    LOWORD(v117) = -12376;
    HIWORD(v117) = (unsigned int)&unk_18C750 >> 16;
    zlog(
      *v117,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "platform_topol_init",
      19,
      1488,
      20,
      v204);
    return v190;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK();
    LOWORD(v5) = -12376;
    HIWORD(v5) = (unsigned int)&unk_18C750 >> 16;
    logfmt_raw(v204, 0x1000u, 0, 1379376);
    V_UNLOCK();
    v27 = *v5;
    v28 = 139;
LABEL_26:
    zlog(
      v27,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_machine",
      14,
      v28,
      100,
      v204);
LABEL_27:
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379596);
    V_UNLOCK();
    v21 = *v5;
    v22 = 1495;
    goto LABEL_16;
  }
  V_LOCK();
  v4 = json_string_value(v3);
  LOWORD(v5) = -12376;
  HIWORD(v5) = (unsigned int)&unk_18C750 >> 16;
  logfmt_raw(v204, 0x1000u, 0, 1379396, v4);
  V_UNLOCK();
  LOWORD(v6) = -10108;
  HIWORD(v6) = (unsigned int)&dword_18D02C >> 16;
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    142,
    20,
    v204);
  v7 = (const char *)json_string_value(v3);
  v8 = strlen(v7);
  v9 = (char *)calloc(v8 + 1, 1u);
  *(_DWORD *)v6 = v9;
  if ( !v9 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379420);
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_machine",
      14,
      148,
      100,
      v204);
    goto LABEL_27;
  }
  strcpy(v9, v7);
  V_LOCK();
  logfmt_raw(v204, 0x1000u, 0, "machine : %s ", *(_DWORD *)v6);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    153,
    20,
    v204);
  v10 = (_DWORD *)json_object_get(v1, "hw_version");
  v11 = v10;
  if ( !v10 || *v10 != 2 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379492);
    V_UNLOCK();
    v27 = *v5;
    v28 = 158;
    goto LABEL_26;
  }
  V_LOCK();
  v12 = json_string_value(v11);
  logfmt_raw(v204, 0x1000u, 0, 1379516, v12);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    161,
    20,
    v204);
  v13 = (_DWORD *)json_object_get(v1, "sw_version");
  v14 = v13;
  if ( !v13 || *v13 != 2 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379544);
    V_UNLOCK();
    v27 = *v5;
    v28 = 166;
    goto LABEL_26;
  }
  V_LOCK();
  v15 = json_string_value(v14);
  logfmt_raw(v204, 0x1000u, 0, 1379568, v15);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_machine",
    14,
    169,
    20,
    v204);
  v16 = (_DWORD *)json_object_get(v1, "processor");
  v17 = v16;
  if ( !v16 || *v16 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379620);
    V_UNLOCK();
    v113 = *v5;
    v114 = 181;
LABEL_95:
    zlog(
      v113,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_processor",
      16,
      v114,
      100,
      v204);
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379656);
    V_UNLOCK();
    v21 = *v5;
    v22 = 1502;
    goto LABEL_16;
  }
  V_LOCK();
  logfmt_raw(v204, 0x1000u, 0, 1379644);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_processor",
    16,
    184,
    20,
    v204);
  v18 = (_DWORD *)json_object_get(v17, "type");
  v19 = v18;
  if ( !v18 || *v18 != 2 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1376968);
    V_UNLOCK();
    v113 = *v5;
    v114 = 189;
    goto LABEL_95;
  }
  V_LOCK();
  v20 = json_string_value(v19);
  logfmt_raw(v204, 0x1000u, 0, 1376984, v20);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_processor",
    16,
    192,
    20,
    v204);
  if ( sub_5AAD0(v1) )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379680);
    V_UNLOCK();
    v21 = *v5;
    v22 = 1509;
    goto LABEL_16;
  }
  if ( sub_5B1CC(v1) )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379700);
    V_UNLOCK();
    v21 = *v5;
    v22 = 1516;
    goto LABEL_16;
  }
  v29 = (_DWORD *)json_object_get(v1, "chain");
  v191 = v29;
  if ( !v29 || *v29 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379720);
    V_UNLOCK();
    v115 = *v5;
    v116 = 908;
    goto LABEL_97;
  }
  V_LOCK();
  logfmt_raw(v204, 0x1000u, 0, 1379740);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    911,
    20,
    v204);
  v30 = (_DWORD *)json_object_get(v191, "chain_num");
  v31 = (int)v30;
  if ( !v30 || *v30 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379748);
    V_UNLOCK();
    v115 = *v5;
    v116 = 916;
    goto LABEL_97;
  }
  V_LOCK();
  v32 = json_integer_value(v31);
  logfmt_raw(v204, 0x1000u, 0, 1379772, v32);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    919,
    20,
    v204);
  v33 = json_integer_value(v31);
  *(_DWORD *)(v6 + 4) = v33;
  V_LOCK();
  logfmt_raw(v204, 0x1000u, 0, 1379788, v33);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_alloc_chain",
    12,
    80,
    20,
    v204);
  v34 = calloc(v33, 0x78u);
  *(_DWORD *)(v6 + 0x24) = v34;
  if ( !v34 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379804, v33);
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_alloc_chain",
      12,
      85,
      100,
      v204);
    V_LOCK();
    LOWORD(v185) = 3972;
    LOWORD(v186) = 944;
    HIWORD(v185) = (unsigned int)"->work.private" >> 16;
    HIWORD(v186) = (unsigned int)"cribe send failed" >> 16;
    logfmt_raw(v204, 0x1000u, 0, v186, v185);
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_alloc_chain",
      12,
      86,
      100,
      v204);
    goto LABEL_98;
  }
  v35 = (_DWORD *)json_object_get(v191, "chain_row");
  v36 = (int)v35;
  if ( !v35 || *v35 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379844);
    V_UNLOCK();
    v115 = *v5;
    v116 = 927;
LABEL_97:
    zlog(
      v115,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      v116,
      100,
      v204);
LABEL_98:
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380924);
    V_UNLOCK();
    v21 = *v5;
    v22 = 1524;
LABEL_16:
    zlog(
      v21,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "platform_topol_init",
      19,
      v22,
      20,
      v204);
    if ( *((_DWORD *)v1 + 1) != -1 )
    {
      v23 = (unsigned int *)v1 + 1;
      __dmb(0xBu);
      do
      {
        v24 = __ldrex(v23);
        v25 = v24 - 1;
      }
      while ( __strex(v25, v23) );
      if ( !v25 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK();
  v37 = json_integer_value(v36);
  logfmt_raw(v204, 0x1000u, 0, 1379868, v37);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    930,
    20,
    v204);
  *(_DWORD *)(v6 + 8) = json_integer_value(v36);
  v38 = (_DWORD *)json_object_get(v191, "chain_column");
  v39 = (int)v38;
  if ( !v38 || *v38 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379900);
    V_UNLOCK();
    v115 = *v5;
    v116 = 936;
    goto LABEL_97;
  }
  V_LOCK();
  v40 = json_integer_value(v39);
  logfmt_raw(v204, 0x1000u, 0, 1379924, v40);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    939,
    20,
    v204);
  *(_DWORD *)(v6 + 0xC) = json_integer_value(v39);
  v41 = (_DWORD *)json_object_get(v191, "chain_domain_num");
  v42 = (int)v41;
  if ( !v41 || *v41 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1379964);
    V_UNLOCK();
    v115 = *v5;
    v116 = 945;
    goto LABEL_97;
  }
  V_LOCK();
  v43 = json_integer_value(v42);
  logfmt_raw(v204, 0x1000u, 0, 1379992, v43);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    948,
    20,
    v204);
  *(_DWORD *)(v6 + 0x10) = json_integer_value(v42);
  v44 = (_DWORD *)json_object_get(v191, "chain_asic_num");
  v45 = (int)v44;
  if ( !v44 || *v44 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380032);
    V_UNLOCK();
    v115 = *v5;
    v116 = 954;
    goto LABEL_97;
  }
  V_LOCK();
  v46 = json_integer_value(v45);
  logfmt_raw(v204, 0x1000u, 0, 1380060, v46);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    957,
    20,
    v204);
  *(_DWORD *)(v6 + 0x14) = json_integer_value(v45);
  v47 = (_DWORD *)json_object_get(v191, "domain_asic_num");
  v48 = (int)v47;
  if ( !v47 || *v47 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380096);
    V_UNLOCK();
    v115 = *v5;
    v116 = 963;
    goto LABEL_97;
  }
  V_LOCK();
  v49 = json_integer_value(v48);
  logfmt_raw(v204, 0x1000u, 0, 1380124, v49);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    966,
    20,
    v204);
  *(_DWORD *)(v6 + 0x18) = json_integer_value(v48);
  v50 = (_DWORD *)json_object_get(v191, "pic_mcu_en");
  v51 = v50;
  if ( !v50 || (unsigned int)(*v50 - 5) > 1 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380160);
    V_UNLOCK();
    v145 = 972;
    goto LABEL_134;
  }
  V_LOCK();
  v52 = "false";
  if ( *v51 == 5 )
    v52 = "true";
  logfmt_raw(v204, 0x1000u, 0, 1380184, v52);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    975,
    20,
    v204);
  *(_BYTE *)(v6 + 0x1C) = *v51 == 5;
  v53 = (_DWORD *)json_object_get(v191, "sensor_mode");
  v54 = (int)v53;
  if ( !v53 || *v53 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380212);
    V_UNLOCK();
    v145 = 981;
    goto LABEL_134;
  }
  V_LOCK();
  v55 = json_integer_value(v54);
  logfmt_raw(v204, 0x1000u, 0, 1380236, v55);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    984,
    20,
    v204);
  *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 88) = json_integer_value(v54);
  v56 = (_DWORD *)json_object_get(v191, "sensor_num");
  v57 = (int)v56;
  if ( !v56 || *v56 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380268);
    V_UNLOCK();
    v145 = 990;
LABEL_134:
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      v145,
      100,
      v204);
    goto LABEL_98;
  }
  V_LOCK();
  v58 = json_integer_value(v57);
  logfmt_raw(v204, 0x1000u, 0, 1380292, v58);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    993,
    20,
    v204);
  v59 = json_integer_value(v57);
  v60 = *(_DWORD *)(v6 + 0x24);
  *(_DWORD *)(v60 + 92) = v59;
  v61 = calloc(v59, 0x18u);
  *(_DWORD *)(v60 + 84) = v61;
  if ( !v61 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_alloc_sensor",
      13,
      97,
      100,
      v204);
    goto LABEL_98;
  }
  v62 = (_DWORD *)json_object_get(v191, "max_chip_temp");
  v63 = (int)v62;
  if ( !v62 || *v62 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380348);
    V_UNLOCK();
    v145 = 1001;
    goto LABEL_134;
  }
  V_LOCK();
  v64 = json_integer_value(v63);
  logfmt_raw(v204, 0x1000u, 0, 1380376, v64);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1004,
    20,
    v204);
  *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 96) = json_integer_value(v63);
  v65 = (_DWORD *)json_object_get(v191, "max_pcb_temp");
  v66 = (int)v65;
  if ( !v65 || *v65 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380412);
    V_UNLOCK();
    v145 = 1010;
    goto LABEL_134;
  }
  V_LOCK();
  v67 = json_integer_value(v66);
  logfmt_raw(v204, 0x1000u, 0, 1380436, v67);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1013,
    20,
    v204);
  *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 100) = json_integer_value(v66);
  v68 = (_DWORD *)json_object_get(v191, "min_pcb_temp");
  v69 = (int)v68;
  if ( !v68 || *v68 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380472);
    V_UNLOCK();
    v145 = 1019;
    goto LABEL_134;
  }
  V_LOCK();
  v70 = json_integer_value(v69);
  logfmt_raw(v204, 0x1000u, 0, 1380496, v70);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1022,
    20,
    v204);
  *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 104) = json_integer_value(v69);
  v71 = (_DWORD *)json_object_get(v191, "max_uneffective_count");
  v72 = (int)v71;
  if ( !v71 || *v71 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380540);
    V_UNLOCK();
    v145 = 1028;
    goto LABEL_134;
  }
  V_LOCK();
  v73 = json_integer_value(v72);
  logfmt_raw(v204, 0x1000u, 0, 1380576, v73);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain",
    12,
    1031,
    20,
    v204);
  *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 108) = json_integer_value(v72);
  v190 = sub_5C06C(v191);
  if ( v190 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380604);
    V_UNLOCK();
    v146 = 1037;
    goto LABEL_139;
  }
  if ( *(_BYTE *)(v6 + 0x1C) && sub_5C83C(v191) )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380624);
    V_UNLOCK();
    v146 = 1045;
LABEL_139:
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      v146,
      100,
      v204);
    goto LABEL_98;
  }
  v74 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 88);
  if ( v74 == 3 )
  {
    v147 = (_DWORD *)json_object_get(v191, "ctrlboard_sensor");
    v200 = v147;
    if ( !v147 || *v147 != 1 )
    {
      V_LOCK();
      logfmt_raw(v204, 0x1000u, 0, 1380668);
      V_UNLOCK();
      v189 = 640;
LABEL_186:
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        v189,
        100,
        v204);
      V_LOCK();
      logfmt_raw(v204, 0x1000u, 0, 1380724);
      V_UNLOCK();
      v145 = 1054;
      goto LABEL_134;
    }
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380704);
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_ctrlboard_sensor",
      29,
      643,
      20,
      v204);
    v198 = v1;
    v195 = 0;
    v202 = v6;
    while ( v195 < (unsigned int)json_array_size(v200) )
    {
      v148 = json_array_get(v200, v195);
      v149 = v148;
      if ( !v148 || *v148 )
      {
        v1 = v198;
        V_LOCK();
        logfmt_raw(v204, 0x1000u, 0, 1378196, v195);
        V_UNLOCK();
        v189 = 650;
        goto LABEL_186;
      }
      v150 = (_DWORD *)json_object_get(v148, "index");
      v151 = (int)v150;
      if ( !v150 || *v150 != 3 )
      {
        v1 = v198;
        V_LOCK();
        logfmt_raw(v204, 0x1000u, 0, 1379104, v195);
        V_UNLOCK();
        v189 = 657;
        goto LABEL_186;
      }
      V_LOCK();
      v152 = json_integer_value(v151);
      logfmt_raw(v204, 0x1000u, 0, 1379132, v152);
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        660,
        20,
        v204);
      v153 = json_integer_value(v151);
      v154 = *(_DWORD *)(*(_DWORD *)(v202 + 0x24) + 84);
      *(_DWORD *)(v154 + 24 * v153) = v153;
      v155 = (_DWORD *)(v154 + 24 * v153);
      v155[2] = 2;
      v156 = (_DWORD *)json_object_get(v149, "type");
      v157 = v156;
      if ( !v156 || *v156 != 2 )
      {
        v1 = v198;
        V_LOCK();
        logfmt_raw(v204, 0x1000u, 0, 1379144, v195);
        V_UNLOCK();
        v189 = 669;
        goto LABEL_186;
      }
      V_LOCK();
      v158 = json_string_value(v157);
      logfmt_raw(v204, 0x1000u, 0, 1376984, v158);
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        672,
        20,
        v204);
      v159 = (const char *)json_string_value(v157);
      v160 = strcmp(v159, "TMP451");
      if ( v160 )
      {
        if ( !strcmp(v159, "LM75A") )
        {
          v160 = 1;
        }
        else if ( !strcmp(v159, "unknow") )
        {
          v160 = 2;
        }
        else
        {
          v160 = 3;
        }
      }
      v155[1] = v160;
      v161 = (_DWORD *)json_object_get(v149, "iic");
      v162 = (int)v161;
      if ( !v161 || *v161 != 3 )
      {
        v1 = v198;
        V_LOCK();
        logfmt_raw(v204, 0x1000u, 0, 1379200, v195);
        V_UNLOCK();
        v189 = 678;
        goto LABEL_186;
      }
      V_LOCK();
      v163 = json_integer_value(v162);
      logfmt_raw(v204, 0x1000u, 0, 1379232, v163);
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        681,
        20,
        v204);
      v164 = json_integer_value(v162);
      LOWORD(v165) = -19592;
      v155[5] = v164;
      HIWORD(v165) = (unsigned int)"_kas" >> 16;
      v166 = (_DWORD *)json_object_get(v149, v165);
      v167 = v166;
      if ( !v166 || *v166 != 2 )
      {
        v1 = v198;
        V_LOCK();
        logfmt_raw(v204, 0x1000u, 0, 1379240, v195);
        V_UNLOCK();
        v189 = 687;
        goto LABEL_186;
      }
      V_LOCK();
      v168 = json_string_value(v167);
      logfmt_raw(v204, 0x1000u, 0, 1379264, v168);
      V_UNLOCK();
      v169 = 0;
      v170 = off_1500E8;
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        690,
        20,
        v204);
      v171 = (const char *)json_string_value(v167);
      v172 = "air_in";
      v173 = v171;
      while ( strcmp(v173, v172) )
      {
        v174 = *v170++;
        v172 = v174;
        ++v169;
      }
      LOWORD(v175) = 10016;
      v176 = 0;
      v155[3] = v169;
      HIWORD(v175) = (unsigned int)"ner-new/machine_runtime/machine_runtime_base.c" >> 16;
      v177 = (_DWORD *)json_object_get(v149, v175);
      v178 = v177;
      if ( !v177 || *v177 != 2 )
      {
        v1 = v198;
        V_LOCK();
        logfmt_raw(v204, 0x1000u, 0, 1379272, v195);
        V_UNLOCK();
        v189 = 696;
        goto LABEL_186;
      }
      V_LOCK();
      v179 = json_string_value(v178);
      logfmt_raw(v204, 0x1000u, 0, 1379296, v179);
      V_UNLOCK();
      v180 = (const char **)&unk_150108;
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_ctrlboard_sensor",
        29,
        699,
        20,
        v204);
      v181 = (const char *)json_string_value(v178);
      v182 = "top";
      v183 = v181;
      while ( strcmp(v183, v182) )
      {
        v184 = *v180++;
        v182 = v184;
        ++v176;
      }
      v155[4] = v176;
      ++v195;
    }
    v6 = v202;
    v1 = v198;
    v74 = *(_DWORD *)(*(_DWORD *)(v202 + 0x24) + 88);
  }
  if ( (v74 & 0xFFFFFFFD) == 0 )
  {
    v75 = (_DWORD *)json_object_get(v191, "asic_sensor");
    v196 = v75;
    if ( v75 && *v75 == 1 )
    {
      V_LOCK();
      v193 = 0;
      logfmt_raw(v204, 0x1000u, 0, 1380788);
      V_UNLOCK();
      zlog(
        *v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_sensor",
        19,
        802,
        20,
        v204);
      v199 = v1;
      v201 = v6;
      while ( 1 )
      {
        if ( v193 >= (unsigned int)json_array_size(v196) )
        {
          v1 = v199;
          v6 = v201;
          goto LABEL_105;
        }
        v76 = json_array_get(v196, v193);
        v77 = v76;
        if ( !v76 || *v76 )
          break;
        v78 = (_DWORD *)json_object_get(v76, "index");
        v79 = (int)v78;
        if ( !v78 || *v78 != 3 )
        {
          v1 = v199;
          V_LOCK();
          logfmt_raw(v204, 0x1000u, 0, 1379104, v193);
          V_UNLOCK();
          v188 = 817;
          goto LABEL_178;
        }
        V_LOCK();
        v80 = json_integer_value(v79);
        logfmt_raw(v204, 0x1000u, 0, 1379132, v80);
        V_UNLOCK();
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          820,
          20,
          v204);
        v81 = json_integer_value(v79);
        v82 = *(_DWORD *)(*(_DWORD *)(v201 + 0x24) + 84);
        *(_DWORD *)(v82 + 24 * v81) = v81;
        v83 = (_DWORD *)(v82 + 24 * v81);
        v83[2] = 1;
        v84 = (_DWORD *)json_object_get(v77, "type");
        v85 = v84;
        if ( !v84 || *v84 != 2 )
        {
          v1 = v199;
          V_LOCK();
          logfmt_raw(v204, 0x1000u, 0, 1379144, v193);
          V_UNLOCK();
          v188 = 829;
          goto LABEL_178;
        }
        V_LOCK();
        v86 = json_string_value(v85);
        logfmt_raw(v204, 0x1000u, 0, 1376984, v86);
        V_UNLOCK();
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          832,
          20,
          v204);
        v87 = (const char *)json_string_value(v85);
        v88 = strcmp(v87, "TMP451");
        if ( v88 )
        {
          if ( !strcmp(v87, "LM75A") )
          {
            v88 = 1;
          }
          else if ( !strcmp(v87, "unknow") )
          {
            v88 = 2;
          }
          else
          {
            v88 = 3;
          }
        }
        v83[1] = v88;
        v89 = (_DWORD *)json_object_get(v77, "bind_asic");
        v90 = (int)v89;
        if ( !v89 || *v89 != 3 )
        {
          v1 = v199;
          V_LOCK();
          logfmt_raw(v204, 0x1000u, 0, 1379200, v193);
          V_UNLOCK();
          v188 = 838;
          goto LABEL_178;
        }
        V_LOCK();
        v91 = json_integer_value(v90);
        logfmt_raw(v204, 0x1000u, 0, 1380816, v91);
        V_UNLOCK();
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          841,
          20,
          v204);
        v92 = json_integer_value(v90);
        LOWORD(v93) = -19592;
        v83[5] = v92;
        HIWORD(v93) = (unsigned int)"_kas" >> 16;
        v94 = (_DWORD *)json_object_get(v77, v93);
        v95 = v94;
        if ( !v94 || *v94 != 2 )
        {
          v1 = v199;
          V_LOCK();
          logfmt_raw(v204, 0x1000u, 0, 1379240, v193);
          V_UNLOCK();
          v188 = 847;
          goto LABEL_178;
        }
        V_LOCK();
        v96 = json_string_value(v95);
        logfmt_raw(v204, 0x1000u, 0, 1379264, v96);
        V_UNLOCK();
        v97 = 0;
        v98 = off_1500E8;
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          850,
          20,
          v204);
        v99 = (const char *)json_string_value(v95);
        v100 = "air_in";
        v101 = v99;
        while ( strcmp(v101, v100) )
        {
          v102 = *v98++;
          v100 = v102;
          ++v97;
        }
        LOWORD(v103) = 10016;
        v104 = 0;
        v83[3] = v97;
        HIWORD(v103) = (unsigned int)"ner-new/machine_runtime/machine_runtime_base.c" >> 16;
        v105 = (_DWORD *)json_object_get(v77, v103);
        v106 = v105;
        if ( !v105 || *v105 != 2 )
        {
          v1 = v199;
          V_LOCK();
          logfmt_raw(v204, 0x1000u, 0, 1379272, v193);
          V_UNLOCK();
          v188 = 856;
          goto LABEL_178;
        }
        V_LOCK();
        v107 = json_string_value(v106);
        logfmt_raw(v204, 0x1000u, 0, 1379296, v107);
        V_UNLOCK();
        v108 = (const char **)&unk_150108;
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_sensor",
          19,
          859,
          20,
          v204);
        v109 = (const char *)json_string_value(v106);
        v110 = "top";
        v111 = v109;
        while ( strcmp(v111, v110) )
        {
          v112 = *v108++;
          v110 = v112;
          ++v104;
        }
        v83[4] = v104;
        ++v193;
      }
      v1 = v199;
      V_LOCK();
      logfmt_raw(v204, 0x1000u, 0, 1378196, v193);
      V_UNLOCK();
      v188 = 810;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v204, 0x1000u, 0, 1380768);
      V_UNLOCK();
      v188 = 799;
    }
LABEL_178:
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_sensor",
      19,
      v188,
      100,
      v204);
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380832);
    V_UNLOCK();
    v145 = 1064;
    goto LABEL_134;
  }
LABEL_105:
  v118 = v191;
  v192 = *(_DWORD *)(v6 + 4);
  v119 = (_DWORD *)json_object_get(v118, "eeprom");
  v194 = v119;
  if ( !v119 || (v120 = *v119) != 0 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380868);
    V_UNLOCK();
    v187 = 760;
    goto LABEL_173;
  }
  V_LOCK();
  logfmt_raw(v204, 0x1000u, 0, 1380888);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_eeprom",
    19,
    763,
    20,
    v204);
  v121 = (_DWORD *)json_object_get(v194, "type");
  v197 = v121;
  if ( !v121 || *v121 != 2 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1376968);
    V_UNLOCK();
    v187 = 768;
    goto LABEL_173;
  }
  V_LOCK();
  v122 = json_string_value(v197);
  logfmt_raw(v204, 0x1000u, 0, 1376984, v122);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_eeprom",
    19,
    771,
    20,
    v204);
  if ( v192 > 0 )
  {
    v123 = 0;
    do
    {
      v124 = off_1501D4;
      v125 = 0;
      v126 = (const char *)json_string_value(v197);
      v127 = "AT24C02D";
      while ( strcmp(v126, v127) )
      {
        v128 = v124[1];
        ++v124;
        v127 = v128;
        ++v125;
      }
      ++v120;
      v129 = *(_DWORD *)(v6 + 0x24) + v123;
      v123 += 120;
      *(_DWORD *)(v129 + 112) = v125;
    }
    while ( v192 != v120 );
  }
  v130 = (_DWORD *)json_object_get(v194, "i2c_addr");
  v131 = (int)v130;
  if ( !v130 || *v130 != 3 )
  {
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1377288);
    V_UNLOCK();
    v187 = 780;
LABEL_173:
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      v187,
      100,
      v204);
    V_LOCK();
    logfmt_raw(v204, 0x1000u, 0, 1380896);
    V_UNLOCK();
    v145 = 1072;
    goto LABEL_134;
  }
  V_LOCK();
  v132 = json_integer_value(v131);
  logfmt_raw(v204, 0x1000u, 0, 1377308, v132);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/topol/topol.c",
    149,
    "_parse_chain_eeprom",
    19,
    783,
    20,
    v204);
  if ( v192 > 0 )
  {
    v133 = 0;
    v134 = 0;
    do
    {
      ++v133;
      v135 = json_integer_value(v131);
      v136 = *(_DWORD *)(v6 + 0x24) + v134;
      v134 += 120;
      *(_DWORD *)(v136 + 116) = v135;
    }
    while ( v192 != v133 );
  }
  v137 = *(_DWORD *)(v6 + 4);
  if ( v137 > 1 )
  {
    v138 = 120;
    v139 = 1;
    do
    {
      v140 = *(char **)(v6 + 0x24);
      ++v139;
      v141 = &v140[v138];
      v138 += 120;
      memcpy(v141, v140, 0x78u);
    }
    while ( v137 != v139 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v142 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v143 = __ldrex(v142);
      v144 = v143 - 1;
    }
    while ( __strex(v144, v142) );
    if ( !v144 )
      json_delete(v1);
  }
  return v190;
}
