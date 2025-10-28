int ui_uninit()
{
  int result; // r0

  if ( dword_1B4528 )
  {
    dword_1B44F4[0] = 0;
    pthread_join(dword_1B452C, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B4510);
    pthread_mutex_destroy(&stru_1B44F8);
    gpio_unreg_callback(921, 799096);
    gpio_unreg_callback(943, 799096);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_1B4528 = 0;
  }
  return result;
}
