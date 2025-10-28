int __fastcall read_fpga_id(char *a1)
{
  int v3; // [sp+10h] [bp-1808h] BYREF
  int v4; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v6[4096]; // [sp+818h] [bp-1000h] BYREF

  v3 = 0;
  v4 = 0;
  fpga_read(240, &v3);
  fpga_read(244, &v4);
  sprintf(a1, "%08x%08x", v4, v3);
  snprintf(s, 0x800u, "%x %x", v3, v4);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007/7007_common.c",
           174,
           "read_fpga_id",
           12,
           379,
           100,
           v6);
}
