int ui_uninit()
{
  int result; // r0

  if ( dword_1B5648 )
  {
    dword_1B5614[0] = 0;
    pthread_join(dword_1B564C, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B5630);
    pthread_mutex_destroy(&stru_1B5618);
    gpio_unreg_callback(921, 804096);
    gpio_unreg_callback(943, 804096);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_1B5648 = 0;
  }
  return result;
}
