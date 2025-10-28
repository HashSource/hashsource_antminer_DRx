int __fastcall clear_uart_rx_fifo(int a1)
{
  pthread_mutex_t *v2; // r4
  size_t v3; // r0
  unsigned int v4; // r6
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (pthread_mutex_t *)((char *)&unk_18C34C + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_ACCAC((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_AD0AC(a1, (int)v5, v4);
    if ( v7 != v4 )
    {
      snprintf(s, 0x800u, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d", "clear_uart_rx_fifo", a1, v4, v7);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
        172,
        "clear_uart_rx_fifo",
        18,
        719,
        100,
        v10);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  snprintf(s, 0x800u, "%s: uart%d malloc buffer error", "clear_uart_rx_fifo", a1);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_uart.c",
    172,
    "clear_uart_rx_fifo",
    18,
    709,
    100,
    v10);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, 1246128, 1249156);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_uart.c",
    172,
    "clear_uart_rx_fifo",
    18,
    710,
    100,
    v10);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v2);
}
