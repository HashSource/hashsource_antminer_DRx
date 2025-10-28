int sub_EFC4()
{
  int result; // r0

  if ( !dword_24008 )
  {
    result = sub_EFF8("libisc.cat", &dword_2400C);
    dword_24008 = 1;
  }
  return result;
}
