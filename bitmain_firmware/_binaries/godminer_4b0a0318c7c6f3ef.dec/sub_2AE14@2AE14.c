int __fastcall sub_2AE14(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  _DWORD *v7; // r4
  float v8; // s18
  double v9; // d11
  double v10; // d13
  float v11; // s20
  float v12; // s16
  double v13; // d9
  double v14; // d8
  double v15; // r0
  double v16; // d14
  double v17; // d8
  double v18; // d14
  _DWORD *v19; // r0
  bool v20; // cc
  double *v21; // r0
  double *v22; // r0
  double *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  double *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  double *v36; // r0
  double *v37; // r0
  double *v38; // r0
  double *v39; // r0
  double *v40; // r0
  _DWORD *v41; // r0
  double *v42; // r0
  double v43; // r0
  double *v44; // r0
  unsigned int v45; // r3
  double v46; // d7
  double v47; // d6
  bool v48; // cc
  double v49; // d7
  double *v50; // r0
  double v51; // d7
  double *v52; // r0
  _DWORD *v53; // r0
  bool v54; // cc
  char *v55; // r0
  char *v56; // r0
  bool v57; // cc
  char *v58; // r0
  char *v59; // r0
  _DWORD *v60; // r0
  int v62; // r1
  double v63; // d10
  double v64; // r0
  double *v65; // r0
  double *v66; // r0
  __int64 v67; // [sp+10h] [bp-10E4h]
  __int64 v68; // [sp+18h] [bp-10DCh]
  _DWORD *v69; // [sp+20h] [bp-10D4h]
  double v70; // [sp+28h] [bp-10CCh]
  int v71; // [sp+34h] [bp-10C0h] BYREF
  double v72; // [sp+38h] [bp-10BCh] BYREF
  char v73[12]; // [sp+44h] [bp-10B0h] BYREF
  char v74[32]; // [sp+50h] [bp-10A4h] BYREF
  char v75[32]; // [sp+70h] [bp-1084h] BYREF
  char v76[32]; // [sp+90h] [bp-1064h] BYREF
  char v77[32]; // [sp+B0h] [bp-1044h] BYREF
  char v78[32]; // [sp+D0h] [bp-1024h] BYREF
  char v79[12]; // [sp+F0h] [bp-1004h] BYREF
  float v80; // [sp+FCh] [bp-FF8h]
  float v81; // [sp+100h] [bp-FF4h]
  float v82; // [sp+104h] [bp-FF0h]
  float v83; // [sp+108h] [bp-FECh]
  double v84; // [sp+110h] [bp-FE4h]
  __int64 v85; // [sp+120h] [bp-FD4h]

  v71 = 0;
  get_all_created_runtime(&v71);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v79, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary_old",
      15,
      1167,
      100,
      v79);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    sub_25FCC(a1, 1, 11, *(const char **)(a2 + 8));
    v69 = json_array();
    v7 = json_object();
    read_system_status_from_monitor((int)v79);
    v8 = v81;
    v9 = v84;
    v10 = v80;
    v11 = v82;
    v12 = v83;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v74);
    v13 = v8;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v75);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v76);
    v14 = v12;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v77);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v78);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), &v72, v73);
    v68 = v85;
    get_miner_elapsed_time();
    LODWORD(v15) = sub_1457AC(total_accepted);
    v70 = v11 * v9;
    v16 = v15;
    if ( v9 != 0.0 )
      v16 = v15 / v9;
    v17 = v14 * v9;
    v18 = v16 * 60.0;
    get_total_nonce_rate();
    get_total_accept_rate();
    v19 = json_integer((__int64)v9);
    json_object_set_new(v7, "Elapsed", v19);
    v20 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v20 = (unsigned int)(opt_algo - 6) > 1;
    if ( v20 )
    {
      sub_1457AC((__int64)(v10 * v9 * 100.0));
      v65 = json_real();
      json_object_set_new(v7, "GHS 5s", v65);
      sub_1457AC((__int64)(v17 * 100.0));
      v66 = json_real();
      json_object_set_new(v7, "GHS av", v66);
      sub_1457AC((__int64)(v70 * 100.0));
    }
    else
    {
      sub_1457AC((__int64)(v13 * v9 * 100.0));
      v21 = json_real();
      json_object_set_new(v7, "GHS 5s", v21);
      sub_1457AC((__int64)(*(float *)&v9 * v17 * 100.0));
      v22 = json_real();
      json_object_set_new(v7, "GHS av", v22);
      sub_1457AC((__int64)(*(float *)&v9 * v70 * 100.0));
    }
    v23 = json_real();
    json_object_set_new(v7, "GHS 30m", v23);
    v24 = json_integer((unsigned int)dword_195878);
    json_object_set_new(v7, "Found Blocks", v24);
    v25 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v7, "Getwork", v25);
    v26 = json_integer(total_accepted);
    json_object_set_new(v7, "Accepted", v26);
    v27 = json_integer(*(__int64 *)&total_rejected);
    json_object_set_new(v7, "Rejected", v27);
    v28 = json_integer(v68);
    json_object_set_new(v7, "Hardware Errors", v28);
    sub_1457AC((__int64)(v18 * 100.0));
    v29 = json_real();
    json_object_set_new(v7, "Utility", v29);
    v30 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v7, "Discarded", v30);
    v31 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v7, "Stale", v31);
    v32 = json_integer((unsigned int)total_go);
    json_object_set_new(v7, "Get Failures", v32);
    v33 = json_integer((unsigned int)local_work);
    json_object_set_new(v7, "Local Work", v33);
    v34 = json_integer((unsigned int)total_ro);
    json_object_set_new(v7, "Remote Failures", v34);
    v35 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v7, "Network Blocks", v35);
    sub_1457AC((__int64)(dbl_195880 * 100.0));
    v36 = json_real();
    json_object_set_new(v7, "Total MH", v36);
    v37 = json_real();
    json_object_set_new(v7, "Work Utility", v37);
    sub_1457AC((__int64)(total_diff_accepted * 100.0));
    v38 = json_real();
    json_object_set_new(v7, "Difficulty Accepted", v38);
    sub_1457AC((__int64)(total_diff_rejected * 100.0));
    v39 = json_real();
    json_object_set_new(v7, "Difficulty Rejected", v39);
    sub_1457AC((__int64)(total_diff_stale * 100.0));
    v40 = json_real();
    json_object_set_new(v7, "Difficulty Stale", v40);
    v41 = json_integer(*(__int64 *)&dword_195888);
    json_object_set_new(v7, "Best Share", v41);
    v67 = v68 + total_diff1;
    if ( v68 + total_diff1 )
    {
      LODWORD(v63) = sub_14579C(v68);
      HIDWORD(v63) = v62;
      LODWORD(v64) = sub_14579C(v67);
      sub_1457AC((__int64)(v63 / v64 * 100.0));
    }
    v42 = json_real();
    json_object_set_new(v7, "Device Hardware%", v42);
    if ( total_diff1 )
    {
      LODWORD(v43) = sub_1457AC(total_diff1);
      sub_1457AC((__int64)(total_diff_rejected / v43 * 100.0));
    }
    v44 = json_real();
    json_object_set_new(v7, "Device Rejected%", v44);
    v45 = opt_algo - 9;
    v46 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v46 == 0.0 )
      v47 = 0.0;
    else
      v47 = total_diff_rejected / v46;
    v48 = v45 > 1;
    if ( v45 > 1 )
      v48 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v48 )
    {
      v49 = (float)(1.0 - *(float *)&v9);
      if ( v49 < v47 )
        v47 = v47 - v49;
    }
    sub_1457AC((__int64)(v47 * 100.0));
    v50 = json_real();
    json_object_set_new(v7, "Pool Rejected%", v50);
    v51 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v51 != 0.0 )
      sub_1457AC((__int64)(total_diff_stale / v51 * 100.0));
    v52 = json_real();
    json_object_set_new(v7, "Pool Stale%", v52);
    v53 = json_integer(last_getwork);
    json_object_set_new(v7, "Last getwork", v53);
    v54 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v54 = (unsigned int)(opt_algo - 6) > 1;
    if ( v54 )
      v55 = v74;
    else
      v55 = v75;
    v56 = BUFX_strdup(v55);
    json_object_set_new(v7, "RT HASHRATE", v56);
    v57 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v57 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v57 )
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v77);
    v58 = BUFX_strdup(v77);
    json_object_set_new(v7, "AV HASHRATE", v58);
    v59 = BUFX_strdup(v78);
    json_object_set_new(v7, "THEORY HASHRATE", v59);
    json_array_append_new(v69, v7);
    json_object_set_new(a1, "SUMMARY", v69);
    v60 = json_integer(1);
    json_object_set_new(a1, "id", v60);
    return 0;
  }
}
