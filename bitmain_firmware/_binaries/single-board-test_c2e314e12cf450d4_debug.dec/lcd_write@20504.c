int __fastcall lcd_write(int a1, unsigned __int8 a2, int a3, unsigned int a4)
{
  size_t v5; // r3
  char *v6; // r1
  unsigned int v8; // [sp+0h] [bp+0h]
  unsigned __int8 v10; // [sp+Bh] [bp+Bh]
  size_t n; // [sp+10h] [bp+10h]
  int v12; // [sp+14h] [bp+14h]

  v8 = a4;
  v10 = a2;
  v12 = 0;
  if ( !lcd_inited )
    return -2;
  if ( a1 == lcd_fd && a2 <= 3u && a4 <= 0x40 )
  {
    if ( pthread_mutex_lock(&lcd_mutex) )
    {
      printf("%s:%d", "lcd_write", 59);
      puts("failed to lcd lock");
      return -4;
    }
    else
    {
      do
      {
        v5 = v8;
        if ( v8 >= 0x10 )
          v5 = 16;
        n = v5;
        v6 = (char *)&lcd_output + 16 * v10++;
        memcpy(v6, (const void *)(a3 + v12), v5);
        v12 += n;
        v8 -= n;
      }
      while ( v8 && v10 <= 3u );
      write(lcd_fd, &lcd_output, 0x40u);
      pthread_mutex_unlock(&lcd_mutex);
      return 0;
    }
  }
  else
  {
    printf("%s:%d", "lcd_write", 54);
    puts("bad param");
    return -3;
  }
}
