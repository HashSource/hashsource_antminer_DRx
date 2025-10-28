int gpio_uninit()
{
  int result; // r0

  if ( dword_1B52AC )
  {
    dword_1B52E4 = 0;
    pthread_join(dword_1B52E8, 0);
    pthread_mutex_destroy(&stru_1B52B0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B52C8);
    dword_1B52AC = 0;
    return pthread_mutex_destroy(&stru_1B52CC);
  }
  return result;
}
