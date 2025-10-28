int __fastcall BM1722_chain_inactive(unsigned __int8 a1)
{
  unsigned __int8 v3[4]; // [sp+8h] [bp+8h] BYREF
  unsigned __int8 v4; // [sp+Ch] [bp+Ch]

  v4 = 0;
  printf("\n--- %s\n", "BM1722_chain_inactive");
  v3[0] = 83;
  v3[1] = 5;
  v3[2] = 0;
  v3[3] = 0;
  v4 = CRC5(v3, 0x20u);
  dcr_uart_send(a1, v3, 5u);
  return usleep(0x1388u);
}
