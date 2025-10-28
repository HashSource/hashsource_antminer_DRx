int __fastcall sync_set_dag_node_2282(int a1, int a2)
{
  char v4; // lr
  char v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r0
  int *v8; // r4
  unsigned int v9; // r7
  unsigned int v10; // r0
  _WORD *v11; // lr
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r12
  int v15; // r2
  int v16; // r3
  int *v17; // r5
  unsigned int v18; // r0
  _WORD *v19; // r12
  int v20; // r0
  int v21; // r1
  _DWORD *v22; // lr
  int v23; // r2
  int v24; // r3
  __int16 v26; // [sp+4h] [bp-64h] BYREF
  _WORD s[49]; // [sp+6h] [bp-62h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  memset(s, 0, 0x48u);
  v4 = *(_BYTE *)(a2 + 4);
  v5 = *(_BYTE *)(a2 + 5);
  v6 = *(_DWORD *)a2;
  v26 = -21931;
  LOBYTE(s[0]) = (16 * (v4 & 1)) & 0x1F | 0x80;
  HIBYTE(s[0]) = v5;
  v7 = reverse_byte_order_32(v6);
  v8 = (int *)(a2 + 10);
  v9 = *(_DWORD *)a2;
  *(_DWORD *)&s[1] = v7;
  v10 = reverse_byte_order_32(v9 & 0xFBFFFFFF);
  v11 = &s[3];
  *(_DWORD *)&s[1] = v10;
  do
  {
    v12 = *v8;
    v8 += 4;
    v13 = *(v8 - 3);
    v14 = v11;
    v15 = *(v8 - 2);
    v11 += 8;
    v16 = *(v8 - 1);
    *v14 = v12;
    v14[1] = v13;
    v14[2] = v15;
    v14[3] = v16;
  }
  while ( v8 != (int *)(a2 + 74) );
  v17 = (int *)(a2 + 138);
  s[35] = __rev16(BM_CRC16((unsigned __int8 *)s, 70));
  send_command_packet_1(a1, (unsigned __int8 *)&v26, 0x4Au);
  v18 = reverse_byte_order_32(v9 | 0x4000000);
  v19 = &s[3];
  *(_DWORD *)&s[1] = v18;
  do
  {
    v20 = *v8;
    v8 += 4;
    v21 = *(v8 - 3);
    v22 = v19;
    v23 = *(v8 - 2);
    v19 += 8;
    v24 = *(v8 - 1);
    *v22 = v20;
    v22[1] = v21;
    v22[2] = v23;
    v22[3] = v24;
  }
  while ( v8 != v17 );
  s[35] = __rev16(BM_CRC16((unsigned __int8 *)s, 70));
  send_command_packet_1(a1, (unsigned __int8 *)&v26, 0x4Au);
  return 0;
}
