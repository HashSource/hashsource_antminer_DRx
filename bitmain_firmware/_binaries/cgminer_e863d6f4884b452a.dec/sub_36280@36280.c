_DWORD *sub_36280()
{
  int v0; // r5
  _DWORD *v1; // r0
  _DWORD *v2; // r0
  const char *v3; // r4
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  __int16 *v6; // r6
  _DWORD *v7; // r5
  int v8; // r4
  __int16 *v9; // r4
  int v10; // r6
  __int16 *v11; // r4
  int v12; // r6
  __int16 *v13; // r4
  int v14; // r6
  __int16 *v15; // r4
  int v16; // r6
  int v17; // r3
  int v18; // r12
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r3
  _DWORD *v22; // r5
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  double v25; // d5
  double v26; // d7
  _DWORD *v27; // r0
  int v28; // r5
  _DWORD *v29; // r4
  const char *v30; // r6
  int v31; // r5
  _DWORD *v32; // r0
  int i; // r5
  const char *v34; // r6
  int v35; // r5
  _DWORD *result; // r0
  char v37; // [sp+7h] [bp-45h] BYREF
  char v38[32]; // [sp+8h] [bp-44h] BYREF
  char s[36]; // [sp+28h] [bp-24h] BYREF

  v37 = 4 * byte_74738;
  v0 = 0;
  v1 = sub_328EC(0, "miner_count", &byte_74738, 0);
  v2 = sub_328C4(v1, "frequency", byte_7476D, 0);
  v3 = (const char *)&dword_7470A;
  v4 = sub_328EC(v2, "fan_num", &byte_74739, 0);
  do
  {
    sprintf(s, "fan%d", ++v0);
    v5 = sub_32950(v4, s, v3, 0);
    v3 += 4;
    v4 = v5;
  }
  while ( v0 != 6 );
  v6 = (__int16 *)&unk_73ED8;
  v7 = sub_328EC(v5, "temp_num", &v37, 1);
  v8 = 0;
  do
  {
    sprintf(v38, "temp_in_pcb_%d", ++v8);
    sprintf(s, "%d-%d", v6[152], v6[156]);
    v6 += 16;
    v7 = sub_328C4(v7, v38, s, 1);
  }
  while ( v8 != 4 );
  v9 = (__int16 *)&unk_73ED8;
  v10 = 0;
  do
  {
    sprintf(v38, "temp_out_pcb_%d", ++v10);
    sprintf(s, "%d-%d", v9[160], v9[164]);
    v9 += 16;
    v7 = sub_328C4(v7, v38, s, 1);
  }
  while ( v10 != 4 );
  v11 = (__int16 *)&unk_73ED8;
  v12 = 0;
  do
  {
    sprintf(v38, "temp_in_chip_%d", ++v12);
    sprintf(s, "%d-%d", v11[153], v11[157]);
    v11 += 16;
    v7 = sub_328C4(v7, v38, s, 1);
  }
  while ( v12 != 4 );
  v13 = (__int16 *)&unk_73ED8;
  v14 = 0;
  do
  {
    sprintf(v38, "temp_out_chip_%d", ++v14);
    sprintf(s, "%d-%d", v13[161], v13[165]);
    v13 += 16;
    v7 = sub_328C4(v7, v38, s, 1);
  }
  while ( v14 != 4 );
  v15 = (__int16 *)&unk_73ED8;
  v16 = 0;
  do
  {
    v17 = v15[156];
    ++v16;
    v18 = v15[152];
    v19 = v15[164];
    v15 += 16;
    if ( v17 < v18 )
      v17 = v18;
    if ( v17 < v19 )
      v17 = v19;
    if ( v17 < v15[144] )
      LOWORD(v17) = v15[144];
    *(_WORD *)v38 = v17;
    sprintf(s, "temp%d", v16);
    v20 = sub_32900(v7, s, v38, 1);
    v21 = v15[141];
    v22 = v20;
    if ( v21 < v15[137] )
      v21 = v15[137];
    if ( v21 < v15[149] )
      v21 = v15[149];
    if ( v21 < v15[145] )
      LOWORD(v21) = v15[145];
    *(_WORD *)v38 = v21;
    sprintf(s, "temp2_%d", v16);
    v23 = sub_32900(v22, s, v38, 1);
    v7 = v23;
  }
  while ( v16 != 4 );
  v24 = sub_32950(v23, "temp_max", (const char *)dword_74747, 0);
  v25 = dbl_72D90 + dbl_72E30 + dbl_739F8 + (double)dword_72D08;
  dbl_73D88 = dbl_72D90 + dbl_72E30 + dbl_739F8;
  if ( v25 == 0.0 )
    v26 = 0.0;
  else
    v26 = (double)dword_72D08 * 256.0 / v25;
  qword_6FAE0 = *(_QWORD *)&v26;
  v27 = sub_32AA4(v24, "Device Hardware%", (const char *)&qword_6FAE0, 1);
  v28 = 0;
  v29 = sub_32928(v27, "no_matching_work", (const char *)&dword_72D08, 1);
  do
  {
    sprintf(s, "chain_acn%d", ++v28);
    v29 = sub_328EC(v29, s, &byte_74731[v28], 0);
  }
  while ( v28 != 4 );
  v30 = (const char *)&unk_74570;
  v31 = 0;
  do
  {
    sprintf(s, "chain_acs%d", ++v31);
    v32 = sub_328C4(v29, s, v30, 0);
    v30 += 88;
    v29 = v32;
  }
  while ( v31 != 4 );
  for ( i = 0; i != 4; v29 = sub_32950(v29, s, &byte_740DC[4 * i], 0) )
    sprintf(s, "chain_hw%d", ++i);
  v34 = (const char *)&unk_73E8C;
  v35 = 0;
  do
  {
    sprintf(s, "chain_rate%d", ++v35);
    result = sub_328C4(v29, s, v34, 0);
    v34 += 16;
    v29 = result;
  }
  while ( v35 != 4 );
  return result;
}
