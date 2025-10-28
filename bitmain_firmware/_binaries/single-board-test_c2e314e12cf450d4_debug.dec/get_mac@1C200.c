int __fastcall get_mac(int a1)
{
  if ( a1 )
    return get_eth_mac("eth0", a1);
  else
    return -1;
}
