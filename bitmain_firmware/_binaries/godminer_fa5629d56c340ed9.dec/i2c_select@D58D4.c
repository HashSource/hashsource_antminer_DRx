int __fastcall i2c_select(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r7
  void (__fastcall *v6)(_DWORD *, _DWORD *, int); // r3
  int v7; // r2
  _DWORD v9[2]; // [sp+10h] [bp-180Ch] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  char v11[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1B605C) )
  {
    strcpy((char *)s, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
      171,
      "i2c_select",
      10,
      465,
      100,
      v11);
    return -4;
  }
  else
  {
    v4 = new_iterator_c_map(dword_1B6058);
    if ( ((int (*)(void))*v4)() )
    {
      while ( ***(_DWORD ***)(v4[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v4)(v4) )
          goto LABEL_7;
      }
      v5 = (_DWORD *)((int (*)(void))v4[2])();
      v6 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v4[1];
      v7 = v5[1];
      v9[0] = a2;
      v9[1] = v7;
      v6(v4, v9, 8);
      snprintf((char *)s, 0x800u, "update the master address to %d", a2);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_select",
        10,
        476,
        20,
        v11);
      free(v5);
    }
LABEL_7:
    delete_iterator_c_map(v4);
    pthread_mutex_unlock(&stru_1B605C);
    return 0;
  }
}
