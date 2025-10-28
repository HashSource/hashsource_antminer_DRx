int gpio_init()
{
  if ( gpio_inited )
  {
    printf("%s:%d", "gpio_init", 78);
    puts("gpio re init");
  }
  else
  {
    pthread_mutex_init(&gpio_ctrl_map, 0);
    dword_235DC8 = (int)new_c_map((int)gpio_compare_e, 0, 0);
    pthread_mutex_init(&api_mutex, 0);
    gpio_thread = 1;
    pthread_create((pthread_t *)&thread, 0, (void *(*)(void *))gpio_thread_function, 0);
    gpio_inited = 1;
  }
  return 0;
}
