int __fastcall BM1725_open_core(unsigned __int8 a1)
{
  int result; // r0
  char s[184]; // [sp+14h] [bp+Ch] BYREF
  unsigned int v4; // [sp+CCh] [bp+C4h]
  __int16 v5; // [sp+D2h] [bp+CAh]
  unsigned int i; // [sp+D4h] [bp+CCh]

  i = 0;
  memset(s, 0, sizeof(s));
  s[0] = -1;
  printf("\n--- %s: Chain : %d\n", "BM1725_open_core", a1);
  gIsOpenCoreEnd[a1] = 0;
  gIsOpeningCore[a1] = 1;
  s[0] = 32;
  s[1] = 0x80;
  memset(&s[2], 0, 0xB4u);
  v5 = CRC16(s, 182);
  s[182] = HIBYTE(v5);
  s[183] = v5;
  for ( i = 0; i <= 0x113; ++i )
  {
    v4 = (i << 16) | 0x8201;
    set_BM1725_asic_register(a1, 0, 0x24u, 1, v4);
    usleep(0x64u);
    dcr_uart_send(a1, s, 0xB8u);
    usleep(dword_3368A0);
  }
  result = uart_flush_rx(a1);
  gIsOpeningCore[a1] = 0;
  gIsOpenCoreEnd[a1] = 1;
  return result;
}
