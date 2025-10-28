int __fastcall reg_key_callback(int a1)
{
  int v4; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  v4 = 0;
  if ( pthread_mutex_lock(&ui_api_mutex) )
  {
    printf("%s:%d", "reg_key_callback", 320);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( !ui_callback[i] )
      {
        ui_callback[i] = a1;
        break;
      }
    }
    if ( i > 4 )
    {
      v4 = -2;
      printf("%s:%d", "reg_key_callback", 331);
      puts("no more listener available");
    }
    pthread_mutex_unlock(&ui_api_mutex);
    return v4;
  }
}
