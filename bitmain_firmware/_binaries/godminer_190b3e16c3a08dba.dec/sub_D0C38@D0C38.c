void *__fastcall sub_D0C38(int a1, unsigned __int64 *src, size_t n)
{
  int v4; // r0
  int v5; // r11
  size_t v6; // r10
  unsigned __int64 *v7; // r5
  size_t v8; // r3
  void *v9; // r0
  void *result; // r0
  __int64 v11; // r8
  bool v12; // cc
  __int64 v13; // r2
  int v14; // r12
  unsigned __int64 *v15; // r1
  __int64 v16; // r2
  __int64 v17; // r6
  bool v18; // cc
  int v19; // r0
  size_t v20; // [sp+0h] [bp-Ch]
  unsigned __int64 *v21; // [sp+0h] [bp-Ch]

  v4 = *(_DWORD *)(a1 + 224);
  v5 = a1 + 96;
  v6 = n;
  v7 = src;
  v8 = 128 - v4;
  v9 = (void *)(a1 + 96 + v4);
  if ( v8 < n )
  {
    v20 = v8;
    *(_DWORD *)(a1 + 224) = 0;
    memcpy(v9, src, v8);
    v11 = *(_QWORD *)(a1 + 64) + 128LL;
    v12 = HIDWORD(v11) != 0;
    v6 -= v20;
    v7 = (unsigned __int64 *)((char *)v7 + v20);
    v13 = *(_QWORD *)(a1 + 72);
    if ( !HIDWORD(v11) )
      v12 = (unsigned int)v11 > 0x7F;
    *(_QWORD *)(a1 + 64) = v11;
    v14 = !v12;
    *(_QWORD *)(a1 + 72) = v13 + (unsigned int)v14;
    sub_CBEA0((_DWORD *)a1, (unsigned __int64 *)(a1 + 96));
    if ( v6 <= 0x80 )
    {
      v9 = (void *)(v5 + *(_DWORD *)(a1 + 224));
    }
    else
    {
      v21 = &v7[16 * ((v6 - 129) >> 7) + 16];
      do
      {
        v15 = v7;
        v7 += 16;
        v16 = *(_QWORD *)(a1 + 72);
        v17 = *(_QWORD *)(a1 + 64) + 128LL;
        v18 = HIDWORD(v17) != 0;
        *(_QWORD *)(a1 + 64) = v17;
        if ( !HIDWORD(v17) )
          v18 = (unsigned int)v17 > 0x7F;
        v19 = !v18;
        *(_QWORD *)(a1 + 72) = v16 + (unsigned int)v19;
        sub_CBEA0((_DWORD *)a1, v15);
      }
      while ( v21 != v7 );
      v6 = v6 - 128 - ((v6 - 129) >> 7 << 7);
      v9 = (void *)(v5 + *(_DWORD *)(a1 + 224));
    }
  }
  result = memcpy(v9, v7, v6);
  *(_DWORD *)(a1 + 224) += v6;
  return result;
}
