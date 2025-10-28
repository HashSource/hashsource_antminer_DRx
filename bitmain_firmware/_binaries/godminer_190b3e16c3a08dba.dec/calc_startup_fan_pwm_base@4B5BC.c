int __fastcall calc_startup_fan_pwm_base(int result)
{
  if ( result != -64 )
  {
    if ( result < -10 )
    {
      return 40;
    }
    else if ( result <= 34 )
    {
      return 60;
    }
  }
  return result;
}
