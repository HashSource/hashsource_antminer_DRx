int __fastcall lcd_uninit(int a1)
{
  int v2; // [sp+Ch] [bp+Ch]

  v2 = 0;
  if ( lcd_inited )
  {
    if ( close(a1) )
    {
      printf("%s:%d", "lcd_uninit", 117);
      puts("lcd close failed!!!");
      v2 = -1;
    }
    lcd_inited = 0;
  }
  return v2;
}
