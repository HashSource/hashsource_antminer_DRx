int __fastcall EaglesongPermutation(int result)
{
  int *v1; // r7
  int *v2; // r8
  int v3; // r11
  _DWORD *v4; // lr
  char *v5; // r6
  char *v6; // r4
  int v7; // r1
  int v8; // r2
  int *v9; // r5
  int *v10; // r0
  int v11; // r12
  int v12; // t1
  int *v13; // r3
  int v14; // t1
  int *v15; // r12
  int *v16; // lr
  unsigned int v17; // t1
  int v18; // r0
  int v19; // r3
  int v20; // r1
  int v21; // r0
  int v22; // r3
  int v23; // t1
  int v24; // t1
  int v25; // r2
  int v26; // r0
  int v27; // r3
  int v28; // t2
  int v29; // [sp+4h] [bp-58h]
  int v30; // [sp+8h] [bp-54h]
  int v31; // [sp+Ch] [bp-50h]
  _DWORD v32[16]; // [sp+14h] [bp-48h] BYREF
  char v33; // [sp+54h] [bp-8h] BYREF

  v31 = result;
  if ( num_rounds > 0 )
  {
    v1 = (int *)(result - 4);
    v2 = (int *)(result + 60);
    v3 = result + 64;
    v30 = 0;
    v29 = 1543112;
    v32[0] = result + 4;
    do
    {
      v4 = &bit_matrix;
      v5 = (char *)v32;
      v6 = (char *)v32;
      do
      {
        v7 = 0;
        v6 += 4;
        v8 = 0;
        v9 = v1;
        v10 = v1;
        do
        {
          v11 = v4[16 * v8++];
          v12 = v10[1];
          ++v10;
          v7 ^= v12 * v11;
        }
        while ( v8 != 16 );
        *(_DWORD *)v6 = v7;
        ++v4;
      }
      while ( &v33 != v6 );
      v13 = v1;
      do
      {
        v14 = *((_DWORD *)v5 + 1);
        v5 += 4;
        v13[1] = v14;
        ++v13;
      }
      while ( v5 != v6 );
      v15 = (int *)&coefficients;
      v16 = v1;
      do
      {
        v17 = v16[1];
        ++v16;
        v18 = v15[1];
        v19 = v15[2];
        v15 += 3;
        *v16 = (v17 << v19) ^ __ROR4__(v17, 32 - v18) ^ v17 ^ (v17 >> (32 - v19));
      }
      while ( &rate != v15 );
      v20 = v31;
      v21 = v29;
      do
      {
        v23 = v9[1];
        ++v9;
        v22 = v23;
        v24 = *(_DWORD *)(v21 + 4);
        v21 += 4;
        *v9 = v22 ^ v24;
      }
      while ( v2 != v9 );
      v25 = v32[0];
      do
      {
        v26 = *(_DWORD *)(v20 + 4);
        v20 += 8;
        v27 = *(_DWORD *)(v25 - 4);
        v25 += 8;
        *(_DWORD *)(v25 - 12) = __ROR4__(v27 + v26, 24);
        v28 = __ROR4__(*(_DWORD *)(v20 - 4), 8);
        *(_DWORD *)(v20 - 4) = v28;
        result = *(_DWORD *)(v25 - 12);
        *(_DWORD *)(v20 - 4) = result + v28;
      }
      while ( v3 != v20 );
      ++v30;
      v29 += 64;
    }
    while ( num_rounds > v30 );
  }
  return result;
}
