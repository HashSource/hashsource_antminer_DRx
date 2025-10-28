int __fastcall clear_uart_rx_fifo(int a1)
{
  pthread_mutex_t *v2; // r4
  size_t v3; // r0
  unsigned int v4; // r6
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  const char *v8; // r2
  _DWORD *v9; // r3
  int v10; // r1
  const char *v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v16[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (pthread_mutex_t *)((char *)&unk_1B5494 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_C3194((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_C3594(a1, (int)v5, v4);
    if ( v4 != v7 )
    {
      LOWORD(v8) = 31988;
      HIWORD(v8) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
      snprintf(s, 0x800u, v8, "clear_uart_rx_fifo", a1, v4, v7);
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v9) = 24916;
      HIWORD(v9) = (unsigned int)&unk_1B503C >> 16;
      LOWORD(v10) = 31508;
      HIWORD(v10) = (unsigned int)" range(%d-%d)" >> 16;
      zlog(*v9, v10, 172, "clear_uart_rx_fifo", 18, 721, 100, v16);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  LOWORD(v12) = 31956;
  HIWORD(v12) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
  snprintf(s, 0x800u, v12, "clear_uart_rx_fifo", a1);
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v13) = 24916;
  HIWORD(v13) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v14) = 31508;
  HIWORD(v14) = (unsigned int)" range(%d-%d)" >> 16;
  zlog(*v13, v14, 172, "clear_uart_rx_fifo", 18, 711, 100, v16);
  set_miner_6060info_malloc_failed_err(1);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v2);
}
