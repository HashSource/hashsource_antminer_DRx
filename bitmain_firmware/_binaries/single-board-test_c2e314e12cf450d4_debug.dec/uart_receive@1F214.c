int __fastcall uart_receive(int a1, int a2, unsigned int a3)
{
  int uart_data_in_fpga; // [sp+18h] [bp+18h]
  unsigned int v9; // [sp+1Ch] [bp+1Ch]

  pthread_mutex_lock(&uart_receive_mutex[a1]);
  v9 = check_how_many_uart_data_in_fpga(a1);
  if ( v9 > a3 )
    v9 = a3;
  if ( v9 )
  {
    uart_data_in_fpga = read_uart_data_in_fpga(a1, a2, v9);
    pthread_mutex_unlock(&uart_receive_mutex[a1]);
    return uart_data_in_fpga;
  }
  else
  {
    pthread_mutex_unlock(&uart_receive_mutex[a1]);
    return 0;
  }
}
