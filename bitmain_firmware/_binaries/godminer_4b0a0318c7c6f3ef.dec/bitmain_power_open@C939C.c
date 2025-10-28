int bitmain_power_open()
{
  int result; // r0

  result = dword_1B45F8;
  if ( !dword_1B45F8 || !dword_1B45FC )
    return sub_C91DC();
  return result;
}
