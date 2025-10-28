size_t __fastcall BM1722_set_address(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v4[4]; // [sp+8h] [bp+8h] BYREF
  unsigned __int8 v5; // [sp+Ch] [bp+Ch]

  v5 = 0;
  v4[0] = 64;
  v4[1] = 5;
  v4[2] = a2;
  v4[3] = 0;
  v5 = CRC5(v4, 0x20u);
  return dcr_uart_send(a1, v4, 5u);
}
