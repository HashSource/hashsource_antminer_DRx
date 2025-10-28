unsigned int __fastcall sub_DAAF4(int a1, char a2, int a3, int a4, int a5)
{
  int v5; // r12
  __int64 v7; // r8
  unsigned int v8; // r0
  unsigned int v9; // lr
  unsigned int v10; // r10
  __int64 v12; // kr00_8
  unsigned int v13; // r9
  unsigned int v14; // r7
  char *v15; // r0
  char *v16; // r10
  size_t v17; // r11
  char v18; // r3
  unsigned int v19; // r8
  int v20; // r7
  int *v21; // r5
  int *v22; // r7
  int v23; // r3
  unsigned int v24; // r2
  unsigned int result; // r0
  char v26; // r3
  __int64 v27; // kr08_8
  __int64 v28; // [sp+0h] [bp-94h]
  char s[112]; // [sp+10h] [bp-84h] BYREF
  unsigned int v30; // [sp+80h] [bp-14h]
  unsigned int v31; // [sp+84h] [bp-10h]
  unsigned int v32; // [sp+88h] [bp-Ch]
  unsigned int v33; // [sp+8Ch] [bp-8h]

  v5 = *(_DWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 232);
  v8 = *(_DWORD *)(a1 + 240);
  v9 = a3 + 8 * v5;
  v10 = *(_DWORD *)(a1 + 244);
  v28 = v7;
  v12 = v9 + v7;
  s[v5] = (128 >> a3) | a2 & -(128 >> a3);
  v13 = bswap32(v8);
  v14 = bswap32(v10);
  if ( v5 | a3 )
  {
    if ( v28 )
    {
      *(_QWORD *)(a1 + 232) = v28 - (1024 - v9);
    }
    else
    {
      v27 = v9 - 1024LL;
      *(_DWORD *)(a1 + 236) = HIDWORD(v27);
      *(_DWORD *)(a1 + 244) = (__PAIR64__(v10, v8) - 1) >> 32;
      *(_DWORD *)(a1 + 232) = v27;
      *(_DWORD *)(a1 + 240) = v8 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  v15 = &s[v5 + 1];
  v16 = &s[v5];
  v17 = 128 - v5;
  if ( v9 > 0x37E )
  {
    memset(v15, 0, 127 - v5);
    sph_blake384_0(a1, v16, v17);
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    memset(s, 0, sizeof(s));
    v26 = a5;
    v33 = bswap32(v12);
    v32 = bswap32(HIDWORD(v12));
    if ( a5 == 8 )
      v26 = 1;
    v30 = v14;
    if ( a5 == 8 )
      s[111] = v26;
    v31 = v13;
    sph_blake384_0(a1, s, 0x80u);
  }
  else
  {
    memset(v15, 0, 111 - v5);
    v18 = a5;
    v19 = bswap32(HIDWORD(v12));
    v33 = bswap32(v12);
    if ( a5 == 8 )
      v18 = s[111];
    v32 = v19;
    v30 = v14;
    if ( a5 == 8 )
      v18 |= 1u;
    v31 = v13;
    if ( a5 == 8 )
      s[111] = v18;
    sph_blake384_0(a1, v16, v17);
  }
  v20 = a1 + 8 * a5;
  v21 = (int *)(a1 + 136);
  v22 = (int *)(v20 + 136);
  do
  {
    v23 = *v21;
    v21 += 2;
    v24 = *(v21 - 1);
    a4 += 8;
    *(_BYTE *)(a4 - 1) = v23;
    result = v24 >> 8;
    *(_BYTE *)(a4 - 4) = HIBYTE(v23);
    *(_BYTE *)(a4 - 5) = v24;
    *(_BYTE *)(a4 - 8) = HIBYTE(v24);
    *(_BYTE *)(a4 - 7) = BYTE2(v24);
    *(_BYTE *)(a4 - 6) = BYTE1(v24);
    *(_BYTE *)(a4 - 3) = BYTE2(v23);
    *(_BYTE *)(a4 - 2) = BYTE1(v23);
  }
  while ( v22 != v21 );
  return result;
}
