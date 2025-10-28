int __fastcall iic_init(int a1)
{
  int v4; // [sp+10h] [bp+8h]
  int v5; // [sp+14h] [bp+Ch]

  v4 = 0;
  if ( pthread_mutex_lock(&iic_mutex) )
  {
    printf("%s:%d", "iic_init", 19);
    puts("failed to iic lock");
    return -4;
  }
  else
  {
    if ( a1 )
    {
      v4 = i2c_init();
      if ( v4 >= 0 )
      {
        printf("%s:%d", "iic_init", 35);
        printf(
          "i2c chain = %d, master = 0x%x, slave high= 0x%x, slave low = 0x%x\n",
          *(_DWORD *)a1,
          *(unsigned __int16 *)(a1 + 4),
          *(unsigned __int8 *)(a1 + 6),
          *(unsigned __int8 *)(a1 + 7));
        if ( i2c_select(v4, *(unsigned __int16 *)(a1 + 4)) )
        {
          printf("%s:%d", "iic_init", 37);
          puts("failed to i2c_select");
          v5 = -1;
        }
        else
        {
          if ( !i2c_ioctl(v4, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
          {
            pthread_mutex_unlock(&iic_mutex);
            return v4;
          }
          printf("%s:%d", "iic_init", 42);
          puts("failed to i2c_ioctl");
          v5 = -1;
        }
      }
      else
      {
        printf("%s:%d", "iic_init", 31);
        puts("failed to i2c_init");
        v5 = -1;
      }
    }
    else
    {
      printf("%s:%d", "iic_init", 25);
      puts("bad param");
      v5 = -3;
    }
    if ( v4 > 0 )
      i2c_uninit(v4);
    pthread_mutex_unlock(&iic_mutex);
    return v5;
  }
}
