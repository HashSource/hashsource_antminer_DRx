int __fastcall fan_control(unsigned __int8 a1)
{
  if ( !fan_pwm_handle )
    fan_pwm_handle = pwm_init(0, 100);
  printf("--- %s\n", "fan_control");
  return pwm_set(fan_pwm_handle, a1);
}
