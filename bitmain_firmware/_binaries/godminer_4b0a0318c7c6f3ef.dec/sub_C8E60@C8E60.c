int sub_C8E60()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  pthread_mutex_lock(&power_mutex);
  strcpy(v1, "bitmain power close ===========");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    173,
    "bitmain_power_close",
    19,
    665,
    40,
    v2);
  iic_uninit(dword_1B45F8);
  dword_1B45FC = 0;
  dword_1B4600 = 0;
  memset(&unk_1B4610, 0, 0xC0u);
  return pthread_mutex_unlock(&power_mutex);
}
