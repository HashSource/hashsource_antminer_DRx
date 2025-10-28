int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r6
  bool v7; // zf
  int v8; // r7
  int v10; // r2
  unsigned int s[64]; // [sp+10h] [bp-1904h] BYREF
  char v12[2048]; // [sp+110h] [bp-1804h] BYREF
  char v13[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    snprintf(
      v12,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      a1[1],
      v6,
      a1[1]);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    v10 = 279;
    goto LABEL_11;
  }
  v7 = v5 >> 4 == 1;
  if ( v5 >> 4 == 1 )
    v7 = (v5 & 0xF) == 1;
  v8 = !v7;
  if ( !v7 )
  {
    snprintf(
      v12,
      0x800u,
      "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    v10 = 285;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "decode_eeprom_fixture_info",
      26,
      v10,
      100,
      v13);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v8;
}
