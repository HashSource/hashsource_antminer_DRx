int __fastcall sub_C4208(_BYTE *a1, unsigned __int8 *a2)
{
  int v3; // r0
  int v4; // r3
  int v5; // r3
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  v3 = BM_CRC5(a1, 8 * (a2[1] - 1));
  v4 = a2[2];
  if ( v4 == 3 )
  {
    v5 = a2[60];
  }
  else if ( v4 == 4 )
  {
    v5 = a2[196];
  }
  else
  {
    v5 = 0;
  }
  if ( v5 == v3 )
    return 1;
  snprintf(s, 0x800u, "Fixture CRC check fail. store_crc = 0x%x, len = 0x%x, crc = 0x%x\n", v5, a2[1], v3);
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "_is_fixture_crc_pass",
    20,
    246,
    100,
    v8);
  return 0;
}
