int __fastcall equihash_blake2b_final(int a1, void *a2, size_t a3)
{
  _BOOL4 v6; // r3
  unsigned int v7; // r12
  __int64 v8; // r6
  __int64 v9; // r0
  int v10; // lr
  _BOOL4 v11; // r3
  int v12; // r0
  _BYTE *v13; // r3
  int v14; // r4
  int v15; // t1
  int v16; // r2
  size_t v18; // r2
  __int64 v19; // [sp+0h] [bp-4Ch]
  _BYTE s[68]; // [sp+8h] [bp-44h] BYREF

  memset(s, 0, 0x40u);
  v6 = a2 == 0;
  if ( a3 - 1 > 0x3F )
    v6 = 1;
  if ( v6 || *(_QWORD *)(a1 + 80) )
    return -1;
  v7 = *(_DWORD *)(a1 + 352);
  v8 = *(_QWORD *)(a1 + 64);
  v19 = *(_QWORD *)(a1 + 72);
  if ( v7 > 0x80 )
  {
    *(_QWORD *)(a1 + 64) = v8 + 128;
    *(_QWORD *)(a1 + 72) = v19 + ((unsigned __int64)(v8 + 128) <= 0x7F);
    sub_DBEE0((_DWORD *)a1, a1 + 96);
    v18 = *(_DWORD *)(a1 + 352) - 128;
    *(_DWORD *)(a1 + 352) = v18;
    memcpy((void *)(a1 + 96), (const void *)(a1 + 224), v18);
    v7 = *(_DWORD *)(a1 + 352);
    v8 = *(_QWORD *)(a1 + 64);
    v19 = *(_QWORD *)(a1 + 72);
  }
  v9 = v8 + v7;
  v10 = *(unsigned __int8 *)(a1 + 356);
  v11 = __CFADD__(HIDWORD(v8), HIDWORD(v9));
  *(_QWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 72) = v19 + v11;
  if ( v10 )
    *(_QWORD *)(a1 + 88) = -1;
  *(_QWORD *)(a1 + 80) = -1;
  memset((void *)(a1 + 96 + v7), 0, 256 - v7);
  sub_DBEE0((_DWORD *)a1, a1 + 96);
  v12 = a1 - 8;
  v13 = s;
  v14 = a1 + 56;
  do
  {
    v15 = *(_DWORD *)(v12 + 8);
    v12 += 8;
    v13 += 8;
    v16 = *(_DWORD *)(v12 + 4);
    *(v13 - 8) = v15;
    *(v13 - 4) = v16;
    *(v13 - 7) = BYTE1(v15);
    *(v13 - 3) = BYTE1(v16);
    *(v13 - 2) = BYTE2(v16);
    *(v13 - 1) = HIBYTE(v16);
    *((_WORD *)v13 - 3) = HIWORD(v15);
  }
  while ( v14 != v12 );
  memcpy(a2, s, a3);
  return 0;
}
