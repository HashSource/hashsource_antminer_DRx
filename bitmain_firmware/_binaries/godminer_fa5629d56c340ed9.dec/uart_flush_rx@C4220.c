int __fastcall uart_flush_rx(int a1)
{
  clear_uart_rx_fifo(a1);
  return 0;
}
