int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "set_check_asic_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "set_check_asic_voltage",
    22,
    561,
    40,
    v3);
  if ( a1 )
    result = set_voltage_by_steps(dword_197B24, (unsigned __int8)byte_197B10, 0x64u);
  else
    result = set_voltage(dword_197B24, (unsigned __int8)byte_197B10);
  if ( result )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "set_check_asic_voltage error!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_check_asic_voltage",
      22,
      569,
      100,
      v3);
    return -1;
  }
  return result;
}
