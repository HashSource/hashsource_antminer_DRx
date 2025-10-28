int __fastcall get_packet_remain_len_kas(int result)
{
  if ( result == 12 )
    return 11;
  if ( result == 8 )
    return 7;
  return result;
}
