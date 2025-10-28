int __fastcall equihash_blake2b_update(int a1, char *src, __int64 n)
{
  __int64 v3; // r6
  int v5; // r0
  char *v6; // r11
  bool v7; // cc
  int v8; // r10
  size_t v9; // r5
  unsigned int v10; // r8
  char *v11; // r3
  __int64 v12; // r6
  __int64 v13; // r10
  int v14; // r12
  bool v15; // cc
  int v16; // r2
  bool v17; // cf
  size_t v19; // [sp+0h] [bp-1Ch]
  int v20; // [sp+4h] [bp-18h]
  char *dest; // [sp+Ch] [bp-10h]
  char *v22; // [sp+10h] [bp-Ch]

  v3 = n;
  if ( n )
  {
    v5 = *(_DWORD *)(a1 + 352);
    v6 = src;
    v7 = HIDWORD(n) != 0;
    v8 = a1 + 96;
    v9 = 256 - v5;
    if ( !HIDWORD(n) )
      v7 = (unsigned int)n > v9;
    v10 = 256 - v5;
    if ( v7 )
    {
      dest = (char *)(a1 + 96);
      v11 = src;
      v19 = n;
      v20 = HIDWORD(v3);
      do
      {
        v22 = &v11[v9];
        memcpy(&dest[v5], v11, v9);
        v12 = *(_QWORD *)(a1 + 72);
        v13 = *(_QWORD *)(a1 + 64) + 128LL;
        v14 = *(_DWORD *)(a1 + 352);
        v15 = HIDWORD(v13) != 0;
        *(_QWORD *)(a1 + 64) = v13;
        if ( !HIDWORD(v13) )
          v15 = (unsigned int)v13 > 0x7F;
        v16 = !v15;
        *(_DWORD *)(a1 + 352) = v14 + v9;
        *(_QWORD *)(a1 + 72) = v12 + (unsigned int)v16;
        sub_DD390((_DWORD *)a1, (int)dest);
        memcpy(dest, (const void *)(a1 + 224), 0x80u);
        v17 = v19 >= v10;
        v19 -= v10;
        v5 = *(_DWORD *)(a1 + 352) - 128;
        v9 = 384 - *(_DWORD *)(a1 + 352);
        *(_DWORD *)(a1 + 352) = v5;
        v10 = 256 - v5;
        v20 -= !v17;
        v17 = v20 == 0;
        v11 = v22;
        if ( !v20 )
          v17 = v9 >= v19;
      }
      while ( !v17 );
      v8 = a1 + 96;
      v6 = v22;
      LODWORD(v3) = v19;
    }
    memcpy((void *)(v8 + v5), v6, v3);
    *(_DWORD *)(a1 + 352) += v3;
  }
  return 0;
}
