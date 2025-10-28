int __fastcall sub_2823C(_DWORD *a1, int a2)
{
  bool v4; // zf
  int v5; // r5
  __int64 v6; // kr00_8
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  char *v9; // r0
  _DWORD *v10; // r0
  double *v11; // r0
  double v12; // d7
  double *v13; // r0
  double v14; // d5
  double v15; // d7
  double *v16; // r0
  int v17; // r5
  _DWORD *v18; // r4
  _DWORD *v19; // r0
  char *v20; // r0
  int v21; // r2
  int *v22; // r3
  int v23; // r1
  char *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  char *v35; // r0
  int v36; // r3
  bool v37; // cc
  unsigned int v38; // r0
  char *v39; // r0
  double *v40; // r8
  char *v41; // r0
  _DWORD *v42; // r0
  char *v43; // r0
  char *v44; // r0
  double *v45; // r0
  double *v46; // r0
  double *v47; // r0
  double *v48; // r0
  _DWORD *v49; // r0
  _DWORD *v51; // [sp+1Ch] [bp-1140h]
  int v53; // [sp+34h] [bp-1128h] BYREF
  int v54; // [sp+38h] [bp-1124h]
  int v55; // [sp+3Ch] [bp-1120h]
  char v56[4]; // [sp+40h] [bp-111Ch] BYREF
  int v57; // [sp+44h] [bp-1118h]
  int v58; // [sp+48h] [bp-1114h]
  int v59; // [sp+4Ch] [bp-1110h]
  int v60; // [sp+50h] [bp-110Ch]
  int v61; // [sp+54h] [bp-1108h]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v63[128]; // [sp+D8h] [bp-1084h] BYREF
  char v64[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v63, 0, sizeof(v63));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  v54 = 0;
  v55 = 0;
  v53 = 0;
  *(_DWORD *)v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  if ( v4 )
  {
    v5 = -2147483646;
    V_LOCK();
    logfmt_raw(v64, 0x1000u, 0, "%s: input bad api param", "get_pools_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools_old",
      13,
      1281,
      100,
      v64);
  }
  else
  {
    v5 = total_pools;
    if ( total_pools )
    {
      sub_25FCC(a1, 1, 7, *(const char **)(a2 + 8));
      v51 = json_array();
      if ( total_pools > 0 )
      {
        v6 = 0;
        do
        {
          v17 = *(_DWORD *)(pools + 4 * v6);
          v18 = json_object();
          v19 = json_integer(v6);
          json_object_set_new(v18, "POOL", v19);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v17 + 12));
          v20 = BUFX_strdup(s);
          json_object_set_new(v18, "URL", v20);
          v21 = *(unsigned __int8 *)(v17 + 1904);
          v53 = 0;
          v54 = 0;
          v55 = 0;
          if ( v21 )
            LOWORD(v22) = 25676;
          else
            LOWORD(v22) = 25684;
          HIWORD(v22) = 20;
          v23 = v22[1];
          v53 = *v22;
          if ( v21 )
            LOBYTE(v54) = v23;
          else
            LOWORD(v54) = v23;
          v24 = BUFX_strdup((char *)&v53);
          json_object_set_new(v18, "Status", v24);
          v25 = json_integer(*(int *)(v17 + 4));
          json_object_set_new(v18, "Priority", v25);
          v26 = json_integer(*(int *)(v17 + 1636));
          json_object_set_new(v18, "Quota", v26);
          v27 = BUFX_strdup("N");
          json_object_set_new(v18, "Long Poll", v27);
          v28 = json_integer(*(unsigned int *)(v17 + 1632));
          json_object_set_new(v18, "Getworks", v28);
          v29 = json_integer(*(_QWORD *)(v17 + 1928));
          json_object_set_new(v18, "Accepted", v29);
          v30 = json_integer(*(_QWORD *)(v17 + 1936));
          json_object_set_new(v18, "Rejected", v30);
          v31 = json_integer(*(unsigned int *)(v17 + 1944));
          json_object_set_new(v18, "Discarded", v31);
          v32 = json_integer(*(unsigned int *)(v17 + 1640));
          json_object_set_new(v18, "Stale", v32);
          v33 = json_integer(*(unsigned int *)(v17 + 1948));
          json_object_set_new(v18, "Get Failures", v33);
          v34 = json_integer(*(unsigned int *)(v17 + 1952));
          json_object_set_new(v18, "Remote Failures", v34);
          memset(v63, 0, sizeof(v63));
          snprintf(v63, 0x80u, "%s", *(_DWORD *)(v17 + 16));
          v35 = BUFX_strdup(v63);
          json_object_set_new(v18, "User", v35);
          v36 = *(_DWORD *)(v17 + 1616);
          *(_DWORD *)v56 = 0;
          v57 = 0;
          v37 = v36 <= 0;
          v58 = 0;
          if ( v36 <= 0 )
            LOWORD(v36) = 48;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          if ( v37 )
          {
            *(_WORD *)v56 = v36;
          }
          else
          {
            v38 = time(0) - *(_DWORD *)(v17 + 1616);
            snprintf(v56, 0x18u, "%d:%d:%d", v38 / 0xE10, v38 % 0xE10 / 0x3C, v38 % 0xE10 % 0x3C);
          }
          v39 = BUFX_strdup(v56);
          json_object_set_new(v18, "Last Share Time", v39);
          sprintf((char *)(v17 + 1976), "%8.4f", *(double *)(v17 + 1808));
          v40 = (double *)(v17 + 1968);
          v41 = BUFX_strdup((char *)(v17 + 1976));
          json_object_set_new(v18, "Diff", v41);
          v42 = json_integer(*(_QWORD *)(v17 + 1992));
          json_object_set_new(v18, "Diff1 Shares", v42);
          v43 = BUFX_strdup("");
          json_object_set_new(v18, "Proxy Type", v43);
          v44 = BUFX_strdup("");
          json_object_set_new(v18, "Proxy", v44);
          sub_1457AC((__int64)(*(double *)(v17 + 1960) * 100.0));
          v45 = json_real();
          json_object_set_new(v18, "Difficulty Accepted", v45);
          sub_1457AC((__int64)(*(double *)(v17 + 1968) * 100.0));
          v46 = json_real();
          json_object_set_new(v18, "Difficulty Rejected", v46);
          sub_1457AC((__int64)(*(double *)(v17 + 1816) * 100.0));
          v47 = json_real();
          json_object_set_new(v18, "Difficulty Stale", v47);
          sub_1457AC((__int64)(*(double *)(v17 + 1624) * 100.0));
          v48 = json_real();
          json_object_set_new(v18, "Last Share Difficulty", v48);
          if ( *(_BYTE *)(v17 + 28) )
            v7 = json_true();
          else
            v7 = json_false();
          json_object_set_new(v18, "Has Stratum", v7);
          v8 = json_true();
          json_object_set_new(v18, "Stratum Active", v8);
          v9 = BUFX_strdup("");
          json_object_set_new(v18, "Stratum URL", v9);
          v10 = json_false();
          json_object_set_new(v18, "Has GBT", v10);
          v11 = json_real();
          json_object_set_new(v18, "Best Share", v11);
          v12 = *(double *)(v17 + 1968) + *(double *)(v17 + 1960) + *(double *)(v17 + 1816);
          if ( v12 != 0.0 )
            sub_1457AC((__int64)(*v40 / v12 * 100.0));
          v13 = json_real();
          json_object_set_new(v18, "Pool Rejected%", v13);
          v14 = *(double *)(v17 + 1816);
          v15 = *(double *)(v17 + 1960) + *v40 + v14;
          if ( v15 != 0.0 )
            sub_1457AC((__int64)(v14 / v15 * 100.0));
          v16 = json_real();
          json_object_set_new(v18, "Pool Stale%%", v16);
          json_array_append_new(v51, v18);
          ++v6;
        }
        while ( total_pools > (int)v6 );
      }
      v5 = 0;
      json_object_set_new(a1, "POOLS", v51);
      v49 = json_integer(1);
      json_object_set_new(a1, "id", v49);
    }
    else
    {
      sub_25FCC(a1, 0, 8, "No pools");
    }
  }
  return v5;
}
