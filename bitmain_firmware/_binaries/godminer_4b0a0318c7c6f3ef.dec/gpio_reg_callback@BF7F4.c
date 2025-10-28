int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v4; // r2
  int v5; // [sp+14h] [bp-1808h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v7[1025]; // [sp+818h] [bp-1004h] BYREF

  v5 = a1;
  if ( !a2 )
  {
    strcpy((char *)s, "bad param");
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 147;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_1B4190) )
  {
    strcpy((char *)s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 152;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_reg_callback",
      17,
      v4,
      100,
      v7);
    return -1;
  }
  if ( exists_c_map((int *)dword_1B41A8, (int)&v5) )
  {
    snprintf((char *)s, 0x800u, "port %d already exist in callback map ", v5);
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_reg_callback",
      17,
      165,
      20,
      v7);
  }
  else
  {
    snprintf((char *)s, 0x800u, "add %d to callback map", v5);
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_reg_callback",
      17,
      158,
      20,
      v7);
    v7[0] = a2;
    v7[1] = -1;
    insert_c_map((int *)dword_1B41A8, &v5, 4u, v7, 8u);
  }
  pthread_mutex_unlock(&stru_1B4190);
  return 0;
}
