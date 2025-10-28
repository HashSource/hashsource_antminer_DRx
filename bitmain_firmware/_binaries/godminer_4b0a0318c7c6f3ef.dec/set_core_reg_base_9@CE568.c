int __fastcall set_core_reg_base_9(int a1, int *a2)
{
  __int16 v3; // lr
  int v4; // r2
  char v5; // r6
  char v6; // r3
  char v7; // r1
  char v8; // r0
  unsigned __int8 v10[2]; // [sp+4h] [bp-1Ch] BYREF
  int v11; // [sp+6h] [bp-1Ah] BYREF
  char v12; // [sp+Ah] [bp-16h]
  char v13; // [sp+Bh] [bp-15h]
  char v14; // [sp+Ch] [bp-14h]
  char v15; // [sp+Dh] [bp-13h]
  char v16; // [sp+Eh] [bp-12h]

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v11 = 0;
  v3 = *((_WORD *)a2 + 5);
  v4 = *a2;
  v5 = *((_BYTE *)a2 + 9);
  v6 = (16 * (a2[2] & 1)) | 4;
  v7 = *((_BYTE *)a2 + 12);
  v15 = v4;
  LOBYTE(v11) = v6 & 0x1F | 0x40;
  v13 = BYTE2(v4);
  v14 = BYTE1(v4);
  v12 = v7;
  HIBYTE(v11) = v3;
  v10[0] = 85;
  v10[1] = -86;
  BYTE1(v11) = 9;
  v16 = 0;
  BYTE2(v11) = v5;
  v8 = BM_CRC5(&v11, 64);
  v16 = v16 & 0xE0 | v8 & 0x1F;
  send_command_packet(a1, v10, 0xBu);
  return 0;
}
