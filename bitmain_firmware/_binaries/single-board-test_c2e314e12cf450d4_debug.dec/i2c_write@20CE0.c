int __fastcall i2c_write(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+Ch] [bp+Ch] BYREF
  void *ptr; // [sp+10h] [bp+10h] BYREF
  _DWORD *v9; // [sp+14h] [bp+14h]
  int v10; // [sp+18h] [bp+18h]
  unsigned int i; // [sp+1Ch] [bp+1Ch]

  v7 = a1;
  i = 0;
  if ( pthread_mutex_lock(&i2c_mutex) )
  {
    printf("%s:%d", "i2c_write", 186);
    puts("failed to i2c lock");
    return -1;
  }
  else
  {
    v10 = 0;
    ptr = 0;
    if ( find_c_map((int *)i2c_ctx_map, (int)&v7, &ptr) == 1 )
    {
      v9 = ptr;
      for ( i = 0; i < a3; ++i )
      {
        v10 = *(unsigned __int8 *)(a2 + i) | (*v9 << 26) | (v9[1] >> 4 << 20) | (((v9[1] >> 1) & 7) << 16);
        if ( !wait4i2c_ready() )
        {
          free(ptr);
          printf("%s:%d", "i2c_write", 200);
          puts("iic not ready 4 write");
          pthread_mutex_unlock(&i2c_mutex);
          return -2;
        }
        if ( platform_is_t9 )
          fpga_write(dword_3557C, v10);
        else
          fpga_write(dword_35810, v10);
      }
      free(ptr);
      pthread_mutex_unlock(&i2c_mutex);
      return a3;
    }
    else
    {
      printf("%s:%d", "i2c_write", 210);
      printf("ctx %d not inited\n", v7);
      pthread_mutex_unlock(&i2c_mutex);
      return -2;
    }
  }
}
