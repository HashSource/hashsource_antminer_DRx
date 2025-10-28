int sub_A0B4()
{
  int result; // r0

  result = dword_16008;
  if ( dword_16008 >= 0 )
  {
    result = sub_9868(dword_16008);
    dword_16008 = -1;
  }
  return result;
}
