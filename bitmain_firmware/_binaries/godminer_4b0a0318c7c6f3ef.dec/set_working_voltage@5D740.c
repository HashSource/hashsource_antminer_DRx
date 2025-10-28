int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_196B04, (unsigned __int8)byte_196AF8, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_5CF94();
  }
  result = (unsigned __int16)set_voltage(dword_196B04, (unsigned __int8)byte_196AF8);
  if ( (_WORD)result )
    return sub_5CF94();
  return result;
}
