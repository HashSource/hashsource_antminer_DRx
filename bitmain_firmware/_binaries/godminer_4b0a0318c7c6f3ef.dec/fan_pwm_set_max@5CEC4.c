int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_196AEC )
  {
    dword_196AF0 = pwm_init(0, 100);
    byte_196AEC = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_196AF0, 0x64u);
  return result;
}
