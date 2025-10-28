__int64 *__fastcall blake64_close(int a1, char a2, int a3, int a4, unsigned int a5)
{
  __int64 v5; // r2
  __int64 v6; // r2
  bool v7; // cf
  int v8; // r1
  int v9; // r1
  __int64 *result; // r0
  int v11; // r1
  int v12; // r1
  char s[112]; // [sp+10h] [bp+10h] BYREF
  __int64 v16; // [sp+80h] [bp+80h] BYREF
  __int64 v17; // [sp+88h] [bp+88h] BYREF
  int v18; // [sp+94h] [bp+94h]
  __int64 v19; // [sp+98h] [bp+98h]
  __int64 v20; // [sp+A0h] [bp+A0h]
  int v21; // [sp+A8h] [bp+A8h]
  unsigned int v22; // [sp+ACh] [bp+ACh]
  int v23; // [sp+B0h] [bp+B0h]
  unsigned int i; // [sp+B4h] [bp+B4h]

  v23 = *(_DWORD *)(a1 + 128);
  v22 = 8 * v23 + a3;
  v21 = 128 >> a3;
  s[v23] = (128 >> a3) | a2 & -(128 >> a3);
  v20 = v22 + *(_QWORD *)(a1 + 232);
  v19 = *(_QWORD *)(a1 + 240);
  if ( v23 || a3 )
  {
    if ( *(_QWORD *)(a1 + 232) )
    {
      *(_QWORD *)(a1 + 232) -= 1024 - v22;
    }
    else
    {
      LODWORD(v5) = v22 - 1024;
      HIDWORD(v5) = (v22 >= 0x400) - 1;
      *(_QWORD *)(a1 + 232) = v5;
      v6 = *(_QWORD *)(a1 + 240);
      v7 = (_DWORD)v6 != 0;
      LODWORD(v6) = v6 - 1;
      HIDWORD(v6) = v7 + HIDWORD(v6) - 1;
      *(_QWORD *)(a1 + 240) = v6;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  if ( v22 > 0x37E )
  {
    memset(&s[v23 + 1], 0, 127 - v23);
    blake64(a1, &s[v23], 128 - v23);
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    memset(s, 0, sizeof(s));
    if ( a5 == 8 )
      s[111] = 1;
    sph_enc64be_aligned(&v16, v11, v19, HIDWORD(v19));
    sph_enc64be_aligned(&v17, v12, v20, HIDWORD(v20));
    result = blake64(a1, s, 0x80u);
  }
  else
  {
    memset(&s[v23 + 1], 0, 111 - v23);
    if ( a5 == 8 )
      s[111] |= 1u;
    sph_enc64be_aligned(&v16, v8, v19, HIDWORD(v19));
    sph_enc64be_aligned(&v17, v9, v20, HIDWORD(v20));
    result = blake64(a1, &s[v23], 128 - v23);
  }
  v18 = a4;
  for ( i = 0; i < a5; ++i )
    result = (__int64 *)sph_enc64be(
                          (_BYTE *)(v18 + 8 * i),
                          v18 + 8 * i,
                          *(_DWORD *)(a1 + 8 * (i + 17)),
                          *(_DWORD *)(a1 + 8 * (i + 17) + 4));
  return result;
}
