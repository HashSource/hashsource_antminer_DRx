int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v9; // r1
  unsigned int v11; // r0
  _BYTE *v12; // r10
  char v13; // r0
  unsigned __int8 v15[2]; // [sp+Ch] [bp-Ch] BYREF
  __int64 src; // [sp+Eh] [bp-Ah] BYREF

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  src = 0;
  v9 = *(_BYTE *)(a2 + 8);
  v15[0] = 85;
  v11 = *(_DWORD *)(a2 + 4);
  src = (16 * (v9 & 1)) & 0x19 | 0x46u;
  v15[1] = -86;
  BYTE1(src) = 8;
  *(_DWORD *)((char *)&src + 3) = reverse_byte_order_32(v11);
  v12 = calloc(8u, 1u);
  memcpy(v12, &src, 7u);
  v13 = BM_CRC5(v12, 64);
  HIBYTE(src) = HIBYTE(src) & 0xE0 | v13 & 0x1F;
  free(v12);
  send_command_packet(a1, v15, 0xAu);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 264) )
    return sub_CE9A0(a1, a3, a4, a5, a6);
  else
    return 4;
}
