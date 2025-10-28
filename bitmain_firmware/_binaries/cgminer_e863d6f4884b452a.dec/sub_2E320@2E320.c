int __fastcall sub_2E320(_DWORD *a1, _BYTE *a2)
{
  int v2; // r3
  unsigned __int8 *v5; // r6
  bool v6; // cf
  int v7; // r2
  int v8; // r7
  size_t v9; // r2
  unsigned __int8 *v10; // r0
  int v11; // r3
  int v12; // r8
  int v13; // r9
  int v14; // r10
  int v15; // r11
  int v16; // r7
  int result; // r0
  int *v18; // r3
  int *v19; // r5
  int v20; // t1
  int v21; // [sp+4h] [bp-8h]

  v2 = a1[1];
  v5 = (unsigned __int8 *)(a1 + 2);
  v6 = (v2 & 0x3Fu) >= 0x38;
  if ( (v2 & 0x3Fu) >= 0x38 )
    v7 = 128;
  else
    v7 = 64;
  v8 = *a1 + v2;
  v9 = v7 - v2;
  v10 = &v5[v2];
  if ( (v2 & 0x3Fu) >= 0x38 )
    v11 = 124;
  else
    v11 = 60;
  if ( v6 )
    v12 = 125;
  else
    v12 = 61;
  if ( v6 )
    v13 = 126;
  else
    v13 = 62;
  if ( v6 )
    v14 = 127;
  else
    v14 = 63;
  if ( v6 )
    v15 = 2;
  else
    v15 = 1;
  v21 = v11;
  memset(v10, 0, v9);
  v16 = 8 * v8;
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  v5[v14] = v16;
  v5[v13] = BYTE1(v16);
  v5[v12] = BYTE2(v16);
  v5[v21] = HIBYTE(v16);
  result = sub_2E130((int)a1, v5, v15);
  v18 = a1 + 34;
  v19 = a1 + 42;
  do
  {
    a2[3] = *v18;
    v20 = *v18++;
    a2[2] = BYTE1(v20);
    a2[1] = *((_WORD *)v18 - 1);
    *a2 = *((_BYTE *)v18 - 1);
    a2 += 4;
  }
  while ( v19 != v18 );
  return result;
}
