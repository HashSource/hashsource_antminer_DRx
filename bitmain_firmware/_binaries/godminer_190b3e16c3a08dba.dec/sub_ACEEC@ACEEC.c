int __fastcall sub_ACEEC(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  unsigned int v4; // r3
  int v6; // r2
  int v7; // [sp+14h] [bp-1814h] BYREF
  int v8; // [sp+18h] [bp-1810h] BYREF
  int v9; // [sp+1Ch] [bp-180Ch] BYREF
  unsigned int v10; // [sp+20h] [bp-1808h] BYREF
  int v11; // [sp+24h] [bp-1804h] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  char v13[4096]; // [sp+828h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_18C1CC + 24 * a1);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  pthread_mutex_lock(v1);
  if ( sub_ACA54(a1, &v11, &v7, &v8, &v9) )
  {
    snprintf(s, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    v6 = 660;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
      172,
      "clear_uart_tx_fifo",
      18,
      v6,
      100,
      v13);
  }
  else
  {
    v3 = 21;
    while ( 1 )
    {
      fpga_read(v7, &v10);
      v4 = (unsigned __int8)(v10 >> v11);
      v10 = v4;
      if ( v4 == 255 )
        break;
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      fpga_write(v8, v10 | 0x80000000);
      usleep(0xBB8u);
      if ( !--v3 )
      {
        snprintf(s, 0x800u, "%s: uart%d always dose not has enough send fifo space, break", "clear_uart_tx_fifo", a1);
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, s);
        V_UNLOCK();
        v6 = 681;
        goto LABEL_7;
      }
    }
  }
  return pthread_mutex_unlock(v1);
}
