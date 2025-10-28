int __fastcall set_hardware_type(int a1)
{
  int v2; // r1
  int v4; // [sp+14h] [bp-1808h] BYREF
  char v5[2040]; // [sp+18h] [bp-1804h] BYREF
  char v6[4100]; // [sp+818h] [bp-1004h] BYREF

  v4 = 0;
  if ( platform_inited )
  {
    fpga_read(0, &v4);
    v2 = v4;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v2 = v4 | 0x80000000;
        v4 |= 0x80000000;
      }
    }
    else
    {
      v2 = v4 & 0x7FFFFFFF;
      v4 &= ~0x80000000;
    }
    fpga_write(0, v2);
    return 0;
  }
  else
  {
    strcpy(v5, "platform not inited");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_common.c",
      174,
      "set_hardware_type",
      17,
      257,
      100,
      v6);
    return -2;
  }
}
