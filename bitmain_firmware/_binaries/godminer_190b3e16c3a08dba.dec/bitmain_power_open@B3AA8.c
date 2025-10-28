int bitmain_power_open()
{
  int result; // r0

  result = dword_18C5E8;
  if ( !dword_18C5E8 || !dword_18C5EC )
    return sub_B38E8();
  return result;
}
