int __fastcall sub_2C184(_DWORD *a1, const char **a2)
{
  char *v4; // r6
  int v5; // r8
  char *all_created_runtime; // r0
  char *v7; // r4
  _DWORD *v8; // r10
  _DWORD *v9; // r5
  double v10; // d0
  float v11; // s24
  double v12; // d10
  double v13; // d9
  double v14; // d8
  float v15; // s25
  _DWORD *v16; // r0
  bool v17; // cc
  double v18; // d7
  double v19; // r0
  double v20; // d0
  double *v21; // r0
  bool v22; // cc
  bool v23; // cc
  double *v24; // r0
  double *v25; // r0
  double *v26; // r0
  char *v27; // r0
  __int64 v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r8
  char **v32; // r11
  _DWORD *v33; // r4
  char *v34; // r0
  char *v35; // t1
  char *v37; // r8
  int v38; // r4
  char *v39; // r11
  int v40; // t1
  int v41; // r1
  unsigned __int64 v42; // [sp+18h] [bp-102Ch]
  char *ptr; // [sp+24h] [bp-1020h]
  int v44; // [sp+2Ch] [bp-1018h] BYREF
  double v45; // [sp+30h] [bp-1014h] BYREF
  _DWORD v46[2]; // [sp+38h] [bp-100Ch] BYREF
  char v47[12]; // [sp+40h] [bp-1004h] BYREF
  float v48; // [sp+4Ch] [bp-FF8h]
  float v49; // [sp+50h] [bp-FF4h]
  float v50; // [sp+54h] [bp-FF0h]
  float v51; // [sp+58h] [bp-FECh]
  double v52; // [sp+60h] [bp-FE4h]
  unsigned __int64 v53; // [sp+70h] [bp-FD4h]

  v4 = (char *)v46;
  v46[0] = 0;
  v44 = 0;
  v46[1] = 0;
  v5 = frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v44);
  if ( a2 )
  {
    v7 = all_created_runtime;
    sub_25DA0(a1, a2);
    sub_25EBC(a1);
    v8 = json_array();
    v9 = json_object();
    read_system_status_from_monitor((int)v47);
    v10 = v52;
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v5 + 72) + 16), &v45, (char *)v46);
    if ( v44 <= 0 )
      v4 = 0;
    v11 = v48;
    *((float *)&v12 + 1) = v49;
    v42 = v53;
    v13 = v50 * v10;
    if ( v44 <= 0 )
      ptr = v4;
    v14 = v51 * v10;
    if ( v44 > 0 )
    {
      ptr = (char *)malloc(216 * v44);
      v4 = (char *)malloc(4 * v44);
      if ( v44 > 0 )
      {
        v37 = v7 - 4;
        v38 = 0;
        v39 = ptr;
        do
        {
          v40 = *((_DWORD *)v37 + 1);
          v37 += 4;
          read_status_from_monitor(v39, v40);
          v41 = v44;
          v39 += 216;
          *(_DWORD *)&v4[4 * v38++] = *(_DWORD *)(*(_DWORD *)v37 + 256);
        }
        while ( v41 > v38 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    v15 = *(float *)&v10;
    get_total_accept_rate();
    LODWORD(v12) = LODWORD(v10);
    v16 = json_integer((__int64)v10);
    json_object_set_new(v9, "elapsed", v16);
    v17 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v17 = (unsigned int)(opt_algo - 6) > 1;
    if ( v17 )
      v18 = v11;
    else
      v18 = *((float *)&v12 + 1);
    LODWORD(v19) = sub_1457AC((__int64)(v18 * v10 * 100.0));
    v20 = v19 / 100.0;
    v21 = json_real();
    json_object_set_new(v9, "rate_5s", v21);
    v22 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v22 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v22 )
    {
      v23 = v15 <= *(float *)&v12;
      if ( v15 <= *(float *)&v12 )
        v12 = *(float *)&v12;
      else
        v20 = v15;
      if ( v23 )
      {
        v14 = v12 * v14;
        v13 = v12 * v13;
      }
      else
      {
        v14 = v20 * v14;
        v13 = v20 * v13;
      }
    }
    sub_1457AC((__int64)(v14 * 100.0));
    v24 = json_real();
    json_object_set_new(v9, "rate_avg", v24);
    sub_1457AC((__int64)(v13 * 100.0));
    v25 = json_real();
    json_object_set_new(v9, "rate_30m", v25);
    sub_1457AC((__int64)(v45 * 100.0));
    v26 = json_real();
    json_object_set_new(v9, "rate_ideal", v26);
    v27 = BUFX_strdup((char *)v46);
    json_object_set_new(v9, "rate_unit", v27);
    v28 = v42;
    if ( opt_algo == 9 )
      LODWORD(v28) = sub_145AC4(v42, 0x3E8u);
    v29 = json_integer(v28);
    json_object_set_new(v9, "hw_all", v29);
    v30 = json_integer(*(__int64 *)&dword_195888);
    json_object_set_new(v9, "bestshare", v30);
    v31 = json_array();
    if ( v31 && off_1933A4 )
    {
      v32 = (char **)&off_1933A4;
      do
      {
        v33 = json_object();
        v34 = BUFX_strdup(*v32);
        json_object_set_new(v33, "type", v34);
        ((void (__fastcall *)(_DWORD *, char **))v32[1])(v33, v32);
        json_array_append_new(v31, v33);
        v35 = v32[6];
        v32 += 6;
      }
      while ( v35 );
    }
    json_object_set_new(v9, "status", v31);
    json_array_append_new(v8, v9);
    json_object_set_new(a1, "SUMMARY", v8);
    if ( v44 > 0 )
    {
      free(v4);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "%s: input bad api param", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary",
      11,
      507,
      100,
      v47);
    return -2147483646;
  }
}
