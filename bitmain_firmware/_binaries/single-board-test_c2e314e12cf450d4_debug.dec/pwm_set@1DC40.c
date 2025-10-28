int __fastcall pwm_set(int a1, unsigned int a2)
{
  unsigned int v3; // r3

  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      v3 = a2;
      if ( a2 >= 0x64 )
        v3 = 100;
      if ( platform_is_t9 )
        fpga_write(dword_35598, (100 - v3) | (v3 << 16));
      else
        fpga_write(dword_3582C, (100 - v3) | (v3 << 16));
    }
    else
    {
      printf("%s:%d", "pwm_set", 55);
      printf("pwm type %d not supported\n", a1 - 1);
    }
    return 0;
  }
  else
  {
    printf("%s:%d", "pwm_set", 45);
    puts("bad param");
    return -3;
  }
}
