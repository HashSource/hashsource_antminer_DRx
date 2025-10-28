void __fastcall sub_2A28C(
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
  int v20; // r1
  int v21; // r2
  int v22; // r3
  _DWORD *v24; // [sp+3Ch] [bp-1210h]
  _DWORD v25[126]; // [sp+50h] [bp-11FCh] BYREF
  char v26[4]; // [sp+248h] [bp-1004h] BYREF

  v14 = a1 == 0;
  memset(&v25[10], 0, 48);
  memset(&v25[62], 0, 0x100u);
  v25[0] = 0;
  if ( !a2 )
    v14 = 1;
  if ( v14 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats_old",
      13,
      1432,
      100,
      v26);
    JUMPOUT(0x2AF98);
  }
  sub_26294(a1, 1, 70, *(const char **)(a2 + 8));
  v24 = json_array();
  v15 = json_object();
  v16 = BUFX_strdup("2.12");
  json_object_set_new(v15, "BMMiner", v16);
  v17 = BUFX_strdup(g_miner_version);
  json_object_set_new(v15, "Miner", v17);
  v18 = BUFX_strdup(g_miner_compiletime);
  json_object_set_new(v15, "CompileTime", v18);
  v19 = BUFX_strdup(g_miner_type);
  json_object_set_new(v15, "Type", v19);
  json_array_append_new(v24, v15);
  read_system_status_from_monitor((int)v26);
  sub_2A3C8(v25, v20, v21, v22, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
