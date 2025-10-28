int __fastcall sub_29760(_DWORD *a1, const char **a2)
{
  float v2; // s0
  bool v5; // zf
  float v6; // s16
  __int64 v7; // kr00_8
  double v8; // d7
  double v9; // d6
  __int64 v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r3
  bool v15; // cc
  unsigned int v16; // lr
  char *v17; // r0
  int v18; // r5
  _DWORD *v19; // r4
  _DWORD *v20; // r0
  double *v21; // r9
  char *v22; // r0
  char *v23; // r0
  int v24; // r2
  int *v25; // r3
  int v26; // r1
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  char *v34; // r0
  _DWORD *v35; // r0
  double *v36; // r0
  _DWORD *v38; // [sp+18h] [bp-1154h]
  int v40; // [sp+34h] [bp-1138h] BYREF
  int v41; // [sp+38h] [bp-1134h]
  int v42; // [sp+3Ch] [bp-1130h]
  char v43[4]; // [sp+40h] [bp-112Ch] BYREF
  int v44; // [sp+44h] [bp-1128h]
  int v45; // [sp+48h] [bp-1124h]
  int v46; // [sp+4Ch] [bp-1120h]
  char v47[4]; // [sp+50h] [bp-111Ch] BYREF
  int v48; // [sp+54h] [bp-1118h]
  int v49; // [sp+58h] [bp-1114h]
  int v50; // [sp+5Ch] [bp-1110h]
  int v51; // [sp+60h] [bp-110Ch]
  int v52; // [sp+64h] [bp-1108h]
  char s[128]; // [sp+68h] [bp-1104h] BYREF
  char v54[128]; // [sp+E8h] [bp-1084h] BYREF
  char v55[4100]; // [sp+168h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v54, 0, sizeof(v54));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  v41 = 0;
  v42 = 0;
  v40 = 0;
  *(_DWORD *)v43 = 0;
  *(_DWORD *)v47 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v55, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools",
      9,
      613,
      100,
      v55);
    return -2147483646;
  }
  else
  {
    sub_26068(a1, a2);
    sub_26184(a1);
    v38 = json_array();
    if ( opt_algo == 7 )
    {
      v6 = 1.0;
    }
    else
    {
      sub_296B4();
      v6 = v2;
    }
    if ( total_pools > 0 )
    {
      v7 = 0;
      do
      {
        v18 = *(_DWORD *)(pools + 4 * v7);
        if ( v18 )
        {
          v19 = json_object();
          v20 = json_integer(v7);
          v21 = (double *)(v18 + 1968);
          json_object_set_new(v19, "index", v20);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v18 + 12));
          v22 = BUFX_strdup(s);
          json_object_set_new(v19, "url", v22);
          memset(v54, 0, sizeof(v54));
          snprintf(v54, 0x80u, "%s", *(const char **)(v18 + 16));
          v23 = BUFX_strdup(v54);
          json_object_set_new(v19, "user", v23);
          v24 = *(unsigned __int8 *)(v18 + 1904);
          v41 = 0;
          v40 = 0;
          v42 = 0;
          if ( v24 )
            LOWORD(v25) = 31708;
          else
            LOWORD(v25) = 30980;
          HIWORD(v25) = 20;
          v26 = v25[1];
          v40 = *v25;
          if ( v24 )
            LOBYTE(v41) = v26;
          else
            LOWORD(v41) = v26;
          v27 = BUFX_strdup((char *)&v40);
          json_object_set_new(v19, "status", v27);
          v28 = json_integer(*(int *)(v18 + 4));
          json_object_set_new(v19, "priority", v28);
          v29 = json_integer(*(unsigned int *)(v18 + 1632));
          json_object_set_new(v19, "getworks", v29);
          v30 = json_integer(*(_QWORD *)(v18 + 1928));
          json_object_set_new(v19, "accepted", v30);
          v31 = json_integer(*(_QWORD *)(v18 + 1936));
          json_object_set_new(v19, "rejected", v31);
          v32 = json_integer(*(unsigned int *)(v18 + 1944));
          json_object_set_new(v19, "discarded", v32);
          v33 = json_integer(*(unsigned int *)(v18 + 1640));
          json_object_set_new(v19, "stale", v33);
          *(_DWORD *)v43 = 0;
          v44 = 0;
          v45 = 0;
          v46 = 0;
          snprintf(v43, 0x10u, "%s", (const char *)(v18 + 1976));
          v34 = BUFX_strdup(v43);
          json_object_set_new(v19, "diff", v34);
          v35 = json_integer(*(_QWORD *)(v18 + 1992));
          json_object_set_new(v19, "diff1", v35);
          v36 = json_real();
          LODWORD(v10) = json_object_set_new(v19, "diffa", v36);
          if ( opt_algo == 6 )
          {
            v8 = *v21;
            v9 = (double)(int)((*(double *)(v18 + 1968) + *(double *)(v18 + 1960)) * (float)(1.0 - v6));
            if ( *v21 <= v9 )
              v10 = 0;
            else
              v8 = v8 - v9;
            if ( *v21 > v9 )
              v10 = (int)v8;
          }
          else
          {
            v10 = (__int64)*v21;
          }
          v11 = json_integer(v10);
          json_object_set_new(v19, "diffr", v11);
          v12 = json_integer((__int64)*(double *)(v18 + 1816));
          json_object_set_new(v19, "diffs", v12);
          v13 = json_integer((__int64)*(double *)(v18 + 1624));
          json_object_set_new(v19, "lsdiff", v13);
          v14 = *(_DWORD *)(v18 + 1616);
          *(_DWORD *)v47 = 0;
          v48 = 0;
          v15 = v14 <= 0;
          v49 = 0;
          if ( v14 <= 0 )
            LOWORD(v14) = 48;
          v50 = 0;
          v51 = 0;
          v52 = 0;
          if ( v15 )
          {
            *(_WORD *)v47 = v14;
          }
          else
          {
            v16 = time(0) - *(_DWORD *)(v18 + 1616);
            snprintf(v47, 0x18u, "%d:%d:%d", v16 / 0xE10, v16 % 0xE10 / 0x3C, v16 % 0xE10 % 0x3C);
          }
          v17 = BUFX_strdup(v47);
          json_object_set_new(v19, "lstime", v17);
          json_array_append_new(v38, v19);
        }
        ++v7;
      }
      while ( total_pools > (int)v7 );
    }
    json_object_set_new(a1, "POOLS", v38);
    return 0;
  }
}
