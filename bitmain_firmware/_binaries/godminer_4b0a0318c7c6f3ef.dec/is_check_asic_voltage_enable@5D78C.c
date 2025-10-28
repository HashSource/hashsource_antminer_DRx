int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_196AFC;
  if ( byte_196AFC )
    return (unsigned __int8)byte_196B08;
  return result;
}
