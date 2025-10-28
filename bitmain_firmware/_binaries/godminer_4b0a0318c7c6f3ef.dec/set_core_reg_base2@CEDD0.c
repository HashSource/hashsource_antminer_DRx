int __fastcall set_core_reg_base2(int a1, int a2)
{
  char v4; // r12
  char v5; // r0
  unsigned int v6; // r0
  _BYTE *v7; // r8
  char v8; // r0
  unsigned __int8 v10[2]; // [sp+0h] [bp-28h] BYREF
  _BYTE src[33]; // [sp+2h] [bp-26h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  *(_DWORD *)src = 0;
  v4 = *(_BYTE *)(a2 + 9);
  v5 = *(_BYTE *)(a2 + 12);
  *(_DWORD *)src = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  src[3] = v5;
  v6 = *(unsigned __int16 *)(a2 + 10);
  src[2] = v4;
  v10[0] = 85;
  v10[1] = -86;
  src[1] = 11;
  src[6] = 0;
  *(_DWORD *)&src[7] = 0;
  *(_WORD *)&src[4] = reverse_byte_order_16(v6);
  *(_DWORD *)&src[6] = reverse_byte_order_32(*(_DWORD *)a2);
  v7 = calloc(0xCu, 1u);
  memcpy(v7, src, 0xAu);
  v8 = BM_CRC5(v7, 96);
  src[10] = src[10] & 0xE0 | v8 & 0x1F;
  free(v7);
  send_command_packet(a1, v10, 0xDu);
  return 0;
}
