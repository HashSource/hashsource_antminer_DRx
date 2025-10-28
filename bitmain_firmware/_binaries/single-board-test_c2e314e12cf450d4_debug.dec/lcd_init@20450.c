int __fastcall lcd_init(const char *a1)
{
  if ( lcd_inited )
    return 0;
  if ( a1 )
  {
    lcd_fd = open(a1, 2050);
    if ( lcd_fd >= 0 )
    {
      lcd_inited = 1;
      return lcd_fd;
    }
    else
    {
      printf("%s:%d", "lcd_init", 30);
      puts("open lcd failed!!!");
      return -1;
    }
  }
  else
  {
    printf("%s:%d", "lcd_init", 24);
    puts("bad param");
    return -3;
  }
}
