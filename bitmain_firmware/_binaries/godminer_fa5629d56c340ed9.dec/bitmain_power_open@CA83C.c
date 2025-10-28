int bitmain_power_open()
{
  int result; // r0

  result = dword_1B5718;
  if ( !dword_1B5718 || !dword_1B571C )
    return sub_CA67C();
  return result;
}
