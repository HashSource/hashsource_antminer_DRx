int __fastcall sub_554F4(int a1, char a2, int a3, int a4, int a5)
{
  int v7; // r11
  unsigned int v8; // r3
  __int64 v9; // r0
  unsigned __int64 v10; // d16
  __int64 v11; // r8
  __int64 v12; // r4
  bool v13; // zf
  __int64 v14; // d16
  __int64 v15; // r2
  __int64 v16; // d18
  int result; // r0
  int v18; // r10
  __int64 v19; // d16
  __int64 v20; // r2
  __int64 v21; // d18
  _BYTE *v22; // r1
  __int64 v23; // t1
  char v24[112]; // [sp+0h] [bp-84h] BYREF
  unsigned __int64 v25; // [sp+70h] [bp-14h]
  unsigned __int64 v26; // [sp+78h] [bp-Ch]

  v7 = *(_DWORD *)(a1 + 128);
  v8 = a3 + 8 * v7;
  v24[v7] = (128 >> a3) | -(128 >> a3) & a2;
  v9 = *(_QWORD *)(a1 + 232);
  v10 = vshrd_n_u64(vdup_n_s32(v8).n64_u64[0], 0x20u);
  v11 = v10 + v9;
  v12 = *(_QWORD *)(a1 + 240);
  v13 = a3 == 0;
  if ( !a3 )
    v13 = v7 == 0;
  if ( v13 )
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  else if ( v9 )
  {
    *(_QWORD *)(a1 + 232) = v9 - (1024 - v8);
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v10 - 1024;
    *(_QWORD *)(a1 + 240) = v12 - 1;
  }
  if ( v8 > 0x37E )
  {
    memset(&v24[v7 + 1], 0, 127 - v7);
    sub_53F20(a1, &v24[v7], 128 - v7);
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    memset(v24, 0, sizeof(v24));
    if ( a5 == 8 )
      v24[111] = 1;
    v19 = vshld_n_s64(__PAIR64__(v12, HIDWORD(v12)) & 0xFFFF0000FFFFLL, 0x10u);
    LODWORD(v20) = v19 | ((HIDWORD(v12) & 0xFFFF0000) >> 16) | ((v12 & 0xFFFF0000) << 16);
    HIDWORD(v20) = HIDWORD(v19) | (((unsigned int)v12 & 0xFFFF0000) >> 16);
    v25 = vshld_n_s64(v20 & 0xFF00FF00FF00FFLL, 8u) | ((v20 & 0xFF00FF00FF00FF00LL) >> 8);
    v21 = vshld_n_s64(__PAIR64__(v11, HIDWORD(v11)) & 0xFFFF0000FFFFLL, 0x10u);
    LODWORD(v20) = v21 | ((HIDWORD(v11) & 0xFFFF0000) >> 16) | ((v11 & 0xFFFF0000) << 16);
    HIDWORD(v20) = HIDWORD(v21) | (((unsigned int)v11 & 0xFFFF0000) >> 16);
    v26 = vshld_n_s64(v20 & 0xFF00FF00FF00FFLL, 8u) | ((v20 & 0xFF00FF00FF00FF00LL) >> 8);
    result = sub_53F20(a1, v24, 0x80u);
  }
  else
  {
    memset(&v24[v7 + 1], 0, 111 - v7);
    if ( a5 == 8 )
      v24[111] |= 1u;
    v14 = vshld_n_s64(__PAIR64__(v12, HIDWORD(v12)) & 0xFFFF0000FFFFLL, 0x10u);
    LODWORD(v15) = v14 | ((HIDWORD(v12) & 0xFFFF0000) >> 16) | ((v12 & 0xFFFF0000) << 16);
    HIDWORD(v15) = HIDWORD(v14) | (((unsigned int)v12 & 0xFFFF0000) >> 16);
    v25 = vshld_n_s64(v15 & 0xFF00FF00FF00FFLL, 8u) | ((v15 & 0xFF00FF00FF00FF00LL) >> 8);
    v16 = vshld_n_s64(__PAIR64__(v11, HIDWORD(v11)) & 0xFFFF0000FFFFLL, 0x10u);
    LODWORD(v15) = v16 | ((HIDWORD(v11) & 0xFFFF0000) >> 16) | ((v11 & 0xFFFF0000) << 16);
    HIDWORD(v15) = HIDWORD(v16) | (((unsigned int)v11 & 0xFFFF0000) >> 16);
    v26 = vshld_n_s64(v15 & 0xFF00FF00FF00FFLL, 8u) | ((v15 & 0xFF00FF00FF00FF00LL) >> 8);
    result = sub_53F20(a1, &v24[v7], 128 - v7);
  }
  if ( a5 )
  {
    v18 = a1 + 128;
    for ( result = 0; result != a5; ++result )
    {
      v22 = (_BYTE *)(a4 + 8 * result);
      v23 = *(_QWORD *)(v18 + 8);
      v18 += 8;
      *v22 = HIBYTE(v23);
      v22[1] = BYTE6(v23);
      v22[2] = BYTE5(v23);
      v22[3] = BYTE4(v23);
      v22[4] = BYTE3(v23);
      v22[5] = BYTE2(v23);
      v22[6] = BYTE1(v23);
      v22[7] = v23;
    }
  }
  return result;
}
