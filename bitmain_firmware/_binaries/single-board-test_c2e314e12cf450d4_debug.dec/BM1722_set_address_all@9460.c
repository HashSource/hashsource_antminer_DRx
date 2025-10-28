unsigned int __fastcall BM1722_set_address_all(unsigned __int8 a1)
{
  unsigned int result; // r0
  unsigned int i; // [sp+8h] [bp+8h]
  int v4; // [sp+Ch] [bp+Ch]

  v4 = 0;
  printf("\n--- %s: Chain : %d\n", "BM1722_set_address_all", a1);
  BM1722_chain_inactive(a1);
  for ( i = 0; ; ++i )
  {
    result = 0x100u / gChain_Asic_Interval;
    if ( 0x100u / gChain_Asic_Interval <= i )
      break;
    BM1722_set_address(a1, v4);
    v4 += gChain_Asic_Interval;
    usleep(0x1388u);
  }
  return result;
}
