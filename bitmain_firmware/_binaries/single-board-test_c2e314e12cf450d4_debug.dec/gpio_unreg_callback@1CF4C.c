int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v4; // [sp+4h] [bp+4h] BYREF

  v4 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&gpio_ctrl_map) )
    {
      printf("%s:%d", "gpio_unreg_callback", 152);
      puts("fail to lock gpio ctrl mutex");
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_235DC8, (int)&v4) )
      {
        printf("%s:%d", "gpio_unreg_callback", 157);
        printf("remove %d from callback list\n", v4);
        remove_c_map((int *)dword_235DC8, (int)&v4);
      }
      else
      {
        printf("%s:%d", "gpio_unreg_callback", 160);
        puts("callback function not registered before");
      }
      pthread_mutex_unlock(&gpio_ctrl_map);
      return 0;
    }
  }
  else
  {
    printf("%s:%d", "gpio_unreg_callback", 148);
    puts("bad param");
    return -1;
  }
}
