unsigned int __fastcall sub_45A38(int a1, char a2, int a3, int a4, int a5)
{
  int v5; // r5
  unsigned int v7; // lr
  unsigned int v9; // r12
  unsigned int v10; // r0
  __int64 v11; // kr00_8
  unsigned int v12; // r7
  _BYTE *v13; // r0
  size_t v14; // r2
  char *v15; // r1
  int v16; // r0
  int v17; // r12
  int *v18; // r4
  int *v19; // r12
  unsigned int v20; // r2
  int v21; // r3
  unsigned int result; // r0
  __int64 v23; // [sp+0h] [bp-94h]
  unsigned int v24; // [sp+Ch] [bp-88h]
  _BYTE s[112]; // [sp+10h] [bp-84h] BYREF
  unsigned int v26; // [sp+80h] [bp-14h]
  unsigned int v27; // [sp+84h] [bp-10h]
  int v28; // [sp+88h] [bp-Ch]
  unsigned int v29; // [sp+8Ch] [bp-8h]

  v5 = *(_DWORD *)(a1 + 128);
  v23 = *(_QWORD *)(a1 + 232);
  v7 = *(_DWORD *)(a1 + 244);
  v9 = a3 + 8 * v5;
  v10 = *(_DWORD *)(a1 + 240);
  s[v5] = (128 >> a3) | -(128 >> a3) & a2;
  v11 = v9 + v23;
  v24 = bswap32(v7);
  v12 = bswap32(v10);
  if ( v5 | a3 )
  {
    if ( v23 )
    {
      *(_QWORD *)(a1 + 232) = v23 - (1024 - v9);
    }
    else
    {
      *(_DWORD *)(a1 + 236) = (v9 >= 0x400) - 1;
      *(_DWORD *)(a1 + 244) = (v10 != 0) + v7 - 1;
      *(_DWORD *)(a1 + 232) = v9 - 1024;
      *(_DWORD *)(a1 + 240) = v10 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  v13 = &s[v5 + 1];
  if ( v9 > 0x37E )
  {
    memset(v13, 0, 127 - v5);
    sub_448B0(a1, &s[v5], 128 - v5);
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    memset(s, 0, sizeof(s));
    v15 = s;
    v14 = 128;
    v16 = a1;
    if ( a5 == 8 )
      s[111] = 1;
  }
  else
  {
    memset(v13, 0, 111 - v5);
    v14 = 128 - v5;
    v15 = &s[v5];
    v16 = a1;
    if ( a5 == 8 )
      s[111] |= 1u;
  }
  v29 = bswap32(v11);
  v28 = HIDWORD(v11);
  v26 = v24;
  v27 = v12;
  sub_448B0(v16, v15, v14);
  v17 = a1 + 8 * a5;
  v18 = (int *)(a1 + 136);
  v19 = (int *)(v17 + 136);
  do
  {
    v20 = v18[1];
    v21 = *v18;
    v18 += 2;
    a4 += 8;
    *(_BYTE *)(a4 - 1) = v21;
    result = v20 >> 8;
    *(_BYTE *)(a4 - 4) = HIBYTE(v21);
    *(_BYTE *)(a4 - 5) = v20;
    *(_BYTE *)(a4 - 8) = HIBYTE(v20);
    *(_BYTE *)(a4 - 7) = BYTE2(v20);
    *(_BYTE *)(a4 - 6) = BYTE1(v20);
    *(_BYTE *)(a4 - 3) = BYTE2(v21);
    *(_BYTE *)(a4 - 2) = BYTE1(v21);
  }
  while ( v19 != v18 );
  return result;
}
