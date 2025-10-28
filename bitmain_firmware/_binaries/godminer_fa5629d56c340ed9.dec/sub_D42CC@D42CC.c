unsigned int __fastcall sub_D42CC(_BYTE *a1)
{
  int v2; // r5
  unsigned int result; // r0
  int v4; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v6[4096]; // [sp+818h] [bp-1000h] BYREF

  v2 = 601;
  v4 = 0;
  do
  {
    fpga_read(48, &v4);
    snprintf(s, 0x800u, "read status r = 0x%04x", v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
      171,
      "wait4i2c_data",
      13,
      156,
      20,
      v6);
    if ( v4 < 0 )
    {
      result = (unsigned int)v4 >> 31;
      *a1 = v4;
      return result;
    }
    usleep(0x1388u);
    --v2;
  }
  while ( v2 );
  return 0;
}
