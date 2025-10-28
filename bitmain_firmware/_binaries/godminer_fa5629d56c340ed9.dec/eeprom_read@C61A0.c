int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned int v5; // r6
  int v8; // r11
  int *v9; // r6
  int v10; // r7
  void *v11; // r0
  int v12; // r3
  int v13; // r11
  unsigned __int8 v16; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v18[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v13 = -2147483391;
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_read",
      11,
      202,
      100,
      v18);
    return v13;
  }
  v5 = 2 * a1;
  if ( !dword_1B5650[2 * a1 + 19] )
  {
    v13 = eeprom_open(a1);
    if ( v13 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_read", a1);
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_read",
        11,
        207,
        100,
        v18);
      return v13;
    }
  }
  strcpy(s, "no use at24c512c!");
  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_read",
    11,
    223,
    20,
    v18);
  if ( a4 )
  {
    v8 = a3;
    v9 = &dword_1B5650[v5];
    v10 = a3 + a4;
    while ( 1 )
    {
      v11 = (void *)v9[18];
      v12 = v8;
      v16 = a2;
      ++v8;
      ++a2;
      if ( iic_read_reg(v11, &v16, 1, v12, 1u) != 1 )
        break;
      if ( v8 == v10 )
        goto LABEL_11;
    }
    v13 = -2147483392;
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d", a1, v16);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_read",
      11,
      229,
      100,
      v18);
    return v13;
  }
LABEL_11:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
