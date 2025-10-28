int __fastcall set_chip_reg_ltc(int a1, int a2)
{
  char v4; // r2
  __int16 v5; // r0
  char v6; // r3
  char v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r0
  char v10; // r2
  char v11; // r0
  unsigned __int8 v13[2]; // [sp+4h] [bp-1Ch] BYREF
  int v14; // [sp+6h] [bp-1Ah] BYREF
  unsigned int v15; // [sp+Ah] [bp-16h]
  char v16; // [sp+Eh] [bp-12h]

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v14 = 0;
  v4 = *(_BYTE *)(a2 + 8);
  v15 = 0;
  v5 = *(_WORD *)(a2 + 10);
  v6 = (16 * (v4 & 1)) | 1;
  v7 = *(_BYTE *)(a2 + 9);
  LOWORD(v14) = v6 & 0x1F | 0x40;
  BYTE2(v14) = v7;
  HIBYTE(v14) = v5;
  v8 = *(_DWORD *)a2;
  v13[0] = 85;
  v13[1] = -86;
  BYTE1(v14) = 9;
  v16 = 0;
  v9 = reverse_byte_order_32(v8);
  v10 = *(_BYTE *)(a2 + 15);
  v15 = v9;
  v16 = 32 * (v10 & 3);
  v11 = BM_CRC5(&v14, 64);
  v16 = v16 & 0xE0 | v11 & 0x1F;
  send_command_packet(a1, v13, 0xBu);
  return 0;
}
