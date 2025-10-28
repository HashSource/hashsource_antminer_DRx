int __fastcall lcd_show_result(unsigned __int8 a1, int a2, unsigned int a3)
{
  int v8; // [sp+14h] [bp+14h]

  if ( pthread_mutex_lock(&ui_api_mutex) )
  {
    printf("%s:%d", "lcd_show_result", 375);
    puts("failed to api lock");
    return -4;
  }
  else
  {
    if ( lcd_ctx < 0 )
    {
      lcd_ctx = lcd_init(lcd_path);
      lcd_clear(lcd_ctx);
    }
    if ( lcd_ctx <= 0 )
    {
      printf("%s:%d", "lcd_show_result", 385);
      printf("failed to init %s\n", lcd_path);
      v8 = -1;
    }
    else
    {
      v8 = lcd_write(lcd_ctx, a1, a2, a3);
    }
    pthread_mutex_unlock(&ui_api_mutex);
    return v8;
  }
}
