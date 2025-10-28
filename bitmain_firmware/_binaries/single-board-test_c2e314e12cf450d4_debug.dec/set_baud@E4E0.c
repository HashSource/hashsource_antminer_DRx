int __fastcall set_baud(unsigned __int8 a1, unsigned __int8 a2)
{
  printf("\n--- %s: Chain : %d, baud = %d\n", "set_baud", a1, a2);
  if ( dword_336850 == 1722 )
  {
    set_BM1722_asic_register(a1, 0, 0x1Cu, 1, (a2 << 8) | 0x7002001);
  }
  else if ( dword_336850 == 1725 )
  {
    set_BM1725_asic_register(a1, 0, 0x1Cu, 1, (a2 << 8) | 0x7002001);
  }
  usleep(0xC350u);
  return uart_set_baud(a1, a2);
}
