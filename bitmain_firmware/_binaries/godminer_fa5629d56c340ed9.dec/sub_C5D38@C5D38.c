int sub_C5D38()
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready", "eeprom_get_fmt_version");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_get_fmt_version",
    22,
    1180,
    100,
    v2);
  return -1;
}
