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

  v2 = (pthread_mutex_t *)((char *)&unk_1B4374 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_C1E0C((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_C220C(a1, (int)v5, v4);
    if ( v4 != v7 )
    {
      LOWORD(v8) = 25604;
      HIWORD(v8) = (unsigned int)"m_fixture_info" >> 16;
      snprintf(s, 0x800u, v8, "clear_uart_rx_fifo", a1, v4, v7);
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v9) = 20532;
      HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v10) = 25124;
      HIWORD(v10) = (unsigned int)"unsuported gpio port" >> 16;
      zlog(*v9, v10, 172, "clear_uart_rx_fifo", 18, 721, 100, v16);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  LOWORD(v12) = 25572;
  HIWORD(v12) = (unsigned int)"fixture_crc_pass" >> 16;
  snprintf(s, 0x800u, v12, "clear_uart_rx_fifo", a1);
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v13) = 20532;
  HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v14) = 25124;
  HIWORD(v14) = (unsigned int)"unsuported gpio port" >> 16;
  zlog(*v13, v14, 172, "clear_uart_rx_fifo", 18, 711, 100, v16);
  set_miner_6060info_malloc_failed_err(1);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v2);
}
