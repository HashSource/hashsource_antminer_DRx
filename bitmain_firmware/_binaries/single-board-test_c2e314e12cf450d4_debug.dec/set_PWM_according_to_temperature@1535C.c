int set_PWM_according_to_temperature()
{
  if ( highest_temp[(unsigned __int8)gChain] < (int)(unsigned __int8)byte_3368B0 )
    return fan_control(0);
  if ( (int)highest_temp[(unsigned __int8)gChain] <= 49 )
    return fan_control(0x28u);
  if ( highest_temp[(unsigned __int8)gChain] < (int)(unsigned __int8)byte_3368B1 )
    return fan_control((60 * highest_temp[(unsigned __int8)gChain] - 3000) / ((unsigned __int8)byte_3368B1 - 50) + 40);
  return fan_control(0x64u);
}
