int __fastcall hs_header_read(const void **a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  unsigned int v4; // lr
  int *v5; // r4
  int v6; // r5
  unsigned int v7; // r4
  _DWORD *v8; // lr
  int v9; // r8
  int v10; // r7
  int v11; // r6
  unsigned int v12; // r4
  _DWORD *v13; // lr
  int v14; // r7
  int v15; // r6
  int v16; // r5
  int v17; // r7
  int v18; // r6
  int v19; // r5
  unsigned int v20; // lr
  _DWORD *v24; // r2
  unsigned int v25; // r3
  int v26; // r3

  if ( *a2 <= 3u )
    return 0;
  *a3 = *(_DWORD *)*a1;
  v4 = *a2 - 4;
  v5 = (int *)((char *)*a1 + 4);
  *a1 = v5;
  *a2 = v4;
  if ( v4 <= 7 )
    return 0;
  v6 = *v5;
  a3[3] = v5[1];
  a3[2] = v6;
  v7 = *a2 - 8;
  v8 = (char *)*a1 + 8;
  *a1 = v8;
  *a2 = v7;
  if ( v7 <= 0x13 )
    return 0;
  v9 = v8[1];
  v10 = v8[2];
  v11 = v8[3];
  a3[4] = *v8;
  a3[5] = v9;
  a3[6] = v10;
  a3[7] = v11;
  a3[8] = v8[4];
  v12 = *a2 - 20;
  v13 = (char *)*a1 + 20;
  *a1 = v13;
  *a2 = v12;
  if ( v12 <= 0x1F )
    return 0;
  v14 = v13[1];
  v15 = v13[2];
  v16 = v13[3];
  a3[9] = *v13;
  a3[10] = v14;
  a3[11] = v15;
  a3[12] = v16;
  v17 = v13[5];
  v18 = v13[6];
  v19 = v13[7];
  a3[13] = v13[4];
  a3[14] = v17;
  a3[15] = v18;
  a3[16] = v19;
  v20 = *a2 - 32;
  *a1 = (char *)*a1 + 32;
  *a2 = v20;
  if ( v20 <= 0x1F )
    return 0;
  if ( !sub_E9F04(a1, a2, a3 + 17, 0x20u) )
    return 0;
  if ( *a2 <= 0x1Fu )
    return 0;
  if ( !sub_E9F04(a1, a2, a3 + 25, 0x20u) )
    return 0;
  if ( *a2 <= 0x17u )
    return 0;
  if ( !sub_E9F04(a1, a2, a3 + 33, 0x18u) )
    return 0;
  if ( *a2 <= 0x1Fu )
    return 0;
  if ( !sub_E9F04(a1, a2, a3 + 39, 0x20u) )
    return 0;
  if ( *a2 <= 0x1Fu )
    return 0;
  if ( !sub_E9F04(a1, a2, a3 + 47, 0x20u) )
    return 0;
  if ( *a2 <= 0x1Fu )
    return 0;
  result = sub_E9F04(a1, a2, a3 + 55, 0x20u);
  if ( !result )
    return 0;
  if ( *a2 <= 3u )
    return 0;
  a3[63] = *(_DWORD *)*a1;
  v24 = *a1;
  v25 = *a2 - 4;
  *a1 = (char *)*a1 + 4;
  *a2 = v25;
  if ( v25 <= 3 )
    return 0;
  a3[64] = v24[1];
  v26 = *a2 - 4;
  *a1 = (char *)*a1 + 4;
  *a2 = v26;
  return result;
}
