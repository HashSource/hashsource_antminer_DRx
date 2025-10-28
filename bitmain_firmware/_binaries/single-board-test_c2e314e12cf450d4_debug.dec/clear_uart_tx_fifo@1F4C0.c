int __fastcall clear_uart_tx_fifo(int a1)
{
  int v3; // [sp+10h] [bp+8h] BYREF
  unsigned int v4; // [sp+14h] [bp+Ch] BYREF
  int v5; // [sp+18h] [bp+10h] BYREF
  int v6; // [sp+1Ch] [bp+14h] BYREF
  int v7; // [sp+20h] [bp+18h] BYREF
  unsigned int i; // [sp+24h] [bp+1Ch]

  v7 = 0;
  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  i = 0;
  pthread_mutex_lock(&uart_send_mutex[a1]);
  if ( get_send_address_info(a1, &v3, &v7, &v6, &v5) )
  {
    printf("%s:%d", "clear_uart_tx_fifo", 783);
    printf("get_send_address_info error, chain_id = %d\n", a1);
    return pthread_mutex_unlock(&uart_send_mutex[a1]);
  }
  else
  {
    for ( i = 0; i <= 0x14; ++i )
    {
      fpga_read(v7, &v4);
      v4 = (unsigned __int8)(v4 >> v3);
      if ( v4 == 255 )
        return pthread_mutex_unlock(&uart_send_mutex[a1]);
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      usleep(0xBB8u);
    }
    printf("%s:%d", "clear_uart_tx_fifo", 803);
    printf("%s: uart%d always dose not has enough send fifo space, break\n", "clear_uart_tx_fifo", a1);
    return pthread_mutex_unlock(&uart_send_mutex[a1]);
  }
}
