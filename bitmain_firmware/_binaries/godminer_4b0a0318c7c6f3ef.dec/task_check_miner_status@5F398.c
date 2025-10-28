int task_check_miner_status()
{
  unsigned __int8 *v0; // r1
  int v1; // r3
  int v2; // r7
  char *all_created_runtime; // r0
  char *v4; // r3
  const char *v5; // r2
  char *v6; // r1
  char *v7; // r5
  int v8; // r11
  int v9; // t1
  char *flag_from_monitor; // r0
  int v11; // r3
  char *v12; // r4
  int v13; // r2
  bool v14; // zf
  __int64 v15; // r4
  int *v16; // r0
  char *v17; // r0
  int *v18; // r0
  int *v19; // r2
  int v20; // t1
  int v21; // r5
  char *v22; // r0
  char *v23; // r8
  int v24; // r6
  int v25; // t1
  char *v26; // r0
  _DWORD *v27; // r10
  _BYTE *v28; // r8
  int v29; // r4
  __int64 v30; // r10
  int v31; // r4
  int v32; // r2
  int v33; // r3
  int v34; // r6
  unsigned __int8 *v35; // r3
  _BYTE *v36; // r3
  char v37; // r2
  _BYTE *v38; // r4
  int v39; // r2
  int *v41; // r1
  int v42; // r3
  int v43; // r2
  const char *v44; // r2
  int v45; // r1
  int v46; // r3
  const char *v47; // r2
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int *v51; // r10
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r3
  int v57; // r8
  const char *v58; // r2
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int *v62; // r7
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r1
  int v67; // r3
  const char *v68; // r2
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int *v72; // r7
  int v73; // r1
  int v74; // r2
  int v75; // r3
  int v76; // r1
  int v77; // r1
  int v78; // r2
  int v79; // r3
  int *v80; // r4
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r1
  char v85; // r3
  int v86; // r3
  int v87; // r11
  int v88; // r10
  char *v89; // r0
  char *v90; // r8
  int v91; // t1
  int v92; // r0
  int v93; // r0
  char *v94; // r1
  _DWORD *v95; // r3
  int v96; // r1
  int *v97; // r1
  int v98; // r7
  const char *v99; // r3
  int v100; // r2
  int *v101; // r1
  const char *v102; // r3
  int v103; // r2
  int *v104; // r1
  const char *v105; // r2
  char *v106; // r1
  int v107; // r6
  _DWORD *v108; // r3
  int v109; // r1
  const char *v110; // r2
  char *v111; // r1
  int v112; // r2
  _DWORD *v113; // r3
  int v114; // r1
  const char *v115; // r2
  char *v116; // r1
  int v117; // lr
  _DWORD *v118; // r3
  int v119; // r1
  int v120; // r0
  int v121; // r1
  unsigned int v122; // r4
  int v123; // r3
  _DWORD *v124; // r3
  int v125; // r1
  int v126; // [sp+20h] [bp-12B4h] BYREF
  int v127; // [sp+40h] [bp-1294h]
  const char *v128; // [sp+44h] [bp-1290h]
  unsigned int v129; // [sp+48h] [bp-128Ch]
  int v130; // [sp+4Ch] [bp-1288h]
  int v131; // [sp+54h] [bp-1280h]
  int v132; // [sp+58h] [bp-127Ch]
  int v133; // [sp+5Ch] [bp-1278h]
  __int64 v134; // [sp+60h] [bp-1274h]
  int v135; // [sp+68h] [bp-126Ch]
  int v136; // [sp+6Ch] [bp-1268h]
  unsigned __int8 *v137; // [sp+70h] [bp-1264h]
  int v138; // [sp+74h] [bp-1260h]
  int v139; // [sp+78h] [bp-125Ch]
  int v140; // [sp+7Ch] [bp-1258h]
  int *v141; // [sp+80h] [bp-1254h]
  int *v142; // [sp+84h] [bp-1250h]
  int v143; // [sp+88h] [bp-124Ch]
  int v144; // [sp+8Ch] [bp-1248h]
  int v145; // [sp+90h] [bp-1244h]
  int v146; // [sp+94h] [bp-1240h]
  const char *v147; // [sp+98h] [bp-123Ch]
  char *v148; // [sp+9Ch] [bp-1238h]
  int v149; // [sp+A0h] [bp-1234h]
  int v150; // [sp+A4h] [bp-1230h]
  char *s; // [sp+A8h] [bp-122Ch]
  int v152; // [sp+ACh] [bp-1228h]
  int v153; // [sp+B0h] [bp-1224h]
  int v154; // [sp+B4h] [bp-1220h]
  int v155; // [sp+B8h] [bp-121Ch]
  int v156; // [sp+BCh] [bp-1218h]
  int v157; // [sp+C0h] [bp-1214h]
  int v158; // [sp+C4h] [bp-1210h]
  int v159; // [sp+C8h] [bp-120Ch]
  int v160; // [sp+CCh] [bp-1208h]
  int v161; // [sp+D0h] [bp-1204h]
  int v162; // [sp+D4h] [bp-1200h]
  int v163; // [sp+D8h] [bp-11FCh]
  const char *v164; // [sp+DCh] [bp-11F8h]
  int v165; // [sp+E0h] [bp-11F4h]
  int v166; // [sp+E4h] [bp-11F0h]
  int v167; // [sp+E8h] [bp-11ECh]
  int v168; // [sp+ECh] [bp-11E8h]
  int v169; // [sp+F8h] [bp-11DCh]
  int v170; // [sp+FCh] [bp-11D8h]
  int v171; // [sp+100h] [bp-11D4h]
  int v172; // [sp+104h] [bp-11D0h]
  int v173; // [sp+10Ch] [bp-11C8h] BYREF
  _DWORD v174[7]; // [sp+110h] [bp-11C4h] BYREF
  int v175; // [sp+12Ch] [bp-11A8h]
  _DWORD v176[8]; // [sp+130h] [bp-11A4h] BYREF
  _DWORD v177[7]; // [sp+150h] [bp-1184h] BYREF
  int v178; // [sp+16Ch] [bp-1168h]
  _DWORD v179[8]; // [sp+170h] [bp-1164h] BYREF
  _DWORD v180[7]; // [sp+190h] [bp-1144h] BYREF
  int v181; // [sp+1ACh] [bp-1128h]
  _DWORD v182[8]; // [sp+1B0h] [bp-1124h] BYREF
  _DWORD v183[7]; // [sp+1D0h] [bp-1104h] BYREF
  int v184; // [sp+1ECh] [bp-10E8h]
  _DWORD v185[8]; // [sp+1F0h] [bp-10E4h] BYREF
  _DWORD v186[7]; // [sp+210h] [bp-10C4h] BYREF
  int v187; // [sp+22Ch] [bp-10A8h]
  _DWORD v188[8]; // [sp+230h] [bp-10A4h] BYREF
  _DWORD v189[7]; // [sp+250h] [bp-1084h] BYREF
  int v190; // [sp+26Ch] [bp-1068h]
  _DWORD v191[7]; // [sp+270h] [bp-1064h] BYREF
  int v192; // [sp+28Ch] [bp-1048h]
  _DWORD v193[7]; // [sp+290h] [bp-1044h] BYREF
  int v194; // [sp+2ACh] [bp-1028h]
  int v195; // [sp+2B0h] [bp-1024h] BYREF
  int v196; // [sp+2B4h] [bp-1020h]
  int v197; // [sp+2B8h] [bp-101Ch]
  int v198; // [sp+2BCh] [bp-1018h]
  int v199; // [sp+2C0h] [bp-1014h]
  int v200; // [sp+2C4h] [bp-1010h]
  int v201; // [sp+2C8h] [bp-100Ch]
  int v202; // [sp+2CCh] [bp-1008h]
  _DWORD v203[1025]; // [sp+2D0h] [bp-1004h] BYREF

  LOWORD(v0) = 27500;
  HIWORD(v0) = (unsigned int)&byte_196B74 >> 16;
  v1 = *v0;
  v137 = v0;
  if ( !v1 )
  {
    v0[4] = 0;
    v0[5] = 0;
    v0[6] = 0;
    v0[7] = 0;
    v0[8] = 0;
    v0[9] = 0;
    v0[10] = 0;
    v0[11] = 0;
    v0[12] = 0;
    *v0 = 1;
  }
  pthread_mutex_lock(&stru_196B7C);
  v193[0] = 0;
  v2 = v137[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v193);
  v195 = 0;
  v196 = 0;
  v197 = 0;
  v198 = 0;
  if ( v193[0] <= 0 )
  {
    v138 = 0;
    v129 = 0;
    v135 = 0;
    goto LABEL_24;
  }
  LOWORD(v4) = 27372;
  LOWORD(v5) = 31816;
  LOWORD(v6) = 31204;
  v7 = all_created_runtime - 4;
  v8 = 0;
  HIWORD(v4) = (unsigned int)":" >> 16;
  HIWORD(v5) = (unsigned int)"lease/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
  HIWORD(v6) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
  v148 = v4;
  v164 = v5;
  s = v6;
  v131 = v2;
  do
  {
    v9 = *((_DWORD *)v7 + 1);
    v7 += 4;
    flag_from_monitor = get_flag_from_monitor(v9);
    v11 = *((_DWORD *)flag_from_monitor + 4);
    v12 = flag_from_monitor;
    v130 = 0;
    v129 = v11 & 1;
    if ( (v11 & 1) == 0 )
    {
      v136 = 0;
      v135 = v11 & 2;
      if ( (v11 & 2) == 0 )
      {
        v150 = 0;
        v149 = v11 & 4;
        if ( (v11 & 4) == 0 )
          goto LABEL_75;
        v14 = v131 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 4u;
        if ( !v14 )
        {
          LOWORD(v41) = 20532;
          v147 = "check_temp";
          HIWORD(v41) = (unsigned int)&g_fan_zc >> 16;
          v152 = v196;
          v98 = v195;
          v138 = (int)"%s";
          v141 = v41;
          v142 = &v126;
          goto LABEL_88;
        }
LABEL_13:
        v145 = v11 & 8;
        v146 = 0;
        if ( (v11 & 8) != 0 )
          *((_DWORD *)flag_from_monitor + 6) |= 8u;
LABEL_15:
        v132 = v11 & 0x10;
        v133 = 0;
        if ( (v11 & 0x10) != 0 )
        {
          v14 = v131 == 0;
          *((_DWORD *)v12 + 6) |= 0x10u;
          if ( !v14 )
          {
            LOWORD(v99) = 31496;
            LOWORD(v100) = -27680;
            HIWORD(v99) = (unsigned int)"etwork_lost_err" >> 16;
            LOWORD(v101) = 20532;
            v147 = v99;
            HIWORD(v100) = (unsigned int)"space" >> 16;
            HIWORD(v101) = (unsigned int)&g_fan_zc >> 16;
            v138 = v100;
            v141 = v101;
            v142 = &v126;
            goto LABEL_115;
          }
        }
        goto LABEL_18;
      }
      v14 = v131 == 0;
      *((_DWORD *)flag_from_monitor + 6) |= 2u;
      if ( !v14 )
      {
        LOWORD(v97) = 20532;
        v147 = "check_temp";
        HIWORD(v97) = (unsigned int)&g_fan_zc >> 16;
        v152 = v196;
        v98 = v195;
        v138 = (int)"%s";
        v141 = v97;
        v142 = &v126;
        goto LABEL_86;
      }
      LODWORD(v134) = v11 & 4;
      HIDWORD(v134) = v131;
LABEL_73:
      if ( !v134 )
        goto LABEL_75;
      *((_DWORD *)flag_from_monitor + 6) |= 4u;
      goto LABEL_13;
    }
    v13 = *((_DWORD *)flag_from_monitor + 6);
    v14 = v131 == 0;
    *((_DWORD *)flag_from_monitor + 6) = v13 | 1;
    if ( v14 )
    {
      v143 = v11 & 2;
      LODWORD(v134) = v11 & 4;
      v144 = v131;
      HIDWORD(v134) = v131;
      if ( !(v143 | v131) )
      {
        if ( !v134 )
        {
          v165 = v11 & 8;
          v166 = v131;
          if ( v165 | v131 )
          {
            *((_DWORD *)flag_from_monitor + 6) = v13 | 9;
LABEL_78:
            v153 = v11 & 0x10;
            v154 = 0;
            if ( (v11 & 0x10) != 0 )
              *((_DWORD *)v12 + 6) |= 0x10u;
            goto LABEL_18;
          }
          goto LABEL_15;
        }
        *((_DWORD *)flag_from_monitor + 6) = v13 | 5;
        goto LABEL_13;
      }
      *((_DWORD *)flag_from_monitor + 6) = v13 | 3;
      goto LABEL_73;
    }
    V_LOCK();
    v42 = *(_DWORD *)v7;
    v147 = "check_temp";
    v43 = *(_DWORD *)(v42 + 256);
    v138 = (int)"%s";
    v141 = &g_zc;
    v142 = &v126;
    V_INT((int)v189, v148, v43);
    LOWORD(v44) = 31580;
    HIWORD(v44) = (unsigned int)"fo_malloc_failed_err" >> 16;
    V_STR(v188, s, v44);
    logfmt_raw(
      (char *)v203,
      0x1000u,
      0,
      v190,
      v189[0],
      v189[1],
      v189[2],
      v189[3],
      v189[4],
      v189[5],
      v189[6],
      v190,
      v188[0],
      v188[1],
      v188[2],
      v188[3],
      v188[4],
      v188[5],
      v188[6],
      v188[7],
      v138,
      "check_temp",
      v129,
      v130);
    V_UNLOCK();
    LOWORD(v45) = 31592;
    HIWORD(v45) = (unsigned int)"iled_err" >> 16;
    zlog(*v141, v45, 173, "check_temp", 10, 36, 100, v203);
    v156 = 0;
    v98 = v195 | 1;
    v152 = v196;
    v195 |= 1u;
    v46 = *((_DWORD *)v12 + 4);
    v155 = v46 & 2;
    if ( (v46 & 2) != 0 )
    {
      *((_DWORD *)v12 + 6) |= 2u;
LABEL_86:
      V_LOCK();
      v98 |= 2u;
      V_INT((int)v186, v148, *(int *)(*(_DWORD *)v7 + 256));
      LOWORD(v47) = 31768;
      HIWORD(v47) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
      V_STR(v185, s, v47);
      v48 = v185[1];
      v49 = v185[2];
      v50 = v185[3];
      v128 = v147;
      v51 = v142;
      v127 = v138;
      *v142 = v185[0];
      v51[1] = v48;
      v51[2] = v49;
      v51[3] = v50;
      v51 += 4;
      v52 = v185[5];
      v53 = v185[6];
      v54 = v185[7];
      *v51 = v185[4];
      v51[1] = v52;
      v51[2] = v53;
      v51[3] = v54;
      logfmt_raw((char *)v203, 0x1000u, 0, v187, v186[0], v186[1], v186[2], v186[3], v186[4], v186[5], v186[6], v187);
      V_UNLOCK();
      LOWORD(v55) = 31592;
      HIWORD(v55) = (unsigned int)"iled_err" >> 16;
      zlog(*v141, v55, 173, "check_temp", 10, 44, 100, v203);
      v195 = v98;
      v196 = v152;
      v11 = *((_DWORD *)v12 + 4);
      v157 = v11 & 4;
      v158 = 0;
      if ( (v11 & 4) != 0 )
      {
LABEL_87:
        *((_DWORD *)v12 + 6) |= 4u;
LABEL_88:
        V_LOCK();
        v56 = *(_DWORD *)v7;
        v163 = v98 | 4;
        v57 = v152;
        V_INT((int)v183, v148, *(int *)(v56 + 256));
        LOWORD(v58) = 31784;
        HIWORD(v58) = (unsigned int)"enkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
        V_STR(v182, s, v58);
        v59 = v182[1];
        v60 = v182[2];
        v61 = v182[3];
        v128 = v147;
        v62 = v142;
        v127 = v138;
        *v142 = v182[0];
        v62[1] = v59;
        v62[2] = v60;
        v62[3] = v61;
        v62 += 4;
        v63 = v182[5];
        v64 = v182[6];
        v65 = v182[7];
        *v62 = v182[4];
        v62[1] = v63;
        v62[2] = v64;
        v62[3] = v65;
        logfmt_raw((char *)v203, 0x1000u, 0, v184, v183[0], v183[1], v183[2], v183[3], v183[4], v183[5], v183[6], v184);
        V_UNLOCK();
        LOWORD(v66) = 31592;
        HIWORD(v66) = (unsigned int)"iled_err" >> 16;
        zlog(*v141, v66, 173, "check_temp", 10, 52, 100, v203);
        v196 = v57;
        v195 = v163;
        v11 = *((_DWORD *)v12 + 4);
        v159 = v11 & 8;
        v160 = 0;
        if ( (v11 & 8) != 0 )
        {
          *((_DWORD *)v12 + 6) |= 8u;
          goto LABEL_90;
        }
        goto LABEL_15;
      }
LABEL_75:
      v139 = v11 & 8;
      v140 = 0;
      if ( (v11 & 8) != 0 )
      {
        v14 = v131 == 0;
        *((_DWORD *)v12 + 6) |= 8u;
        if ( !v14 )
        {
          LOWORD(v102) = 31496;
          LOWORD(v103) = -27680;
          HIWORD(v102) = (unsigned int)"etwork_lost_err" >> 16;
          LOWORD(v104) = 20532;
          v147 = v102;
          HIWORD(v103) = (unsigned int)"space" >> 16;
          HIWORD(v104) = (unsigned int)&g_fan_zc >> 16;
          v138 = v103;
          v141 = v104;
          v142 = &v126;
          goto LABEL_116;
        }
        goto LABEL_78;
      }
      goto LABEL_15;
    }
    v168 = 0;
    v167 = v46 & 4;
    if ( (v46 & 4) != 0 )
      goto LABEL_87;
    v170 = 0;
    v169 = v46 & 8;
    if ( (v46 & 8) != 0 )
    {
      *((_DWORD *)v12 + 6) |= 8u;
LABEL_116:
      v57 = v196;
      v163 = v195;
LABEL_90:
      V_LOCK();
      v67 = *(_DWORD *)v7;
      v152 = v163 | 8;
      V_INT((int)v180, v148, *(int *)(v67 + 256));
      LOWORD(v68) = 31800;
      HIWORD(v68) = (unsigned int)"/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
      V_STR(v179, s, v68);
      v69 = v179[1];
      v70 = v179[2];
      v71 = v179[3];
      v128 = v147;
      v72 = v142;
      v127 = v138;
      *v142 = v179[0];
      v72[1] = v69;
      v72[2] = v70;
      v72[3] = v71;
      v72 += 4;
      v73 = v179[5];
      v74 = v179[6];
      v75 = v179[7];
      *v72 = v179[4];
      v72[1] = v73;
      v72[2] = v74;
      v72[3] = v75;
      logfmt_raw((char *)v203, 0x1000u, 0, v181, v180[0], v180[1], v180[2], v180[3], v180[4], v180[5], v180[6], v181);
      V_UNLOCK();
      LOWORD(v76) = 31592;
      HIWORD(v76) = (unsigned int)"iled_err" >> 16;
      zlog(*v141, v76, 173, "check_temp", 10, 60, 100, v203);
      v196 = v57;
      v195 = v152;
      v161 = *((_DWORD *)v12 + 4) & 0x10;
      v162 = 0;
      if ( !v161 )
        goto LABEL_18;
      *((_DWORD *)v12 + 6) |= 0x10u;
      goto LABEL_92;
    }
    v172 = 0;
    v171 = v46 & 0x10;
    if ( (v46 & 0x10) != 0 )
    {
      *((_DWORD *)v12 + 6) |= 0x10u;
LABEL_115:
      v57 = v196;
      v152 = v195;
LABEL_92:
      V_LOCK();
      V_INT((int)v177, v148, *(int *)(*(_DWORD *)v7 + 256));
      V_STR(v176, s, v164);
      v77 = v176[1];
      v78 = v176[2];
      v79 = v176[3];
      v128 = v147;
      v80 = v142;
      v127 = v138;
      *v142 = v176[0];
      v80[1] = v77;
      v80[2] = v78;
      v80[3] = v79;
      v80 += 4;
      v81 = v176[5];
      v82 = v176[6];
      v83 = v176[7];
      *v80 = v176[4];
      v80[1] = v81;
      v80[2] = v82;
      v80[3] = v83;
      logfmt_raw((char *)v203, 0x1000u, 0, v178, v177[0], v177[1], v177[2], v177[3], v177[4], v177[5], v177[6], v178);
      V_UNLOCK();
      LOWORD(v84) = 31592;
      HIWORD(v84) = (unsigned int)"iled_err" >> 16;
      zlog(*v141, v84, 173, "check_temp", 10, 68, 100, v203);
      v196 = v57;
      v195 = v152 | 0x10;
    }
LABEL_18:
    ++v8;
  }
  while ( v8 < v193[0] );
  v2 = v131;
  v15 = v195 & 4;
  v129 = v195;
  v135 = (v195 & 4) != 0;
  if ( (v195 & 2) != 0 )
  {
    v138 = 1;
    set_miner_6060info_status_high_temp_err(1);
  }
  else
  {
    v138 = 0;
  }
  if ( v15 )
    set_miner_6060info_status_low_temp_err(1);
LABEL_24:
  v195 = 0;
  v16 = (int *)get_all_created_runtime(&v195);
  v17 = get_flag_from_monitor(*v16);
  if ( (*((_DWORD *)v17 + 8) & 4) != 0 && (*((_DWORD *)v17 + 10) |= 4u, v2) )
  {
    V_LOCK();
    LOWORD(v105) = 31848;
    LOWORD(v106) = 31204;
    HIWORD(v105) = (unsigned int)"/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
    HIWORD(v106) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
    LOWORD(v107) = -27680;
    V_STR(v191, v106, v105);
    HIWORD(v107) = (unsigned int)"space" >> 16;
    v132 = v2;
    logfmt_raw(
      (char *)v203,
      0x1000u,
      0,
      v192,
      v191[0],
      v191[1],
      v191[2],
      v191[3],
      v191[4],
      v191[5],
      v191[6],
      v192,
      v107,
      "check_fan_err");
    V_UNLOCK();
    LOWORD(v108) = 20532;
    HIWORD(v108) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v109) = 31592;
    HIWORD(v109) = (unsigned int)"iled_err" >> 16;
    zlog(*v108, v109, 173, "check_fan_err", 13, 85, 100, v203);
  }
  else
  {
    v132 = 0;
  }
  v173 = 0;
  v18 = (int *)get_all_created_runtime(&v173);
  if ( v173 > 0 )
  {
    v19 = &v18[v173];
    do
    {
      v20 = *v18++;
      v2 = (unsigned __int8)(v2 & *(_BYTE *)(v20 + 265));
    }
    while ( v19 != v18 );
  }
  v21 = 0;
  v203[0] = 0;
  v22 = (char *)get_all_created_runtime(v203);
  if ( v203[0] > 0 )
  {
    v23 = v22 - 4;
    v24 = 0;
    do
    {
      v25 = *((_DWORD *)v23 + 1);
      v23 += 4;
      v26 = get_flag_from_monitor(v25);
      if ( (*(_DWORD *)v26 & 1) != 0 )
      {
        if ( v2 )
          v21 = v2;
        *((_DWORD *)v26 + 2) |= 1u;
      }
      ++v24;
    }
    while ( v24 < v203[0] );
  }
  if ( !v137[40] )
  {
    clock_gettime(1, &stru_196B98);
    v137[40] = 1;
  }
  if ( total_pools > 0 )
  {
    LOWORD(v27) = 23140;
    LOWORD(v28) = 23441;
    v29 = 0;
    do
    {
      while ( 1 )
      {
        HIWORD(v27) = (unsigned int)&dword_195A6C >> 16;
        if ( !pool_tget(*(pthread_mutex_t **)(*v27 + 4 * v29), (unsigned __int8 *)(*(_DWORD *)(*v27 + 4 * v29) + 1904)) )
        {
          HIWORD(v28) = (unsigned int)&unk_195B99 >> 16;
          if ( *v28 )
            break;
        }
        if ( ++v29 >= total_pools )
          goto LABEL_45;
      }
      clock_gettime(1, &stru_196B98);
      ++v29;
      set_miner_6060info_network_lost_err(0);
    }
    while ( v29 < total_pools );
  }
LABEL_45:
  clock_gettime(1, &stru_196BA0);
  v30 = 1000LL * (*((_DWORD *)v137 + 13) - *((_DWORD *)v137 + 11))
      + (*((_DWORD *)v137 + 14) - *((_DWORD *)v137 + 12)) / 1000000;
  if ( v30 <= 59999 )
    v31 = v137[60] & 1;
  else
    v31 = 0;
  if ( v31 )
  {
    v120 = rand();
    sub_145474(v120, 0x78u);
    v122 = v121 + 60;
    V_LOCK();
    LOWORD(v123) = 31872;
    HIWORD(v123) = (unsigned int)"origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
    logfmt_raw((char *)v203, 0x1000u, 0, v123, v122);
    V_UNLOCK();
    LOWORD(v124) = 20532;
    HIWORD(v124) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v125) = 31592;
    HIWORD(v125) = (unsigned int)"iled_err" >> 16;
    zlog(*v124, v125, 173, "check_lost_connection_to_pool", 29, 150, 80, v203);
    sleep(v122);
    exit(1);
  }
  v131 = (v129 & 0xA) != 0;
  if ( v2 )
  {
    if ( v30 <= 60000 )
    {
      v141 = 0;
      LODWORD(v134) = 0;
      *((_DWORD *)v137 + 16) = 0;
    }
    else
    {
      v32 = *((_DWORD *)v137 + 16);
      *((_DWORD *)v137 + 16) = v32 + 1;
      if ( v32 == 60 * (v32 / 60) )
      {
        V_LOCK();
        LOWORD(v115) = 31960;
        LOWORD(v116) = 31204;
        HIWORD(v115) = (unsigned int)"iled, fan_index >= FAN_MAX" >> 16;
        HIWORD(v116) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
        V_STR(&v195, v116, v115);
        LOWORD(v117) = 31972;
        HIWORD(v117) = (unsigned int)"dex >= FAN_MAX" >> 16;
        v134 = 274877907LL * (int)v30;
        logfmt_raw(
          (char *)v203,
          0x1000u,
          0,
          v202,
          v195,
          v196,
          v197,
          v198,
          v199,
          v200,
          v201,
          v202,
          v117,
          (int)v30 / 1000);
        V_UNLOCK();
        LOWORD(v118) = 20532;
        HIWORD(v118) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v119) = 31592;
        HIWORD(v119) = (unsigned int)"iled_err" >> 16;
        zlog(*v118, v119, 173, "check_lost_connection_to_pool", 29, 158, 100, v203);
        set_miner_6060info_network_lost_err(1);
      }
      if ( (unsigned int)&loc_124F80 >= v30 )
      {
        LODWORD(v134) = v2;
        v141 = 0;
      }
      else
      {
        v33 = v137[60];
        LODWORD(v134) = v33;
        if ( v33 )
        {
          v141 = 0;
        }
        else
        {
          V_LOCK();
          LOWORD(v110) = 31960;
          LOWORD(v111) = 31204;
          HIWORD(v110) = (unsigned int)"iled, fan_index >= FAN_MAX" >> 16;
          HIWORD(v111) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
          v131 = v2;
          V_STR(v193, v111, v110);
          v141 = (int *)v2;
          v112 = v134;
          LODWORD(v134) = v2;
          logfmt_raw(
            (char *)v203,
            0x1000u,
            v112,
            v194,
            v193[0],
            v193[1],
            v193[2],
            v193[3],
            v193[4],
            v193[5],
            v193[6],
            v194,
            "lost internet %d seconds > 20 minutes, poweroff.",
            (int)v30 / 1000);
          V_UNLOCK();
          LOWORD(v113) = 20532;
          HIWORD(v113) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v114) = 31592;
          HIWORD(v114) = (unsigned int)"iled_err" >> 16;
          zlog(*v113, v114, 173, "check_lost_connection_to_pool", 29, 169, 120, v203);
          v137[60] = 1;
        }
      }
    }
  }
  else
  {
    v141 = 0;
    LODWORD(v134) = 0;
  }
  v34 = (v129 >> 3) & 1;
  if ( (v129 & 0x10) != 0 )
  {
    set_miner_6060info_uneffective_temp_err(1);
    LOBYTE(v31) = v137[12];
    if ( (_BYTE)v31 )
    {
      v131 = v137[12];
    }
    else
    {
      LOBYTE(v31) = 1;
      v131 = 1;
      v87 = 1;
      v129 = 1;
LABEL_106:
      v88 = 0;
      v203[0] = 0;
      v137[12] = 1;
      v89 = (char *)get_all_created_runtime(v203);
      if ( v203[0] > 0 )
      {
        v90 = v89 - 4;
        do
        {
          v91 = *((_DWORD *)v90 + 1);
          v90 += 4;
          ++v88;
          v92 = (*(int (**)(void))(v91 + 24))();
          v93 = dev_ctrl(v92);
          (*(void (__fastcall **)(_DWORD))(v93 + 32))(*(_DWORD *)(*(_DWORD *)v90 + 248));
        }
        while ( v88 < v203[0] );
      }
      power_off();
      V_LOCK();
      LOWORD(v94) = 32056;
      HIWORD(v94) = (unsigned int)">= PLATFORM_MAX_CHAIN_NUM" >> 16;
      V_BOOL((int)v174, v94, 1);
      logfmt_raw(
        (char *)v203,
        0x1000u,
        0,
        v175,
        v174[0],
        v174[1],
        v174[2],
        v174[3],
        v174[4],
        v174[5],
        v174[6],
        v175,
        "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
        v138,
        v135,
        v132,
        v34,
        v129,
        v141);
      V_UNLOCK();
      LOWORD(v95) = 20532;
      HIWORD(v95) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v96) = 31592;
      HIWORD(v96) = (unsigned int)"iled_err" >> 16;
      zlog(*v95, v96, 173, "task_check_miner_status", 23, 332, 120, v203);
      if ( !v87 && !v137[12] )
        goto LABEL_121;
    }
    goto LABEL_60;
  }
  if ( v137[12] )
    goto LABEL_60;
  v85 = v132;
  if ( (v129 & 0xE) != 0 )
    v85 = v132 | 1;
  v31 = (unsigned __int8)((unsigned __int8)v141 | v85);
  v86 = (unsigned __int8)(v134 | v21 | v85);
  v87 = v86;
  if ( v31 )
  {
    LOBYTE(v31) = v137[12];
    v129 = (unsigned __int8)v31;
    goto LABEL_106;
  }
  if ( v86 )
  {
LABEL_60:
    v137[11] = 1;
    goto LABEL_61;
  }
LABEL_121:
  v137[11] = 0;
LABEL_61:
  if ( v2 )
  {
    v35 = v137;
    if ( !v21 )
      LOBYTE(v21) = v137[12];
    v137[4] = v138;
    v35[5] = v135;
    v35[8] = v132;
    v36 = v137;
    v37 = v134;
    v137[9] = v21;
    v36[10] = v37;
    v36[6] = v34;
    v36[7] = v31;
  }
  LOWORD(v38) = 14160;
  pthread_mutex_unlock(&stru_196B7C);
  HIWORD(v38) = (unsigned int)&sensor_info_ckb_2042 >> 16;
  v39 = v137[11];
  *v38 ^= 1u;
  if ( v39 )
  {
    green_led_off();
    if ( *v38 )
    {
      red_led_on();
      if ( !v131 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( *v38 )
      green_led_on();
    else
      green_led_off();
  }
  if ( v131 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
