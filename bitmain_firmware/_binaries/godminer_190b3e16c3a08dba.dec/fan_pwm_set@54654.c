int __fastcall fan_pwm_set(unsigned int a1)
{
  int result; // r0
  unsigned int v3; // r1

  if ( !byte_17B074 )
  {
    dword_17B078 = pwm_init(0, 100);
    byte_17B074 = 1;
  }
  if ( a1 >= 0x64 )
    a1 = 100;
  result = fan_pwm_get();
  if ( result != a1 )
  {
    if ( fan_pwm_fixed )
      v3 = fan_pwm;
    else
      v3 = a1;
    return pwm_set(dword_17B078, v3);
  }
  return result;
}
