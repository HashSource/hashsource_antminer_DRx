int __fastcall i2c_uninit(int a1)
{
  int v1; // r4
  int (**v2)(void); // r5
  int result; // r0
  int v4; // [sp+14h] [bp-7FCh] BYREF
  _DWORD s[512]; // [sp+18h] [bp-7F8h] BYREF
  char v6[4100]; // [sp+818h] [bp+8h] BYREF

  v4 = a1;
  v1 = pthread_mutex_lock(&stru_1B4F3C);
  if ( v1 )
  {
    strcpy((char *)s, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
             171,
             "i2c_uninit",
             10,
             61,
             100,
             v6);
  }
  else
  {
    if ( exists_c_map((int *)dword_1B4F38, (int)&v4) == (int *)1 )
    {
      snprintf((char *)s, 0x800u, "remove %d from callback list", v4);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_uninit",
        10,
        65,
        20,
        v6);
      remove_c_map((int *)dword_1B4F38, (int)&v4);
    }
    else
    {
      snprintf((char *)s, 0x800u, "ctx(%d) is not inited", v4);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_uninit",
        10,
        68,
        80,
        v6);
    }
    v2 = (int (**)(void))new_iterator_c_map(dword_1B4F38);
    if ( (*v2)() )
    {
      do
        ++v1;
      while ( ((int (__fastcall *)(int (**)(void)))*v2)(v2) );
      delete_iterator_c_map(v2);
      pthread_mutex_unlock(&stru_1B4F3C);
      snprintf((char *)s, 0x800u, "still have %d nodes", v1);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
               171,
               "i2c_uninit",
               10,
               84,
               20,
               v6);
    }
    else
    {
      delete_iterator_c_map(v2);
      pthread_mutex_unlock(&stru_1B4F3C);
      strcpy((char *)s, "all i2c uninited");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_i2c.c",
        171,
        "i2c_uninit",
        10,
        79,
        20,
        v6);
      dword_1B4F34 = 0;
      result = delete_c_map((void (__fastcall ***)(_DWORD))dword_1B4F38);
      dword_1B4F38 = 0;
    }
  }
  return result;
}
