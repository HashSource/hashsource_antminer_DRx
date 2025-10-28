int __fastcall sub_19AE4(int a1, int a2)
{
  __int64 v3; // r10
  __int64 v4; // r6
  unsigned int v6; // r1
  unsigned int v7; // r3
  int result; // r0
  int v9; // r4
  unsigned int v10; // r1
  unsigned int v11; // r0
  char v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r7

  v3 = *(_QWORD *)(a1 + 192);
  HIDWORD(v4) = 0;
  v6 = *(_DWORD *)(a1 + 208);
  LODWORD(v4) = __CFADD__(__CFADD__((_DWORD)v3, v6), HIDWORD(v3));
  *(_QWORD *)(a1 + 192) = v3 + v6;
  if ( v4 )
    ++*(_QWORD *)(a1 + 200);
  if ( v6 <= 0x7F )
  {
    v7 = v6 - 1 + a1;
    do
      *(_BYTE *)++v7 = 0;
    while ( v7 != a1 + 127 );
    *(_DWORD *)(a1 + 208) = 128;
  }
  result = sub_14EA8(a1, 1);
  if ( *(_DWORD *)(a1 + 212) )
  {
    v9 = a2 - 1;
    v10 = 0;
    do
    {
      v11 = v10 >> 3;
      v12 = 8 * (v10++ & 7);
      v13 = v11 + 16;
      v14 = *(_DWORD *)(a1 + 8 * (v11 + 16) + 4);
      result = v14 >> (v12 - 32);
      *(_BYTE *)++v9 = (*(_DWORD *)(a1 + 8 * v13) >> v12) | (v14 << (32 - v12)) | result;
    }
    while ( *(_DWORD *)(a1 + 212) > v10 );
  }
  return result;
}
