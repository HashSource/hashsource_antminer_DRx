unsigned int __fastcall EaglesongSponge(int a1, unsigned int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int *v8; // r3
  unsigned int v9; // r10
  int v10; // r4
  unsigned int v11; // r6
  unsigned int *v12; // r12
  unsigned int v13; // r1
  unsigned int v14; // r0
  int v15; // r3
  unsigned int v16; // t1
  unsigned int result; // r0
  unsigned int v18; // r8
  unsigned int *v19; // r9
  int v20; // lr
  unsigned int v21; // r12
  unsigned int v22; // t1
  int i; // r2
  int v24; // r3
  char v25; // r4
  int v26; // r1
  int v27; // r3
  unsigned int v28; // [sp+4h] [bp-48h] BYREF
  _BYTE v29[60]; // [sp+8h] [bp-44h] BYREF
  char v30; // [sp+44h] [bp-8h] BYREF

  v28 = a2;
  v8 = &v28;
  do
  {
    v8[1] = 0;
    ++v8;
  }
  while ( &v30 != (char *)v8 );
  v9 = 8 * (a4 + 1);
  v10 = rate;
  if ( (v10 - 1 + v9) / v10 )
  {
    v11 = 0;
    do
    {
      if ( v10 / 32 > 0 )
      {
        v12 = &v28;
        v13 = (int)(v11 * v10) / 8;
        do
        {
          v14 = v13 + 4;
          v15 = 0;
          do
          {
            if ( a4 <= v13 )
            {
              if ( a4 == v13 )
                v15 = a5 | (v15 << 8);
            }
            else
            {
              v15 = *(unsigned __int8 *)(a3 + v13) | (v15 << 8);
            }
            ++v13;
          }
          while ( v14 != v13 );
          v16 = v12[1];
          *++v12 = v15 ^ v16;
        }
        while ( (int)(v11 * v10) / 8 + 4 * (v10 / 32) != v13 );
      }
      ++v11;
      EaglesongPermutation((int)v29);
      v10 = rate;
    }
    while ( (v10 - 1 + v9) / v10 > v11 );
  }
  result = v28 / (v10 / 8);
  if ( result )
  {
    v18 = 0;
    do
    {
      if ( v10 > 31 )
      {
        v19 = (unsigned int *)v29;
        v20 = 0;
        do
        {
          v22 = *v19++;
          v21 = v22;
          for ( i = 0; i != 4; ++i )
          {
            v24 = v10 * v18;
            v25 = 8 * i;
            v26 = a1 + i;
            *(_BYTE *)(v26 + 4 * v20 + v24 / 8) = v21 >> v25;
            v10 = rate;
          }
          v27 = rate + 31;
          ++v20;
          if ( rate >= 0 )
            v27 = rate;
        }
        while ( v20 < v27 >> 5 );
      }
      ++v18;
      EaglesongPermutation((int)v29);
      v10 = rate;
      result = v28 / (rate / 8);
    }
    while ( result > v18 );
  }
  return result;
}
