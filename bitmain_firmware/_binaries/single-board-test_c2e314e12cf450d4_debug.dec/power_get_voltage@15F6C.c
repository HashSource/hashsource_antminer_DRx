_BYTE *__fastcall power_get_voltage(_BYTE *a1)
{
  char da_value; // r0

  if ( power_is_support_cmd_package() )
    da_value = power_get_da_value();
  else
    da_value = power_get_da_value_simple();
  *a1 = da_value;
  return a1;
}
