int __fastcall power_set_voltage(unsigned __int8 a1)
{
  int v1; // r3

  if ( power_is_support_cmd_package() )
    power_set_da_value(a1);
  else
    power_set_da_value_simple(a1);
  return v1;
}
