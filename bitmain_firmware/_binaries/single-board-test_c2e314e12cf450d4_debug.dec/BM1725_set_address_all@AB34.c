int __fastcall BM1725_set_address_all(unsigned __int8 a1)
{
  int result; // r0
  unsigned __int8 i; // [sp+Eh] [bp+Eh]
  unsigned __int8 v4; // [sp+Fh] [bp+Fh]

  v4 = 0;
  printf("\n--- %s: Chain : %d\n", "BM1725_set_address_all", a1);
  result = BM1725_chain_inactive(a1);
  for ( i = 0; i < (unsigned int)dword_336848; ++i )
  {
    BM1725_set_address(a1, v4);
    v4 += gChain_Asic_Interval;
    result = usleep(0x1388u);
  }
  return result;
}
