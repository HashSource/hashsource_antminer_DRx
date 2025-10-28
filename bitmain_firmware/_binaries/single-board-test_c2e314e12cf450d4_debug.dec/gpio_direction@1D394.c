int __fastcall gpio_direction(int a1, int a2)
{
  int v3; // r2
  char *v4; // r2
  size_t v5; // r3
  int v6; // r2
  int v7; // r2
  char s[64]; // [sp+Ch] [bp+Ch] BYREF
  int fd; // [sp+4Ch] [bp+4Ch]

  if ( pthread_mutex_lock(&api_mutex) )
  {
    printf("%s:%d", "gpio_direction", 266);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( a2 )
        v3 = 3;
      else
        v3 = 0;
      v4 = &dir_str_6737[v3];
      if ( a2 )
        v5 = 3;
      else
        v5 = 2;
      if ( write(fd, v4, v5) >= 0 )
      {
        printf("%s:%d", "gpio_direction", 284);
        if ( a2 )
          v7 = 3;
        else
          v7 = 0;
        printf("set gpio %d direction %s success!\n", a1, &dir_str_6737[v7]);
        close(fd);
        pthread_mutex_unlock(&api_mutex);
        return 0;
      }
      else
      {
        printf("%s:%d", "gpio_direction", 279);
        if ( a2 )
          v6 = 3;
        else
          v6 = 0;
        printf("Failed to set gpio %d direction %s !\n", a1, &dir_str_6737[v6]);
        close(fd);
        pthread_mutex_unlock(&api_mutex);
        return -3;
      }
    }
    else
    {
      printf("%s:%d", "gpio_direction", 273);
      printf("Failed to open gpio %d direction for writing!\n", a1);
      pthread_mutex_unlock(&api_mutex);
      return -2;
    }
  }
}
