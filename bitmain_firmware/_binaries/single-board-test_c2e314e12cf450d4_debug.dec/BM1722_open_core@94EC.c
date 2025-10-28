int __fastcall BM1722_open_core(unsigned __int8 a1)
{
  int result; // r0
  char s[186]; // [sp+14h] [bp+Ch] BYREF
  __int16 v4; // [sp+CEh] [bp+C6h]
  int v5; // [sp+D0h] [bp+C8h]
  unsigned int i; // [sp+D4h] [bp+CCh]

  i = 0;
  memset(s, 0, 0xB8u);
  s[0] = -1;
  printf("\n--- %s: Chain : %d\n", "BM1722_open_core", a1);
  gIsOpenCoreEnd[a1] = 0;
  gIsOpeningCore[a1] = 1;
  strcpy(s, " ");
  memset(&s[2], 0, 0xB4u);
  v4 = CRC16(s, 182);
  s[182] = HIBYTE(v4);
  s[183] = v4;
  for ( i = 0; dword_33684C > i; ++i )
  {
    if ( i > 0x1F )
    {
      if ( i > 0x3F )
      {
        if ( i > 0x5F )
        {
          if ( i <= 0x7F )
          {
            if ( i == 96 )
              v5 = 0;
            v5 = (2 * v5) | 1;
            set_BM1722_asic_register(a1, 0, 0x5Cu, 1, v5);
          }
        }
        else
        {
          if ( i == 64 )
            v5 = 0;
          v5 = (2 * v5) | 1;
          set_BM1722_asic_register(a1, 0, 0x58u, 1, v5);
        }
      }
      else
      {
        if ( i == 32 )
          v5 = 0;
        v5 = (2 * v5) | 1;
        set_BM1722_asic_register(a1, 0, 0x54u, 1, v5);
      }
    }
    else
    {
      if ( !i )
        v5 = 0;
      v5 = (2 * v5) | 1;
      set_BM1722_asic_register(a1, 0, 0x50u, 1, v5);
    }
    dcr_uart_send(a1, s, 0xB8u);
    usleep(dword_3368A0);
  }
  result = uart_flush_rx(a1);
  gIsOpeningCore[a1] = 0;
  gIsOpenCoreEnd[a1] = 1;
  return result;
}
