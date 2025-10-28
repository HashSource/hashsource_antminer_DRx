int __fastcall sub_2C57C(_DWORD *a1, const char **a2)
{
  char *v4; // r6
  int v5; // r8
  char *all_created_runtime; // r0
  char *v7; // r4
  _DWORD *v8; // r10
  _DWORD *v9; // r5
  double v10; // d0
  float v11; // s16
  double v12; // d12
  double v13; // d10
  double v14; // d9
  double v15; // r0
  float v16; // s17
  _DWORD *v17; // r0
  double v18; // d7
  double v19; // r0
  double v20; // d0
  double *v21; // r0
  bool v22; // nf
  double *v23; // r0
  double *v24; // r0
  double *v25; // r0
  char *v26; // r0
  __int64 v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r8
  char **v31; // r11
  _DWORD *v32; // r4
  char *v33; // r0
  char *v34; // t1
  char *v36; // r8
  int v37; // r4
  char *v38; // r11
  int v39; // t1
  int v40; // r1
  double v41; // [sp+10h] [bp-1034h]
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
    sub_26068(a1, a2);
    sub_26184(a1);
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
        v36 = v7 - 4;
        v37 = 0;
        v38 = ptr;
        do
        {
          v39 = *((_DWORD *)v36 + 1);
          v36 += 4;
          read_status_from_monitor(v38, v39);
          v40 = v44;
          v38 += 216;
          *(_DWORD *)&v4[4 * v37++] = *(_DWORD *)(*(_DWORD *)v36 + 260);
        }
        while ( v40 > v37 );
      }
    }
    get_miner_elapsed_time();
    v15 = v10;
    if ( opt_algo == 7 )
    {
      LODWORD(v12) = 1.0;
    }
    else
    {
      sub_296B4();
      v15 = v10;
      LODWORD(v12) = LODWORD(v10);
    }
    v41 = v15;
    get_total_accept_rate();
    v16 = *(float *)&v10;
    v17 = json_integer((__int64)v41);
    json_object_set_new(v9, "elapsed", v17);
    if ( opt_algo == 6 )
      v18 = *((float *)&v12 + 1);
    else
      v18 = v11;
    LODWORD(v19) = sub_146C5C((__int64)(v18 * v10 * 100.0));
    v20 = v19 / 100.0;
    v21 = json_real();
    json_object_set_new(v9, "rate_5s", v21);
    if ( opt_algo == 6 )
    {
      v22 = v16 < *(float *)&v12;
      if ( v16 >= *(float *)&v12 )
        v20 = v16;
      else
        v12 = *(float *)&v12;
      if ( v22 )
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
    sub_146C5C((__int64)(v14 * 100.0));
    v23 = json_real();
    json_object_set_new(v9, "rate_avg", v23);
    sub_146C5C((__int64)(v13 * 100.0));
    v24 = json_real();
    json_object_set_new(v9, "rate_30m", v24);
    sub_146C5C((__int64)(v45 * 100.0));
    v25 = json_real();
    json_object_set_new(v9, "rate_ideal", v25);
    v26 = BUFX_strdup((char *)v46);
    json_object_set_new(v9, "rate_unit", v26);
    v27 = v42;
    if ( opt_algo == 9 )
      LODWORD(v27) = sub_146F74(v42, 0x3E8u);
    v28 = json_integer(v27);
    json_object_set_new(v9, "hw_all", v28);
    v29 = json_integer(*(__int64 *)&dword_196898);
    json_object_set_new(v9, "bestshare", v29);
    v30 = json_array();
    if ( v30 && off_1943A8 )
    {
      v31 = (char **)&off_1943A8;
      do
      {
        v32 = json_object();
        v33 = BUFX_strdup(*v31);
        json_object_set_new(v32, "type", v33);
        ((void (__fastcall *)(_DWORD *, char **))v31[1])(v32, v31);
        json_array_append_new(v30, v32);
        v34 = v31[6];
        v31 += 6;
      }
      while ( v34 );
    }
    json_object_set_new(v9, "status", v30);
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
      505,
      100,
      v47);
    return -2147483646;
  }
}
