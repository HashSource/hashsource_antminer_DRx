int __fastcall gpio_write(int a1, char a2)
{
  char s[64]; // [sp+Ch] [bp+Ch] BYREF
  int fd; // [sp+4Ch] [bp+4Ch]

  if ( pthread_mutex_lock(&api_mutex) )
  {
    printf("%s:%d", "gpio_write", 341);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( write(fd, &values_str_6753[a2 != 0], 1u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&api_mutex);
        return 0;
      }
      else
      {
        printf("%s:%d", "gpio_write", 354);
        puts("Failed to write value!");
        close(fd);
        pthread_mutex_unlock(&api_mutex);
        return -3;
      }
    }
    else
    {
      printf("%s:%d", "gpio_write", 348);
      puts("Failed to open gpio value for writing!");
      pthread_mutex_unlock(&api_mutex);
      return -2;
    }
  }
}
