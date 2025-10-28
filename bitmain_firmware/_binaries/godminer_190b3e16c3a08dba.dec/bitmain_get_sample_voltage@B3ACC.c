int bitmain_get_sample_voltage()
{
  int result; // r0
  int v1; // [sp+10h] [bp-1814h] BYREF
  __int16 v2; // [sp+14h] [bp-1810h]
  _DWORD v3[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v5[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_18C5EC || sub_B38E8() >= 0 )
  {
    v3[1] = 0;
    v3[0] = 0;
    v1 = 67414613;
    v2 = 8;
    result = sub_B3030((void *)dword_18C5E8, (unsigned __int8 *)&v1, 6u, (unsigned __int8 *)v3, 8u);
    if ( result )
    {
      strcpy(s, "get sample N failed");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "_bitmain_get_sample_N",
        21,
        431,
        100,
        v5);
      strcpy(s, "can nont get sample voltage");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
               173,
               "bitmain_get_sample_voltage",
               26,
               543,
               100,
               v5);
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_sample_voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
             173,
             "bitmain_get_sample_voltage",
             26,
             539,
             100,
             v5);
  }
  return result;
}
