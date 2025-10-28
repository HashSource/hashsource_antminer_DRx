int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_17B084;
  if ( byte_17B084 )
    return (unsigned __int8)byte_17B090;
  return result;
}
