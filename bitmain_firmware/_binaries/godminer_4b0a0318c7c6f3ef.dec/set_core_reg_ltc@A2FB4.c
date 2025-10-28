int __fastcall set_core_reg_ltc(int a1, int a2)
{
  __int16 v3; // r1
  unsigned __int8 v5; // r12
  char v6; // lr
  __int16 v7; // r1
  char v8; // r2
  unsigned int v9; // r0
  char v10; // r2
  char v11; // r0
  unsigned int v13; // [sp+0h] [bp-20h]
  __int16 v14; // [sp+2h] [bp-1Eh]
  unsigned __int8 v15[2]; // [sp+4h] [bp-1Ch] BYREF
  int v16; // [sp+6h] [bp-1Ah] BYREF
  unsigned int v17; // [sp+Ah] [bp-16h]
  char v18; // [sp+Eh] [bp-12h]

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v3 = *(_WORD *)(a2 + 10);
  v5 = *(_BYTE *)(a2 + 12);
  v16 = 0;
  v6 = *(_BYTE *)(a2 + 14);
  LOBYTE(v14) = v14 & 0xF0 | v3 & 0xF;
  v17 = 0;
  v7 = v14 & 0xF00F | (16 * v5);
  BYTE2(v13) = v14 & 0xF | (16 * v5);
  HIBYTE(v13) = HIBYTE(v7) & 0xF | 0x40 | ((v6 & 1) << 7);
  v8 = *(_BYTE *)(a2 + 9);
  LOWORD(v13) = *(_DWORD *)a2;
  LOBYTE(v16) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  BYTE2(v16) = v8;
  v15[0] = 85;
  v15[1] = -86;
  BYTE1(v16) = 9;
  HIBYTE(v16) = 60;
  v18 = 0;
  v9 = reverse_byte_order_32(v13);
  v10 = *(_BYTE *)(a2 + 15);
  v17 = v9;
  v18 = 32 * (v10 & 3);
  v11 = BM_CRC5(&v16, 64);
  v18 = v18 & 0xE0 | v11 & 0x1F;
  send_command_packet(a1, v15, 0xBu);
  return 0;
}
