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
  _DWORD *v13; // r4
  int v14; // r8
  int v15; // r5
  int v16; // r6
  int v17; // t1
  _DWORD *v18; // r0
  unsigned __int8 v19; // r0
  size_t *v20; // r2
  int v21; // r1
  int v22; // lr
  unsigned int v23; // r2
  _DWORD *v24; // r0
  int v25; // r10
  size_t *v26; // r5
  int v27; // r11
  int *v28; // r0
  int v29; // r9
  int v30; // r3
  int v31; // r8
  int v32; // r2
  _DWORD *v33; // r0
  int *v34; // r0
  int v35; // r2
  int v36; // r8
  _DWORD *v37; // r0
  size_t *v38; // r8
  char *v39; // r7
  int v40; // r5
  int v41; // t1
  int v42; // r1
  size_t v43; // t1
  char *v44; // r0
  char *v45; // r7
  size_t *v46; // r5
  int v47; // r6
  int v48; // t1
  char *v49; // r0
  char *v50; // r7
  size_t *v51; // r5
  int v52; // r6
  int v53; // t1
  char *v54; // r0
  char *v55; // r10
  size_t *v56; // r5
  int v57; // r6
  int v58; // t1
  char *v59; // r0
  _DWORD *v60; // r0
  size_t *v61; // r7
  int v62; // r6
  char *v63; // r9
  char *v64; // r8
  size_t *v65; // r5
  int v66; // t1
  signed int v67; // r0
  _DWORD *v68; // r0
  int v69; // r6
  int v70; // t1
  char *v71; // r0
  char *v72; // r10
  size_t *v73; // r6
  int v74; // r8
  unsigned __int64 v75; // kr00_8
  int v76; // t1
  size_t v77; // r7
  unsigned int v78; // r11
  _DWORD *v79; // r0
  __int64 v80; // r0
  _DWORD *v81; // r0
  size_t *v82; // r7
  int v83; // r6
  char *v84; // r9
  char *v85; // r8
  size_t *v86; // r5
  int v87; // t1
  double *v88; // r0
  int v89; // r6
  int v90; // t1
  char *v91; // r0
  char *v92; // r10
  size_t *v93; // r7
  int v94; // r5
  int v95; // t1
  signed int v96; // r0
  _DWORD *v97; // r0
  char *v98; // r0
  char *v99; // r0
  _DWORD *v100; // r0
  char *v101; // [sp-126Ch] [bp-126Ch]
  int v102; // [sp-1264h] [bp-1264h]
  size_t *v103; // [sp-1260h] [bp-1260h]
  char *v104; // [sp-1250h] [bp-1250h]
  _DWORD *v105; // [sp-124Ch] [bp-124Ch]
  int v106; // [sp-1248h] [bp-1248h]
  _DWORD *v107; // [sp-1244h] [bp-1244h]
  _DWORD *v108; // [sp-1240h] [bp-1240h]
  __int64 v109; // [sp-123Ch] [bp-123Ch]
  int v110; // [sp-122Ch] [bp-122Ch]
  int v111; // [sp-1228h] [bp-1228h] BYREF
  int v112; // [sp-1224h] [bp-1224h] BYREF
  _DWORD v113[11]; // [sp-1220h] [bp-1220h] BYREF
  char v114[160]; // [sp-11F4h] [bp-11F4h] BYREF
  _DWORD v115[8]; // [sp-1154h] [bp-1154h] BYREF
  char v116[264]; // [sp-1134h] [bp-1134h] BYREF
  int v117; // [sp-102Ch] [bp-102Ch]

  json_object_set_new(v13, "fan_num", a1);
  if ( v14 > 0 )
  {
    v15 = 0;
    v16 = v117 - 4;
    do
    {
      ++v15;
      memset(v114, 0, 0x20u);
      snprintf(v114, 0x20u, "fan%d", v15);
      v17 = *(_DWORD *)(v16 + 4);
      v16 += 4;
      v18 = json_integer(v17);
      json_object_set_new(v13, v114, v18);
    }
    while ( v15 != v14 );
  }
  if ( v110 <= 0 )
  {
    v109 = -100;
    v23 = 0;
  }
  else
  {
    v19 = 0;
    v20 = v103;
    v21 = -100;
    do
    {
      v22 = v20[4];
      v20 += 54;
      if ( v21 < v22 )
        v21 = v22;
      v19 += *(v20 - 48) + *(v20 - 47);
    }
    while ( v20 != &v103[54 * v110] );
    v23 = v19;
    v109 = v21;
  }
  v24 = json_integer(v23);
  json_object_set_new(v13, "temp_num", v24);
  if ( v110 > 0 )
  {
    v25 = 0;
    v26 = v103;
    v101 = v104 - 4;
    do
    {
      v27 = v26[6];
      v28 = (int *)*v26;
      v111 = 0;
      ++v25;
      v112 = 0;
      v113[0] = 0;
      v26 += 54;
      v115[0] = 0;
      find_min_and_max_int(v28, v27, &v111, &v112);
      v29 = *(v26 - 47);
      find_min_and_max_int((int *)*(v26 - 52), v29, v113, v115);
      v30 = v115[0];
      v31 = *((_DWORD *)v101 + 1);
      if ( v115[0] < v112 )
        v30 = v112;
      v32 = *((_DWORD *)v101 + 1);
      v101 += 4;
      v102 = v30;
      sprintf(v114, "temp%d", v32);
      v33 = json_integer(v102);
      json_object_set_new(v13, v114, v33);
      v34 = (int *)*(v26 - 53);
      v115[0] = 0;
      v113[0] = 0;
      v112 = 0;
      v111 = 0;
      find_min_and_max_int(v34, v27, &v111, &v112);
      find_min_and_max_int((int *)*(v26 - 51), v29, v113, v115);
      v35 = v31;
      v36 = v112;
      if ( v115[0] >= v112 )
        v36 = v115[0];
      sprintf(v114, "temp2_%d", v35);
      v37 = json_integer(v36);
      json_object_set_new(v13, v114, v37);
    }
    while ( v110 > v25 );
    v38 = v103;
    v39 = v104 - 4;
    v40 = 0;
    do
    {
      ++v40;
      memset(v114, 0, 0x20u);
      memset(v116, 0, 0x100u);
      v41 = *((_DWORD *)v39 + 1);
      v39 += 4;
      snprintf(v114, 0x20u, "temp_in_pcb_%d", v41);
      v42 = v38[6];
      v43 = *v38;
      v38 += 54;
      sub_2647C(v43, v42, v116);
      v44 = BUFX_strdup(v116);
      json_object_set_new(v13, v114, v44);
    }
    while ( v110 > v40 );
    v45 = v104 - 4;
    v46 = v103;
    v47 = 0;
    do
    {
      ++v47;
      memset(v114, 0, 0x20u);
      v46 += 54;
      memset(v116, 0, 0x100u);
      v48 = *((_DWORD *)v45 + 1);
      v45 += 4;
      snprintf(v114, 0x20u, "temp_out_pcb_%d", v48);
      sub_2647C(*(v46 - 52), *(v46 - 47), v116);
      v49 = BUFX_strdup(v116);
      json_object_set_new(v13, v114, v49);
    }
    while ( v110 > v47 );
    v50 = v104 - 4;
    v51 = v103;
    v52 = 0;
    do
    {
      ++v52;
      memset(v114, 0, 0x20u);
      v51 += 54;
      memset(v116, 0, 0x100u);
      v53 = *((_DWORD *)v50 + 1);
      v50 += 4;
      snprintf(v114, 0x20u, "temp_in_chip_%d", v53);
      sub_2647C(*(v51 - 53), *(v51 - 48), v116);
      v54 = BUFX_strdup(v116);
      json_object_set_new(v13, v114, v54);
    }
    while ( v110 > v52 );
    v55 = v104 - 4;
    v56 = v103;
    v57 = 0;
    do
    {
      ++v57;
      memset(v114, 0, 0x20u);
      v56 += 54;
      memset(v116, 0, 0x100u);
      v58 = *((_DWORD *)v55 + 1);
      v55 += 4;
      snprintf(v114, 0x20u, "temp_out_chip_%d", v58);
      sub_2647C(*(v56 - 52), *(v56 - 47), v116);
      v59 = BUFX_strdup(v116);
      json_object_set_new(v13, v114, v59);
    }
    while ( v110 > v57 );
  }
  v60 = json_integer(v109);
  json_object_set_new(v13, "temp_max", v60);
  if ( v110 <= 0 )
  {
    v75 = 0;
  }
  else
  {
    v61 = v103;
    v62 = 0;
    v63 = v104 - 4;
    v64 = v104 - 4;
    v65 = v103;
    do
    {
      ++v62;
      memset(v114, 0, 0x20u);
      v66 = *((_DWORD *)v63 + 1);
      v63 += 4;
      snprintf(v114, 0x20u, "chain_acn%d", v66);
      v67 = v61[16];
      v61 += 54;
      v68 = json_integer(v67);
      json_object_set_new(v13, v114, v68);
    }
    while ( v110 > v62 );
    v69 = 0;
    do
    {
      v70 = *((_DWORD *)v64 + 1);
      v64 += 4;
      ++v69;
      v65 += 54;
      sprintf((char *)v115, "chain_acs%d", v70);
      memset(v114, 0, 0x20u);
      memset(v116, 0, 0x100u);
      snprintf(v114, 0x20u, "chain_acs%d", v70);
      snprintf(v116, 0x100u, "%s", (const char *)*(v65 - 37));
      v71 = BUFX_strdup(v116);
      json_object_set_new(v13, v114, v71);
    }
    while ( v110 > v69 );
    v72 = v104 - 4;
    v73 = v103;
    v74 = 0;
    v75 = 0;
    do
    {
      ++v74;
      memset(v114, 0, 0x20u);
      v76 = *((_DWORD *)v72 + 1);
      v72 += 4;
      snprintf(v114, 0x20u, "chain_hw%d", v76);
      v77 = v73[20];
      v73 += 54;
      v78 = *(v73 - 33);
      v79 = json_integer(__SPAIR64__(v78, v77));
      json_object_set_new(v13, v114, v79);
      v75 += __PAIR64__(v78, v77);
    }
    while ( v110 > v74 );
  }
  v80 = v75;
  if ( *v108 == 9 )
    LODWORD(v80) = sub_145AC4(v75, 0x3E8u);
  v81 = json_integer(v80);
  json_object_set_new(v13, "no_matching_work", v81);
  if ( v110 > 0 )
  {
    v82 = v103;
    v83 = 0;
    v84 = v104 - 4;
    v85 = v104 - 4;
    v86 = v103;
    do
    {
      ++v83;
      memset(v114, 0, 0x20u);
      v87 = *((_DWORD *)v84 + 1);
      v84 += 4;
      snprintf(v114, 0x20u, "chain_rate%d", v87);
      v82 += 54;
      v88 = json_real();
      json_object_set_new(v13, v114, v88);
    }
    while ( v110 > v83 );
    v89 = 0;
    do
    {
      ++v89;
      v86 += 54;
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v106 + 72) + 16), (char *)v115);
      v90 = *((_DWORD *)v85 + 1);
      v85 += 4;
      snprintf(v114, 0x20u, "CHAIN AVG HASHRATE%d", v90);
      v91 = BUFX_strdup((char *)v115);
      json_object_set_new(v13, v114, v91);
    }
    while ( v110 > v89 );
    v92 = v104 - 4;
    v93 = v103;
    v94 = 0;
    do
    {
      ++v94;
      memset(v114, 0, 0x20u);
      v95 = *((_DWORD *)v92 + 1);
      v92 += 4;
      snprintf(v114, 0x20u, "freq%d", v95);
      v96 = v93[18];
      v93 += 54;
      v97 = json_integer(v96);
      json_object_set_new(v13, v114, v97);
    }
    while ( v110 > v94 );
  }
  v98 = BUFX_strdup(g_miner_version);
  json_object_set_new(v13, "miner_version", v98);
  v99 = BUFX_strdup(0);
  json_object_set_new(v13, "miner_id", v99);
  json_array_append_new(v107, v13);
  json_object_set_new(v105, "STATS", v107);
  v100 = json_integer(1);
  json_object_set_new(v105, "id", v100);
  if ( v110 > 0 )
  {
    free(v104);
    free(v103);
  }
  __asm { POP             {R4-R11,PC} }
}
