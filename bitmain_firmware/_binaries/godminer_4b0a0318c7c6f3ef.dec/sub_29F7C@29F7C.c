void __fastcall sub_29F7C(
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
  _BOOL4 v14; // r5
  _DWORD *v15; // r4
  char *v16; // r0
  char *v17; // r0
  char *v18; // r0
  char *v19; // r0
  int v20; // r8
  float v21; // s18
  float v22; // s16
  double v23; // d10
  _DWORD *v24; // r4
  _DWORD *v25; // r0
  char *v26; // r0
  double v27; // d0
  float v28; // s21
  _DWORD *v29; // r0
  double v30; // d9
  double v31; // d8
  bool v32; // cc
  double *v33; // r0
  double *v34; // r0
  double *v35; // r0
  double *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  int v39; // r3
  int v40; // r0
  int v41; // r2
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v48; // [sp+34h] [bp-1218h]
  _DWORD *v49; // [sp+38h] [bp-1214h]
  int v50[4]; // [sp+50h] [bp-11FCh] BYREF
  double v51; // [sp+60h] [bp-11ECh] BYREF
  char v52[12]; // [sp+6Ch] [bp-11E0h] BYREF
  char v53[4]; // [sp+78h] [bp-11D4h] BYREF
  int v54; // [sp+7Ch] [bp-11D0h]
  int v55; // [sp+80h] [bp-11CCh]
  int v56; // [sp+84h] [bp-11C8h]
  char s[32]; // [sp+88h] [bp-11C4h] BYREF
  char v58[32]; // [sp+A8h] [bp-11A4h] BYREF
  char v59[32]; // [sp+C8h] [bp-1184h] BYREF
  char v60[32]; // [sp+E8h] [bp-1164h] BYREF
  char v61[320]; // [sp+108h] [bp-1144h] BYREF
  char v62[4]; // [sp+248h] [bp-1004h] BYREF
  int v63; // [sp+24Ch] [bp-1000h]
  float v64; // [sp+258h] [bp-FF4h]
  float v65; // [sp+25Ch] [bp-FF0h]
  float v66; // [sp+260h] [bp-FECh]
  double v67; // [sp+268h] [bp-FE4h]

  v54 = 0;
  v55 = 0;
  v56 = 0;
  v14 = a1 == 0;
  *(_DWORD *)v53 = 0;
  memset(s, 0, sizeof(s));
  memset(&v61[64], 0, 0x100u);
  v50[0] = 0;
  if ( !a2 )
    v14 = 1;
  if ( v14 )
  {
    V_LOCK();
    logfmt_raw(v62, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats_old",
      13,
      1431,
      100,
      v62);
    JUMPOUT(0x2AC98);
  }
  sub_25FCC(a1, 1, 70, *(const char **)(a2 + 8));
  v49 = json_array();
  v15 = json_object();
  v16 = BUFX_strdup("2.12");
  json_object_set_new(v15, "BMMiner", v16);
  v17 = BUFX_strdup(g_miner_version);
  json_object_set_new(v15, "Miner", v17);
  v18 = BUFX_strdup(g_miner_compiletime);
  json_object_set_new(v15, "CompileTime", v18);
  v19 = BUFX_strdup(g_miner_type);
  json_object_set_new(v15, "Type", v19);
  json_array_append_new(v49, v15);
  read_system_status_from_monitor((int)v62);
  v20 = v63;
  v21 = v65;
  v22 = v66;
  v23 = v67;
  get_all_created_runtime(v50);
  v48 = frontend_runtime_instance();
  if ( v50[0] > 0 )
    JUMPOUT(0x2ACA8);
  v24 = json_object();
  v25 = json_integer(0);
  json_object_set_new(v24, "STATS", v25);
  snprintf(v53, 0x10u, "BTM_SOC%d", 0);
  v26 = BUFX_strdup(v53);
  json_object_set_new(v24, "ID", v26);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v48 + 72) + 16), v58);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v48 + 72) + 16), v59);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v48 + 72) + 16), v60);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v48 + 72) + 16), v61);
  v27 = v23;
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v48 + 72) + 16), &v51, v52);
  v28 = v64;
  get_miner_elapsed_time();
  get_total_nonce_rate();
  get_total_accept_rate();
  v29 = json_integer((__int64)v27);
  json_object_set_new(v24, "Elapsed", v29);
  v30 = v21 * v27;
  v31 = v22 * v27;
  v32 = (unsigned int)opt_algo > 0xA;
  if ( opt_algo != 10 )
    v32 = (unsigned int)(opt_algo - 6) > 1;
  if ( v32 )
    JUMPOUT(0x2AD1C);
  sub_1457AC((__int64)(v28 * v27 * 100.0));
  v33 = json_real();
  json_object_set_new(v24, "GHS 5s", v33);
  sub_1457AC((__int64)(*(float *)&v27 * v31 * 100.0));
  v34 = json_real();
  json_object_set_new(v24, "GHS av", v34);
  sub_1457AC((__int64)(*(float *)&v27 * v30 * 100.0));
  v35 = json_real();
  json_object_set_new(v24, "rate_30m", v35);
  sub_1457AC((__int64)(v51 * 100.0));
  v36 = json_real();
  json_object_set_new(v24, "total_rateideal", v36);
  v37 = json_integer(opt_bitmain_work_mode);
  json_object_set_new(v24, "Mode", v37);
  v38 = json_integer(v50[0]);
  json_object_set_new(v24, "miner_count", v38);
  if ( v50[0] <= 0 )
    JUMPOUT(0x2AD58);
  v39 = v14;
  v40 = 0x7FFFFFFF;
  do
  {
    v41 = *(_DWORD *)(v39 + 72);
    v39 += 216;
    if ( v40 >= v41 )
      v40 = v41;
  }
  while ( v14 + 216 * v50[0] != v39 );
  v42 = json_integer(v40);
  json_object_set_new(v24, "frequency", v42);
  v43 = json_integer(v20);
  sub_2A3C8(v43, v44, v45, v46, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
