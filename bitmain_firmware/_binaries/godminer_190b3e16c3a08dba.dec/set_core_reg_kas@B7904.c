int __fastcall set_core_reg_kas(int a1, int *a2)
{
  char v2; // r2
  char v4; // lr
  char v5; // r12
  char v6; // r3
  __int16 v7; // r2
  int v8; // r1
  char v9; // r0
  _BYTE v11[2]; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+6h] [bp-1Ah] BYREF
  int v13; // [sp+Ah] [bp-16h]
  char v14; // [sp+Eh] [bp-12h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v2 = *((_BYTE *)a2 + 8);
  v12 = 0;
  v4 = *((_BYTE *)a2 + 12);
  v13 = 0;
  v5 = *((_BYTE *)a2 + 9);
  v6 = (16 * (v2 & 1)) | 4;
  v7 = *((_WORD *)a2 + 5);
  v8 = *a2;
  LOBYTE(v12) = v6 & 0x1F | 0x40;
  BYTE2(v12) = v5;
  HIBYTE(v12) = v7;
  HIBYTE(v13) = v8;
  LOBYTE(v13) = v4;
  v11[0] = 85;
  v11[1] = -86;
  BYTE1(v12) = 9;
  v14 = 0;
  v9 = BM_CRC5(&v12, 64);
  v14 = v14 & 0xE0 | v9 & 0x1F;
  send_command_packet(a1, (int)v11, 0xBu);
  return 0;
}
