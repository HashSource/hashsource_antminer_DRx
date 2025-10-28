unsigned int *__fastcall sub_DA968(unsigned int *a1, char a2, int a3, int a4, int a5)
{
  unsigned int v5; // lr
  char v7; // r3
  unsigned int v8; // r9
  unsigned int v9; // r12
  bool v11; // zf
  unsigned int v12; // r2
  unsigned int v13; // r7
  unsigned int v14; // r8
  char *v15; // r0
  char *v16; // r9
  size_t v17; // r10
  char v18; // r3
  unsigned int v19; // r7
  unsigned int *result; // r0
  int v21; // r3
  int v22; // t1
  unsigned int v23; // r7
  char v24[56]; // [sp+0h] [bp-40h] BYREF
  unsigned int v25; // [sp+38h] [bp-8h]
  unsigned int v26; // [sp+3Ch] [bp-4h]

  v5 = a1[16];
  v7 = 128 >> a3;
  v8 = a1[29];
  v9 = a1[30];
  v11 = (v5 | a3) == 0;
  v12 = a3 + 8 * v5;
  v13 = v8 + v12;
  v24[v5] = v7 | a2 & -v7;
  v14 = bswap32(v9);
  if ( v11 )
  {
    a1[30] = -1;
    a1[29] = -512;
  }
  else
  {
    a1[29] = v13 - 512;
    if ( !v8 )
      a1[30] = v9 - 1;
  }
  v15 = &v24[v5 + 1];
  v16 = &v24[v5];
  v17 = 64 - v5;
  if ( v12 > 0x1BE )
  {
    memset(v15, 0, 63 - v5);
    v23 = bswap32(v13);
    sph_blake224_0(a1, v16, v17);
    a1[30] = -1;
    a1[29] = -512;
    memset(v24, 0, sizeof(v24));
    if ( a5 == 8 )
      v24[55] = 1;
    v26 = v23;
    v25 = v14;
    sph_blake224_0(a1, v24, 0x40u);
  }
  else
  {
    memset(v15, 0, 55 - v5);
    v19 = bswap32(v13);
    if ( a5 == 8 )
      v18 = v24[55];
    v26 = v19;
    if ( a5 == 8 )
      v18 |= 1u;
    v25 = v14;
    if ( a5 == 8 )
      v24[55] = v18;
    sph_blake224_0(a1, v16, v17);
  }
  result = a1 + 17;
  v21 = a4;
  do
  {
    v22 = *result++;
    v21 += 4;
    *(_BYTE *)(v21 - 1) = v22;
    *(_BYTE *)(v21 - 4) = HIBYTE(v22);
    *(_BYTE *)(v21 - 3) = BYTE2(v22);
    *(_BYTE *)(v21 - 2) = BYTE1(v22);
  }
  while ( &a1[a5 + 17] != result );
  return result;
}
