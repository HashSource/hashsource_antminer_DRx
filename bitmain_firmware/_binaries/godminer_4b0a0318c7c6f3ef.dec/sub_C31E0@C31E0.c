int __fastcall sub_C31E0(int a1, int a2)
{
  int v3; // r7
  int *v4; // r11
  int v5; // r4
  int v7; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v9[1025]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 == 1 )
  {
    v3 = 941;
  }
  else
  {
    if ( a1 != 2 )
    {
      strcpy(s, "unsuported gpio port");
      V_LOCK();
      logfmt_raw((char *)v9, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
        170,
        "gpio_ctrl_ui",
        12,
        273,
        100,
        v9);
      return -1;
    }
    v3 = 942;
  }
  snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d", a1, v3, a2);
  V_LOCK();
  logfmt_raw((char *)v9, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_ui.c",
    170,
    "gpio_ctrl_ui",
    12,
    277,
    20,
    v9);
  if ( pthread_mutex_lock(&stru_1B44F8) )
  {
    strcpy(s, "failed to api lock");
    V_LOCK();
    logfmt_raw((char *)v9, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
      170,
      "gpio_ctrl_ui",
      12,
      280,
      100,
      v9);
    return -1;
  }
  v4 = (int *)dword_1B4510;
  if ( a2 == 1 )
  {
    sub_C301C((int *)v3, (int *)dword_1B4510);
    v5 = gpio_write(v3, 0);
    pthread_mutex_unlock(&stru_1B44F8);
  }
  else if ( a2 == 2 )
  {
    v7 = v3;
    if ( dword_1B4510 )
    {
      v5 = -1;
      if ( exists_c_map((int *)dword_1B4510, (int)&v7) )
      {
        snprintf(s, 0x800u, "port %d already exist in map", v7);
        V_LOCK();
        logfmt_raw((char *)v9, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
          170,
          "add_port_to_gpio_map",
          20,
          227,
          20,
          v9);
      }
      else
      {
        snprintf(s, 0x800u, "add %d to flicker map with interval %d", v7, 200);
        V_LOCK();
        logfmt_raw((char *)v9, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
          170,
          "add_port_to_gpio_map",
          20,
          221,
          20,
          v9);
        v9[0] = 200;
        v9[1] = 0;
        v9[2] = 1;
        insert_c_map(v4, &v7, 4u, v9, 0xCu);
      }
    }
    else
    {
      v5 = -1;
    }
    pthread_mutex_unlock(&stru_1B44F8);
  }
  else
  {
    sub_C301C((int *)v3, (int *)dword_1B4510);
    v5 = gpio_write(v3, 1);
    pthread_mutex_unlock(&stru_1B44F8);
  }
  return v5;
}
