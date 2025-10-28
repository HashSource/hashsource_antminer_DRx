int __fastcall set_chipaddr_base(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r4
  int v8; // r5
  char v9; // t1
  char v10; // r0
  __int16 v12; // [sp+0h] [bp-18h] BYREF
  int v13; // [sp+2h] [bp-16h] BYREF
  char v14; // [sp+6h] [bp-12h]

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  (*(void (**)(void))(a1 + 272))();
  usleep(0x4E20u);
  v13 = 1344;
  v6 = 5;
  v14 = 0;
  v12 = -21931;
  if ( a3 > 0 )
  {
    v7 = a2 - 1;
    v8 = v7 + a3;
    while ( 1 )
    {
      v9 = *(_BYTE *)++v7;
      BYTE2(v13) = v9;
      v10 = BM_CRC5(&v13, 8 * (v6 - 1));
      v14 = v14 & 0xE0 | v10 & 0x1F;
      send_command_packet(a1, (unsigned __int8 *)&v12, 7u);
      usleep(0x4E20u);
      if ( v7 == v8 )
        break;
      v6 = BYTE1(v13);
    }
  }
  return 0;
}
