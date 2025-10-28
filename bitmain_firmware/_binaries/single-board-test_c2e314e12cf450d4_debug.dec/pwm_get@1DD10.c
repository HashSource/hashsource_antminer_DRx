int __fastcall pwm_get(int a1, _DWORD *a2)
{
  int v5; // [sp+Ch] [bp+Ch]

  v5 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      if ( platform_is_t9 )
        fpga_read(dword_35598, a2);
      else
        fpga_read(dword_3582C, a2);
      *a2 >>= 16;
      printf("%s:%d", "pwm_get", 79);
      printf("duty of fpga = 0x%x\n", *a2);
      return 0;
    }
    return v5;
  }
  else
  {
    printf("%s:%d", "pwm_get", 71);
    puts("bad param");
    return -3;
  }
}
