int __fastcall uart_flush(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "flush uart %d", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_uart.c",
    172,
    "uart_flush",
    10,
    738,
    20,
    v4);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_ACEEC(a1);
  return 0;
}
