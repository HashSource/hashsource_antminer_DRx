int __fastcall iic_uninit(int a1)
{
  char v3[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B41CC) )
  {
    strcpy(v3, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
             171,
             "iic_uninit",
             10,
             64,
             100,
             v4);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_1B41CC);
  }
}
