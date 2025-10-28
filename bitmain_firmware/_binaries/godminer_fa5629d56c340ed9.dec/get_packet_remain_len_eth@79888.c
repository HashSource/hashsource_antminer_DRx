int __fastcall get_packet_remain_len_eth(int result)
{
  switch ( result )
  {
    case 32:
      return 40;
    case 0:
      return 7;
    case 1:
      return 9;
    case 2:
      return 71;
  }
  return result;
}
