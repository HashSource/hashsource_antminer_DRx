int __fastcall sub_2B17C(_DWORD *a1, int a2)
{
  float v2; // s31
  int v5; // r0
  bool v6; // zf
  int v7; // r6
  _DWORD *v8; // r4
  float v9; // s26
  double v10; // d11
  double v11; // d9
  float v12; // s20
  float v13; // s16
  double v14; // d13
  double v15; // d8
  double v16; // r0
  double v17; // d14
  double v18; // d8
  double v19; // d14
  _DWORD *v20; // r0
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
  double v45; // d7
  double v46; // d6
  bool v47; // zf
  double v48; // d7
  double *v49; // r0
  double v50; // d7
  double *v51; // r0
  _DWORD *v52; // r0
  char *v53; // r0
  char *v54; // r0
  char *v55; // r0
  char *v56; // r0
  _DWORD *v57; // r0
  int v59; // r1
  double v60; // d10
  double v61; // r0
  double *v62; // r0
  double v63; // d7
  double *v64; // r0
  __int64 v65; // [sp+10h] [bp-10E4h]
  __int64 v66; // [sp+18h] [bp-10DCh]
  _DWORD *v67; // [sp+20h] [bp-10D4h]
  double v68; // [sp+28h] [bp-10CCh]
  int v69; // [sp+34h] [bp-10C0h] BYREF
  double v70; // [sp+38h] [bp-10BCh] BYREF
  char v71[12]; // [sp+44h] [bp-10B0h] BYREF
  char v72[32]; // [sp+50h] [bp-10A4h] BYREF
  char v73[32]; // [sp+70h] [bp-1084h] BYREF
  char v74[32]; // [sp+90h] [bp-1064h] BYREF
  char v75[32]; // [sp+B0h] [bp-1044h] BYREF
  char v76[32]; // [sp+D0h] [bp-1024h] BYREF
  char v77[12]; // [sp+F0h] [bp-1004h] BYREF
  float v78; // [sp+FCh] [bp-FF8h]
  float v79; // [sp+100h] [bp-FF4h]
  float v80; // [sp+104h] [bp-FF0h]
  float v81; // [sp+108h] [bp-FECh]
  double v82; // [sp+110h] [bp-FE4h]
  __int64 v83; // [sp+120h] [bp-FD4h]

  v69 = 0;
  get_all_created_runtime(&v69);
  v5 = frontend_runtime_instance();
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  if ( v6 )
  {
    V_LOCK();
    logfmt_raw(v77, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary_old",
      15,
      1168,
      100,
      v77);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    sub_26294(a1, 1, 11, *(const char **)(a2 + 8));
    v67 = json_array();
    v8 = json_object();
    read_system_status_from_monitor((int)v77);
    v9 = v79;
    v10 = v82;
    v11 = v78;
    v12 = v80;
    v13 = v81;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v72);
    v14 = v9;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v73);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v74);
    v15 = v13;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v75);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v76);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), &v70, v71);
    v66 = v83;
    get_miner_elapsed_time();
    LODWORD(v16) = sub_146C5C(total_accepted);
    v68 = v12 * v10;
    v17 = v16;
    if ( v10 != 0.0 )
      v17 = v16 / v10;
    v18 = v15 * v10;
    if ( opt_algo == 7 )
      v2 = 1.0;
    v19 = v17 * 60.0;
    if ( opt_algo != 7 )
    {
      sub_296B4();
      v2 = *(float *)&v10;
    }
    get_total_accept_rate();
    v20 = json_integer((__int64)v10);
    json_object_set_new(v8, "Elapsed", v20);
    if ( opt_algo == 6 )
    {
      sub_146C5C((__int64)(v14 * v10 * 100.0));
      v62 = json_real();
      json_object_set_new(v8, "GHS 5s", v62);
      if ( *(float *)&v10 >= v2 )
        v63 = *(float *)&v10;
      else
        v63 = v2;
      sub_146C5C((__int64)(v63 * v18 * 100.0));
      v64 = json_real();
      json_object_set_new(v8, "GHS av", v64);
      sub_146C5C((__int64)(v63 * v68 * 100.0));
    }
    else
    {
      sub_146C5C((__int64)(v11 * v10 * 100.0));
      v21 = json_real();
      json_object_set_new(v8, "GHS 5s", v21);
      sub_146C5C((__int64)(v18 * 100.0));
      v22 = json_real();
      json_object_set_new(v8, "GHS av", v22);
      sub_146C5C((__int64)(v68 * 100.0));
    }
    v23 = json_real();
    json_object_set_new(v8, "GHS 30m", v23);
    v24 = json_integer((unsigned int)dword_196888);
    json_object_set_new(v8, "Found Blocks", v24);
    v25 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v8, "Getwork", v25);
    v26 = json_integer(total_accepted);
    json_object_set_new(v8, "Accepted", v26);
    v27 = json_integer(total_rejected);
    json_object_set_new(v8, "Rejected", v27);
    v28 = json_integer(v66);
    json_object_set_new(v8, "Hardware Errors", v28);
    sub_146C5C((__int64)(v19 * 100.0));
    v29 = json_real();
    json_object_set_new(v8, "Utility", v29);
    v30 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v8, "Discarded", v30);
    v31 = json_integer(total_stale);
    json_object_set_new(v8, "Stale", v31);
    v32 = json_integer((unsigned int)total_go);
    json_object_set_new(v8, "Get Failures", v32);
    v33 = json_integer((unsigned int)local_work);
    json_object_set_new(v8, "Local Work", v33);
    v34 = json_integer((unsigned int)total_ro);
    json_object_set_new(v8, "Remote Failures", v34);
    v35 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v8, "Network Blocks", v35);
    sub_146C5C((__int64)(dbl_196890 * 100.0));
    v36 = json_real();
    json_object_set_new(v8, "Total MH", v36);
    v37 = json_real();
    json_object_set_new(v8, "Work Utility", v37);
    sub_146C5C((__int64)(total_diff_accepted * 100.0));
    v38 = json_real();
    json_object_set_new(v8, "Difficulty Accepted", v38);
    sub_146C5C((__int64)(total_diff_rejected * 100.0));
    v39 = json_real();
    json_object_set_new(v8, "Difficulty Rejected", v39);
    sub_146C5C((__int64)(total_diff_stale * 100.0));
    v40 = json_real();
    json_object_set_new(v8, "Difficulty Stale", v40);
    v41 = json_integer(*(__int64 *)&dword_196898);
    json_object_set_new(v8, "Best Share", v41);
    v65 = v66 + total_diff1;
    if ( v66 + total_diff1 )
    {
      LODWORD(v60) = sub_146C4C(v66);
      HIDWORD(v60) = v59;
      LODWORD(v61) = sub_146C4C(v65);
      sub_146C5C((__int64)(v60 / v61 * 100.0));
    }
    v42 = json_real();
    json_object_set_new(v8, "Device Hardware%", v42);
    if ( total_diff1 )
    {
      LODWORD(v43) = sub_146C5C(total_diff1);
      sub_146C5C((__int64)(total_diff_rejected / v43 * 100.0));
    }
    v44 = json_real();
    json_object_set_new(v8, "Device Rejected%", v44);
    v45 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v45 == 0.0 )
      v46 = 0.0;
    else
      v46 = total_diff_rejected / v45;
    v47 = opt_algo == 9;
    if ( opt_algo != 9 )
      v47 = opt_algo == 6;
    if ( v47 )
    {
      v48 = (float)(1.0 - *(float *)&v10);
      if ( v48 < v46 )
        v46 = v46 - v48;
    }
    sub_146C5C((__int64)(v46 * 100.0));
    v49 = json_real();
    json_object_set_new(v8, "Pool Rejected%", v49);
    v50 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v50 != 0.0 )
      sub_146C5C((__int64)(total_diff_stale / v50 * 100.0));
    v51 = json_real();
    json_object_set_new(v8, "Pool Stale%", v51);
    v52 = json_integer(last_getwork);
    json_object_set_new(v8, "Last getwork", v52);
    if ( opt_algo == 6 )
      v53 = v73;
    else
      v53 = v72;
    v54 = BUFX_strdup(v53);
    json_object_set_new(v8, "RT HASHRATE", v54);
    if ( opt_algo == 6 )
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v75);
    v55 = BUFX_strdup(v75);
    json_object_set_new(v8, "AV HASHRATE", v55);
    v56 = BUFX_strdup(v76);
    json_object_set_new(v8, "THEORY HASHRATE", v56);
    json_array_append_new(v67, v8);
    json_object_set_new(a1, "SUMMARY", v67);
    v57 = json_integer(1);
    json_object_set_new(a1, "id", v57);
    return 0;
  }
}
