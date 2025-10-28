size_t __fastcall get_BM1722_asic_register(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  unsigned __int8 v6[4]; // [sp+8h] [bp+8h] BYREF
  unsigned __int8 v7; // [sp+Ch] [bp+Ch]

  v7 = 0;
  v6[0] = 66;
  v6[1] = 5;
  v6[2] = a2;
  v6[3] = a3;
  if ( a4 )
    v6[0] |= 0x10u;
  v7 = CRC5(v6, 0x20u);
  return dcr_uart_send(a1, v6, 5u);
}
