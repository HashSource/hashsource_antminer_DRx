int __fastcall sync_get_chip_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v9; // r12
  __int16 v11; // lr
  char v12; // r0
  _BYTE v14[2]; // [sp+8h] [bp-Ch] BYREF
  int v15; // [sp+Ah] [bp-Ah] BYREF
  char v16; // [sp+Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v15 = 0;
  v9 = *(_BYTE *)(a2 + 8);
  v16 = 0;
  v14[0] = 85;
  v11 = *(_WORD *)(a2 + 10);
  BYTE2(v15) = *(_BYTE *)(a2 + 9);
  BYTE1(v15) = 5;
  LOBYTE(v15) = (16 * (v9 & 1)) & 0x1D | 0x42;
  HIBYTE(v15) = v11;
  v14[1] = -86;
  v12 = BM_CRC5(&v15, 32);
  v16 = v16 & 0xE0 | v12 & 0x1F;
  send_command_packet(a1, (int)v14, 7u);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 228) )
    return sub_B7374(a1, a3, a4, a5, a6);
  else
    return 4;
}
