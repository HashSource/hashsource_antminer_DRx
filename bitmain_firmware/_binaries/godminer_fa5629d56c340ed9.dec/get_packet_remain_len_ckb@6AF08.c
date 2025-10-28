unsigned int __fastcall get_packet_remain_len_ckb(int a1)
{
  unsigned int result; // r0

  result = a1 - 1;
  if ( result >= 0xA )
    return 9;
  return result;
}
