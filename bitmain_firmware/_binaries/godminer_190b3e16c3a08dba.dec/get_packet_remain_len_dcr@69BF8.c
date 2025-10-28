unsigned int __fastcall get_packet_remain_len_dcr(int a1)
{
  unsigned int result; // r0

  result = a1 - 1;
  if ( result >= 9 )
    return 8;
  return result;
}
