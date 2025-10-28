int __fastcall sub_4F2C4(int result)
{
  int v1; // r4
  char v2[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( result != -64 )
  {
    v1 = result;
    if ( result < -10 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "bringup temp: %d", v1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c",
        179,
        "calc_startup_fan_pwm_dcr_1727",
        29,
        60,
        40,
        v2);
      return 20;
    }
    else if ( result <= 34 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "bringup temp: %d", v1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c",
        179,
        "calc_startup_fan_pwm_dcr_1727",
        29,
        64,
        40,
        v2);
      return 60;
    }
  }
  return result;
}
