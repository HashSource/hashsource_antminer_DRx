int __fastcall set_core_reg_rvn(int a1, int a2)
{
  __int16 v4; // r0
  char v5; // r2
  __int16 v6; // r0
  char v7; // r2
  char v8; // r3
  unsigned int v9; // r0
  char v10; // r0
  unsigned __int8 v12[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v13[7]; // [sp+2h] [bp-1Eh] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  memset(v13, 0, 12);
  v4 = *(_WORD *)(a2 + 10);
  v5 = *(_BYTE *)(a2 + 9);
  v13[0] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  BYTE2(v13[0]) = v5;
  v12[0] = 85;
  v12[1] = -86;
  BYTE1(v13[0]) = 12;
  v6 = reverse_byte_order_16(v4 & 0xFFF);
  v7 = *(_BYTE *)(a2 + 12);
  v8 = *(_BYTE *)(a2 + 13);
  *(_WORD *)((char *)v13 + 3) = v6;
  v9 = *(_DWORD *)a2;
  BYTE1(v13[1]) = v7;
  BYTE2(v13[1]) = v8;
  *(_DWORD *)((char *)&v13[1] + 3) = reverse_byte_order_32(v9);
  v10 = BM_CRC5(v13, 88);
  HIBYTE(v13[2]) = HIBYTE(v13[2]) & 0xE0 | v10 & 0x1F;
  send_command_packet(a1, v12, 0xEu);
  return 0;
}
