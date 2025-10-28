int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_197B1C, (unsigned __int8)byte_197B10, 0x64u);
    if ( !(_WORD)result )
      return result;
    return sub_5DB74();
  }
  result = (unsigned __int16)set_voltage(dword_197B1C, (unsigned __int8)byte_197B10);
  if ( (_WORD)result )
    return sub_5DB74();
  return result;
}
