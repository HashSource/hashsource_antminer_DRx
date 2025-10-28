int platform_init()
{
  int v0; // r5
  int v2; // r0
  int v3; // r3
  int v4; // [sp+14h] [bp-1804h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1800h] BYREF
  char v6[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( platform_inited )
    return 0;
  strcpy((char *)s, "platform_init");
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_common.c",
    174,
    "platform_init",
    13,
    63,
    60,
    v6);
  if ( fpga_init() )
  {
    v0 = -1;
    strcpy((char *)s, "fpga init failed");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v2 = g_zc;
    v3 = 67;
LABEL_9:
    zlog(
      v2,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_common.c",
      174,
      "platform_init",
      13,
      v3,
      100,
      v6);
    return v0;
  }
  if ( gpio_init() )
  {
    v0 = -2;
    strcpy((char *)s, "gpio init failed");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v2 = g_zc;
    v3 = 73;
    goto LABEL_9;
  }
  memset(&unk_1B5148, 0, 0x124u);
  v4 = 0;
  fpga_read(0, &v4);
  v4 |= 0x20000000u;
  snprintf((char *)s, 0x800u, "HARDWARE_VERSION = 0x%x", v4);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_common.c",
    174,
    "platform_init",
    13,
    86,
    40,
    v6);
  fpga_write(0, v4);
  platform_inited = 1;
  fan_init();
  uart_init();
  return 0;
}
