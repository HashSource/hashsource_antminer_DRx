int __fastcall sync_get_chip_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  __int16 v10; // r0
  char v11; // r12
  char v12; // r2
  char v13; // r0
  unsigned __int8 v15[2]; // [sp+8h] [bp-Ch] BYREF
  int v16; // [sp+Ah] [bp-Ah] BYREF
  char v17; // [sp+Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  v16 = 0;
  v15[0] = 85;
  v10 = *(_WORD *)(a2 + 10);
  v11 = *(_BYTE *)(a2 + 9);
  v12 = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1D | 0x42;
  v17 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  LOBYTE(v16) = v12;
  HIBYTE(v16) = v10;
  BYTE1(v16) = 5;
  BYTE2(v16) = v11;
  v15[1] = -86;
  v13 = BM_CRC5(&v16, 32);
  v17 = v17 & 0xE0 | v13 & 0x1F;
  send_command_packet(a1, v15, 7u);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 264) )
    return sub_A3C0C(a1, a3, a4, a5, a6);
  else
    return 4;
}
