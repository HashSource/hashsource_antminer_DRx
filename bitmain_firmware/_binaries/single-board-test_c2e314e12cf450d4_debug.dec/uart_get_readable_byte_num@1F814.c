int __fastcall uart_get_readable_byte_num(int a1)
{
  int v3; // [sp+Ch] [bp+Ch]

  pthread_mutex_lock(&uart_receive_mutex[a1]);
  v3 = check_how_many_uart_data_in_fpga(a1);
  pthread_mutex_unlock(&uart_receive_mutex[a1]);
  return v3;
}
