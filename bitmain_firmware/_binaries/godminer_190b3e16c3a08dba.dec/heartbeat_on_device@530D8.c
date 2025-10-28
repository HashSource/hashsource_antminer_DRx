void __noreturn heartbeat_on_device()
{
  char *all_created_runtime; // r0
  char *v1; // r5
  int i; // r4
  int v3; // r0
  int v4; // t1
  int v5; // [sp+34h] [bp-1028h] BYREF
  _DWORD v6[7]; // [sp+38h] [bp-1024h] BYREF
  int v7; // [sp+54h] [bp-1008h]
  char v8[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = 0;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "heartbeat_on_device");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_heartbeat.c",
    156,
    "heartbeat_on_device",
    19,
    54,
    60,
    v8);
  while ( 1 )
  {
    do
      all_created_runtime = (char *)get_all_created_runtime(&v5);
    while ( v5 <= 0 );
    v1 = all_created_runtime - 4;
    for ( i = 0; i < v5; ++i )
    {
      v3 = dev_ctrl(all_created_runtime);
      v4 = *((_DWORD *)v1 + 1);
      v1 += 4;
      if ( !(*(int (__fastcall **)(_DWORD))(v3 + 80))(*(_DWORD *)(v4 + 220)) )
      {
        V_LOCK();
        V_STR(v6, "error", "pic lost");
        logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "heartbeat failed!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_heartbeat.c",
          156,
          "heartbeat_on_device",
          19,
          62,
          100,
          v8);
      }
      all_created_runtime = (char *)sleep(5u);
    }
  }
}
