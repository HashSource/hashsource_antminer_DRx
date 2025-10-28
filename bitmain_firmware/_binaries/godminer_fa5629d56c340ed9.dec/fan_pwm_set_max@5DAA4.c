int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_197B04 )
  {
    dword_197B08 = pwm_init(0, 100);
    byte_197B04 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_197B08, 0x64u);
  return result;
}
