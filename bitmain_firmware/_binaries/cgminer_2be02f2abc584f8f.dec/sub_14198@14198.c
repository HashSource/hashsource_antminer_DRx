int sub_14198()
{
  int *v0; // r1
  int v1; // r12
  int v2; // r4
  int v3; // lr
  int v4; // t1
  int result; // r0
  int v6; // r5
  int v7; // r4
  int v8; // r0

  sub_2FE30(&dword_73DF0);
  sub_2FAE0(&unk_73DF8, &dword_73DF0);
  dbl_79BD8 = 0.0;
  dbl_79E68 = 0.0;
  dbl_79E58 = 0.0;
  dbl_79348 = 0.0;
  dbl_78D10 = 0.0;
  v0 = (int *)&unk_73E00;
  do
  {
    *(_QWORD *)v0 = 0;
    v0 += 2;
  }
  while ( v0 != &dword_73E60 );
  v1 = 0;
  dword_73E60 = 0;
  dword_79970 = 0;
  dword_79C6C = 0;
  dbl_79710 = 0.0;
  dbl_79470 = 0.0;
  dbl_797C0 = 0.0;
  dword_7996C = 0;
  dbl_79DD0 = 0.0;
  dbl_79890 = 0.0;
  dword_79598 = 0;
  dword_7948C = 0;
  dword_78EB8 = 0;
  dbl_72438 = 1.0;
  dbl_72BF0 = 1.0;
  dbl_79150 = 0.0;
  dword_79980 = 0;
  dbl_796B0 = 0.0;
  dbl_79738 = 0.0;
  dbl_79478 = 0.0;
  v2 = dword_791E8;
  if ( dword_791E8 > 0 )
  {
    v3 = dword_79488 - 4;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      *(_DWORD *)(v4 + 120) = 0;
      *(_QWORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 124) = 0;
      *(_DWORD *)(v4 + 128) = 0;
      *(_DWORD *)(v4 + 132) = 0;
      *(_DWORD *)(v4 + 136) = 0;
      *(_DWORD *)(v4 + 360) = 0;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 72) = 0;
      *(_QWORD *)(v4 + 80) = 0;
      *(_QWORD *)(v4 + 88) = 0;
      *(_DWORD *)(v4 + 368) = 0;
      *(_DWORD *)(v4 + 372) = 0;
      ++v1;
    }
    while ( v1 < v2 );
  }
  result = sub_1276C();
  if ( dword_797E8 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = sub_13B28(v6);
      sub_2FAE0(v7 + 368, &dword_73DF0);
      sub_140C0(&stru_793D4, "cgminer.c", "zero_stats", 6189);
      *(_QWORD *)(v7 + 80) = 0;
      *(_DWORD *)(v7 + 36) = 0;
      *(_DWORD *)(v7 + 40) = 0;
      *(_DWORD *)(v7 + 44) = 0;
      *(_QWORD *)(v7 + 88) = 0;
      *(_DWORD *)(v7 + 220) = 0;
      *(_QWORD *)(v7 + 192) = 0;
      *(_QWORD *)(v7 + 200) = 0;
      *(_QWORD *)(v7 + 208) = 0;
      *(_QWORD *)(v7 + 224) = 0;
      v8 = sub_1412C(&stru_793D4, "cgminer.c", "zero_stats", 6200);
      off_72D00(v8);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v7 + 4) + 96))(v7);
      ++v6;
    }
    while ( dword_797E8 > v6 );
  }
  return result;
}
