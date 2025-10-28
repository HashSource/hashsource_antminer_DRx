int __fastcall unreg_key_callback(int a1)
{
  int i; // [sp+Ch] [bp+Ch]

  if ( pthread_mutex_lock(&ui_api_mutex) )
  {
    printf("%s:%d", "unreg_key_callback", 347);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( ui_callback[i] == a1 )
      {
        ui_callback[i] = 0;
        break;
      }
    }
    if ( i > 4 )
    {
      printf("%s:%d", "unreg_key_callback", 357);
      puts("listener not registered before");
    }
    pthread_mutex_unlock(&ui_api_mutex);
    return 0;
  }
}
