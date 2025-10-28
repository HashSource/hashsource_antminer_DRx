_DWORD *sub_3AC10()
{
  _DWORD *v0; // r0
  int v1; // r6
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  int i; // r6
  const char *v9; // r2
  int j; // r6
  _DWORD *v11; // r0
  int k; // r6
  const char *v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r4
  __int64 v16; // r0
  double v17; // d8
  double v18; // d16
  int v19; // r6
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  const char *v22; // r2
  int m; // r6
  char *v24; // r2
  int n; // r6
  _DWORD *v26; // r0
  int ii; // r5
  const char *v28; // r2
  int v29; // r3
  unsigned __int64 v30; // d16
  _QWORD *v31; // r2
  int v32; // t1
  double v34; // [sp+8h] [bp-18h] BYREF
  char s[16]; // [sp+10h] [bp-10h] BYREF

  v0 = sub_32D44(0, "miner_count", &byte_C5468, 0);
  v1 = 0;
  v2 = sub_32CFC(v0, "frequency", byte_C5494, 0);
  v3 = sub_32D44(v2, "fan_num", &byte_C5469, 0);
  sprintf(s, "fan%d", 1);
  v4 = sub_32DF8(v3, s, (const char *)&dword_C544A, 0);
  sprintf(s, "fan%d", 2);
  v5 = sub_32DF8(v4, s, (const char *)dword_C544E, 0);
  v6 = sub_32D44(v5, "temp_num", &byte_C5468, 0);
  do
  {
    sprintf(s, "temp%d", v1 + 1);
    v7 = sub_32D68(v6, s, (const char *)&unk_C4BCC + 64 * v1++ + 320, 0);
    v6 = v7;
  }
  while ( v1 != 4 );
  for ( i = 0; i != 4; ++i )
  {
    sprintf(s, "temp2_%d", i + 1);
    v9 = (char *)&unk_C4BCC + 64 * i + 322;
    v6 = sub_32D68(v6, s, v9, 0);
  }
  for ( j = 0; j != 4; ++j )
  {
    sprintf(s, "temp3%d", j + 1);
    v11 = sub_32D68(v6, s, (const char *)&unk_C4BCC + 64 * j + 312, 0);
    v6 = v11;
  }
  for ( k = 0; k != 4; ++k )
  {
    sprintf(s, "temp4_%d", k + 1);
    v13 = (char *)&unk_C4BCC + 64 * k + 314;
    v14 = sub_32D68(v6, s, v13, 0);
    v6 = v14;
  }
  v15 = sub_32DF8(v14, "temp_max", (const char *)dword_C5473, 0);
  qword_636A8 = sub_49488(
                  COERCE_UNSIGNED_INT64(dbl_63B88 + dbl_63C10 + dbl_639D0),
                  HIDWORD(COERCE_UNSIGNED_INT64(dbl_63B88 + dbl_63C10 + dbl_639D0)));
  v16 = qword_636A8 + dword_63E44;
  if ( v16 )
  {
    v17 = (double)dword_63E44;
    v18 = v17 / sub_493DC(v16, HIDWORD(v16));
  }
  else
  {
    v18 = 0.0;
  }
  v34 = v18;
  v19 = 0;
  v20 = sub_35684(v15, "Device Hardware%", (const char *)&v34, 0);
  v21 = sub_32DB0(v20, "no_matching_work", (const char *)&dword_63E44, 0);
  do
  {
    sprintf(s, "chain_acn%d", v19 + 1);
    v22 = (char *)&unk_C4BCC + v19++ + 2198;
    v21 = sub_32D44(v21, s, v22, 0);
  }
  while ( v19 != 4 );
  for ( m = 0; m != 4; ++m )
  {
    sprintf(s, "chain_acs%d", m + 1);
    v24 = (char *)&unk_C4BCC + 88 * m;
    v21 = sub_32CFC(v21, s, v24 + 1800, 0);
  }
  for ( n = 0; n != 4; ++n )
  {
    sprintf(s, "chain_hw%d", n + 1);
    v26 = sub_32DF8(v21, s, (const char *)&unk_C4BCC + 4 * n + 632, 0);
    v21 = v26;
  }
  for ( ii = 0; ii != 4; ++ii )
  {
    sprintf(s, "chain_rate%d", ii + 1);
    v28 = (char *)&unk_65E6C + 16 * ii;
    v21 = sub_32CFC(v21, s, v28, 0);
  }
  v29 = 805859;
  v30 = 0;
  v31 = &unk_63100;
  do
  {
    v32 = *(unsigned __int8 *)++v29;
    if ( v32 == 1 )
      v30 += *v31;
    ++v31;
  }
  while ( v29 != 805863 );
  sub_3AA38(v30, byte_62E38, 6, 0);
  return v21;
}
