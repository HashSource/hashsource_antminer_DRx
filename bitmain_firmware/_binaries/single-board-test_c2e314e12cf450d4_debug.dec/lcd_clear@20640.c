int __fastcall lcd_clear(int a1)
{
  if ( !lcd_inited )
    return -2;
  if ( a1 == lcd_fd )
  {
    if ( pthread_mutex_lock(&lcd_mutex) )
    {
      printf("%s:%d", "lcd_clear", 97);
      puts("failed to lcd lock");
      return -4;
    }
    else
    {
      memset(&lcd_output, 32, 0x40u);
      lseek(lcd_fd, 0, 0);
      write(lcd_fd, &lcd_output, 0x40u);
      pthread_mutex_unlock(&lcd_mutex);
      return 0;
    }
  }
  else
  {
    printf("%s:%d", "lcd_clear", 93);
    puts("bad param");
    return -3;
  }
}
