int sub_A0E0()
{
  int result; // r0

  result = dword_16004;
  if ( dword_16004 >= 0 )
  {
    result = sub_9868(dword_16004);
    dword_16004 = -1;
  }
  return result;
}
