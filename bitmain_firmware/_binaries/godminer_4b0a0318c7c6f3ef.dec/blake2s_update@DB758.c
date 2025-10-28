int __fastcall blake2s_update(_DWORD *a1, char *src, unsigned __int64 n)
{
  unsigned __int64 v3; // r8
  int v5; // r0
  bool v7; // cc
  _DWORD *v8; // r6
  size_t v9; // r5
  int v10; // r2
  int v11; // r12
  unsigned int v12; // r3
  int *v13; // r3
  _DWORD *v14; // r2
  int v15; // lr
  int v16; // r12
  int v17; // r0
  int v18; // r1
  __int64 v20; // [sp+0h] [bp-Ch]

  v3 = n;
  if ( n )
  {
    v5 = a1[44];
    v7 = HIDWORD(n) != 0;
    v8 = a1 + 12;
    v9 = 128 - v5;
    if ( !HIDWORD(n) )
      v7 = (unsigned int)n > v9;
    v20 = v9;
    if ( v7 )
    {
      do
      {
        memcpy((char *)v8 + v5, src, v9);
        v10 = a1[9];
        v11 = a1[44];
        v12 = a1[8] + 64;
        if ( v12 <= 0x3F )
          ++v10;
        a1[8] = v12;
        a1[9] = v10;
        a1[44] = v11 + v9;
        blake2s_compress(a1, a1 + 12);
        v13 = a1 + 28;
        v14 = a1 + 12;
        do
        {
          v15 = *v13;
          v13 += 4;
          v16 = *(v13 - 3);
          v14 += 4;
          v17 = *(v13 - 2);
          v18 = *(v13 - 1);
          *(v14 - 4) = v15;
          *(v14 - 3) = v16;
          *(v14 - 2) = v17;
          *(v14 - 1) = v18;
        }
        while ( v13 != a1 + 44 );
        src += v9;
        v3 -= v20;
        v5 = a1[44] - 64;
        v9 = 192 - a1[44];
        a1[44] = v5;
        v20 = v9;
      }
      while ( v9 < v3 );
    }
    memcpy((char *)v8 + v5, src, v3);
    a1[44] += v3;
  }
  return 0;
}
