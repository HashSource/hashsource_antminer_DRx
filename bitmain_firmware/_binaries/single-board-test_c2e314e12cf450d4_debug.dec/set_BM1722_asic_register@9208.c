size_t __fastcall set_BM1722_asic_register(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char a4, int a5)
{
  unsigned __int8 v7[4]; // [sp+Ch] [bp+Ch] BYREF
  char v8; // [sp+10h] [bp+10h]
  char v9; // [sp+11h] [bp+11h]
  char v10; // [sp+12h] [bp+12h]
  char v11; // [sp+13h] [bp+13h]
  unsigned __int8 v12; // [sp+14h] [bp+14h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  qmemcpy(v7, "A\t", 2);
  v7[2] = a2;
  v7[3] = a3;
  if ( a4 )
    v7[0] |= 0x10u;
  v8 = HIBYTE(a5);
  v9 = BYTE2(a5);
  v10 = BYTE1(a5);
  v11 = a5;
  v12 = CRC5(v7, 0x40u);
  return dcr_uart_send(a1, v7, 9u);
}
