int task_check_miner_status()
{
  unsigned int v0; // r11
  char *all_created_runtime; // r0
  int v2; // r11
  int v3; // r2
  bool v4; // zf
  __int64 v5; // r0
  int v6; // r0
  char *flag_from_monitor; // r0
  int v8; // r3
  char *v9; // r4
  __int64 v10; // r4
  int v11; // r3
  int *v12; // r0
  char *v13; // r0
  int *v14; // r0
  int v15; // r3
  int *v16; // r2
  int v17; // t1
  int v18; // r4
  char *v19; // r0
  int *v20; // r5
  int v21; // t1
  char *v22; // r0
  int v23; // r4
  char v24; // r10
  int v25; // r10
  unsigned __int8 v26; // r4
  _BOOL4 v27; // r9
  int v28; // r11
  int v29; // r5
  int v30; // r3
  int v31; // r8
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r3
  _DWORD *v37; // r10
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r3
  int v42; // r4
  char *v43; // r0
  char *v44; // r10
  int v45; // t1
  int v46; // r0
  int v47; // r0
  char *v48; // r3
  char *v49; // r3
  char v50; // r2
  char v51; // r2
  int v52; // r2
  int v54; // r1
  int v55; // r2
  int v56; // r3
  _DWORD *v57; // r12
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r10
  int v62; // r1
  int v63; // r2
  int v64; // r3
  _DWORD *v65; // r12
  int v66; // r1
  int v67; // r2
  int v68; // r3
  int v69; // r3
  int v70; // r1
  int v71; // r2
  int v72; // r3
  _DWORD *v73; // r12
  int v74; // r1
  int v75; // r2
  int v76; // r3
  int v77; // r1
  int v78; // r2
  int v79; // r3
  _DWORD *v80; // r12
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r5
  int v85; // r10
  int v86; // r0
  int v87; // r1
  unsigned int v88; // r4
  int v89; // [sp+20h] [bp-138Ch] BYREF
  int v90; // [sp+40h] [bp-136Ch]
  const char *v91; // [sp+44h] [bp-1368h]
  int v92; // [sp+4Ch] [bp-1360h]
  int v93; // [sp+50h] [bp-135Ch]
  int v94; // [sp+54h] [bp-1358h]
  __int64 v95; // [sp+58h] [bp-1354h]
  char *v96; // [sp+60h] [bp-134Ch]
  char *v97; // [sp+64h] [bp-1348h]
  __int64 v98; // [sp+68h] [bp-1344h]
  int v99; // [sp+70h] [bp-133Ch]
  int v100; // [sp+74h] [bp-1338h]
  __int64 v101; // [sp+78h] [bp-1334h]
  int v102; // [sp+80h] [bp-132Ch]
  int v103; // [sp+84h] [bp-1328h]
  int v104; // [sp+88h] [bp-1324h]
  const char *v105; // [sp+8Ch] [bp-1320h]
  int v106; // [sp+90h] [bp-131Ch]
  int v107; // [sp+94h] [bp-1318h]
  int v108; // [sp+98h] [bp-1314h]
  int v109; // [sp+9Ch] [bp-1310h]
  char *v110; // [sp+A0h] [bp-130Ch]
  char *s; // [sp+A4h] [bp-1308h]
  int v112; // [sp+A8h] [bp-1304h]
  int v113; // [sp+ACh] [bp-1300h]
  int v114; // [sp+B0h] [bp-12FCh]
  int v115; // [sp+B4h] [bp-12F8h]
  int v116; // [sp+B8h] [bp-12F4h]
  int v117; // [sp+BCh] [bp-12F0h]
  int v118; // [sp+C0h] [bp-12ECh]
  int v119; // [sp+C4h] [bp-12E8h]
  int v120; // [sp+C8h] [bp-12E4h]
  int v121; // [sp+CCh] [bp-12E0h]
  int v122; // [sp+D0h] [bp-12DCh]
  int v123; // [sp+D4h] [bp-12D8h]
  int v124; // [sp+D8h] [bp-12D4h]
  const char *v125; // [sp+DCh] [bp-12D0h]
  int v126; // [sp+E0h] [bp-12CCh]
  int v127; // [sp+E4h] [bp-12C8h]
  int v128; // [sp+E8h] [bp-12C4h]
  int v129; // [sp+ECh] [bp-12C0h]
  int v130; // [sp+F8h] [bp-12B4h]
  int v131; // [sp+FCh] [bp-12B0h]
  int v132; // [sp+100h] [bp-12ACh]
  int v133; // [sp+104h] [bp-12A8h]
  int v134; // [sp+10Ch] [bp-12A0h] BYREF
  _DWORD v135[7]; // [sp+110h] [bp-129Ch] BYREF
  int v136; // [sp+12Ch] [bp-1280h]
  _DWORD v137[8]; // [sp+130h] [bp-127Ch] BYREF
  _DWORD v138[7]; // [sp+150h] [bp-125Ch] BYREF
  int v139; // [sp+16Ch] [bp-1240h]
  _DWORD v140[8]; // [sp+170h] [bp-123Ch] BYREF
  _DWORD v141[7]; // [sp+190h] [bp-121Ch] BYREF
  int v142; // [sp+1ACh] [bp-1200h]
  _DWORD v143[8]; // [sp+1B0h] [bp-11FCh] BYREF
  _DWORD v144[7]; // [sp+1D0h] [bp-11DCh] BYREF
  int v145; // [sp+1ECh] [bp-11C0h]
  _DWORD v146[8]; // [sp+1F0h] [bp-11BCh] BYREF
  _DWORD v147[7]; // [sp+210h] [bp-119Ch] BYREF
  int v148; // [sp+22Ch] [bp-1180h]
  _DWORD v149[8]; // [sp+230h] [bp-117Ch] BYREF
  _DWORD v150[7]; // [sp+250h] [bp-115Ch] BYREF
  int v151; // [sp+26Ch] [bp-1140h]
  _DWORD v152[7]; // [sp+270h] [bp-113Ch] BYREF
  int v153; // [sp+28Ch] [bp-1120h]
  _DWORD v154[7]; // [sp+290h] [bp-111Ch] BYREF
  int v155; // [sp+2ACh] [bp-1100h]
  _DWORD v156[7]; // [sp+2B0h] [bp-10FCh] BYREF
  int v157; // [sp+2CCh] [bp-10E0h]
  int v158; // [sp+2D0h] [bp-10DCh] BYREF
  int v159; // [sp+2D4h] [bp-10D8h]
  int v160; // [sp+2D8h] [bp-10D4h] BYREF
  int v161; // [sp+2DCh] [bp-10D0h]
  int v162; // [sp+2E0h] [bp-10CCh]
  int v163; // [sp+2E4h] [bp-10C8h]
  int v164; // [sp+2E8h] [bp-10C4h]
  int v165; // [sp+2ECh] [bp-10C0h]
  float v166; // [sp+2F0h] [bp-10BCh]
  float v167; // [sp+2F8h] [bp-10B4h]
  float v168; // [sp+2FCh] [bp-10B0h]
  _DWORD v169[1025]; // [sp+3A8h] [bp-1004h] BYREF

  v97 = &byte_17B0F4;
  if ( !byte_17B0F4 )
  {
    byte_17B0F8 = 0;
    byte_17B0F9 = 0;
    byte_17B0FA = 0;
    byte_17B0FB = 0;
    byte_17B0FC = 0;
    byte_17B0FD = 0;
    byte_17B0FE = 0;
    byte_17B0FF = 0;
    byte_17B100 = 0;
    byte_17B0F4 = 1;
  }
  pthread_mutex_lock(&stru_17B104);
  v156[0] = 0;
  v92 = (unsigned __int8)v97[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v156);
  v158 = 0;
  v159 = 0;
  v160 = 0;
  if ( v156[0] <= 0 )
    v0 = 0;
  v161 = 0;
  if ( v156[0] <= 0 )
  {
    v104 = v0;
    v99 = v0;
    goto LABEL_36;
  }
  v110 = "chain";
  v125 = "uneffective temp exceed limit";
  v2 = 0;
  s = "error";
  v96 = all_created_runtime - 4;
  do
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v96 + 1);
      v96 += 4;
      flag_from_monitor = get_flag_from_monitor(v6);
      v8 = *((_DWORD *)flag_from_monitor + 4);
      v9 = flag_from_monitor;
      v94 = 0;
      v93 = v8 & 1;
      if ( (v8 & 1) == 0 )
      {
        v100 = 0;
        v99 = v8 & 2;
        if ( (v8 & 2) == 0 )
        {
          v113 = 0;
          v112 = v8 & 4;
          if ( (v8 & 4) != 0 )
          {
            v4 = v92 == 0;
            *((_DWORD *)flag_from_monitor + 6) |= 4u;
            if ( v4 )
              goto LABEL_13;
            v105 = "check_temp";
            v84 = v159;
            v85 = v158;
            v104 = (int)"%s";
            LODWORD(v101) = &v89;
            goto LABEL_113;
          }
          goto LABEL_24;
        }
        v4 = v92 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 2u;
        if ( v4 )
        {
          LODWORD(v98) = v8 & 4;
          HIDWORD(v98) = v92;
          if ( (unsigned int)v98 | v92 )
          {
LABEL_12:
            *((_DWORD *)v9 + 6) |= 4u;
LABEL_13:
            v108 = v8 & 8;
            v109 = 0;
            if ( (v8 & 8) != 0 )
              *((_DWORD *)v9 + 6) |= 8u;
LABEL_15:
            v95 = v8 & 0x10;
            if ( (v8 & 0x10) == 0 )
              goto LABEL_18;
            v4 = v92 == 0;
            *((_DWORD *)v9 + 6) |= 0x10u;
            if ( v4 )
              goto LABEL_18;
            v105 = "check_temp";
            v104 = (int)"%s";
            LODWORD(v101) = &v89;
            goto LABEL_120;
          }
          goto LABEL_24;
        }
        v105 = "check_temp";
        v84 = v159;
        v85 = v158;
        v104 = (int)"%s";
        LODWORD(v101) = &v89;
        goto LABEL_111;
      }
      v3 = *((_DWORD *)flag_from_monitor + 6);
      v4 = v92 == 0;
      *((_DWORD *)flag_from_monitor + 6) = v3 | 1;
      if ( v4 )
        break;
      V_LOCK();
      v32 = *(_DWORD *)v96;
      LODWORD(v101) = &v89;
      v33 = *(_DWORD *)(v32 + 224);
      v105 = "check_temp";
      v104 = (int)"%s";
      V_INT((int)v150, v110, v33);
      V_STR(v149, s, "temp lost");
      v34 = v149[1];
      v35 = v149[2];
      v36 = v149[3];
      v37 = (_DWORD *)v101;
      v91 = "check_temp";
      v90 = v104;
      *(_DWORD *)v101 = v149[0];
      v37[1] = v34;
      v37[2] = v35;
      v37[3] = v36;
      v37 += 4;
      v38 = v149[5];
      v39 = v149[6];
      v40 = v149[7];
      *v37 = v149[4];
      v37[1] = v38;
      v37[2] = v39;
      v37[3] = v40;
      logfmt_raw((char *)v169, 0x1000u, 0, v151, v150[0], v150[1], v150[2], v150[3], v150[4], v150[5], v150[6], v151);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        35,
        100,
        v169);
      v117 = 0;
      v85 = v158 | 1;
      v158 |= 1u;
      v84 = v159;
      v41 = *((_DWORD *)v9 + 4);
      v116 = v41 & 2;
      if ( (v41 & 2) != 0 )
      {
        *((_DWORD *)v9 + 6) |= 2u;
LABEL_111:
        V_LOCK();
        v85 |= 2u;
        V_INT((int)v147, v110, *(int *)(*(_DWORD *)v96 + 224));
        V_STR(v146, s, "temp too high");
        v54 = v146[1];
        v55 = v146[2];
        v56 = v146[3];
        v57 = (_DWORD *)v101;
        v91 = v105;
        v90 = v104;
        *(_DWORD *)v101 = v146[0];
        v57[1] = v54;
        v57[2] = v55;
        v57[3] = v56;
        v57 += 4;
        v58 = v146[5];
        v59 = v146[6];
        v60 = v146[7];
        *v57 = v146[4];
        v57[1] = v58;
        v57[2] = v59;
        v57[3] = v60;
        logfmt_raw((char *)v169, 0x1000u, 0, v148, v147[0], v147[1], v147[2], v147[3], v147[4], v147[5], v147[6], v148);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          43,
          100,
          v169);
        V_LOCK();
        logfmt_raw((char *)v169, 0x1000u, 0, "Sweep error string = %s.", "P:1");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          44,
          100,
          v169);
        v158 = v85;
        v159 = v84;
        v8 = *((_DWORD *)v9 + 4);
        v118 = v8 & 4;
        v119 = 0;
        if ( (v8 & 4) != 0 )
          goto LABEL_112;
        goto LABEL_24;
      }
      v129 = 0;
      v128 = v41 & 4;
      if ( (v41 & 4) == 0 )
      {
        v131 = 0;
        v130 = v41 & 8;
        if ( (v41 & 8) == 0 )
        {
          v133 = 0;
          v132 = v41 & 0x10;
          if ( (v41 & 0x10) == 0 )
            goto LABEL_18;
          *((_DWORD *)v9 + 6) |= 0x10u;
LABEL_120:
          v61 = v159;
          v124 = v158;
          goto LABEL_117;
        }
        *((_DWORD *)v9 + 6) |= 8u;
        goto LABEL_121;
      }
LABEL_112:
      *((_DWORD *)v9 + 6) |= 4u;
LABEL_113:
      V_LOCK();
      v124 = v85 | 4;
      v61 = v84;
      V_INT((int)v144, v110, *(int *)(*(_DWORD *)v96 + 224));
      V_STR(v143, s, "temp too low");
      v62 = v143[1];
      v63 = v143[2];
      v64 = v143[3];
      v65 = (_DWORD *)v101;
      v91 = v105;
      v90 = v104;
      *(_DWORD *)v101 = v143[0];
      v65[1] = v62;
      v65[2] = v63;
      v65[3] = v64;
      v65 += 4;
      v66 = v143[5];
      v67 = v143[6];
      v68 = v143[7];
      *v65 = v143[4];
      v65[1] = v66;
      v65[2] = v67;
      v65[3] = v68;
      logfmt_raw((char *)v169, 0x1000u, 0, v145, v144[0], v144[1], v144[2], v144[3], v144[4], v144[5], v144[6], v145);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        52,
        100,
        v169);
      V_LOCK();
      logfmt_raw((char *)v169, 0x1000u, 0, "Sweep error string = %s.", "P:2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        53,
        100,
        v169);
      v159 = v84;
      v158 = v124;
      v8 = *((_DWORD *)v9 + 4);
      v120 = v8 & 8;
      v121 = 0;
      if ( (v8 & 8) == 0 )
        goto LABEL_15;
      *((_DWORD *)v9 + 6) |= 8u;
LABEL_115:
      V_LOCK();
      v69 = *(_DWORD *)v96;
      v124 |= 8u;
      V_INT((int)v141, v110, *(int *)(v69 + 224));
      V_STR(v140, s, "read no temp");
      v70 = v140[1];
      v71 = v140[2];
      v72 = v140[3];
      v73 = (_DWORD *)v101;
      v91 = v105;
      v90 = v104;
      *(_DWORD *)v101 = v140[0];
      v73[1] = v70;
      v73[2] = v71;
      v73[3] = v72;
      v73 += 4;
      v74 = v140[5];
      v75 = v140[6];
      v76 = v140[7];
      *v73 = v140[4];
      v73[1] = v74;
      v73[2] = v75;
      v73[3] = v76;
      logfmt_raw((char *)v169, 0x1000u, 0, v142, v141[0], v141[1], v141[2], v141[3], v141[4], v141[5], v141[6], v142);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_temp",
        10,
        61,
        100,
        v169);
      v159 = v61;
      v158 = v124;
      v122 = *((_DWORD *)v9 + 4) & 0x10;
      v123 = 0;
      if ( v122 )
      {
        *((_DWORD *)v9 + 6) |= 0x10u;
LABEL_117:
        V_LOCK();
        V_INT((int)v138, v110, *(int *)(*(_DWORD *)v96 + 224));
        V_STR(v137, s, v125);
        v77 = v137[1];
        v78 = v137[2];
        v79 = v137[3];
        v80 = (_DWORD *)v101;
        v91 = v105;
        v90 = v104;
        *(_DWORD *)v101 = v137[0];
        v80[1] = v77;
        v80[2] = v78;
        v80[3] = v79;
        v80 += 4;
        v81 = v137[5];
        v82 = v137[6];
        v83 = v137[7];
        *v80 = v137[4];
        v80[1] = v81;
        v80[2] = v82;
        v80[3] = v83;
        logfmt_raw((char *)v169, 0x1000u, 0, v139, v138[0], v138[1], v138[2], v138[3], v138[4], v138[5], v138[6], v139);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          69,
          100,
          v169);
        v159 = v61;
        v158 = v124 | 0x10;
      }
LABEL_18:
      if ( ++v2 >= v156[0] )
        goto LABEL_29;
    }
    v106 = v8 & 2;
    LODWORD(v98) = v8 & 4;
    v107 = v92;
    HIDWORD(v98) = v92;
    if ( !(v106 | v92) )
    {
      if ( v98 )
      {
        *((_DWORD *)flag_from_monitor + 6) = v3 | 5;
        goto LABEL_13;
      }
      v126 = v8 & 8;
      v127 = v92;
      if ( !(v126 | v92) )
        goto LABEL_15;
      *((_DWORD *)flag_from_monitor + 6) = v3 | 9;
      goto LABEL_27;
    }
    v5 = v98;
    *((_DWORD *)v9 + 6) = v3 | 3;
    if ( v5 )
      goto LABEL_12;
LABEL_24:
    v102 = v8 & 8;
    v103 = 0;
    if ( (v8 & 8) == 0 )
      goto LABEL_15;
    v4 = v92 == 0;
    *((_DWORD *)v9 + 6) |= 8u;
    if ( !v4 )
    {
      v105 = "check_temp";
      v104 = (int)"%s";
      LODWORD(v101) = &v89;
LABEL_121:
      v61 = v159;
      v124 = v158;
      goto LABEL_115;
    }
LABEL_27:
    v114 = v8 & 0x10;
    v115 = 0;
    if ( (v8 & 0x10) == 0 )
      goto LABEL_18;
    ++v2;
    *((_DWORD *)v9 + 6) |= 0x10u;
  }
  while ( v2 < v156[0] );
LABEL_29:
  v0 = v158;
  v93 = (int)&v160;
  v10 = v158 & 4;
  v11 = v158 & 4;
  if ( (v158 & 4) != 0 )
    v11 = 1;
  v99 = v11;
  if ( (v158 & 2) != 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v169, 0x1000u, 0, "Sweep error string = %s.", "P:1");
    V_UNLOCK();
    v104 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "task_check_miner_status",
      23,
      285,
      100,
      v169);
  }
  else
  {
    v104 = 0;
  }
  if ( v10 )
  {
    V_LOCK();
    logfmt_raw((char *)v169, 0x1000u, 0, "Sweep error string = %s.", "P:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "task_check_miner_status",
      23,
      291,
      100,
      v169);
  }
LABEL_36:
  v158 = 0;
  v12 = (int *)get_all_created_runtime(&v158);
  v13 = get_flag_from_monitor(*v12);
  if ( (*((_DWORD *)v13 + 8) & 4) == 0 || (v4 = v92 == 0, *((_DWORD *)v13 + 10) |= 4u, v4) )
  {
    v96 = 0;
  }
  else
  {
    V_LOCK();
    V_STR(v152, "error", "fan error exceed limit");
    v96 = (char *)v92;
    logfmt_raw(
      (char *)v169,
      0x1000u,
      0,
      v153,
      v152[0],
      v152[1],
      v152[2],
      v152[3],
      v152[4],
      v152[5],
      v152[6],
      v153,
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
      86,
      100,
      v169);
  }
  v134 = 0;
  v14 = (int *)get_all_created_runtime(&v134);
  if ( v134 > 0 )
  {
    LOBYTE(v15) = v92;
    v16 = &v14[v134];
    do
    {
      v17 = *v14++;
      v15 = (unsigned __int8)(v15 & *(_BYTE *)(v17 + 230));
    }
    while ( v16 != v14 );
    v92 = v15;
  }
  v18 = 0;
  v154[0] = 0;
  v19 = (char *)get_all_created_runtime(v154);
  v93 = 0;
  if ( v154[0] > 0 )
  {
    v20 = (int *)(v19 - 4);
    LODWORD(v95) = "chain";
    LODWORD(v98) = v0;
    do
    {
      while ( 1 )
      {
        v21 = v20[1];
        ++v20;
        v22 = get_flag_from_monitor(v21);
        if ( (*(_DWORD *)v22 & 1) != 0 )
        {
          v4 = v92 == 0;
          *((_DWORD *)v22 + 2) |= 1u;
          if ( !v4 )
            break;
        }
        if ( ++v18 >= v154[0] )
          goto LABEL_50;
      }
      V_LOCK();
      ++v18;
      V_INT((int)v156, (char *)v95, *(int *)(*v20 + 224));
      v93 = v92;
      logfmt_raw(
        (char *)v169,
        0x1000u,
        0,
        v157,
        v156[0],
        v156[1],
        v156[2],
        v156[3],
        v156[4],
        v156[5],
        v156[6],
        v157,
        "%s low hashrate happened!",
        "check_low_hashrate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        118,
        80,
        v169);
      read_status_from_monitor(&v158, *v20);
      V_LOCK();
      logfmt_raw((char *)v169, 0x1000u, 0, "no ratio hashrate last_5s: %f", v166 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        121,
        80,
        v169);
      V_LOCK();
      logfmt_raw((char *)v169, 0x1000u, 0, "no ratio hashrate last_30min: %f", v167 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        122,
        80,
        v169);
      V_LOCK();
      logfmt_raw((char *)v169, 0x1000u, 0, "no ratio hashrate lifetime: %f", v168 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_low_hashrate",
        18,
        123,
        80,
        v169);
    }
    while ( v18 < v154[0] );
LABEL_50:
    v0 = v98;
  }
  if ( !v97[40] )
  {
    clock_gettime(1, &stru_17B120);
    v97[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v23 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v23),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v23) + 1904))
           || !pools_active )
      {
        if ( ++v23 >= total_pools )
          goto LABEL_59;
      }
      clock_gettime(1, &stru_17B120);
      ++v23;
    }
    while ( v23 < total_pools );
  }
LABEL_59:
  clock_gettime(1, &stru_17B128);
  v24 = v97[60];
  v95 = 1000LL * (*((_DWORD *)v97 + 13) - *((_DWORD *)v97 + 11))
      + (*((_DWORD *)v97 + 14) - *((_DWORD *)v97 + 12)) / 1000000;
  if ( v95 <= 59999 )
    v25 = v24 & 1;
  else
    v25 = 0;
  if ( v25 )
  {
    v86 = rand();
    sub_12DDD4(v86, 0x78u);
    v88 = v87 + 60;
    V_LOCK();
    logfmt_raw(
      (char *)v169,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining(%d)!",
      v88);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      156,
      80,
      v169);
    sleep(v88);
    exit(1);
  }
  v26 = (unsigned __int8)v96;
  LODWORD(v98) = (v0 >> 3) & 1;
  if ( (v0 & 0x1E) != 0 )
    v26 = (unsigned __int8)v96 | 1;
  v27 = (v0 & 0x1A) != 0;
  v28 = (v0 >> 4) & 1;
  v29 = (unsigned __int8)(v93 | v26);
  if ( !v92 )
    goto LABEL_84;
  if ( v95 <= 60000 )
  {
    *((_DWORD *)v97 + 16) = 0;
LABEL_84:
    LOBYTE(v31) = v97[12];
    if ( (_BYTE)v31 )
      goto LABEL_94;
    if ( !v26 )
    {
      if ( v29 )
      {
        LOBYTE(v25) = 0;
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    LODWORD(v95) = (unsigned __int8)v97[12];
LABEL_87:
    v42 = 0;
    v169[0] = 0;
    v97[12] = 1;
    v43 = (char *)get_all_created_runtime(v169);
    if ( v169[0] > 0 )
    {
      v44 = v43 - 4;
      do
      {
        v45 = *((_DWORD *)v44 + 1);
        v44 += 4;
        ++v42;
        v46 = (*(int (**)(void))(v45 + 20))();
        v47 = dev_ctrl(v46);
        (*(void (__fastcall **)(_DWORD))(v47 + 28))(*(_DWORD *)(*(_DWORD *)v44 + 220));
      }
      while ( v42 < v169[0] );
    }
    power_off();
    V_LOCK();
    V_BOOL((int)v135, "poweroff", 1);
    logfmt_raw(
      (char *)v169,
      0x1000u,
      0,
      v136,
      v135[0],
      v135[1],
      v135[2],
      v135[3],
      v135[4],
      v135[5],
      v135[6],
      v136,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v104,
      v99,
      v96,
      (_DWORD)v98,
      v28,
      (_DWORD)v95);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "task_check_miner_status",
      23,
      328,
      120,
      v169);
    if ( v29 || v97[12] )
      goto LABEL_93;
LABEL_92:
    LOBYTE(v25) = v31;
    v97[11] = 0;
    goto LABEL_95;
  }
  v30 = *((_DWORD *)v97 + 16);
  *((_DWORD *)v97 + 16) = v30 + 1;
  if ( !(v30 % 60) )
  {
    V_LOCK();
    V_STR(&v158, "error", "net lost");
    v101 = 274877907LL * (int)v95;
    logfmt_raw(
      (char *)v169,
      0x1000u,
      0,
      v165,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164,
      v165,
      "lost internet for %d seconds",
      (int)v95 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      164,
      100,
      v169);
  }
  if ( v95 <= 1200000 )
  {
    v25 = (unsigned __int8)v97[12];
    if ( v97[12] )
      goto LABEL_94;
    if ( !v26 )
    {
      LOBYTE(v25) = v92;
      goto LABEL_94;
    }
LABEL_73:
    v29 = v26;
    LODWORD(v95) = v25;
    LOBYTE(v31) = v26;
    goto LABEL_87;
  }
  v31 = (unsigned __int8)v97[60];
  if ( !v97[60] )
  {
    V_LOCK();
    V_STR(v154, "error", "net lost");
    logfmt_raw(
      (char *)v169,
      0x1000u,
      v31,
      v155,
      v154[0],
      v154[1],
      v154[2],
      v154[3],
      v154[4],
      v154[5],
      v154[6],
      v155,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v95 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      174,
      120,
      v169);
    v25 = (unsigned __int8)v97[12];
    v97[60] = 1;
    if ( v25 )
    {
      v27 = v25;
      goto LABEL_94;
    }
    LOBYTE(v31) = v92;
    LODWORD(v95) = 1;
    v27 = v92;
    v29 = v92;
    goto LABEL_87;
  }
  v25 = (unsigned __int8)v97[12];
  if ( !v97[12] )
  {
    if ( v26 )
      goto LABEL_73;
LABEL_93:
    LOBYTE(v25) = v31;
  }
LABEL_94:
  v97[11] = 1;
LABEL_95:
  if ( v92 )
  {
    v4 = v93 == 0;
    v48 = v97;
    v97[4] = v104;
    v48[5] = v99;
    v48[8] = (char)v96;
    if ( v4 )
      v93 = (unsigned __int8)v48[12];
    v49 = v97;
    v50 = v93;
    v97[10] = v25;
    v49[9] = v50;
    v51 = v98;
    v49[7] = v28;
    v49[6] = v51;
  }
  pthread_mutex_unlock(&stru_17B104);
  v52 = (unsigned __int8)v97[11];
  byte_1784A0 ^= 1u;
  if ( v52 )
  {
    green_led_off();
    if ( byte_1784A0 )
    {
      red_led_on();
      if ( !v27 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_1784A0 )
      green_led_on();
    else
      green_led_off();
  }
  if ( v27 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
