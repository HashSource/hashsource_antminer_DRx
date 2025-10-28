int __fastcall gpio_export(int a1)
{
  int v2; // r6
  size_t v3; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v6[2048]; // [sp+50h] [bp-1800h] BYREF
  char v7[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B52CC) )
  {
    strcpy(v6, "failed to api lock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      172,
      "gpio_export",
      11,
      221,
      100,
      v7);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      v2 = open64("/sys/class/gpio/export");
      if ( v2 < 0 )
      {
        strcpy(v6, "Failed to open export for writing!");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          172,
          "gpio_export",
          11,
          238,
          100,
          v7);
        pthread_mutex_unlock(&stru_1B52CC);
        return -2;
      }
      else
      {
        v3 = snprintf(s, 0x40u, "%d", a1);
        if ( write(v2, s, v3) < 0 )
        {
          snprintf(v6, 0x800u, "Failed to export gpio %d!", a1);
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
            172,
            "gpio_export",
            11,
            246,
            100,
            v7);
          close(v2);
          pthread_mutex_unlock(&stru_1B52CC);
          return -3;
        }
        else
        {
          snprintf(v6, 0x800u, "export gpio %d success", a1);
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
            172,
            "gpio_export",
            11,
            251,
            20,
            v7);
          close(v2);
          pthread_mutex_unlock(&stru_1B52CC);
          return 0;
        }
      }
    }
    else
    {
      snprintf(v6, 0x800u, "port %d already exported", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
        172,
        "gpio_export",
        11,
        229,
        80,
        v7);
      pthread_mutex_unlock(&stru_1B52CC);
      return 0;
    }
  }
}
