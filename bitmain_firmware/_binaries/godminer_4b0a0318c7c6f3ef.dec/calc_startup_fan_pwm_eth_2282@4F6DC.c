int __fastcall calc_startup_fan_pwm_eth_2282(int result)
{
  if ( result != -64 )
  {
    if ( result >= 70 )
      return 80;
    else
      return 0;
  }
  return result;
}
