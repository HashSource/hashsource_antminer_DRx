int __fastcall uart_flush(int a1)
{
  const char *v1; // r2
  _DWORD *v3; // r3
  int v4; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v1) = 25660;
  HIWORD(v1) = (unsigned int)"r_type" >> 16;
  snprintf(s, 0x800u, v1, a1);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = 25124;
  HIWORD(v4) = (unsigned int)"unsuported gpio port" >> 16;
  zlog(*v3, v4, 172, "uart_flush", 10, 740, 20, v7);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_C204C(a1);
  return 0;
}
