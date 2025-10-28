int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_17B08C, (unsigned __int8)byte_17B080);
    if ( !(_WORD)result )
      return result;
    return sub_5479C();
  }
  result = (unsigned __int16)set_voltage(dword_17B08C, (unsigned __int8)byte_17B080);
  if ( (_WORD)result )
    return sub_5479C();
  return result;
}
