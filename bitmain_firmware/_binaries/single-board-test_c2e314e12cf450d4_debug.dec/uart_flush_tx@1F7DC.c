int __fastcall uart_flush_tx(int a1)
{
  clear_uart_tx_fifo(a1);
  return 0;
}
