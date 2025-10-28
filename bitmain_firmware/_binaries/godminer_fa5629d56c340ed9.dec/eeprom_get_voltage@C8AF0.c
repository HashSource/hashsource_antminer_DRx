int __fastcall eeprom_get_voltage(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1B5650[0] && *(_BYTE *)(dword_1B5650[0] + 80) )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(dword_1B5650[0] + 4 * a1) + 39);
    if ( a2 )
    {
      result = 0;
      *a2 = v2;
    }
    else
    {
      strcpy(s, "voltage level not match");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_get_voltage",
        18,
        1115,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(s, 0x800u, "No work mode voltage, chain = %d.", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_get_voltage",
      18,
      1104,
      100,
      v5);
    return -1;
  }
  return result;
}
