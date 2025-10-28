int __fastcall clear_uart_rx_fifo(int a1)
{
  void *ptr; // [sp+14h] [bp+Ch]
  int size; // [sp+18h] [bp+10h]
  int uart_data_in_fpga; // [sp+1Ch] [bp+14h]

  pthread_mutex_lock(&uart_receive_mutex[a1]);
  size = check_how_many_uart_data_in_fpga(a1);
  if ( !size )
    return pthread_mutex_unlock(&uart_receive_mutex[a1]);
  ptr = malloc(size);
  if ( ptr )
  {
    uart_data_in_fpga = read_uart_data_in_fpga(a1, (int)ptr, size);
    if ( uart_data_in_fpga != size )
    {
      printf("%s:%d", "clear_uart_rx_fifo", 840);
      printf(
        "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
        "clear_uart_rx_fifo",
        a1,
        size,
        uart_data_in_fpga);
    }
    free(ptr);
    usleep(0x2710u);
    return pthread_mutex_unlock(&uart_receive_mutex[a1]);
  }
  else
  {
    printf("%s:%d", "clear_uart_rx_fifo", 831);
    printf("%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
    usleep((__useconds_t)&unk_7A120);
    return pthread_mutex_unlock(&uart_receive_mutex[a1]);
  }
}
