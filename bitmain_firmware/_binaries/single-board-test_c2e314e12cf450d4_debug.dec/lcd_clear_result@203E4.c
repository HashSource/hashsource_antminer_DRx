int lcd_clear_result()
{
  if ( pthread_mutex_lock(&ui_api_mutex) )
  {
    printf("%s:%d", "lcd_clear_result", 396);
    return puts("failed to api lock");
  }
  else
  {
    if ( lcd_ctx > 0 )
      lcd_clear(lcd_ctx);
    return pthread_mutex_unlock(&ui_api_mutex);
  }
}
