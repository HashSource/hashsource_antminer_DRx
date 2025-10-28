// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2A3C8(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char *a9,
        int a10,
        int a11,
        void *a12,
        int a13)
{
  char *v13; // r5
  int v14; // r8
  float v15; // s16
  float v16; // s18
  float v17; // s20
  double v18; // d11
  char *all_created_runtime; // r4
  __int64 v20; // r6
  _DWORD *v21; // r4
  _DWORD *v22; // r0
  char *v23; // r0
  double v24; // d10
  float v25; // s24
  double v26; // r0
  double v27; // d9
  double v28; // d8
  float v29; // s26
  _DWORD *v30; // r0
  double *v31; // r0
  double *v32; // r0
  double *v33; // r0
  double *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  int *v37; // r3
  __int64 v38; // r0
  int v39; // r2
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  int v42; // r5
  int v43; // r6
  int v44; // t1
  _DWORD *v45; // r0
  unsigned __int8 v46; // r0
  char *v47; // r2
  int v48; // r1
  int v49; // lr
  unsigned int v50; // r2
  _DWORD *v51; // r0
  int v52; // r10
  char *v53; // r5
  int v54; // r11
  int *v55; // r0
  int v56; // r9
  int v57; // r3
  int v58; // r8
  int v59; // r2
  _DWORD *v60; // r0
  int *v61; // r0
  int v62; // r2
  int v63; // r8
  _DWORD *v64; // r0
  size_t *v65; // r8
  char *v66; // r7
  int v67; // r5
  int v68; // t1
  int v69; // r1
  size_t v70; // t1
  char *v71; // r0
  char *v72; // r7
  char *v73; // r5
  int v74; // r6
  int v75; // t1
  char *v76; // r0
  char *v77; // r7
  char *v78; // r5
  int v79; // r6
  int v80; // t1
  char *v81; // r0
  char *v82; // r10
  char *v83; // r5
  int v84; // r6
  int v85; // t1
  char *v86; // r0
  _DWORD *v87; // r0
  char *v88; // r7
  int v89; // r6
  char *v90; // r9
  char *v91; // r8
  const char **v92; // r5
  int v93; // t1
  int v94; // r0
  _DWORD *v95; // r0
  int v96; // r6
  int v97; // t1
  char *v98; // r0
  char *v99; // r10
  char *v100; // r6
  int v101; // r8
  unsigned __int64 v102; // kr00_8
  int v103; // t1
  unsigned int v104; // r7
  unsigned int v105; // r11
  _DWORD *v106; // r0
  __int64 v107; // r0
  _DWORD *v108; // r0
  char *v109; // r7
  int v110; // r6
  char *v111; // r9
  char *v112; // r8
  char *v113; // r5
  int v114; // t1
  double *v115; // r0
  int v116; // r6
  int v117; // t1
  char *v118; // r0
  char *v119; // r10
  char *v120; // r7
  int v121; // r5
  int v122; // t1
  int v123; // r0
  _DWORD *v124; // r0
  char *v125; // r0
  char *v126; // r0
  _DWORD *v127; // r0
  char *v128; // r6
  char *v129; // r4
  char *v130; // r7
  int v131; // t1
  double *v132; // r0
  double v133; // d13
  double *v134; // r0
  double v135; // [sp-126Ch] [bp-126Ch]
  char *v136; // [sp-126Ch] [bp-126Ch]
  int v137; // [sp-1264h] [bp-1264h]
  int *v138; // [sp-1260h] [bp-1260h]
  char *v139; // [sp-1250h] [bp-1250h]
  _DWORD *v140; // [sp-124Ch] [bp-124Ch]
  int v141; // [sp-1244h] [bp-1244h]
  _DWORD *v142; // [sp-1240h] [bp-1240h]
  __int64 v143; // [sp-123Ch] [bp-123Ch]
  int v144; // [sp-122Ch] [bp-122Ch]
  int v145; // [sp-1228h] [bp-1228h] BYREF
  int v146; // [sp-1224h] [bp-1224h] BYREF
  int v147; // [sp-1220h] [bp-1220h] BYREF
  double v148; // [sp-121Ch] [bp-121Ch] BYREF
  char v149; // [sp-1210h] [bp-1210h] BYREF
  char v150[16]; // [sp-1204h] [bp-1204h] BYREF
  char v151[32]; // [sp-11F4h] [bp-11F4h] BYREF
  char v152; // [sp-11D4h] [bp-11D4h] BYREF
  char v153; // [sp-11B4h] [bp-11B4h] BYREF
  char v154; // [sp-1194h] [bp-1194h] BYREF
  char v155; // [sp-1174h] [bp-1174h] BYREF
  _DWORD v156[8]; // [sp-1154h] [bp-1154h] BYREF
  char v157[264]; // [sp-1134h] [bp-1134h] BYREF
  int v158; // [sp-102Ch] [bp-102Ch]
  float v159; // [sp-1024h] [bp-1024h]
  double v160; // [sp-1014h] [bp-1014h]

  v18 = v160;
  all_created_runtime = (char *)get_all_created_runtime(a1);
  v141 = frontend_runtime_instance();
  if ( v144 > 0 )
  {
    v138 = (int *)malloc(216 * v144);
    v128 = (char *)v138;
    v139 = (char *)malloc(4 * v144);
    v129 = all_created_runtime - 4;
    v130 = v139 - 4;
    do
    {
      v131 = *((_DWORD *)v129 + 1);
      v129 += 4;
      read_status_from_monitor(v128, v131);
      ++v13;
      v128 += 216;
      *((_DWORD *)v130 + 1) = *(_DWORD *)(*(_DWORD *)v129 + 260) + 1;
      v130 += 4;
    }
    while ( v144 > (int)v13 );
    v20 = (int)v13;
  }
  else
  {
    v20 = 0;
    v139 = v13;
    v138 = (int *)v13;
  }
  v21 = json_object();
  v22 = json_integer(v20);
  json_object_set_new(v21, "STATS", v22);
  snprintf(v150, 0x10u, "BTM_SOC%d", v13);
  v23 = BUFX_strdup(v150);
  json_object_set_new(v21, "ID", v23);
  v24 = v17;
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v141 + 72) + 16), &v152);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v141 + 72) + 16), &v153);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v141 + 72) + 16), &v154);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v141 + 72) + 16), &v155);
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v141 + 72) + 16), &v148, &v149);
  v25 = v159;
  get_miner_elapsed_time();
  v26 = v18;
  v27 = v16 * v18;
  v28 = v15 * v18;
  if ( opt_algo == 7 )
  {
    v29 = 1.0;
  }
  else
  {
    sub_296B4();
    v26 = v18;
    v29 = *(float *)&v18;
  }
  v135 = v26;
  get_total_accept_rate();
  v30 = json_integer((__int64)v135);
  json_object_set_new(v21, "Elapsed", v30);
  if ( opt_algo == 6 )
  {
    sub_146C5C((__int64)(v25 * v18 * 100.0));
    v132 = json_real();
    json_object_set_new(v21, "GHS 5s", v132);
    if ( *(float *)&v18 >= v29 )
      v133 = *(float *)&v18;
    else
      v133 = v29;
    sub_146C5C((__int64)(v133 * v28 * 100.0));
    v134 = json_real();
    json_object_set_new(v21, "GHS av", v134);
    sub_146C5C((__int64)(v133 * v27 * 100.0));
  }
  else
  {
    sub_146C5C((__int64)(v24 * v18 * 100.0));
    v31 = json_real();
    json_object_set_new(v21, "GHS 5s", v31);
    sub_146C5C((__int64)(v28 * 100.0));
    v32 = json_real();
    json_object_set_new(v21, "GHS av", v32);
    sub_146C5C((__int64)(v27 * 100.0));
  }
  v33 = json_real();
  json_object_set_new(v21, "rate_30m", v33);
  sub_146C5C((__int64)(v148 * 100.0));
  v34 = json_real();
  json_object_set_new(v21, "total_rateideal", v34);
  v35 = json_integer(opt_bitmain_work_mode);
  json_object_set_new(v21, "Mode", v35);
  v36 = json_integer(v144);
  json_object_set_new(v21, "miner_count", v36);
  if ( v144 <= 0 )
  {
    v38 = 0x7FFFFFFF;
  }
  else
  {
    v37 = v138;
    LODWORD(v38) = 0x7FFFFFFF;
    do
    {
      v39 = v37[18];
      v37 += 54;
      if ( (int)v38 >= v39 )
        LODWORD(v38) = v39;
    }
    while ( &v138[54 * v144] != v37 );
    v38 = (int)v38;
  }
  v40 = json_integer(v38);
  json_object_set_new(v21, "frequency", v40);
  v41 = json_integer(v14);
  json_object_set_new(v21, "fan_num", v41);
  if ( v14 > 0 )
  {
    v42 = 0;
    v43 = v158 - 4;
    do
    {
      ++v42;
      memset(v151, 0, sizeof(v151));
      snprintf(v151, 0x20u, "fan%d", v42);
      v44 = *(_DWORD *)(v43 + 4);
      v43 += 4;
      v45 = json_integer(v44);
      json_object_set_new(v21, v151, v45);
    }
    while ( v42 != v14 );
  }
  if ( v144 <= 0 )
  {
    v143 = -100;
    v50 = 0;
  }
  else
  {
    v46 = 0;
    v47 = (char *)v138;
    v48 = -100;
    do
    {
      v49 = *((_DWORD *)v47 + 4);
      v47 += 216;
      if ( v48 < v49 )
        v48 = v49;
      v46 += *((_DWORD *)v47 - 48) + *((_DWORD *)v47 - 47);
    }
    while ( v47 != (char *)&v138[54 * v144] );
    v50 = v46;
    v143 = v48;
  }
  v51 = json_integer(v50);
  json_object_set_new(v21, "temp_num", v51);
  if ( v144 > 0 )
  {
    v52 = 0;
    v53 = (char *)v138;
    v136 = v139 - 4;
    do
    {
      v54 = *((_DWORD *)v53 + 6);
      v55 = *(int **)v53;
      v145 = 0;
      ++v52;
      v146 = 0;
      v147 = 0;
      v53 += 216;
      v156[0] = 0;
      find_min_and_max_int(v55, v54, &v145, &v146);
      v56 = *((_DWORD *)v53 - 47);
      find_min_and_max_int(*((int **)v53 - 52), v56, &v147, v156);
      v57 = v156[0];
      v58 = *((_DWORD *)v136 + 1);
      if ( v156[0] < v146 )
        v57 = v146;
      v59 = *((_DWORD *)v136 + 1);
      v136 += 4;
      v137 = v57;
      sprintf(v151, "temp%d", v59);
      v60 = json_integer(v137);
      json_object_set_new(v21, v151, v60);
      v61 = (int *)*((_DWORD *)v53 - 53);
      v156[0] = 0;
      v147 = 0;
      v146 = 0;
      v145 = 0;
      find_min_and_max_int(v61, v54, &v145, &v146);
      find_min_and_max_int(*((int **)v53 - 51), v56, &v147, v156);
      v62 = v58;
      v63 = v146;
      if ( v156[0] >= v146 )
        v63 = v156[0];
      sprintf(v151, "temp2_%d", v62);
      v64 = json_integer(v63);
      json_object_set_new(v21, v151, v64);
    }
    while ( v144 > v52 );
    v65 = (size_t *)v138;
    v66 = v139 - 4;
    v67 = 0;
    do
    {
      ++v67;
      memset(v151, 0, sizeof(v151));
      memset(v157, 0, 0x100u);
      v68 = *((_DWORD *)v66 + 1);
      v66 += 4;
      snprintf(v151, 0x20u, "temp_in_pcb_%d", v68);
      v69 = v65[6];
      v70 = *v65;
      v65 += 54;
      sub_26744(v70, v69, v157);
      v71 = BUFX_strdup(v157);
      json_object_set_new(v21, v151, v71);
    }
    while ( v144 > v67 );
    v72 = v139 - 4;
    v73 = (char *)v138;
    v74 = 0;
    do
    {
      ++v74;
      memset(v151, 0, sizeof(v151));
      v73 += 216;
      memset(v157, 0, 0x100u);
      v75 = *((_DWORD *)v72 + 1);
      v72 += 4;
      snprintf(v151, 0x20u, "temp_out_pcb_%d", v75);
      sub_26744(*((_DWORD *)v73 - 52), *((_DWORD *)v73 - 47), v157);
      v76 = BUFX_strdup(v157);
      json_object_set_new(v21, v151, v76);
    }
    while ( v144 > v74 );
    v77 = v139 - 4;
    v78 = (char *)v138;
    v79 = 0;
    do
    {
      ++v79;
      memset(v151, 0, sizeof(v151));
      v78 += 216;
      memset(v157, 0, 0x100u);
      v80 = *((_DWORD *)v77 + 1);
      v77 += 4;
      snprintf(v151, 0x20u, "temp_in_chip_%d", v80);
      sub_26744(*((_DWORD *)v78 - 53), *((_DWORD *)v78 - 48), v157);
      v81 = BUFX_strdup(v157);
      json_object_set_new(v21, v151, v81);
    }
    while ( v144 > v79 );
    v82 = v139 - 4;
    v83 = (char *)v138;
    v84 = 0;
    do
    {
      ++v84;
      memset(v151, 0, sizeof(v151));
      v83 += 216;
      memset(v157, 0, 0x100u);
      v85 = *((_DWORD *)v82 + 1);
      v82 += 4;
      snprintf(v151, 0x20u, "temp_out_chip_%d", v85);
      sub_26744(*((_DWORD *)v83 - 52), *((_DWORD *)v83 - 47), v157);
      v86 = BUFX_strdup(v157);
      json_object_set_new(v21, v151, v86);
    }
    while ( v144 > v84 );
  }
  v87 = json_integer(v143);
  json_object_set_new(v21, "temp_max", v87);
  if ( v144 <= 0 )
  {
    v102 = 0;
  }
  else
  {
    v88 = (char *)v138;
    v89 = 0;
    v90 = v139 - 4;
    v91 = v139 - 4;
    v92 = (const char **)v138;
    do
    {
      ++v89;
      memset(v151, 0, sizeof(v151));
      v93 = *((_DWORD *)v90 + 1);
      v90 += 4;
      snprintf(v151, 0x20u, "chain_acn%d", v93);
      v94 = *((_DWORD *)v88 + 16);
      v88 += 216;
      v95 = json_integer(v94);
      json_object_set_new(v21, v151, v95);
    }
    while ( v144 > v89 );
    v96 = 0;
    do
    {
      v97 = *((_DWORD *)v91 + 1);
      v91 += 4;
      ++v96;
      v92 += 54;
      sprintf((char *)v156, "chain_acs%d", v97);
      memset(v151, 0, sizeof(v151));
      memset(v157, 0, 0x100u);
      snprintf(v151, 0x20u, "chain_acs%d", v97);
      snprintf(v157, 0x100u, "%s", *(v92 - 37));
      v98 = BUFX_strdup(v157);
      json_object_set_new(v21, v151, v98);
    }
    while ( v144 > v96 );
    v99 = v139 - 4;
    v100 = (char *)v138;
    v101 = 0;
    v102 = 0;
    do
    {
      ++v101;
      memset(v151, 0, sizeof(v151));
      v103 = *((_DWORD *)v99 + 1);
      v99 += 4;
      snprintf(v151, 0x20u, "chain_hw%d", v103);
      v104 = *((_DWORD *)v100 + 20);
      v100 += 216;
      v105 = *((_DWORD *)v100 - 33);
      v106 = json_integer(__SPAIR64__(v105, v104));
      json_object_set_new(v21, v151, v106);
      v102 += __PAIR64__(v105, v104);
    }
    while ( v144 > v101 );
  }
  v107 = v102;
  if ( opt_algo == 9 )
    LODWORD(v107) = sub_146F74(v102, 0x3E8u);
  v108 = json_integer(v107);
  json_object_set_new(v21, "no_matching_work", v108);
  if ( v144 > 0 )
  {
    v109 = (char *)v138;
    v110 = 0;
    v111 = v139 - 4;
    v112 = v139 - 4;
    v113 = (char *)v138;
    do
    {
      ++v110;
      memset(v151, 0, sizeof(v151));
      v114 = *((_DWORD *)v111 + 1);
      v111 += 4;
      snprintf(v151, 0x20u, "chain_rate%d", v114);
      v109 += 216;
      v115 = json_real();
      json_object_set_new(v21, v151, v115);
    }
    while ( v144 > v110 );
    v116 = 0;
    do
    {
      ++v116;
      v113 += 216;
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v141 + 72) + 16), (char *)v156);
      v117 = *((_DWORD *)v112 + 1);
      v112 += 4;
      snprintf(v151, 0x20u, "CHAIN AVG HASHRATE%d", v117);
      v118 = BUFX_strdup((char *)v156);
      json_object_set_new(v21, v151, v118);
    }
    while ( v144 > v116 );
    v119 = v139 - 4;
    v120 = (char *)v138;
    v121 = 0;
    do
    {
      ++v121;
      memset(v151, 0, sizeof(v151));
      v122 = *((_DWORD *)v119 + 1);
      v119 += 4;
      snprintf(v151, 0x20u, "freq%d", v122);
      v123 = *((_DWORD *)v120 + 18);
      v120 += 216;
      v124 = json_integer(v123);
      json_object_set_new(v21, v151, v124);
    }
    while ( v144 > v121 );
  }
  v125 = BUFX_strdup(g_miner_version);
  json_object_set_new(v21, "miner_version", v125);
  v126 = BUFX_strdup(0);
  json_object_set_new(v21, "miner_id", v126);
  json_array_append_new(v142, v21);
  json_object_set_new(v140, "STATS", v142);
  v127 = json_integer(1);
  json_object_set_new(v140, "id", v127);
  if ( v144 > 0 )
  {
    free(v139);
    free(v138);
  }
  __asm { POP             {R4-R11,PC} }
}
