int __fastcall sync_get_chip_reg_base(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v12; // lr
  char v13; // r12
  __int16 v14; // lr
  char v15; // r0
  int v16; // r1
  int v17; // r0
  bool v18; // zf
  int (__fastcall *v19)(int, int, int, int, int, int, _DWORD, _DWORD); // r4
  _QWORD v21[5]; // [sp+8h] [bp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  *(_DWORD *)((char *)v21 + 2) = 0;
  v12 = *(_BYTE *)(a2 + 8);
  BYTE6(v21[0]) = 0;
  v13 = (16 * (v12 & 1)) | 2;
  v14 = *(_WORD *)(a2 + 10);
  LOWORD(v21[0]) = -21931;
  *(_DWORD *)((char *)v21 + 2) = v13 & 0x1F | 0x40;
  BYTE5(v21[0]) = v14;
  BYTE3(v21[0]) = 5;
  v15 = BM_CRC5((_BYTE *)v21 + 2, 32);
  BYTE6(v21[0]) = BYTE6(v21[0]) & 0xE0 | v15 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)v21, 7u);
  v16 = *(unsigned __int8 *)(a2 + 8);
  v17 = a1;
  v18 = v16 == 0;
  if ( *(_BYTE *)(a2 + 8) )
    v16 = a3;
  v19 = *(int (__fastcall **)(int, int, int, int, int, int, _DWORD, _DWORD))(a1 + 292);
  if ( v18 )
    v16 = 1;
  return v19(v17, v16, a4, a5, a7, a8, v21[0], HIDWORD(v21[0]));
}
