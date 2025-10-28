int cgpu_init()
{
  int v2; // [sp+4h] [bp+4h]

  v2 = 0;
  printf("\n%s\n", "cgpu_init");
  memset(&cgpu, 0, (size_t)&unk_1004C4);
  if ( check_chain() )
  {
    printf("!!! %s: check chain error\n", "cgpu_init");
    v2 = 1;
  }
  if ( open_key() > 0 )
  {
    if ( open_i2c() > 0 )
    {
      memset(lcd_output_0, 32, 0x40u);
      write_lcd(0, (int)lcd_output_0, 0x40u);
      if ( v2 == 1 )
      {
        printf("no hashboard %d\n", 1);
        write_lcd(0, (int)"No Hashboard", 0x10u);
      }
      return 0;
    }
    else
    {
      printf("!!! %s: open i2c error\n", "cgpu_init");
      close_i2c();
      close_key();
      return -1;
    }
  }
  else
  {
    printf("!!! %s: open start key error\n", "cgpu_init");
    close_key();
    return -1;
  }
}
