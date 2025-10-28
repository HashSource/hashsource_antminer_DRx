int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  int *v1; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  v1 = &dword_1B5650[a1];
  if ( dword_1B5650[0] )
    return *(unsigned __int8 *)(dword_1B5650[0] + v1[2] + 64);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "api_get_eeprom_chain_load_state", v1[2]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "api_get_eeprom_chain_load_state",
    31,
    1400,
    100,
    v4);
  return -1;
}
