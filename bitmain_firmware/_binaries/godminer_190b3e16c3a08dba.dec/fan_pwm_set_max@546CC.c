int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_17B074 )
  {
    dword_17B078 = pwm_init(0, 100);
    byte_17B074 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_17B078, 0x64u);
  return result;
}
