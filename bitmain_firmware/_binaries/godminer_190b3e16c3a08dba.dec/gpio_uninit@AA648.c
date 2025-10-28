int gpio_uninit()
{
  int result; // r0

  if ( dword_18C164 )
  {
    dword_18C19C = 0;
    pthread_join(dword_18C1A0, 0);
    pthread_mutex_destroy(&stru_18C168);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_18C180);
    dword_18C164 = 0;
    return pthread_mutex_destroy(&stru_18C184);
  }
  return result;
}
