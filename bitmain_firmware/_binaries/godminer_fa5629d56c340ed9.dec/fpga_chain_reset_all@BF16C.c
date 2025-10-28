int fpga_chain_reset_all()
{
  unsigned int v1; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v3[4100]; // [sp+818h] [bp-1004h] BYREF

  v1 = 0;
  fpga_read(52, &v1);
  fpga_write(52, ~(~HIWORD(v1) << 16));
  sleep(3u);
  fpga_read(52, &v1);
  fpga_write(52, HIWORD(v1) << 16);
  sleep(1u);
  snprintf(s, 0x800u, "fpga fpga_chain_reset_all success 0x%x", v1);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007/7007_common.c",
           174,
           "fpga_chain_reset_all",
           20,
           369,
           20,
           v3);
}
