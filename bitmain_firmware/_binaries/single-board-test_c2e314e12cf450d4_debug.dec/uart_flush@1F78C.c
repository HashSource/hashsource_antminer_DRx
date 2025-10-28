int __fastcall uart_flush(int a1)
{
  printf("%s:%d", "uart_flush", 859);
  printf("flush uart %d\n", a1);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  clear_uart_tx_fifo(a1);
  return 0;
}
