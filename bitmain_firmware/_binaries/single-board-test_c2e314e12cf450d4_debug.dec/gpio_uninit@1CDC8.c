int gpio_uninit()
{
  int result; // r0

  if ( gpio_inited )
  {
    gpio_thread = 0;
    pthread_join(thread, 0);
    pthread_mutex_destroy(&gpio_ctrl_map);
    delete_c_map((void ****)dword_235DC8);
    gpio_inited = 0;
    return pthread_mutex_destroy(&api_mutex);
  }
  return result;
}
