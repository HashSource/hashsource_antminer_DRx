int __fastcall iic_read(int a1, _BYTE *a2, int a3)
{
  int v6; // r4
  char v8[2048]; // [sp+10h] [bp-1800h] BYREF
  char v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B52EC) )
  {
    v6 = -4;
    strcpy(v8, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
      171,
      "iic_read",
      8,
      83,
      100,
      v9);
  }
  else
  {
    v6 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&stru_1B52EC);
  }
  return v6;
}
