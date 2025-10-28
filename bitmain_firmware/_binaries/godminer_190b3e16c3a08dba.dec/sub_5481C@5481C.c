int __fastcall sub_5481C(int a1)
{
  double v2; // d8
  int result; // r0
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = (double)a1 / 100.0;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "set voltage to %lf", v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "set_voltage_without_feedback",
    28,
    197,
    40,
    v4);
  if ( bitmain_set_voltage() < 0 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "bitmain_set_voltage failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_without_feedback",
      28,
      200,
      100,
      v4);
    return -1;
  }
  else
  {
    usleep(0x7A120u);
    result = 0;
    dword_17B09C = a1;
    dword_17B0A0 = a1;
  }
  return result;
}
