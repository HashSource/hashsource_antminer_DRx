int __fastcall set_bt8d_control(int a1)
{
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
    return fpga_write(60, a1);
  strcpy(v2, "platform not inited");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007/7007_common.c",
           174,
           "set_bt8d_control",
           16,
           1042,
           100,
           v3);
}
