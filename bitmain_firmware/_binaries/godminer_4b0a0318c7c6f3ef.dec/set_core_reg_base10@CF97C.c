int __fastcall set_core_reg_base10(int a1, int a2)
{
  char v4; // r12
  unsigned int v5; // r0
  char v6; // r3
  __int16 v7; // r0
  char v8; // r3
  char v9; // r2
  unsigned int v10; // r0
  _BYTE *v11; // r7
  char v12; // r0
  unsigned __int8 v14[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD src[3]; // [sp+2h] [bp-26h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  memset(src, 0, sizeof(src));
  v4 = *(_BYTE *)(a2 + 9);
  v5 = *(unsigned __int16 *)(a2 + 10);
  v6 = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  v14[0] = 85;
  BYTE2(src[0]) = v4;
  v14[1] = -86;
  LOBYTE(src[0]) = v6;
  BYTE1(src[0]) = 12;
  v7 = reverse_byte_order_16(v5);
  v8 = *(_BYTE *)(a2 + 13);
  v9 = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)src + 3) = v7;
  v10 = *(_DWORD *)a2;
  BYTE2(src[1]) = v8;
  BYTE1(src[1]) = v9;
  *(_DWORD *)((char *)&src[1] + 3) = reverse_byte_order_32(v10);
  v11 = calloc(0xBu, 1u);
  memcpy(v11, src, 0xBu);
  v12 = BM_CRC5(v11, 88);
  HIBYTE(src[2]) = HIBYTE(src[2]) & 0xE0 | v12 & 0x1F;
  free(v11);
  send_command_packet(a1, v14, 0xEu);
  return 0;
}
