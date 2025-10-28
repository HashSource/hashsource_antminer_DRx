int __fastcall sha256_final(_DWORD *a1, _BYTE *a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r6
  bool v5; // cf
  int v7; // r2
  int v8; // r7
  size_t v9; // r2
  unsigned __int8 *v10; // r0
  int v11; // r3
  int v12; // r7
  int v13; // r8
  int v14; // r9
  int v15; // r10
  int v16; // r11
  int result; // r0
  int *v18; // r3
  int *v19; // r5
  int v20; // t1
  int v21; // [sp+4h] [bp-8h]

  v2 = a1[1];
  v3 = (unsigned __int8 *)(a1 + 2);
  v5 = (v2 & 0x3Fu) >= 0x38;
  if ( (v2 & 0x3Fu) >= 0x38 )
    v7 = 128;
  else
    v7 = 64;
  v8 = v2 + *a1;
  v9 = v7 - v2;
  v10 = &v3[v2];
  if ( (v2 & 0x3Fu) >= 0x38 )
    v11 = 124;
  else
    v11 = 60;
  v12 = 8 * v8;
  if ( v5 )
    v13 = 125;
  else
    v13 = 61;
  v21 = v11;
  if ( v5 )
    v14 = 126;
  else
    v14 = 62;
  if ( v5 )
    v15 = 127;
  else
    v15 = 63;
  if ( v5 )
    v16 = 2;
  else
    v16 = 1;
  memset(v10, 0, v9);
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  v3[v15] = v12;
  v3[v14] = BYTE1(v12);
  v3[v13] = BYTE2(v12);
  v3[v21] = HIBYTE(v12);
  result = sha256_transf((int)a1, v3, v16);
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
