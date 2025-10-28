int sub_B38E8()
{
  int v0; // r5
  int v1; // r0
  _DWORD v3[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v5[4096]; // [sp+818h] [bp-1000h] BYREF

  v3[1] = "2";
  v3[0] = 0;
  pthread_mutex_lock((pthread_mutex_t *)&power_mutex);
  v0 = iic_init((int)v3);
  pthread_mutex_unlock((pthread_mutex_t *)&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_18C5E8 = v0;
  dword_18C5EC = 1;
  memset(byte_18C5F8, 0, 0x68u);
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_18C5F0 = v1;
    snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    V_LOCK();
    v0 = 0;
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_power_open",
      18,
      616,
      40,
      v5);
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power");
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    173,
    "bitmain_power_open",
    18,
    611,
    40,
    v5);
  if ( dword_18C5E8 && dword_18C5EC )
    return v0;
  sub_B3644();
  return v0;
}
