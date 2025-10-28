int __fastcall sub_2994C(_DWORD *a1, const char **a2)
{
  float v2; // s0
  bool v5; // zf
  __int64 v6; // kr00_8
  double v7; // d7
  double v8; // d6
  __int64 v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int v13; // r3
  bool v14; // cc
  unsigned int v15; // lr
  char *v16; // r0
  int v17; // r5
  _DWORD *v18; // r4
  _DWORD *v19; // r0
  double *v20; // r9
  char *v21; // r0
  char *v22; // r0
  int v23; // r2
  int *v24; // r3
  int v25; // r1
  char *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  char *v33; // r0
  _DWORD *v34; // r0
  double *v35; // r0
  _DWORD *v37; // [sp+1Ch] [bp-1150h]
  int v39; // [sp+34h] [bp-1138h] BYREF
  int v40; // [sp+38h] [bp-1134h]
  int v41; // [sp+3Ch] [bp-1130h]
  char v42[4]; // [sp+40h] [bp-112Ch] BYREF
  int v43; // [sp+44h] [bp-1128h]
  int v44; // [sp+48h] [bp-1124h]
  int v45; // [sp+4Ch] [bp-1120h]
  char v46[4]; // [sp+50h] [bp-111Ch] BYREF
  int v47; // [sp+54h] [bp-1118h]
  int v48; // [sp+58h] [bp-1114h]
  int v49; // [sp+5Ch] [bp-1110h]
  int v50; // [sp+60h] [bp-110Ch]
  int v51; // [sp+64h] [bp-1108h]
  char s[128]; // [sp+68h] [bp-1104h] BYREF
  char v53[128]; // [sp+E8h] [bp-1084h] BYREF
  char v54[4100]; // [sp+168h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v53, 0, sizeof(v53));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  v40 = 0;
  v41 = 0;
  v39 = 0;
  *(_DWORD *)v42 = 0;
  *(_DWORD *)v46 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v54, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools",
      9,
      615,
      100,
      v54);
    return -2147483646;
  }
  else
  {
    sub_25DA0(a1, a2);
    sub_25EBC(a1);
    v37 = json_array();
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v6 = 0;
      do
      {
        v17 = *(_DWORD *)(pools + 4 * v6);
        if ( v17 )
        {
          v18 = json_object();
          v19 = json_integer(v6);
          v20 = (double *)(v17 + 1968);
          json_object_set_new(v18, "index", v19);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v17 + 12));
          v21 = BUFX_strdup(s);
          json_object_set_new(v18, "url", v21);
          memset(v53, 0, sizeof(v53));
          snprintf(v53, 0x80u, "%s", *(const char **)(v17 + 16));
          v22 = BUFX_strdup(v53);
          json_object_set_new(v18, "user", v22);
          v23 = *(unsigned __int8 *)(v17 + 1904);
          v40 = 0;
          v39 = 0;
          v41 = 0;
          if ( v23 )
            LOWORD(v24) = 26504;
          else
            LOWORD(v24) = 25684;
          HIWORD(v24) = 20;
          v25 = v24[1];
          v39 = *v24;
          if ( v23 )
            LOBYTE(v40) = v25;
          else
            LOWORD(v40) = v25;
          v26 = BUFX_strdup((char *)&v39);
          json_object_set_new(v18, "status", v26);
          v27 = json_integer(*(int *)(v17 + 4));
          json_object_set_new(v18, "priority", v27);
          v28 = json_integer(*(unsigned int *)(v17 + 1632));
          json_object_set_new(v18, "getworks", v28);
          v29 = json_integer(*(_QWORD *)(v17 + 1928));
          json_object_set_new(v18, "accepted", v29);
          v30 = json_integer(*(_QWORD *)(v17 + 1936));
          json_object_set_new(v18, "rejected", v30);
          v31 = json_integer(*(unsigned int *)(v17 + 1944));
          json_object_set_new(v18, "discarded", v31);
          v32 = json_integer(*(unsigned int *)(v17 + 1640));
          json_object_set_new(v18, "stale", v32);
          *(_DWORD *)v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          snprintf(v42, 0x10u, "%s", (const char *)(v17 + 1976));
          v33 = BUFX_strdup(v42);
          json_object_set_new(v18, "diff", v33);
          v34 = json_integer(*(_QWORD *)(v17 + 1992));
          json_object_set_new(v18, "diff1", v34);
          v35 = json_real();
          LODWORD(v9) = json_object_set_new(v18, "diffa", v35);
          if ( opt_algo == 6 )
          {
            v7 = *v20;
            v8 = (double)(int)((*(double *)(v17 + 1968) + *(double *)(v17 + 1960)) * (float)(1.0 - v2));
            if ( *v20 <= v8 )
              v9 = 0;
            else
              v7 = v7 - v8;
            if ( *v20 > v8 )
              v9 = (int)v7;
          }
          else
          {
            v9 = (__int64)*v20;
          }
          v10 = json_integer(v9);
          json_object_set_new(v18, "diffr", v10);
          v11 = json_integer((__int64)*(double *)(v17 + 1816));
          json_object_set_new(v18, "diffs", v11);
          v12 = json_integer((__int64)*(double *)(v17 + 1624));
          json_object_set_new(v18, "lsdiff", v12);
          v13 = *(_DWORD *)(v17 + 1616);
          *(_DWORD *)v46 = 0;
          v47 = 0;
          v14 = v13 <= 0;
          v48 = 0;
          if ( v13 <= 0 )
            LOWORD(v13) = 48;
          v49 = 0;
          v50 = 0;
          v51 = 0;
          if ( v14 )
          {
            *(_WORD *)v46 = v13;
          }
          else
          {
            v15 = time(0) - *(_DWORD *)(v17 + 1616);
            snprintf(v46, 0x18u, "%d:%d:%d", v15 / 0xE10, v15 % 0xE10 / 0x3C, v15 % 0xE10 % 0x3C);
          }
          v16 = BUFX_strdup(v46);
          json_object_set_new(v18, "lstime", v16);
          json_array_append_new(v37, v18);
        }
        ++v6;
      }
      while ( total_pools > (int)v6 );
    }
    json_object_set_new(a1, "POOLS", v37);
    return 0;
  }
}
