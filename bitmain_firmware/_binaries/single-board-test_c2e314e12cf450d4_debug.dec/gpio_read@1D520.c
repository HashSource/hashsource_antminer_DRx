int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int buf; // [sp+8h] [bp+8h] BYREF
  char s[64]; // [sp+Ch] [bp+Ch] BYREF
  int fd; // [sp+4Ch] [bp+4Ch]

  buf = 0;
  if ( pthread_mutex_lock(&api_mutex) )
  {
    printf("%s:%d", "gpio_read", 303);
    puts("failed to api lock");
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 0);
    if ( fd >= 0 )
    {
      if ( read(fd, &buf, 4u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&api_mutex);
        *a2 = atoi((const char *)&buf);
        return 0;
      }
      else
      {
        printf("%s:%d", "gpio_read", 316);
        puts("Failed to read value!");
        close(fd);
        pthread_mutex_unlock(&api_mutex);
        return -3;
      }
    }
    else
    {
      printf("%s:%d", "gpio_read", 310);
      printf("Failed to open gpio %d value for reading!\n", a1);
      pthread_mutex_unlock(&api_mutex);
      return -2;
    }
  }
}
