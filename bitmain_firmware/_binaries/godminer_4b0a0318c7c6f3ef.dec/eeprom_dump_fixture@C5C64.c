int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v4[4100]; // [sp+820h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%-30s : 0x%04x", 1535732, *a1 & 0xF);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    469,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", 1535760, *a1 >> 4);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    470,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", 1535776, a1[1]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    471,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", 1535796, a1[49]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    472,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", 1535816, a1[50]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    473,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", 1535832, *(_DWORD *)(a1 + 35));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    474,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x", "fixture_fmt_version", a1[2]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    475,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", 1535896, *(_DWORD *)(a1 + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    477,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pcb", a1[31], a1[32]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    478,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "bom", a1[33], a1[34]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    479,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "hash_board_voltage", *(unsigned __int16 *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    480,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "hash_board_freq", *(unsigned __int16 *)(a1 + 41));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    481,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 43));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    482,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "inlet_temperature", a1[47]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    483,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "outlet_temperature", a1[48]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    484,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "asic sensor", a1[24] >> 7, a1[24] & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    485,
    100,
    v4);
  snprintf(
    s,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x",
    1536060,
    **(unsigned __int8 **)(a1 + 25),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    486,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pic sensor", a1[29] >> 7, a1[29] & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    487,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x", "pic sensor addr", a1[30]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    488,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : bin%d", 1536140, a1[15]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    489,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", 1536168, *((_DWORD *)a1 + 4));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    490,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", 1536172, *(_DWORD *)(a1 + 7));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    491,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", 1536184, *(_DWORD *)(a1 + 11));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    492,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : P%d", 1536200, a1[55]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
           170,
           "eeprom_dump_fixture",
           19,
           493,
           100,
           v4);
}
