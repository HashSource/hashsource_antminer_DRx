int __fastcall set_core_reg_rvn(int a1, int a2)
{
  char v3; // lr
  __int16 v4; // r12
  char v5; // r3
  char v6; // r2
  unsigned int v7; // r0
  char v8; // r0
  _BYTE v10[2]; // [sp+0h] [bp-20h] BYREF
  int v11; // [sp+2h] [bp-1Eh] BYREF
  _BYTE v12[7]; // [sp+6h] [bp-1Ah]
  char v13; // [sp+Dh] [bp-13h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v11 = 0;
  v3 = *(_BYTE *)(a2 + 9);
  v4 = *(_WORD *)(a2 + 10);
  v5 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 4;
  *(_DWORD *)v12 = 0;
  v6 = *(_BYTE *)(a2 + 12);
  v11 = v5 & 0x1F | 0x40;
  v10[0] = 85;
  v12[1] = v6;
  v7 = *(_DWORD *)a2;
  BYTE2(v11) = v3;
  v12[0] = v4;
  BYTE1(v11) = 12;
  v12[2] = 63;
  v10[1] = -86;
  v13 = 0;
  *(_DWORD *)&v12[3] = reverse_byte_order_32(v7);
  v8 = BM_CRC5(&v11, 88);
  v13 = v13 & 0xE0 | v8 & 0x1F;
  send_command_packet(a1, (int)v10, 0xEu);
  return 0;
}
