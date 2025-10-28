int __fastcall get_packet_remain_len_zec_1746(int a1)
{
  bool v1; // zf
  int result; // r0

  if ( (a1 & 0xF0) == 0xE0 )
    return 90;
  v1 = a1 == 208;
  result = 1027;
  if ( !v1 )
    return 6;
  return result;
}
