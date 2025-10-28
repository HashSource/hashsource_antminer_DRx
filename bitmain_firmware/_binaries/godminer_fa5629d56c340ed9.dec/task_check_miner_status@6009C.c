int task_check_miner_status()
{
  int v0; // r7
  char *all_created_runtime; // r0
  char *v2; // r5
  int v3; // r11
  int v4; // t1
  char *flag_from_monitor; // r0
  int v6; // r3
  char *v7; // r4
  int v8; // r2
  bool v9; // zf
  __int64 v10; // r4
  int *v11; // r0
  char *v12; // r0
  int *v13; // r0
  int *v14; // r2
  int v15; // t1
  int v16; // r5
  char *v17; // r0
  char *v18; // r8
  int v19; // r6
  int v20; // t1
  char *v21; // r0
  int v22; // r4
  __int64 v23; // r10
  int v24; // r4
  int v25; // r2
  int v26; // r3
  int v27; // r6
  char *v28; // r3
  char *v29; // r3
  char v30; // r2
  int v31; // r2
  int v33; // r3
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int *v39; // r10
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r3
  int v44; // r8
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int *v48; // r7
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int *v56; // r7
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r1
  int v61; // r2
  int v62; // r3
  int *v63; // r4
  int v64; // r1
  int v65; // r2
  int v66; // r3
  char v67; // r3
  int v68; // r3
  int v69; // r11
  int v70; // r10
  char *v71; // r0
  char *v72; // r8
  int v73; // t1
  int v74; // r0
  int v75; // r0
  int v76; // r7
  int v77; // r2
  int v78; // r0
  int v79; // r1
  unsigned int v80; // r4
  int v81; // [sp+20h] [bp-12B4h] BYREF
  int v82; // [sp+40h] [bp-1294h]
  const char *v83; // [sp+44h] [bp-1290h]
  unsigned int v84; // [sp+48h] [bp-128Ch]
  int v85; // [sp+4Ch] [bp-1288h]
  int v86; // [sp+54h] [bp-1280h]
  int v87; // [sp+58h] [bp-127Ch]
  int v88; // [sp+5Ch] [bp-1278h]
  __int64 v89; // [sp+60h] [bp-1274h]
  int v90; // [sp+68h] [bp-126Ch]
  int v91; // [sp+6Ch] [bp-1268h]
  char *v92; // [sp+70h] [bp-1264h]
  int v93; // [sp+74h] [bp-1260h]
  int v94; // [sp+78h] [bp-125Ch]
  int v95; // [sp+7Ch] [bp-1258h]
  int *v96; // [sp+80h] [bp-1254h]
  int *v97; // [sp+84h] [bp-1250h]
  int v98; // [sp+88h] [bp-124Ch]
  int v99; // [sp+8Ch] [bp-1248h]
  int v100; // [sp+90h] [bp-1244h]
  int v101; // [sp+94h] [bp-1240h]
  const char *v102; // [sp+98h] [bp-123Ch]
  char *v103; // [sp+9Ch] [bp-1238h]
  int v104; // [sp+A0h] [bp-1234h]
  int v105; // [sp+A4h] [bp-1230h]
  char *s; // [sp+A8h] [bp-122Ch]
  int v107; // [sp+ACh] [bp-1228h]
  int v108; // [sp+B0h] [bp-1224h]
  int v109; // [sp+B4h] [bp-1220h]
  int v110; // [sp+B8h] [bp-121Ch]
  int v111; // [sp+BCh] [bp-1218h]
  int v112; // [sp+C0h] [bp-1214h]
  int v113; // [sp+C4h] [bp-1210h]
  int v114; // [sp+C8h] [bp-120Ch]
  int v115; // [sp+CCh] [bp-1208h]
  int v116; // [sp+D0h] [bp-1204h]
  int v117; // [sp+D4h] [bp-1200h]
  int v118; // [sp+D8h] [bp-11FCh]
  const char *v119; // [sp+DCh] [bp-11F8h]
  int v120; // [sp+E0h] [bp-11F4h]
  int v121; // [sp+E4h] [bp-11F0h]
  int v122; // [sp+E8h] [bp-11ECh]
  int v123; // [sp+ECh] [bp-11E8h]
  int v124; // [sp+F8h] [bp-11DCh]
  int v125; // [sp+FCh] [bp-11D8h]
  int v126; // [sp+100h] [bp-11D4h]
  int v127; // [sp+104h] [bp-11D0h]
  int v128; // [sp+10Ch] [bp-11C8h] BYREF
  _DWORD v129[7]; // [sp+110h] [bp-11C4h] BYREF
  int v130; // [sp+12Ch] [bp-11A8h]
  _DWORD v131[8]; // [sp+130h] [bp-11A4h] BYREF
  _DWORD v132[7]; // [sp+150h] [bp-1184h] BYREF
  int v133; // [sp+16Ch] [bp-1168h]
  _DWORD v134[8]; // [sp+170h] [bp-1164h] BYREF
  _DWORD v135[7]; // [sp+190h] [bp-1144h] BYREF
  int v136; // [sp+1ACh] [bp-1128h]
  _DWORD v137[8]; // [sp+1B0h] [bp-1124h] BYREF
  _DWORD v138[7]; // [sp+1D0h] [bp-1104h] BYREF
  int v139; // [sp+1ECh] [bp-10E8h]
  _DWORD v140[8]; // [sp+1F0h] [bp-10E4h] BYREF
  _DWORD v141[7]; // [sp+210h] [bp-10C4h] BYREF
  int v142; // [sp+22Ch] [bp-10A8h]
  _DWORD v143[8]; // [sp+230h] [bp-10A4h] BYREF
  _DWORD v144[7]; // [sp+250h] [bp-1084h] BYREF
  int v145; // [sp+26Ch] [bp-1068h]
  _DWORD v146[7]; // [sp+270h] [bp-1064h] BYREF
  int v147; // [sp+28Ch] [bp-1048h]
  _DWORD v148[7]; // [sp+290h] [bp-1044h] BYREF
  int v149; // [sp+2ACh] [bp-1028h]
  int v150; // [sp+2B0h] [bp-1024h] BYREF
  int v151; // [sp+2B4h] [bp-1020h]
  int v152; // [sp+2B8h] [bp-101Ch]
  int v153; // [sp+2BCh] [bp-1018h]
  int v154; // [sp+2C0h] [bp-1014h]
  int v155; // [sp+2C4h] [bp-1010h]
  int v156; // [sp+2C8h] [bp-100Ch]
  int v157; // [sp+2CCh] [bp-1008h]
  _DWORD v158[1025]; // [sp+2D0h] [bp-1004h] BYREF

  v92 = &byte_197B80;
  if ( !byte_197B80 )
  {
    byte_197B84 = 0;
    byte_197B85 = 0;
    byte_197B86 = 0;
    byte_197B87 = 0;
    byte_197B88 = 0;
    byte_197B89 = 0;
    byte_197B8A = 0;
    byte_197B8B = 0;
    byte_197B8C = 0;
    byte_197B80 = 1;
  }
  pthread_mutex_lock(&stru_197B90);
  v148[0] = 0;
  v0 = (unsigned __int8)v92[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v148);
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  if ( v148[0] <= 0 )
  {
    v93 = 0;
    v84 = 0;
    v90 = 0;
    goto LABEL_24;
  }
  v2 = all_created_runtime - 4;
  v3 = 0;
  v103 = "chain";
  v119 = "uneffective temp exceed limit";
  s = "error";
  v86 = v0;
  do
  {
    v4 = *((_DWORD *)v2 + 1);
    v2 += 4;
    flag_from_monitor = get_flag_from_monitor(v4);
    v6 = *((_DWORD *)flag_from_monitor + 4);
    v7 = flag_from_monitor;
    v85 = 0;
    v84 = v6 & 1;
    if ( (v6 & 1) == 0 )
    {
      v91 = 0;
      v90 = v6 & 2;
      if ( (v6 & 2) == 0 )
      {
        v105 = 0;
        v104 = v6 & 4;
        if ( (v6 & 4) == 0 )
          goto LABEL_75;
        v9 = v86 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 4u;
        if ( !v9 )
        {
          v102 = "check_temp";
          v107 = v151;
          v76 = v150;
          v93 = (int)"%s";
          v96 = &g_zc;
          v97 = &v81;
          goto LABEL_88;
        }
LABEL_13:
        v100 = v6 & 8;
        v101 = 0;
        if ( (v6 & 8) != 0 )
          *((_DWORD *)flag_from_monitor + 6) |= 8u;
LABEL_15:
        v87 = v6 & 0x10;
        v88 = 0;
        if ( (v6 & 0x10) != 0 )
        {
          v9 = v86 == 0;
          *((_DWORD *)v7 + 6) |= 0x10u;
          if ( !v9 )
          {
            v102 = "check_temp";
            v93 = (int)"%s";
            v96 = &g_zc;
            v97 = &v81;
            goto LABEL_115;
          }
        }
        goto LABEL_18;
      }
      v9 = v86 == 0;
      *((_DWORD *)flag_from_monitor + 6) |= 2u;
      if ( !v9 )
      {
        v102 = "check_temp";
        v107 = v151;
        v76 = v150;
        v93 = (int)"%s";
        v96 = &g_zc;
        v97 = &v81;
        goto LABEL_86;
      }
      LODWORD(v89) = v6 & 4;
      HIDWORD(v89) = v86;
LABEL_73:
      if ( !v89 )
        goto LABEL_75;
      *((_DWORD *)flag_from_monitor + 6) |= 4u;
      goto LABEL_13;
    }
    v8 = *((_DWORD *)flag_from_monitor + 6);
    v9 = v86 == 0;
    *((_DWORD *)flag_from_monitor + 6) = v8 | 1;
    if ( v9 )
    {
      v98 = v6 & 2;
      LODWORD(v89) = v6 & 4;
      v99 = v86;
      HIDWORD(v89) = v86;
      if ( !(v98 | v86) )
      {
        if ( !v89 )
        {
          v120 = v6 & 8;
          v121 = v86;
          if ( v120 | v86 )
          {
            *((_DWORD *)flag_from_monitor + 6) = v8 | 9;
LABEL_78:
            v108 = v6 & 0x10;
            v109 = 0;
            if ( (v6 & 0x10) != 0 )
              *((_DWORD *)v7 + 6) |= 0x10u;
            goto LABEL_18;
          }
          goto LABEL_15;
        }
        *((_DWORD *)flag_from_monitor + 6) = v8 | 5;
        goto LABEL_13;
      }
      *((_DWORD *)flag_from_monitor + 6) = v8 | 3;
      goto LABEL_73;
    }
    V_LOCK();
    v33 = *(_DWORD *)v2;
    v102 = "check_temp";
    v34 = *(_DWORD *)(v33 + 260);
    v93 = (int)"%s";
    v96 = &g_zc;
    v97 = &v81;
    V_INT((int)v144, v103, v34);
    V_STR(v143, s, "temp lost");
    logfmt_raw(
      (char *)v158,
      0x1000u,
      0,
      v145,
      v144[0],
      v144[1],
      v144[2],
      v144[3],
      v144[4],
      v144[5],
      v144[6],
      v145,
      v143[0],
      v143[1],
      v143[2],
      v143[3],
      v143[4],
      v143[5],
      v143[6],
      v143[7],
      v93,
      "check_temp",
      v84,
      v85);
    V_UNLOCK();
    zlog(
      *v96,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_temp",
      10,
      36,
      100,
      v158);
    v111 = 0;
    v76 = v150 | 1;
    v107 = v151;
    v150 |= 1u;
    v35 = *((_DWORD *)v7 + 4);
    v110 = v35 & 2;
    if ( (v35 & 2) != 0 )
    {
      *((_DWORD *)v7 + 6) |= 2u;
LABEL_86:
      V_LOCK();
      v76 |= 2u;
      V_INT((int)v141, v103, *(int *)(*(_DWORD *)v2 + 260));
      V_STR(v140, s, "temp too high");
      v36 = v140[1];
      v37 = v140[2];
      v38 = v140[3];
      v83 = v102;
      v39 = v97;
      v82 = v93;
      *v97 = v140[0];
      v39[1] = v36;
      v39[2] = v37;
      v39[3] = v38;
      v39 += 4;
      v40 = v140[5];
      v41 = v140[6];
      v42 = v140[7];
      *v39 = v140[4];
      v39[1] = v40;
      v39[2] = v41;
      v39[3] = v42;
      logfmt_raw((char *)v158, 0x1000u, 0, v142, v141[0], v141[1], v141[2], v141[3], v141[4], v141[5], v141[6], v142);
      V_UNLOCK();
      zlog(
        *v96,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        44,
        100,
        v158);
      v150 = v76;
      v151 = v107;
      v6 = *((_DWORD *)v7 + 4);
      v112 = v6 & 4;
      v113 = 0;
      if ( (v6 & 4) != 0 )
      {
LABEL_87:
        *((_DWORD *)v7 + 6) |= 4u;
LABEL_88:
        V_LOCK();
        v43 = *(_DWORD *)v2;
        v118 = v76 | 4;
        v44 = v107;
        V_INT((int)v138, v103, *(int *)(v43 + 260));
        V_STR(v137, s, "temp too low");
        v45 = v137[1];
        v46 = v137[2];
        v47 = v137[3];
        v83 = v102;
        v48 = v97;
        v82 = v93;
        *v97 = v137[0];
        v48[1] = v45;
        v48[2] = v46;
        v48[3] = v47;
        v48 += 4;
        v49 = v137[5];
        v50 = v137[6];
        v51 = v137[7];
        *v48 = v137[4];
        v48[1] = v49;
        v48[2] = v50;
        v48[3] = v51;
        logfmt_raw((char *)v158, 0x1000u, 0, v139, v138[0], v138[1], v138[2], v138[3], v138[4], v138[5], v138[6], v139);
        V_UNLOCK();
        zlog(
          *v96,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          52,
          100,
          v158);
        v151 = v44;
        v150 = v118;
        v6 = *((_DWORD *)v7 + 4);
        v114 = v6 & 8;
        v115 = 0;
        if ( (v6 & 8) != 0 )
        {
          *((_DWORD *)v7 + 6) |= 8u;
          goto LABEL_90;
        }
        goto LABEL_15;
      }
LABEL_75:
      v94 = v6 & 8;
      v95 = 0;
      if ( (v6 & 8) != 0 )
      {
        v9 = v86 == 0;
        *((_DWORD *)v7 + 6) |= 8u;
        if ( !v9 )
        {
          v102 = "check_temp";
          v93 = (int)"%s";
          v96 = &g_zc;
          v97 = &v81;
          goto LABEL_116;
        }
        goto LABEL_78;
      }
      goto LABEL_15;
    }
    v123 = 0;
    v122 = v35 & 4;
    if ( (v35 & 4) != 0 )
      goto LABEL_87;
    v125 = 0;
    v124 = v35 & 8;
    if ( (v35 & 8) != 0 )
    {
      *((_DWORD *)v7 + 6) |= 8u;
LABEL_116:
      v44 = v151;
      v118 = v150;
LABEL_90:
      V_LOCK();
      v52 = *(_DWORD *)v2;
      v107 = v118 | 8;
      V_INT((int)v135, v103, *(int *)(v52 + 260));
      V_STR(v134, s, "read no temp");
      v53 = v134[1];
      v54 = v134[2];
      v55 = v134[3];
      v83 = v102;
      v56 = v97;
      v82 = v93;
      *v97 = v134[0];
      v56[1] = v53;
      v56[2] = v54;
      v56[3] = v55;
      v56 += 4;
      v57 = v134[5];
      v58 = v134[6];
      v59 = v134[7];
      *v56 = v134[4];
      v56[1] = v57;
      v56[2] = v58;
      v56[3] = v59;
      logfmt_raw((char *)v158, 0x1000u, 0, v136, v135[0], v135[1], v135[2], v135[3], v135[4], v135[5], v135[6], v136);
      V_UNLOCK();
      zlog(
        *v96,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        60,
        100,
        v158);
      v151 = v44;
      v150 = v107;
      v116 = *((_DWORD *)v7 + 4) & 0x10;
      v117 = 0;
      if ( !v116 )
        goto LABEL_18;
      *((_DWORD *)v7 + 6) |= 0x10u;
      goto LABEL_92;
    }
    v127 = 0;
    v126 = v35 & 0x10;
    if ( (v35 & 0x10) != 0 )
    {
      *((_DWORD *)v7 + 6) |= 0x10u;
LABEL_115:
      v44 = v151;
      v107 = v150;
LABEL_92:
      V_LOCK();
      V_INT((int)v132, v103, *(int *)(*(_DWORD *)v2 + 260));
      V_STR(v131, s, v119);
      v60 = v131[1];
      v61 = v131[2];
      v62 = v131[3];
      v83 = v102;
      v63 = v97;
      v82 = v93;
      *v97 = v131[0];
      v63[1] = v60;
      v63[2] = v61;
      v63[3] = v62;
      v63 += 4;
      v64 = v131[5];
      v65 = v131[6];
      v66 = v131[7];
      *v63 = v131[4];
      v63[1] = v64;
      v63[2] = v65;
      v63[3] = v66;
      logfmt_raw((char *)v158, 0x1000u, 0, v133, v132[0], v132[1], v132[2], v132[3], v132[4], v132[5], v132[6], v133);
      V_UNLOCK();
      zlog(
        *v96,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        68,
        100,
        v158);
      v151 = v44;
      v150 = v107 | 0x10;
    }
LABEL_18:
    ++v3;
  }
  while ( v3 < v148[0] );
  v0 = v86;
  v10 = v150 & 4;
  v84 = v150;
  v90 = (v150 & 4) != 0;
  if ( (v150 & 2) != 0 )
  {
    v93 = 1;
    set_miner_6060info_status_high_temp_err(1);
  }
  else
  {
    v93 = 0;
  }
  if ( v10 )
    set_miner_6060info_status_low_temp_err(1);
LABEL_24:
  v150 = 0;
  v11 = (int *)get_all_created_runtime(&v150);
  v12 = get_flag_from_monitor(*v11);
  if ( (*((_DWORD *)v12 + 8) & 4) != 0 && (*((_DWORD *)v12 + 10) |= 4u, v0) )
  {
    V_LOCK();
    V_STR(v146, "error", "fan error exceed limit");
    v87 = v0;
    logfmt_raw(
      (char *)v158,
      0x1000u,
      0,
      v147,
      v146[0],
      v146[1],
      v146[2],
      v146[3],
      v146[4],
      v146[5],
      v146[6],
      v147,
      "%s",
      "check_fan_err");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_fan_err",
      13,
      85,
      100,
      v158);
  }
  else
  {
    v87 = 0;
  }
  v128 = 0;
  v13 = (int *)get_all_created_runtime(&v128);
  if ( v128 > 0 )
  {
    v14 = &v13[v128];
    do
    {
      v15 = *v13++;
      v0 = (unsigned __int8)(v0 & *(_BYTE *)(v15 + 267));
    }
    while ( v14 != v13 );
  }
  v16 = 0;
  v158[0] = 0;
  v17 = (char *)get_all_created_runtime(v158);
  if ( v158[0] > 0 )
  {
    v18 = v17 - 4;
    v19 = 0;
    do
    {
      v20 = *((_DWORD *)v18 + 1);
      v18 += 4;
      v21 = get_flag_from_monitor(v20);
      if ( (*(_DWORD *)v21 & 1) != 0 )
      {
        if ( v0 )
          v16 = v0;
        *((_DWORD *)v21 + 2) |= 1u;
      }
      ++v19;
    }
    while ( v19 < v158[0] );
  }
  if ( !v92[40] )
  {
    clock_gettime(1, &stru_197BAC);
    v92[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v22 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v22),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v22) + 1904))
           || !pools_active )
      {
        if ( ++v22 >= total_pools )
          goto LABEL_45;
      }
      clock_gettime(1, &stru_197BAC);
      ++v22;
      set_miner_6060info_network_lost_err(0);
    }
    while ( v22 < total_pools );
  }
LABEL_45:
  clock_gettime(1, &stru_197BB4);
  v23 = 1000LL * (*((_DWORD *)v92 + 13) - *((_DWORD *)v92 + 11))
      + (*((_DWORD *)v92 + 14) - *((_DWORD *)v92 + 12)) / 1000000;
  if ( v23 <= 59999 )
    v24 = v92[60] & 1;
  else
    v24 = 0;
  if ( v24 )
  {
    v78 = rand();
    sub_146924(v78, 0x78u);
    v80 = v79 + 60;
    V_LOCK();
    logfmt_raw(
      (char *)v158,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining(%d)!",
      v80);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      150,
      80,
      v158);
    sleep(v80);
    exit(1);
  }
  v86 = (v84 & 0xA) != 0;
  if ( v0 )
  {
    if ( v23 <= 60000 )
    {
      v96 = 0;
      LODWORD(v89) = 0;
      *((_DWORD *)v92 + 16) = 0;
    }
    else
    {
      v25 = *((_DWORD *)v92 + 16);
      *((_DWORD *)v92 + 16) = v25 + 1;
      if ( v25 == 60 * (v25 / 60) )
      {
        V_LOCK();
        V_STR(&v150, "error", "net lost");
        v89 = 274877907LL * (int)v23;
        logfmt_raw(
          (char *)v158,
          0x1000u,
          0,
          v157,
          v150,
          v151,
          v152,
          v153,
          v154,
          v155,
          v156,
          v157,
          "lost internet for %d seconds",
          (int)v23 / 1000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_lost_connection_to_pool",
          29,
          158,
          100,
          v158);
        set_miner_6060info_network_lost_err(1);
      }
      if ( (unsigned int)&loc_124F80 >= v23 )
      {
        LODWORD(v89) = v0;
        v96 = 0;
      }
      else
      {
        v26 = (unsigned __int8)v92[60];
        LODWORD(v89) = v26;
        if ( v26 )
        {
          v96 = 0;
        }
        else
        {
          V_LOCK();
          v86 = v0;
          V_STR(v148, "error", "net lost");
          v96 = (int *)v0;
          v77 = v89;
          LODWORD(v89) = v0;
          logfmt_raw(
            (char *)v158,
            0x1000u,
            v77,
            v149,
            v148[0],
            v148[1],
            v148[2],
            v148[3],
            v148[4],
            v148[5],
            v148[6],
            v149,
            "lost internet %d seconds > 20 minutes, poweroff.",
            (int)v23 / 1000);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
            173,
            "check_lost_connection_to_pool",
            29,
            169,
            120,
            v158);
          v92[60] = 1;
        }
      }
    }
  }
  else
  {
    v96 = 0;
    LODWORD(v89) = 0;
  }
  v27 = (v84 >> 3) & 1;
  if ( (v84 & 0x10) != 0 )
  {
    set_miner_6060info_uneffective_temp_err(1);
    LOBYTE(v24) = v92[12];
    if ( (_BYTE)v24 )
    {
      v86 = (unsigned __int8)v92[12];
    }
    else
    {
      LOBYTE(v24) = 1;
      v86 = 1;
      v69 = 1;
      v84 = 1;
LABEL_106:
      v70 = 0;
      v158[0] = 0;
      v92[12] = 1;
      v71 = (char *)get_all_created_runtime(v158);
      if ( v158[0] > 0 )
      {
        v72 = v71 - 4;
        do
        {
          v73 = *((_DWORD *)v72 + 1);
          v72 += 4;
          ++v70;
          v74 = (*(int (**)(void))(v73 + 24))();
          v75 = dev_ctrl(v74);
          (*(void (__fastcall **)(_DWORD))(v75 + 32))(*(_DWORD *)(*(_DWORD *)v72 + 252));
        }
        while ( v70 < v158[0] );
      }
      power_off();
      V_LOCK();
      V_BOOL((int)v129, "poweroff", 1);
      logfmt_raw(
        (char *)v158,
        0x1000u,
        0,
        v130,
        v129[0],
        v129[1],
        v129[2],
        v129[3],
        v129[4],
        v129[5],
        v129[6],
        v130,
        "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
        v93,
        v90,
        v87,
        v27,
        v84,
        v96);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "task_check_miner_status",
        23,
        337,
        120,
        v158);
      if ( !v69 && !v92[12] )
        goto LABEL_121;
    }
    goto LABEL_60;
  }
  if ( v92[12] )
    goto LABEL_60;
  v67 = v87;
  if ( (v84 & 0xE) != 0 )
    v67 = v87 | 1;
  v24 = (unsigned __int8)((unsigned __int8)v96 | v67);
  v68 = (unsigned __int8)(v89 | v16 | v67);
  v69 = v68;
  if ( v24 )
  {
    LOBYTE(v24) = v92[12];
    v84 = (unsigned __int8)v24;
    goto LABEL_106;
  }
  if ( v68 )
  {
LABEL_60:
    v92[11] = 1;
    goto LABEL_61;
  }
LABEL_121:
  v92[11] = 0;
LABEL_61:
  if ( v0 )
  {
    v28 = v92;
    if ( !v16 )
      LOBYTE(v16) = v92[12];
    v92[4] = v93;
    v28[5] = v90;
    v28[8] = v87;
    v29 = v92;
    v30 = v89;
    v92[9] = v16;
    v29[10] = v30;
    v29[6] = v27;
    v29[7] = v24;
  }
  pthread_mutex_unlock(&stru_197B90);
  v31 = (unsigned __int8)v92[11];
  byte_194758 ^= 1u;
  if ( v31 )
  {
    green_led_off();
    if ( byte_194758 )
    {
      red_led_on();
      if ( !v86 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_194758 )
      green_led_on();
    else
      green_led_off();
  }
  if ( v86 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
