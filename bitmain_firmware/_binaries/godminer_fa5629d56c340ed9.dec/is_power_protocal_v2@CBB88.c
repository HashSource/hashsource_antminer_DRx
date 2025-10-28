bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_1B5720 > 0x62;
  if ( dword_1B5720 != 98 )
    v0 = (unsigned int)(dword_1B5720 - 100) > 2;
  return !v0;
}
