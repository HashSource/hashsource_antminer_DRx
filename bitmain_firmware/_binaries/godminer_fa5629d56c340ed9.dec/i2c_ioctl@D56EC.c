int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int *v7; // r0
  int *v8; // r8
  int v9; // r2
  void (__fastcall *v10)(_DWORD *, _DWORD *, int); // r3
  _DWORD v12[2]; // [sp+10h] [bp-1808h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1800h] BYREF
  char v14[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B605C) )
  {
    strcpy((char *)s, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
      171,
      "i2c_ioctl",
      9,
      432,
      100,
      v14);
    return -4;
  }
  else
  {
    v6 = new_iterator_c_map(dword_1B6058);
    if ( ((int (*)(void))*v6)() )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_8;
      }
      v7 = (int *)((int (*)(void))v6[2])();
      v8 = v7;
      if ( a2 == 1795 )
      {
        v9 = *v7;
        v10 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v6[1];
        v12[1] = a3;
        v12[0] = v9;
        v10(v6, v12, 8);
        snprintf((char *)s, 0x800u, "update the slave address to %d", a3);
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
          171,
          "i2c_ioctl",
          9,
          446,
          20,
          v14);
        free(v8);
      }
    }
LABEL_8:
    delete_iterator_c_map(v6);
    pthread_mutex_unlock(&stru_1B605C);
    return 0;
  }
}
