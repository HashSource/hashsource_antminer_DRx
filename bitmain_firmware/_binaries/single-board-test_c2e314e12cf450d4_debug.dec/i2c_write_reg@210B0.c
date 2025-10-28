int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  int v9; // [sp+Ch] [bp+Ch] BYREF
  void *ptr; // [sp+10h] [bp+10h] BYREF
  _DWORD *v11; // [sp+14h] [bp+14h]
  unsigned int v12; // [sp+18h] [bp+18h]
  unsigned int i; // [sp+1Ch] [bp+1Ch]

  v9 = a1;
  i = 0;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&i2c_mutex) )
    {
      printf("%s:%d", "i2c_write_reg", 300);
      puts("failed to i2c lock");
      return -1;
    }
    else
    {
      v12 = 0;
      ptr = 0;
      if ( find_c_map((int *)i2c_ctx_map, (int)&v9, &ptr) == 1 )
      {
        v11 = ptr;
        for ( i = 0; i < a5; ++i )
        {
          v12 = *(unsigned __int8 *)(a4 + i)
              | (*v11 << 26)
              | (v11[1] >> 4 << 20)
              | (((v11[1] >> 1) & 7) << 16)
              | ((*a2 + i) << 8)
              | 0x1000000;
          if ( !wait4i2c_ready() )
          {
            printf("%s:%d", "i2c_write_reg", 315);
            puts("iic not ready 4 write");
            free(ptr);
            pthread_mutex_unlock(&i2c_mutex);
            return -2;
          }
          if ( platform_is_t9 )
            fpga_write(dword_3557C, v12);
          else
            fpga_write(dword_35810, v12);
        }
        free(ptr);
        pthread_mutex_unlock(&i2c_mutex);
        return a5;
      }
      else
      {
        printf("%s:%d", "i2c_write_reg", 326);
        printf("ctx %d not inited\n", v9);
        pthread_mutex_unlock(&i2c_mutex);
        return -2;
      }
    }
  }
  else
  {
    printf("%s:%d", "i2c_write_reg", 296);
    puts("more than one byte reg address is not supported");
    return -3;
  }
}
