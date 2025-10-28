int __fastcall sub_282C4(_DWORD *a1, int a2)
{
  int v3; // r5
  _DWORD *v4; // r4
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r8
  float v10; // s26
  float v11; // s18
  float v12; // s16
  double v13; // d10
  char *all_created_runtime; // r4
  __int64 v15; // r6
  _DWORD *v16; // r4
  _DWORD *v17; // r0
  char *v18; // r0
  double v19; // d13
  double v20; // d0
  float v21; // s21
  _DWORD *v22; // r0
  double v23; // d9
  double v24; // d8
  bool v25; // cc
  double *v26; // r0
  double *v27; // r0
  double *v28; // r0
  double *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  int *v32; // r3
  __int64 v33; // r0
  int v34; // r2
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  int v37; // r5
  int v38; // r6
  int v39; // t1
  _DWORD *v40; // r0
  unsigned __int8 v41; // r0
  char *v42; // r2
  int v43; // r1
  int v44; // lr
  unsigned int v45; // r2
  _DWORD *v46; // r0
  int v47; // r10
  char *v48; // r5
  int v49; // r11
  int *v50; // r0
  int v51; // r9
  int v52; // r3
  int v53; // r8
  int v54; // r2
  _DWORD *v55; // r0
  int *v56; // r0
  int v57; // r2
  int v58; // r8
  _DWORD *v59; // r0
  size_t *v60; // r8
  char *v61; // r7
  int v62; // r5
  int v63; // t1
  int v64; // r1
  size_t v65; // t1
  char *v66; // r0
  char *v67; // r7
  char *v68; // r5
  int v69; // r6
  int v70; // t1
  char *v71; // r0
  char *v72; // r7
  char *v73; // r5
  int v74; // r6
  int v75; // t1
  char *v76; // r0
  char *v77; // r10
  char *v78; // r5
  int v79; // r6
  int v80; // t1
  char *v81; // r0
  _DWORD *v82; // r0
  char *v83; // r7
  int v84; // r6
  char *v85; // r9
  char *v86; // r8
  const char **v87; // r5
  int v88; // t1
  int v89; // r0
  _DWORD *v90; // r0
  int v91; // r6
  int v92; // t1
  char *v93; // r0
  char *v94; // r10
  char *v95; // r6
  int v96; // r8
  unsigned __int64 v97; // kr00_8
  int v98; // t1
  unsigned int v99; // r7
  unsigned int v100; // r11
  _DWORD *v101; // r0
  __int64 v102; // r0
  _DWORD *v103; // r0
  char *v104; // r7
  int v105; // r6
  char *v106; // r9
  char *v107; // r8
  char *v108; // r5
  int v109; // t1
  double *v110; // r0
  int v111; // r6
  int v112; // t1
  char *v113; // r0
  char *v114; // r10
  char *v115; // r7
  int v116; // r5
  int v117; // t1
  int v118; // r0
  _DWORD *v119; // r0
  char *v120; // r0
  char *v121; // r0
  _DWORD *v122; // r0
  char *v124; // r6
  char *v125; // r0
  char *v126; // r4
  char *v127; // r7
  int v128; // t1
  double *v129; // r0
  char *v130; // [sp+10h] [bp-123Ch]
  int v131; // [sp+18h] [bp-1234h]
  int *v132; // [sp+1Ch] [bp-1230h]
  char *ptr; // [sp+2Ch] [bp-1220h]
  int v135; // [sp+34h] [bp-1218h]
  _DWORD *v136; // [sp+38h] [bp-1214h]
  __int64 v137; // [sp+40h] [bp-120Ch]
  int v138; // [sp+50h] [bp-11FCh] BYREF
  int v139; // [sp+54h] [bp-11F8h] BYREF
  int v140; // [sp+58h] [bp-11F4h] BYREF
  int v141; // [sp+5Ch] [bp-11F0h] BYREF
  double v142; // [sp+60h] [bp-11ECh] BYREF
  char v143[12]; // [sp+6Ch] [bp-11E0h] BYREF
  char v144[4]; // [sp+78h] [bp-11D4h] BYREF
  int v145; // [sp+7Ch] [bp-11D0h]
  int v146; // [sp+80h] [bp-11CCh]
  int v147; // [sp+84h] [bp-11C8h]
  char s[32]; // [sp+88h] [bp-11C4h] BYREF
  char v149[32]; // [sp+A8h] [bp-11A4h] BYREF
  char v150[32]; // [sp+C8h] [bp-1184h] BYREF
  char v151[32]; // [sp+E8h] [bp-1164h] BYREF
  char v152[32]; // [sp+108h] [bp-1144h] BYREF
  char v153[4]; // [sp+128h] [bp-1124h] BYREF
  char v154[256]; // [sp+148h] [bp-1104h] BYREF
  char v155[4]; // [sp+248h] [bp-1004h] BYREF
  int v156; // [sp+24Ch] [bp-1000h]
  int v157; // [sp+250h] [bp-FFCh]
  float v158; // [sp+254h] [bp-FF8h]
  float v159; // [sp+258h] [bp-FF4h]
  float v160; // [sp+25Ch] [bp-FF0h]
  float v161; // [sp+260h] [bp-FECh]
  double v162; // [sp+268h] [bp-FE4h]

  v145 = 0;
  v146 = 0;
  v147 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v144 = 0;
  memset(s, 0, sizeof(s));
  memset(v154, 0, sizeof(v154));
  v138 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v155, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats_old",
      13,
      1374,
      100,
      v155);
    return -2147483646;
  }
  else
  {
    sub_248E4(a1, 1, 70, *(const char **)(a2 + 8));
    v136 = json_array();
    v4 = json_object();
    v5 = BUFX_strdup("2.12");
    json_object_set_new(v4, "BMMiner", v5);
    v6 = BUFX_strdup(g_miner_version);
    json_object_set_new(v4, "Miner", v6);
    v7 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v4, "CompileTime", v7);
    v8 = BUFX_strdup(g_miner_type);
    json_object_set_new(v4, "Type", v8);
    json_array_append_new(v136, v4);
    read_system_status_from_monitor((int)v155);
    v9 = v156;
    v10 = v158;
    v11 = v160;
    v12 = v161;
    v13 = v162;
    all_created_runtime = (char *)get_all_created_runtime(&v138);
    v135 = frontend_runtime_instance();
    if ( v138 > 0 )
    {
      v132 = (int *)malloc(216 * v138);
      v124 = (char *)v132;
      v125 = (char *)malloc(4 * v138);
      ptr = v125;
      if ( v138 <= 0 )
      {
        v15 = 0;
      }
      else
      {
        v126 = all_created_runtime - 4;
        v127 = v125 - 4;
        do
        {
          v128 = *((_DWORD *)v126 + 1);
          v126 += 4;
          read_status_from_monitor(v124, v128);
          ++v3;
          v124 += 216;
          v25 = v138 <= v3;
          *((_DWORD *)v127 + 1) = *(_DWORD *)(*(_DWORD *)v126 + 224) + 1;
          v127 += 4;
        }
        while ( !v25 );
        v15 = v3;
      }
    }
    else
    {
      v15 = 0;
      ptr = 0;
      v132 = 0;
    }
    v16 = json_object();
    v17 = json_integer(v15);
    json_object_set_new(v16, "STATS", v17);
    snprintf(v144, 0x10u, "BTM_SOC%d", v3);
    v18 = BUFX_strdup(v144);
    json_object_set_new(v16, "ID", v18);
    v19 = v10;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v135 + 72) + 16), v149);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v135 + 72) + 16), v150);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v135 + 72) + 16), v151);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v135 + 72) + 16), v152);
    v20 = v13;
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v135 + 72) + 16), &v142, v143);
    v21 = v159;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v22 = json_integer((__int64)v20);
    json_object_set_new(v16, "Elapsed", v22);
    v23 = v11 * v20;
    v24 = v12 * v20;
    v25 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v25 = (unsigned int)(opt_algo - 6) > 1;
    if ( v25 )
    {
      sub_12E10C((__int64)(v19 * v20 * 100.0));
      v129 = json_real();
      json_object_set_new(v16, "GHS 5s", v129);
    }
    else
    {
      sub_12E10C((__int64)(v21 * v20 * 100.0));
      v26 = json_real();
      json_object_set_new(v16, "GHS 5s", v26);
      v24 = *(float *)&v20 * v24;
      v23 = *(float *)&v20 * v23;
    }
    sub_12E10C((__int64)(v24 * 100.0));
    v27 = json_real();
    json_object_set_new(v16, "GHS av", v27);
    sub_12E10C((__int64)(v23 * 100.0));
    v28 = json_real();
    json_object_set_new(v16, "rate_30m", v28);
    sub_12E10C((__int64)(v142 * 100.0));
    v29 = json_real();
    json_object_set_new(v16, "total_rateideal", v29);
    v30 = json_integer(opt_bitmain_work_mode);
    json_object_set_new(v16, "Mode", v30);
    v31 = json_integer(v138);
    json_object_set_new(v16, "miner_count", v31);
    if ( v138 <= 0 )
    {
      v33 = 0x7FFFFFFF;
    }
    else
    {
      v32 = v132;
      LODWORD(v33) = 0x7FFFFFFF;
      do
      {
        v34 = v32[18];
        v32 += 54;
        if ( (int)v33 >= v34 )
          LODWORD(v33) = v34;
      }
      while ( &v132[54 * v138] != v32 );
      v33 = (int)v33;
    }
    v35 = json_integer(v33);
    json_object_set_new(v16, "frequency", v35);
    v36 = json_integer(v9);
    json_object_set_new(v16, "fan_num", v36);
    if ( v9 > 0 )
    {
      v37 = 0;
      v38 = v157 - 4;
      do
      {
        ++v37;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v37);
        v39 = *(_DWORD *)(v38 + 4);
        v38 += 4;
        v40 = json_integer(v39);
        json_object_set_new(v16, s, v40);
      }
      while ( v37 != v9 );
    }
    if ( v138 <= 0 )
    {
      v137 = -100;
      v45 = 0;
    }
    else
    {
      v41 = 0;
      v42 = (char *)v132;
      v43 = -100;
      do
      {
        v44 = *((_DWORD *)v42 + 4);
        v42 += 216;
        if ( v43 < v44 )
          v43 = v44;
        v41 += *((_DWORD *)v42 - 48) + *((_DWORD *)v42 - 47);
      }
      while ( v42 != (char *)&v132[54 * v138] );
      v45 = v41;
      v137 = v43;
    }
    v46 = json_integer(v45);
    json_object_set_new(v16, "temp_num", v46);
    if ( v138 > 0 )
    {
      v47 = 0;
      v48 = (char *)v132;
      v130 = ptr - 4;
      do
      {
        v49 = *((_DWORD *)v48 + 6);
        v50 = *(int **)v48;
        v139 = 0;
        ++v47;
        v140 = 0;
        v141 = 0;
        v48 += 216;
        *(_DWORD *)v153 = 0;
        find_min_and_max_int(v50, v49, &v139, &v140);
        v51 = *((_DWORD *)v48 - 47);
        find_min_and_max_int(*((int **)v48 - 52), v51, &v141, v153);
        v52 = *(_DWORD *)v153;
        v53 = *((_DWORD *)v130 + 1);
        if ( *(int *)v153 < v140 )
          v52 = v140;
        v54 = *((_DWORD *)v130 + 1);
        v130 += 4;
        v131 = v52;
        sprintf(s, "temp%d", v54);
        v55 = json_integer(v131);
        json_object_set_new(v16, s, v55);
        v56 = (int *)*((_DWORD *)v48 - 53);
        *(_DWORD *)v153 = 0;
        v141 = 0;
        v140 = 0;
        v139 = 0;
        find_min_and_max_int(v56, v49, &v139, &v140);
        find_min_and_max_int(*((int **)v48 - 51), v51, &v141, v153);
        v57 = v53;
        v58 = v140;
        if ( *(int *)v153 >= v140 )
          v58 = *(_DWORD *)v153;
        sprintf(s, "temp2_%d", v57);
        v59 = json_integer(v58);
        json_object_set_new(v16, s, v59);
      }
      while ( v138 > v47 );
      v60 = (size_t *)v132;
      if ( v138 > 0 )
      {
        v61 = ptr - 4;
        v62 = 0;
        do
        {
          ++v62;
          memset(s, 0, sizeof(s));
          memset(v154, 0, sizeof(v154));
          v63 = *((_DWORD *)v61 + 1);
          v61 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v63);
          v64 = v60[6];
          v65 = *v60;
          v60 += 54;
          sub_24D94(v65, v64, v154);
          v66 = BUFX_strdup(v154);
          json_object_set_new(v16, s, v66);
        }
        while ( v138 > v62 );
        if ( v138 > 0 )
        {
          v67 = ptr - 4;
          v68 = (char *)v132;
          v69 = 0;
          do
          {
            ++v69;
            memset(s, 0, sizeof(s));
            v68 += 216;
            memset(v154, 0, sizeof(v154));
            v70 = *((_DWORD *)v67 + 1);
            v67 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v70);
            sub_24D94(*((_DWORD *)v68 - 52), *((_DWORD *)v68 - 47), v154);
            v71 = BUFX_strdup(v154);
            json_object_set_new(v16, s, v71);
          }
          while ( v138 > v69 );
          if ( v138 > 0 )
          {
            v72 = ptr - 4;
            v73 = (char *)v132;
            v74 = 0;
            do
            {
              ++v74;
              memset(s, 0, sizeof(s));
              v73 += 216;
              memset(v154, 0, sizeof(v154));
              v75 = *((_DWORD *)v72 + 1);
              v72 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v75);
              sub_24D94(*((_DWORD *)v73 - 53), *((_DWORD *)v73 - 48), v154);
              v76 = BUFX_strdup(v154);
              json_object_set_new(v16, s, v76);
            }
            while ( v138 > v74 );
            if ( v138 > 0 )
            {
              v77 = ptr - 4;
              v78 = (char *)v132;
              v79 = 0;
              do
              {
                ++v79;
                memset(s, 0, sizeof(s));
                v78 += 216;
                memset(v154, 0, sizeof(v154));
                v80 = *((_DWORD *)v77 + 1);
                v77 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v80);
                sub_24D94(*((_DWORD *)v78 - 52), *((_DWORD *)v78 - 47), v154);
                v81 = BUFX_strdup(v154);
                json_object_set_new(v16, s, v81);
              }
              while ( v138 > v79 );
            }
          }
        }
      }
    }
    v82 = json_integer(v137);
    json_object_set_new(v16, "temp_max", v82);
    if ( v138 <= 0 )
      goto LABEL_75;
    v83 = (char *)v132;
    v84 = 0;
    v85 = ptr - 4;
    v86 = ptr - 4;
    v87 = (const char **)v132;
    do
    {
      ++v84;
      memset(s, 0, sizeof(s));
      v88 = *((_DWORD *)v85 + 1);
      v85 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v88);
      v89 = *((_DWORD *)v83 + 16);
      v83 += 216;
      v90 = json_integer(v89);
      json_object_set_new(v16, s, v90);
    }
    while ( v138 > v84 );
    if ( v138 <= 0 )
      goto LABEL_75;
    v91 = 0;
    do
    {
      v92 = *((_DWORD *)v86 + 1);
      v86 += 4;
      ++v91;
      v87 += 54;
      sprintf(v153, "chain_acs%d", v92);
      memset(s, 0, sizeof(s));
      memset(v154, 0, sizeof(v154));
      snprintf(s, 0x20u, "chain_acs%d", v92);
      snprintf(v154, 0x100u, "%s", *(v87 - 37));
      v93 = BUFX_strdup(v154);
      json_object_set_new(v16, s, v93);
    }
    while ( v138 > v91 );
    if ( v138 <= 0 )
    {
LABEL_75:
      v97 = 0;
    }
    else
    {
      v94 = ptr - 4;
      v95 = (char *)v132;
      v96 = 0;
      v97 = 0;
      do
      {
        ++v96;
        memset(s, 0, sizeof(s));
        v98 = *((_DWORD *)v94 + 1);
        v94 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v98);
        v99 = *((_DWORD *)v95 + 20);
        v95 += 216;
        v100 = *((_DWORD *)v95 - 33);
        v101 = json_integer(__SPAIR64__(v100, v99));
        json_object_set_new(v16, s, v101);
        v97 += __PAIR64__(v100, v99);
      }
      while ( v138 > v96 );
    }
    v102 = v97;
    if ( opt_algo == 9 )
      LODWORD(v102) = sub_12E424(v97, 0x3E8u);
    v103 = json_integer(v102);
    json_object_set_new(v16, "no_matching_work", v103);
    if ( v138 > 0 )
    {
      v104 = (char *)v132;
      v105 = 0;
      v106 = ptr - 4;
      v107 = ptr - 4;
      v108 = (char *)v132;
      do
      {
        ++v105;
        memset(s, 0, sizeof(s));
        v109 = *((_DWORD *)v106 + 1);
        v106 += 4;
        snprintf(s, 0x20u, "chain_rate%d", v109);
        v104 += 216;
        v110 = json_real();
        json_object_set_new(v16, s, v110);
      }
      while ( v138 > v105 );
      if ( v138 > 0 )
      {
        v111 = 0;
        do
        {
          ++v111;
          v108 += 216;
          format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v135 + 72) + 16), v153);
          v112 = *((_DWORD *)v107 + 1);
          v107 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v112);
          v113 = BUFX_strdup(v153);
          json_object_set_new(v16, s, v113);
        }
        while ( v138 > v111 );
        if ( v138 > 0 )
        {
          v114 = ptr - 4;
          v115 = (char *)v132;
          v116 = 0;
          do
          {
            ++v116;
            memset(s, 0, sizeof(s));
            v117 = *((_DWORD *)v114 + 1);
            v114 += 4;
            snprintf(s, 0x20u, "freq%d", v117);
            v118 = *((_DWORD *)v115 + 18);
            v115 += 216;
            v119 = json_integer(v118);
            json_object_set_new(v16, s, v119);
          }
          while ( v138 > v116 );
        }
      }
    }
    v120 = BUFX_strdup(g_miner_version);
    json_object_set_new(v16, "miner_version", v120);
    v121 = BUFX_strdup(0);
    json_object_set_new(v16, "miner_id", v121);
    json_array_append_new(v136, v16);
    json_object_set_new(a1, "STATS", v136);
    v122 = json_integer(1);
    json_object_set_new(a1, "id", v122);
    if ( v138 > 0 )
    {
      free(ptr);
      free(v132);
    }
    return 0;
  }
}
