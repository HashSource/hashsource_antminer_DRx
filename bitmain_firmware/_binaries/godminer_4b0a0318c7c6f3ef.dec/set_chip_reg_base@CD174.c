int __fastcall set_chip_reg_base(int a1, int a2)
{
  char v2; // r2
  __int16 v4; // r12
  char v5; // r3
  char v6; // r2
  unsigned int v7; // r0
  char v8; // r0
  unsigned __int8 v10[2]; // [sp+4h] [bp-1Ch] BYREF
  int v11; // [sp+6h] [bp-1Ah] BYREF
  unsigned int v12; // [sp+Ah] [bp-16h]
  char v13; // [sp+Eh] [bp-12h]

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v2 = *(_BYTE *)(a2 + 8);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = *(_WORD *)(a2 + 10);
  v5 = (16 * (v2 & 1)) | 1;
  v6 = *(_BYTE *)(a2 + 9);
  v7 = *(_DWORD *)a2;
  LOBYTE(v11) = v5 & 0x1F | 0x40;
  BYTE2(v11) = v6;
  HIBYTE(v11) = v4;
  v10[1] = -86;
  BYTE1(v11) = 9;
  v10[0] = 85;
  v12 = reverse_byte_order_32(v7);
  v8 = BM_CRC5(&v11, 64);
  v13 = v13 & 0xE0 | v8 & 0x1F;
  send_command_packet(a1, v10, 0xBu);
  return 0;
}
