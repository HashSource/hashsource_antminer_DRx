int __fastcall pwm_init(unsigned int a1, int a2)
{
  if ( platform_inited )
  {
    if ( a1 <= 1 )
    {
      *((_DWORD *)&pwm_param + 2 * a1) = a2;
      *((_BYTE *)&pwm_param + 8 * a1 + 4) = 1;
      return a1 + 1;
    }
    else
    {
      printf("%s:%d", "pwm_init", 20);
      puts("bad param");
      return -3;
    }
  }
  else
  {
    printf("%s:%d", "pwm_init", 16);
    puts("please init platform first!!");
    return -2;
  }
}
