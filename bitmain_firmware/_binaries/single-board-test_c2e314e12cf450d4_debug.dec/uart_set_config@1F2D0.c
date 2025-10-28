int __fastcall uart_set_config(int a1, int a2, int *a3)
{
  int v8; // [sp+14h] [bp+14h]

  v8 = -5;
  if ( !a3 )
    return -3;
  pthread_mutex_lock(&uart_send_mutex[a1]);
  if ( a2 )
  {
    printf("%s:%d", "uart_set_config", 736);
    printf("unknown set config type = %d\n", a2);
  }
  else if ( platform_is_t9 )
  {
    v8 = fpga_write(dword_35588, *a3);
  }
  else
  {
    v8 = fpga_write(dword_3581C, *a3);
  }
  pthread_mutex_unlock(&uart_send_mutex[a1]);
  return v8;
}
