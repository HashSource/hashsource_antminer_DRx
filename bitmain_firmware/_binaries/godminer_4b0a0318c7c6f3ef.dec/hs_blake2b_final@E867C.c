int __fastcall hs_blake2b_final(int a1, void *a2, unsigned int a3)
{
  __int64 v6; // r0
  unsigned int v7; // r2
  int v8; // r12
  __int64 v9; // r6
  bool v10; // cf
  __int64 v11; // r0
  int v12; // r2
  _QWORD *v13; // r3
  __int64 v14; // t1
  _BYTE s[68]; // [sp+8h] [bp-44h] BYREF

  memset(s, 0, 0x40u);
  if ( !a2 || *(_DWORD *)(a1 + 228) > a3 || *(_QWORD *)(a1 + 80) )
    return -1;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(a1 + 224);
  v8 = *(unsigned __int8 *)(a1 + 232);
  v9 = v6 + v7;
  v10 = __CFADD__(HIDWORD(v6), HIDWORD(v9));
  v11 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 72) = v11 + v10;
  if ( v8 )
    *(_QWORD *)(a1 + 88) = -1;
  *(_QWORD *)(a1 + 80) = -1;
  memset((void *)(a1 + 96 + v7), 0, 128 - v7);
  sub_E3540((_DWORD *)a1, (unsigned __int64 *)(a1 + 96));
  v12 = a1 - 8;
  v13 = s;
  do
  {
    v14 = *(_QWORD *)(v12 + 8);
    v12 += 8;
    *v13++ = v14;
  }
  while ( v12 != a1 + 56 );
  memcpy(a2, s, *(_DWORD *)(a1 + 228));
  off_195530(s, 0, 0x40u);
  return 0;
}
