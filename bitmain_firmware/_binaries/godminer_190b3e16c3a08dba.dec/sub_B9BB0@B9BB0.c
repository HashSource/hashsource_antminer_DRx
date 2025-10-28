int __fastcall sub_B9BB0(int a1)
{
  int v3; // r2
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "chain offset %d, id %d, open pic error!\n", a1, g_chain_info[2 * a1]);
    V_UNLOCK();
    v3 = 145;
    goto LABEL_7;
  }
  if ( !pic1704_reset(g_chain_info[2 * a1]) )
  {
    printf("chain offset %d, id %d, reset pic error!\n", a1, g_chain_info[2 * a1]);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Sweep error string = J%d:5.", g_chain_info[2 * a1]);
    V_UNLOCK();
    v3 = 151;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/platform_device_hal.c",
      164,
      "dev_init_pic_for_one_chain",
      26,
      v3,
      100,
      v4);
    return -1;
  }
  usleep(0x493E0u);
  if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
  {
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    printf("chain offset %d, id %d, pic jump to app error!\n", a1, g_chain_info[2 * a1]);
    return -1;
  }
}
