int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  size_t v5; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v8[2048]; // [sp+50h] [bp-1800h] BYREF
  char v9[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B52CC) )
  {
    v3 = -1;
    strcpy(v8, "failed to api lock");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_unexport",
      13,
      273,
      100,
      v9);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( !v2 )
  {
    v4 = open64("/sys/class/gpio/unexport");
    if ( v4 < 0 )
    {
      strcpy(v8, "Failed to open unexport for writing!");
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      v3 = -2;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
        172,
        "gpio_unexport",
        13,
        290,
        100,
        v9);
      pthread_mutex_unlock(&stru_1B52CC);
    }
    else
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        snprintf(v8, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        v3 = -2;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          172,
          "gpio_unexport",
          13,
          298,
          100,
          v9);
      }
      else
      {
        snprintf(v8, 0x800u, "unexport gpio %d success", a1);
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          172,
          "gpio_unexport",
          13,
          304,
          20,
          v9);
      }
      close(v4);
      pthread_mutex_unlock(&stru_1B52CC);
    }
    return v3;
  }
  snprintf(v8, 0x800u, "port %d already unexported, ret = %d", a1, v2);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_gpio.c",
    172,
    "gpio_unexport",
    13,
    281,
    80,
    v9);
  pthread_mutex_unlock(&stru_1B52CC);
  return 0;
}
