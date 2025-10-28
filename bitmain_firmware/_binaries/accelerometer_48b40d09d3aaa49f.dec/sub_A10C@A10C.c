int sub_A10C()
{
  int result; // r0

  result = dword_16010;
  if ( dword_16010 >= 0 )
  {
    result = sub_9868(dword_16010);
    dword_16010 = -1;
  }
  return result;
}
