int __fastcall iic_init(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r2
  int v5; // r0
  _DWORD s[512]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B41CC) )
  {
    v2 = -4;
    strcpy((char *)s, "failed to iic lock");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
      171,
      "iic_init",
      8,
      20,
      100,
      v8);
    return v2;
  }
  if ( a1 )
  {
    v2 = i2c_init();
    if ( v2 < 0 )
    {
      v2 = -1;
      strcpy((char *)s, "failed to i2c_init");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
        171,
        "iic_init",
        8,
        32,
        100,
        v8);
    }
    else
    {
      snprintf(
        (char *)s,
        0x800u,
        "i2c chain = %d, master = 0x%x, slave high= 0x%x, slave low = 0x%x",
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 7));
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
        171,
        "iic_init",
        8,
        36,
        20,
        v8);
      if ( i2c_select(v2, *(unsigned __int16 *)(a1 + 4)) )
      {
        strcpy((char *)s, "failed to i2c_select");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, s);
        V_UNLOCK();
        v3 = g_zc;
        v4 = 38;
        goto LABEL_6;
      }
      if ( i2c_ioctl(v2, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        strcpy((char *)s, "failed to i2c_ioctl");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, s);
        V_UNLOCK();
        v3 = g_zc;
        v4 = 43;
LABEL_6:
        zlog(
          v3,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
          171,
          "iic_init",
          8,
          v4,
          100,
          v8);
        if ( v2 )
        {
          v5 = v2;
          v2 = -1;
          i2c_uninit(v5);
        }
        else
        {
          v2 = -1;
        }
      }
    }
  }
  else
  {
    v2 = -3;
    strcpy((char *)s, "bad param");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
      171,
      "iic_init",
      8,
      26,
      100,
      v8);
  }
  pthread_mutex_unlock(&stru_1B41CC);
  return v2;
}
