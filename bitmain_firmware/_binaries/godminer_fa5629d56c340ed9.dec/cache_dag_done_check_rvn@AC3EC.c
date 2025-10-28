int __fastcall cache_dag_done_check_rvn(int a1, int a2, int a3)
{
  __int16 v3; // r5
  int v5; // r4
  void *src; // [sp+44h] [bp-1078h]
  void *dest; // [sp+54h] [bp-1068h]
  _DWORD v11[2]; // [sp+68h] [bp-1054h] BYREF
  int v12; // [sp+70h] [bp-104Ch]
  int v13; // [sp+74h] [bp-1048h]
  _DWORD v14[7]; // [sp+78h] [bp-1044h] BYREF
  int v15; // [sp+94h] [bp-1028h]
  char v16[4100]; // [sp+B8h] [bp-1004h] BYREF

  v3 = a2;
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "%s...", "cache_dag_done_check_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "cache_dag_done_check_rvn",
    24,
    2656,
    40,
    v16);
  dest = malloc(0x1800u);
  do
  {
    sleep(0xAu);
    v5 = *(_DWORD *)(a1 + 448);
    V_LOCK();
    V_INT((int)v14, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v16,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "%s core_no %d",
      "ChipSetting_get_cache_done_status_rvn_RVN",
      v5 << 6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_cache_done_status_rvn_RVN",
      41,
      1946,
      40,
      v16);
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    src = calloc(768 * v5, 1u);
    HIWORD(v12) = v3;
    (*(void (__fastcall **)(int, _DWORD *, int))(a1 + 320))(a1, v11, v5 << 6);
    if ( dest )
      memcpy(dest, src, 768 * v5);
    free(src);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "%s resp_num: %d, work_mode: %d", "cache_dag_done_check_rvn", 0, a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "cache_dag_done_check_rvn",
      24,
      2671,
      40,
      v16);
  }
  while ( a2 != 73 );
  return 0;
}
