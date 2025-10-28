int *__fastcall sub_45904(int a1, char a2, int a3, int a4, int a5)
{
  int v7; // r7
  __int64 v8; // kr00_8
  unsigned int v9; // r12
  unsigned int v10; // r8
  unsigned int v11; // r9
  char *v12; // r0
  int *result; // r0
  int v14; // r3
  int v15; // r5
  int v16; // t1
  __int64 v17; // r2
  char v18[56]; // [sp+0h] [bp-44h] BYREF
  unsigned int v19; // [sp+38h] [bp-Ch]
  unsigned int v20; // [sp+3Ch] [bp-8h]

  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 116);
  v9 = a3 + 8 * v7;
  v18[v7] = (128 >> a3) | a2 & -(128 >> a3);
  v10 = v8 + v9;
  v11 = bswap32(HIDWORD(v8));
  if ( v7 | a3 )
  {
    LODWORD(v17) = v10 - 512;
    if ( (_DWORD)v8 )
    {
      *(_DWORD *)(a1 + 116) = v17;
    }
    else
    {
      HIDWORD(v17) = HIDWORD(v8) - 1;
      *(_QWORD *)(a1 + 116) = v17;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 116) = -512;
    *(_DWORD *)(a1 + 120) = -1;
  }
  v12 = &v18[v7 + 1];
  if ( v9 > 0x1BE )
  {
    memset(v12, 0, 63 - v7);
    sub_425A8((unsigned int *)a1, &v18[v7], 64 - v7);
    *(_DWORD *)(a1 + 116) = -512;
    *(_DWORD *)(a1 + 120) = -1;
    memset(v18, 0, sizeof(v18));
    if ( a5 == 8 )
      v18[55] = 1;
    v19 = v11;
    v20 = bswap32(v10);
    sub_425A8((unsigned int *)a1, v18, 0x40u);
  }
  else
  {
    memset(v12, 0, 55 - v7);
    if ( a5 == 8 )
      v18[55] |= 1u;
    v19 = v11;
    v20 = bswap32(v10);
    sub_425A8((unsigned int *)a1, &v18[v7], 64 - v7);
  }
  result = (int *)(a1 + 68);
  v14 = a4;
  v15 = a1 + 4 * a5 + 68;
  do
  {
    v16 = *result++;
    v14 += 4;
    *(_BYTE *)(v14 - 1) = v16;
    *(_BYTE *)(v14 - 4) = HIBYTE(v16);
    *(_BYTE *)(v14 - 3) = BYTE2(v16);
    *(_BYTE *)(v14 - 2) = BYTE1(v16);
  }
  while ( (int *)v15 != result );
  return result;
}
