int __fastcall fan_get_realtime_speed(int a1)
{
  int v2; // r5
  unsigned int v4; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v6[4096]; // [sp+818h] [bp-1000h] BYREF

  v2 = 8;
  v4 = 0;
  while ( 1 )
  {
    fpga_read(4, &v4);
    snprintf(s, 0x800u, "FAN_SPEED fpga value = 0x%x", v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_fan.c",
      171,
      "fan_get_realtime_speed",
      22,
      56,
      20,
      v6);
    if ( ((v4 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v2 )
      return -1;
  }
  return 120 * (unsigned __int8)v4;
}
