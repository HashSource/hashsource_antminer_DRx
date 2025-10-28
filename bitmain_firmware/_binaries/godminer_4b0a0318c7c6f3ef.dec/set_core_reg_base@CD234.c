int __fastcall set_core_reg_base(int a1, int a2)
{
  char v2; // r2
  char v4; // lr
  char v5; // r12
  char v6; // r3
  __int16 v7; // r2
  unsigned int v8; // r0
  char v9; // r0
  unsigned __int8 v11[2]; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+6h] [bp-1Ah] BYREF
  _BYTE v13[5]; // [sp+Ah] [bp-16h]
  char v14; // [sp+Fh] [bp-11h]

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v2 = *(_BYTE *)(a2 + 8);
  v12 = 0;
  v4 = *(_BYTE *)(a2 + 9);
  *(_DWORD *)v13 = 0;
  v5 = *(_BYTE *)(a2 + 12);
  v6 = (16 * (v2 & 1)) | 4;
  v7 = *(_WORD *)(a2 + 10);
  v8 = *(_DWORD *)a2;
  LOBYTE(v12) = v6 & 0x1F | 0x40;
  HIBYTE(v12) = v7;
  BYTE2(v12) = v4;
  v13[0] = v5;
  v11[1] = -86;
  BYTE1(v12) = 10;
  v11[0] = 85;
  v14 = 0;
  *(_DWORD *)&v13[1] = reverse_byte_order_32(v8);
  v9 = BM_CRC5(&v12, 72);
  v14 = v14 & 0xE0 | v9 & 0x1F;
  send_command_packet(a1, v11, 0xCu);
  return 0;
}
