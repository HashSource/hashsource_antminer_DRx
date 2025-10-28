int ui_uninit()
{
  int result; // r0

  if ( dword_18C500 )
  {
    dword_18C4CC[0] = 0;
    pthread_join(dword_18C504, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_18C4E8);
    pthread_mutex_destroy(&stru_18C4D0);
    gpio_unreg_callback(921, 712808);
    gpio_unreg_callback(943, 712808);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_18C500 = 0;
  }
  return result;
}
