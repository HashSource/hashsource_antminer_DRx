int gpio_uninit()
{
  int result; // r0

  if ( dword_1B418C )
  {
    dword_1B41C4 = 0;
    pthread_join(dword_1B41C8, 0);
    pthread_mutex_destroy(&stru_1B4190);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B41A8);
    dword_1B418C = 0;
    return pthread_mutex_destroy(&stru_1B41AC);
  }
  return result;
}
