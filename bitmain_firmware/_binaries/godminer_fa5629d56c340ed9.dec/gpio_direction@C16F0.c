int __fastcall gpio_direction(int a1, int a2)
{
  int v4; // r0
  int v5; // r8
  bool v6; // zf
  size_t v7; // r2
  const char *v8; // r5
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v11[2048]; // [sp+50h] [bp-1800h] BYREF
  char v12[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B52CC) )
  {
    strcpy(v11, "failed to api lock");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_direction",
      14,
      327,
      100,
      v12);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v4 = open64(s);
    v5 = v4;
    if ( v4 < 0 )
    {
      snprintf(v11, 0x800u, "Failed to open gpio %d direction for writing!", a1);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
        172,
        "gpio_direction",
        14,
        334,
        100,
        v12);
      pthread_mutex_unlock(&stru_1B52CC);
      return -2;
    }
    else
    {
      v6 = a2 == 0;
      if ( a2 )
        v7 = 3;
      else
        v7 = 2;
      v8 = "out";
      if ( v6 )
        v8 = "in";
      if ( write(v4, v8, v7) < 0 )
      {
        snprintf(v11, 0x800u, "Failed to set gpio %d direction %s !", a1, v8);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          172,
          "gpio_direction",
          14,
          343,
          100,
          v12);
        close(v5);
        pthread_mutex_unlock(&stru_1B52CC);
        return -3;
      }
      else
      {
        snprintf(v11, 0x800u, "set gpio %d direction %s success!", a1, v8);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          172,
          "gpio_direction",
          14,
          350,
          20,
          v12);
        close(v5);
        pthread_mutex_unlock(&stru_1B52CC);
        return 0;
      }
    }
  }
}
