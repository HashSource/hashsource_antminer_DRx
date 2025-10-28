int __fastcall gpio_unexport(int a1)
{
  char s[64]; // [sp+8h] [bp+8h] BYREF
  size_t n; // [sp+48h] [bp+48h]
  int fd; // [sp+4Ch] [bp+4Ch]

  if ( pthread_mutex_lock(&api_mutex) )
  {
    printf("%s:%d", "gpio_unexport", 220);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    fd = access(s, 0);
    if ( fd )
    {
      printf("%s:%d", "gpio_unexport", 226);
      printf("port %d already unexported, ret = %d\n", a1, fd);
      perror("access error");
      pthread_mutex_unlock(&api_mutex);
      return 0;
    }
    else
    {
      fd = open("/sys/class/gpio/unexport", 1);
      if ( fd >= 0 )
      {
        n = snprintf(s, 0x40u, "%d", a1);
        if ( write(fd, s, n) >= 0 )
        {
          printf("%s:%d", "gpio_unexport", 246);
          printf("unexport gpio %d success\n", a1);
          close(fd);
          pthread_mutex_unlock(&api_mutex);
          return 0;
        }
        else
        {
          printf("%s:%d", "gpio_unexport", 241);
          printf("Failed to unexport gpio %d!", a1);
          close(fd);
          pthread_mutex_unlock(&api_mutex);
          return -2;
        }
      }
      else
      {
        printf("%s:%d", "gpio_unexport", 234);
        puts("Failed to open unexport for writing!");
        pthread_mutex_unlock(&api_mutex);
        return -2;
      }
    }
  }
}
