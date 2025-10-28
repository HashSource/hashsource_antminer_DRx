int __fastcall set_voltage(int a1, int a2)
{
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "set_voltage to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      457,
      40,
      v4);
    return sub_5DBF4(a1);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "set_voltage power is not inited");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      453,
      100,
      v4);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      454,
      100,
      v4);
    return -1;
  }
}
