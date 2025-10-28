int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r5
  int v6; // r4
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  int v10; // r2
  int v11; // r1
  _DWORD *v12; // r0
  int v13; // r12
  _DWORD *v14; // lr
  char *v15; // r5
  int v16; // r8
  char *v17; // r9
  int v18; // r10
  int v19; // r1
  int v20; // r2
  int v21; // r3
  char *v22; // lr
  char *v23; // r11
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int *v27; // r5
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r3
  int v41; // r1
  int v42; // r2
  int v43; // r3
  char *v44; // lr
  char *v45; // r9
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int *v49; // r5
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  int v57; // r2
  int v58; // r3
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int v62; // r3
  int v63; // r2
  int v64; // r8
  int v65; // r2
  int v66; // r2
  int v67; // r2
  char *v68; // r1
  char *v69; // r1
  int v70; // r2
  int v71; // r3
  int v72; // r12
  int v73; // r4
  _DWORD *v74; // r12
  int v75; // lr
  int v76; // r1
  bool v77; // nf
  int v78; // r3
  int v79; // r2
  char *v80; // r1
  int v81; // r6
  _DWORD *v82; // r3
  int v83; // r1
  int result; // r0
  char *v85; // r1
  char *v86; // r1
  int v87; // r0
  int v88; // r1
  char *v89; // r1
  int v90; // lr
  _DWORD *v91; // r3
  int v92; // r1
  int v93; // r2
  char *v94; // r1
  _DWORD *v95; // r6
  int v96; // lr
  int v97; // r1
  int v98; // r2
  int v99; // r3
  int v100; // r1
  int v101; // r2
  int v102; // r1
  char *v103; // r1
  int v104; // r12
  _DWORD *v105; // r3
  int v106; // r1
  char *v107; // r1
  int v108; // lr
  _DWORD *v109; // r3
  int v110; // r1
  int v111; // [sp+20h] [bp-1314h] BYREF
  char v112; // [sp+40h] [bp-12F4h] BYREF
  char v113; // [sp+60h] [bp-12D4h] BYREF
  int v114; // [sp+80h] [bp-12B4h]
  int v115; // [sp+84h] [bp-12B0h]
  int v116; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  int v118; // [sp+90h] [bp-12A4h]
  int *v119; // [sp+94h] [bp-12A0h]
  _DWORD *v120; // [sp+98h] [bp-129Ch]
  char *v121; // [sp+9Ch] [bp-1298h]
  char *v122; // [sp+A0h] [bp-1294h]
  int v123; // [sp+A4h] [bp-1290h]
  int v124; // [sp+A8h] [bp-128Ch]
  char *v125; // [sp+ACh] [bp-1288h]
  _DWORD *v126; // [sp+B0h] [bp-1284h]
  int v127; // [sp+B4h] [bp-1280h]
  int v128; // [sp+B8h] [bp-127Ch]
  unsigned int v129; // [sp+BCh] [bp-1278h]
  int v130; // [sp+C0h] [bp-1274h]
  int v131; // [sp+C4h] [bp-1270h]
  int v132; // [sp+C8h] [bp-126Ch]
  int v133; // [sp+CCh] [bp-1268h]
  int *v134; // [sp+D0h] [bp-1264h]
  int v135; // [sp+D4h] [bp-1260h]
  _DWORD *v136; // [sp+D8h] [bp-125Ch]
  int v137; // [sp+DCh] [bp-1258h]
  signed int v138; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v140; // [sp+E8h] [bp-124Ch]
  int v141; // [sp+ECh] [bp-1248h]
  _DWORD v142[7]; // [sp+F0h] [bp-1244h] BYREF
  int v143; // [sp+10Ch] [bp-1228h]
  _DWORD v144[7]; // [sp+110h] [bp-1224h] BYREF
  int v145; // [sp+12Ch] [bp-1208h]
  _DWORD v146[7]; // [sp+130h] [bp-1204h] BYREF
  int v147; // [sp+14Ch] [bp-11E8h]
  _DWORD v148[7]; // [sp+150h] [bp-11E4h] BYREF
  int v149; // [sp+16Ch] [bp-11C8h]
  _DWORD v150[7]; // [sp+170h] [bp-11C4h] BYREF
  int v151; // [sp+18Ch] [bp-11A8h]
  _DWORD v152[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v153[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v154[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v155[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v156; // [sp+210h] [bp-1124h] BYREF
  int v157; // [sp+214h] [bp-1120h]
  int v158; // [sp+218h] [bp-111Ch]
  int v159; // [sp+21Ch] [bp-1118h]
  int v160; // [sp+220h] [bp-1114h]
  int v161; // [sp+224h] [bp-1110h]
  int v162; // [sp+228h] [bp-110Ch]
  int v163; // [sp+22Ch] [bp-1108h]
  int v164; // [sp+230h] [bp-1104h] BYREF
  int v165; // [sp+234h] [bp-1100h]
  int v166; // [sp+238h] [bp-10FCh]
  int v167; // [sp+23Ch] [bp-10F8h]
  int v168; // [sp+240h] [bp-10F4h]
  int v169; // [sp+244h] [bp-10F0h]
  int v170; // [sp+248h] [bp-10ECh]
  int v171; // [sp+24Ch] [bp-10E8h]
  _DWORD v172[8]; // [sp+250h] [bp-10E4h] BYREF
  _DWORD v173[7]; // [sp+270h] [bp-10C4h] BYREF
  int v174; // [sp+28Ch] [bp-10A8h]
  int v175; // [sp+290h] [bp-10A4h] BYREF
  int v176; // [sp+294h] [bp-10A0h]
  int v177; // [sp+298h] [bp-109Ch]
  int v178; // [sp+29Ch] [bp-1098h]
  int v179; // [sp+2A0h] [bp-1094h]
  int v180; // [sp+2A4h] [bp-1090h]
  int v181; // [sp+2A8h] [bp-108Ch]
  int v182; // [sp+2ACh] [bp-1088h]
  int v183; // [sp+2B0h] [bp-1084h] BYREF
  int v184; // [sp+2B4h] [bp-1080h]
  int v185; // [sp+2B8h] [bp-107Ch]
  int v186; // [sp+2BCh] [bp-1078h]
  int v187; // [sp+2C0h] [bp-1074h]
  int v188; // [sp+2C4h] [bp-1070h]
  int v189; // [sp+2C8h] [bp-106Ch]
  int v190; // [sp+2CCh] [bp-1068h]
  _DWORD v191[8]; // [sp+2D0h] [bp-1064h] BYREF
  _DWORD v192[7]; // [sp+2F0h] [bp-1044h] BYREF
  int v193; // [sp+30Ch] [bp-1028h]
  _DWORD v194[7]; // [sp+310h] [bp-1024h] BYREF
  int v195; // [sp+32Ch] [bp-1008h]
  char v196[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 265);
  v137 = a3 + 16;
  if ( !v3 )
    return v137;
  v4 = *(_DWORD *)(a1 + 412);
  v126 = a2;
  v6 = *(_DWORD *)(a1 + 404);
  v141 = a3;
  v138 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 216);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v138 )
    {
      v70 = *(_DWORD *)(a1 + 248);
      v129 = 0;
      v127 = 0;
      v130 = -150;
      goto LABEL_59;
    }
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v131 = -150;
    v130 = -150;
    v132 = 150;
LABEL_64:
    *(_DWORD *)(v141 + 16) |= 1u;
    goto LABEL_33;
  }
  v9 = (int *)ptr;
  LOWORD(v10) = -30908;
  v129 = 0;
  HIWORD(v10) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/uart_debug_logger.c" >> 16;
  v127 = 0;
  LOWORD(v11) = -30868;
  v128 = 0;
  LOWORD(v12) = 20532;
  v140 = 0;
  v133 = 0;
  v132 = 150;
  LOWORD(v13) = -27680;
  LOWORD(v14) = 20536;
  LOWORD(v15) = 27372;
  LOWORD(v16) = -30828;
  LOWORD(v17) = 28788;
  v122 = &v113;
  v124 = v10;
  HIWORD(v11) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/backend/uart_debug_logger.c" >> 16;
  HIWORD(v12) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v13) = (unsigned int)"space" >> 16;
  HIWORD(v14) = (unsigned int)&g_hash_zc >> 16;
  HIWORD(v15) = (unsigned int)":" >> 16;
  HIWORD(v16) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
  HIWORD(v17) = (unsigned int)"en" >> 16;
  v121 = &v112;
  v134 = (int *)((char *)ptr + 8 * v138);
  v18 = v6;
  v130 = -150;
  v131 = -150;
  v135 = v11;
  v120 = v12;
  v123 = v13;
  v136 = v14;
  s = v15;
  v118 = v16;
  v125 = v17;
  v119 = &v111;
  do
  {
    V_LOCK();
    V_INT((int)v194, s, *(int *)(a1 + 256));
    logfmt_raw(
      v196,
      0x1000u,
      0,
      v195,
      v194[0],
      v194[1],
      v194[2],
      v194[3],
      v194[4],
      v194[5],
      v194[6],
      v195,
      v135,
      *v9,
      v9[1]);
    V_UNLOCK();
    zlog(*v120, v118, 193, "check_temperature", 17, 36, 20, v196);
    v62 = *v9;
    if ( *v9 == -64 )
    {
      v64 = 0;
      ++v129;
    }
    else
    {
      v63 = v131;
      v64 = 1;
      if ( v131 < v62 )
        v63 = *v9;
      v131 = v63;
      v65 = v132;
      ++v128;
      if ( v132 >= v62 )
        v65 = v62;
      v132 = v65;
    }
    v66 = v9[1];
    if ( v66 == -64 )
    {
      ++v129;
      v116 = 0;
    }
    else
    {
      if ( v130 >= v66 )
        v66 = v130;
      v130 = v66;
      ++v127;
      v116 = 1;
    }
    if ( v126 )
    {
      v67 = *(_DWORD *)(v18 + 12);
      if ( v67 )
      {
        if ( v67 == 1 )
        {
          if ( v64 )
            *(_DWORD *)(v126[2] + 4 * v140) = v62;
          if ( v116 )
            *(_DWORD *)(v126[3] + 4 * v140) = v9[1];
          ++v140;
        }
      }
      else
      {
        if ( v64 )
          *(_DWORD *)(*v126 + 4 * v133) = v62;
        if ( v116 )
          *(_DWORD *)(v126[1] + 4 * v133) = v9[1];
        ++v133;
      }
    }
    V_LOCK();
    V_INT((int)v192, s, *(int *)(a1 + 256));
    V_INT((int)v191, v125, *(int *)(v18 + 20));
    if ( v64 )
    {
      V_INT((int)&v183, "pcbtemp", *v9);
      if ( v116 )
        goto LABEL_5;
    }
    else
    {
      LOWORD(v68) = -30632;
      HIWORD(v68) = (unsigned int)off_168C18 >> 16;
      V_INT((int)v155, v68, -256);
      v183 = v155[0];
      v184 = v155[1];
      v185 = v155[2];
      v186 = v155[3];
      v187 = v155[4];
      v188 = v155[5];
      v189 = v155[6];
      v190 = v155[7];
      if ( v116 )
      {
LABEL_5:
        V_INT((int)&v175, "chiptemp", v9[1]);
        goto LABEL_6;
      }
    }
    LOWORD(v69) = -30624;
    HIWORD(v69) = (unsigned int)&unk_168C20 >> 16;
    V_INT((int)v154, v69, -256);
    v175 = v154[0];
    v176 = v154[1];
    v177 = v154[2];
    v178 = v154[3];
    v179 = v154[4];
    v180 = v154[5];
    v181 = v154[6];
    v182 = v154[7];
LABEL_6:
    v19 = v176;
    v20 = v177;
    v21 = v178;
    v115 = v124;
    v22 = v122;
    v114 = v123;
    *(_DWORD *)v122 = v175;
    *((_DWORD *)v22 + 1) = v19;
    *((_DWORD *)v22 + 2) = v20;
    *((_DWORD *)v22 + 3) = v21;
    v22 += 16;
    v23 = v121;
    v24 = v180;
    v25 = v181;
    v26 = v182;
    v27 = v119;
    *(_DWORD *)v22 = v179;
    *((_DWORD *)v22 + 1) = v24;
    *((_DWORD *)v22 + 2) = v25;
    *((_DWORD *)v22 + 3) = v26;
    v28 = v184;
    v29 = v185;
    v30 = v186;
    *(_DWORD *)v23 = v183;
    *((_DWORD *)v23 + 1) = v28;
    *((_DWORD *)v23 + 2) = v29;
    *((_DWORD *)v23 + 3) = v30;
    v23 += 16;
    v31 = v188;
    v32 = v189;
    v33 = v190;
    *(_DWORD *)v23 = v187;
    *((_DWORD *)v23 + 1) = v31;
    *((_DWORD *)v23 + 2) = v32;
    *((_DWORD *)v23 + 3) = v33;
    v34 = v191[1];
    v35 = v191[2];
    v36 = v191[3];
    *v27 = v191[0];
    v27[1] = v34;
    v27[2] = v35;
    v27[3] = v36;
    v27 += 4;
    v37 = v191[5];
    v38 = v191[6];
    v39 = v191[7];
    *v27 = v191[4];
    v27[1] = v37;
    v27[2] = v38;
    v27[3] = v39;
    logfmt_raw(v196, 0x1000u, 0, v193, v192[0], v192[1], v192[2], v192[3], v192[4], v192[5], v192[6], v193);
    V_UNLOCK();
    LOWORD(v40) = -30908;
    HIWORD(v40) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/uart_debug_logger.c" >> 16;
    zlog(*v120, v118, 193, v40, 17, 92, 20, v196);
    V_LOCK();
    V_INT((int)v173, s, *(int *)(a1 + 256));
    V_INT((int)v172, v125, *(int *)(v18 + 20));
    if ( v64 )
    {
      V_INT((int)&v164, "pcbtemp", *v9);
    }
    else
    {
      LOWORD(v86) = -30632;
      HIWORD(v86) = (unsigned int)off_168C18 >> 16;
      V_INT((int)v153, v86, -256);
      v164 = v153[0];
      v165 = v153[1];
      v166 = v153[2];
      v167 = v153[3];
      v168 = v153[4];
      v169 = v153[5];
      v170 = v153[6];
      v171 = v153[7];
    }
    if ( v116 )
    {
      V_INT((int)&v156, "chiptemp", v9[1]);
    }
    else
    {
      LOWORD(v85) = -30624;
      HIWORD(v85) = (unsigned int)&unk_168C20 >> 16;
      V_INT((int)v152, v85, -256);
      v156 = v152[0];
      v157 = v152[1];
      v158 = v152[2];
      v159 = v152[3];
      v160 = v152[4];
      v161 = v152[5];
      v162 = v152[6];
      v163 = v152[7];
    }
    v41 = v157;
    v42 = v158;
    v43 = v159;
    v9 += 2;
    v18 += 24;
    v115 = v124;
    v44 = v122;
    v114 = v123;
    *(_DWORD *)v122 = v156;
    *((_DWORD *)v44 + 1) = v41;
    *((_DWORD *)v44 + 2) = v42;
    *((_DWORD *)v44 + 3) = v43;
    v44 += 16;
    v45 = v121;
    v46 = v161;
    v47 = v162;
    v48 = v163;
    v49 = v119;
    *(_DWORD *)v44 = v160;
    *((_DWORD *)v44 + 1) = v46;
    *((_DWORD *)v44 + 2) = v47;
    *((_DWORD *)v44 + 3) = v48;
    v50 = v165;
    v51 = v166;
    v52 = v167;
    *(_DWORD *)v45 = v164;
    *((_DWORD *)v45 + 1) = v50;
    *((_DWORD *)v45 + 2) = v51;
    *((_DWORD *)v45 + 3) = v52;
    v45 += 16;
    v53 = v169;
    v54 = v170;
    v55 = v171;
    *(_DWORD *)v45 = v168;
    *((_DWORD *)v45 + 1) = v53;
    *((_DWORD *)v45 + 2) = v54;
    *((_DWORD *)v45 + 3) = v55;
    v56 = v172[1];
    v57 = v172[2];
    v58 = v172[3];
    *v49 = v172[0];
    v49[1] = v56;
    v49[2] = v57;
    v49[3] = v58;
    v49 += 4;
    v59 = v172[5];
    v60 = v172[6];
    v61 = v172[7];
    *v49 = v172[4];
    v49[1] = v59;
    v49[2] = v60;
    v49[3] = v61;
    logfmt_raw(v196, 0x1000u, 0, v174, v173[0], v173[1], v173[2], v173[3], v173[4], v173[5], v173[6], v174);
    V_UNLOCK();
    zlog(*v136, v118, 193, "check_temperature", 17, 94, 40, v196);
  }
  while ( v134 != v9 );
  free(ptr);
  if ( v128 != v138 || v128 != v127 )
    goto LABEL_64;
LABEL_33:
  v70 = *(_DWORD *)(a1 + 248);
  if ( v128 )
  {
    LOWORD(v73) = 15120;
    v71 = 4 * v70;
    v72 = v131;
    HIWORD(v73) = (unsigned int)&unk_1A3B18 >> 16;
    v126[5] = v132;
    *(_DWORD *)(v73 + 4 * v70) = v72;
    *(_DWORD *)(v73 + 4 * v70 + 64) = 0;
    goto LABEL_35;
  }
LABEL_59:
  LOWORD(v73) = 15120;
  v71 = 4 * v70;
  HIWORD(v73) = (unsigned int)&unk_1A3B18 >> 16;
  v87 = v73 + 4 * v70;
  v88 = *(_DWORD *)(v87 + 64) + 1;
  v77 = *(_DWORD *)(v87 + 64) - 1 < 0;
  *(_DWORD *)(v87 + 64) = v88;
  if ( !(v77 ^ __OFSUB__(v88, 2) | (v88 == 2)) )
  {
    V_LOCK();
    LOWORD(v89) = 27372;
    HIWORD(v89) = (unsigned int)":" >> 16;
    V_INT((int)v142, v89, *(int *)(a1 + 256));
    LOWORD(v90) = -30612;
    HIWORD(v90) = (unsigned int)&unk_168C2C >> 16;
    logfmt_raw(
      v196,
      0x1000u,
      0,
      v143,
      v142[0],
      v142[1],
      v142[2],
      v142[3],
      v142[4],
      v142[5],
      v142[6],
      v143,
      v90,
      *(_DWORD *)(v73 + 4 * *(_DWORD *)(a1 + 248) + 64));
    V_UNLOCK();
    LOWORD(v91) = 20532;
    HIWORD(v91) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v92) = -30828;
    HIWORD(v92) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
    zlog(*v91, v92, 193, "update_temperature", 18, 335, 120, v196);
    v70 = *(_DWORD *)(a1 + 248);
    v71 = 4 * v70;
    *(_DWORD *)(v141 + 16) |= 8u;
  }
LABEL_35:
  if ( v127 )
  {
    v74 = v126;
    v75 = v130;
    *(_DWORD *)(v73 + v71 + 128) = 0;
    v74[4] = v75;
  }
  else
  {
    v102 = *(_DWORD *)(v73 + v71 + 128) + 1;
    v77 = *(_DWORD *)(v73 + v71 + 128) - 1 < 0;
    *(_DWORD *)(v73 + v71 + 128) = v102;
    if ( !(v77 ^ __OFSUB__(v102, 2) | (v102 == 2)) )
    {
      V_LOCK();
      LOWORD(v103) = 27372;
      HIWORD(v103) = (unsigned int)":" >> 16;
      V_INT((int)v144, v103, *(int *)(a1 + 256));
      LOWORD(v104) = -30568;
      HIWORD(v104) = (unsigned int)"form_topol_init" >> 16;
      logfmt_raw(
        v196,
        0x1000u,
        v127,
        v145,
        v144[0],
        v144[1],
        v144[2],
        v144[3],
        v144[4],
        v144[5],
        v144[6],
        v145,
        v104,
        *(_DWORD *)(v73 + 4 * *(_DWORD *)(a1 + 248) + 128));
      V_UNLOCK();
      LOWORD(v105) = 20532;
      HIWORD(v105) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v106) = -30828;
      HIWORD(v106) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
      zlog(*v105, v106, 193, "update_temperature", 18, 352, 120, v196);
      v70 = *(_DWORD *)(a1 + 248);
      v71 = 4 * v70;
      *(_DWORD *)(v141 + 16) |= 8u;
    }
  }
  if ( *(_DWORD *)(a1 + 428) >= v129 )
  {
    *(_DWORD *)(v73 + v71 + 192) = 0;
  }
  else
  {
    v76 = *(_DWORD *)(v73 + v71 + 192) + 1;
    v77 = *(_DWORD *)(v73 + v71 + 192) - 1 < 0;
    *(_DWORD *)(v73 + v71 + 192) = v76;
    if ( !(v77 ^ __OFSUB__(v76, 2) | (v76 == 2)) )
    {
      V_LOCK();
      LOWORD(v107) = 27372;
      HIWORD(v107) = (unsigned int)":" >> 16;
      V_INT((int)v146, v107, *(int *)(a1 + 256));
      LOWORD(v108) = -30524;
      HIWORD(v108) = (unsigned int)"ssor" >> 16;
      logfmt_raw(
        v196,
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
        v108,
        *(_DWORD *)(v73 + 4 * *(_DWORD *)(a1 + 248) + 192),
        v129);
      V_UNLOCK();
      LOWORD(v109) = 20532;
      HIWORD(v109) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v110) = -30828;
      HIWORD(v110) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
      zlog(*v109, v110, 193, "update_temperature", 18, 363, 120, v196);
      v70 = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(v141 + 16) |= 0x10u;
      v71 = 4 * v70;
    }
  }
  if ( v126[4] > *(_DWORD *)(a1 + 416) || *(_DWORD *)(v73 + 4 * v70) > *(_DWORD *)(a1 + 420) )
  {
    v93 = *(_DWORD *)(v73 + v71 + 256) + 1;
    v77 = *(_DWORD *)(v73 + v71 + 256) - 1 < 0;
    *(_DWORD *)(v73 + v71 + 256) = v93;
    if ( !(v77 ^ __OFSUB__(v93, 2) | (v93 == 2)) )
    {
      V_LOCK();
      LOWORD(v94) = 27372;
      HIWORD(v94) = (unsigned int)":" >> 16;
      LOWORD(v95) = 20532;
      HIWORD(v95) = (unsigned int)&g_fan_zc >> 16;
      V_INT((int)v148, v94, *(int *)(a1 + 256));
      LOWORD(v96) = -30456;
      HIWORD(v96) = (unsigned int)"_ctrlboard_sensor" >> 16;
      logfmt_raw(
        v196,
        0x1000u,
        0,
        v149,
        v148[0],
        v148[1],
        v148[2],
        v148[3],
        v148[4],
        v148[5],
        v148[6],
        v149,
        v96,
        *(_DWORD *)(v73 + 4 * *(_DWORD *)(a1 + 248) + 256),
        v126[4],
        *(_DWORD *)(v73 + 4 * *(_DWORD *)(a1 + 248)));
      V_UNLOCK();
      LOWORD(v97) = -30828;
      HIWORD(v97) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
      zlog(*v95, v97, 193, "update_temperature", 18, 378, 120, v196);
      V_LOCK();
      LOWORD(v98) = -32416;
      LOWORD(v99) = 31232;
      HIWORD(v98) = (unsigned int)"ld/godminer-origin_godminer-new/miner.c" >> 16;
      HIWORD(v99) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
      logfmt_raw(v196, 0x1000u, 0, v99, v98);
      V_UNLOCK();
      LOWORD(v100) = -30828;
      HIWORD(v100) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
      zlog(*v95, v100, 193, "update_temperature", 18, 379, 100, v196);
      v101 = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(v141 + 16) |= 2u;
      v71 = 4 * v101;
    }
  }
  else
  {
    *(_DWORD *)(v73 + v71 + 256) = 0;
  }
  if ( v126[5] <= *(_DWORD *)(a1 + 424) )
  {
    v78 = v73 + v71;
    v79 = *(_DWORD *)(v78 + 320) + 1;
    v77 = *(_DWORD *)(v78 + 320) - 1 < 0;
    *(_DWORD *)(v78 + 320) = v79;
    if ( !(v77 ^ __OFSUB__(v79, 2) | (v79 == 2)) )
    {
      V_LOCK();
      LOWORD(v80) = 27372;
      HIWORD(v80) = (unsigned int)":" >> 16;
      V_INT((int)v150, v80, *(int *)(a1 + 256));
      LOWORD(v81) = -30388;
      HIWORD(v81) = (unsigned int)&off_168D0C >> 16;
      logfmt_raw(
        v196,
        0x1000u,
        0,
        v151,
        v150[0],
        v150[1],
        v150[2],
        v150[3],
        v150[4],
        v150[5],
        v150[6],
        v151,
        v81,
        *(_DWORD *)(v73 + 4 * *(_DWORD *)(a1 + 248) + 320),
        v126[5]);
      V_UNLOCK();
      LOWORD(v82) = 20532;
      HIWORD(v82) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v83) = -30828;
      HIWORD(v83) = (unsigned int)"ner-new/backend/uart_debug_logger.c" >> 16;
      zlog(*v82, v83, 193, "update_temperature", 18, 394, 120, v196);
      *(_DWORD *)(v141 + 16) |= 4u;
    }
    return v137;
  }
  result = v137;
  *(_DWORD *)(v73 + v71 + 320) = 0;
  return result;
}
