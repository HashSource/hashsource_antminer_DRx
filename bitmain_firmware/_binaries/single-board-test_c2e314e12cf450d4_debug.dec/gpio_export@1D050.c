int __fastcall gpio_export(int a1)
{
  char s[64]; // [sp+8h] [bp+8h] BYREF
  size_t n; // [sp+48h] [bp+48h]
  int fd; // [sp+4Ch] [bp+4Ch]

  if ( pthread_mutex_lock(&api_mutex) )
  {
    printf("%s:%d", "gpio_export", 177);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      fd = open("/sys/class/gpio/export", 1);
      if ( fd >= 0 )
      {
        n = snprintf(s, 0x40u, "%d", a1);
        if ( write(fd, s, n) >= 0 )
        {
          printf("%s:%d", "gpio_export", 203);
          printf("export gpio %d success\n", a1);
          close(fd);
          pthread_mutex_unlock(&api_mutex);
          return 0;
        }
        else
        {
          printf("%s:%d", "gpio_export", 198);
          printf("Failed to export gpio %d!", a1);
          close(fd);
          pthread_mutex_unlock(&api_mutex);
          return -3;
        }
      }
      else
      {
        printf("%s:%d", "gpio_export", 191);
        puts("Failed to open export for writing!");
        pthread_mutex_unlock(&api_mutex);
        return -2;
      }
    }
    else
    {
      printf("%s:%d", "gpio_export", 183);
      printf("port %d already exported\n", a1);
      perror("access error");
      pthread_mutex_unlock(&api_mutex);
      return 0;
    }
  }
}
