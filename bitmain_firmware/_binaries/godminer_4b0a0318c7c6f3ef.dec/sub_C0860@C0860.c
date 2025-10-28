int sub_C0860()
{
  _DWORD *v0; // r5
  void (__fastcall *v1)(_DWORD *, _DWORD *, int); // r3
  int v2; // r8
  _DWORD *v3; // r6
  int v4; // r7
  unsigned __int8 v6; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _DWORD v8[1025]; // [sp+820h] [bp-1004h] BYREF

  while ( dword_1B41C4 )
  {
    if ( !pthread_mutex_lock(&stru_1B4190) )
    {
      v0 = new_iterator_c_map(dword_1B41A8);
      if ( ((int (*)(void))*v0)() )
      {
        while ( 1 )
        {
          v2 = v0[5];
          v3 = (_DWORD *)((int (*)(void))v0[2])();
          v4 = ***(_DWORD ***)(v2 + 16);
          v6 = 0;
          if ( gpio_read(v4, &v6) )
            break;
          if ( v3[1] != v6 )
          {
            snprintf(s, 0x800u, "gpio port %d, last val = %d, new val = %d", ***(_DWORD ***)(v2 + 16), v3[1], v6);
            V_LOCK();
            logfmt_raw((char *)v8, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
              172,
              "gpio_thread_function",
              20,
              72,
              20,
              v8);
            ((void (__fastcall *)(int, _DWORD))*v3)(v4, v6);
            v1 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v0[1];
            v8[0] = *v3;
            v8[1] = v6;
            v1(v0, v8, 8);
          }
          free(v3);
          if ( !((int (__fastcall *)(_DWORD *))*v0)(v0) )
            goto LABEL_12;
        }
        snprintf(s, 0x800u, "failed to read gpio port %d", v4);
        V_LOCK();
        logfmt_raw((char *)v8, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          172,
          "gpio_thread_function",
          20,
          65,
          20,
          v8);
        free(v3);
      }
LABEL_12:
      delete_iterator_c_map(v0);
      pthread_mutex_unlock(&stru_1B4190);
    }
    usleep(0x30D40u);
  }
  return 0;
}
