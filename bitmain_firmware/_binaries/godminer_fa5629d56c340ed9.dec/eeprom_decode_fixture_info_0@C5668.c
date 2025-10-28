int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r6
  int v7; // r3
  bool v8; // zf
  int v9; // r7
  int v11; // r2
  unsigned int s[64]; // [sp+10h] [bp-1904h] BYREF
  char v13[2048]; // [sp+110h] [bp-1804h] BYREF
  char v14[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    snprintf(
      v13,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      a1[1],
      v6,
      a1[1]);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v13);
    V_UNLOCK();
    v11 = 350;
    goto LABEL_11;
  }
  v7 = v5 & 0xF;
  v8 = v5 >> 4 == 1;
  if ( v5 >> 4 == 1 )
    v8 = v7 == 1;
  v9 = !v8;
  if ( !v8 )
  {
    snprintf(
      v13,
      0x800u,
      "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
      v7,
      v5 >> 4);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v13);
    V_UNLOCK();
    v11 = 356;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "decode_eeprom_fixture_info",
      26,
      v11,
      100,
      v14);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v9;
}
