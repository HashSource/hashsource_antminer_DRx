int __fastcall uart_get_config(int a1, int a2, _DWORD *a3, int a4)
{
  int v9; // [sp+14h] [bp+14h] BYREF
  int v10; // [sp+18h] [bp+18h] BYREF
  int v11; // [sp+1Ch] [bp+1Ch]

  v11 = -5;
  if ( !a3 || a4 )
    return -3;
  pthread_mutex_lock(&uart_send_mutex[a1]);
  if ( a2 )
  {
    printf("%s:%d", "uart_get_config", 767);
    printf("unknown set config type = %d\n", a2);
  }
  else
  {
    if ( platform_is_t9 )
    {
      v10 = 0;
      v11 = fpga_read(dword_35588, &v10);
      *a3 = v10;
    }
    else
    {
      v9 = 0;
      v11 = fpga_read(dword_3581C, &v9);
      *a3 = v9;
    }
    MEMORY[0] = 4;
    printf("%s:%d", "uart_get_config", 764);
    printf("uart_get_config return %d\n", *a3);
  }
  pthread_mutex_unlock(&uart_send_mutex[a1]);
  return v11;
}
