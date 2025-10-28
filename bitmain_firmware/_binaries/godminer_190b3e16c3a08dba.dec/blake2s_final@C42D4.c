int __fastcall blake2s_final(int a1, void *a2, size_t a3)
{
  unsigned int v4; // r1
  char *v7; // r7
  int v8; // r3
  int v9; // r2
  int v10; // r0
  _BOOL4 v11; // r3
  int v12; // r1
  _BYTE *v13; // r2
  int v14; // r4
  int v15; // t1
  unsigned int v17; // r3
  size_t v18; // r2
  _BYTE v19[36]; // [sp+0h] [bp-24h] BYREF

  v4 = *(_DWORD *)(a1 + 176);
  v7 = (char *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 36);
  if ( v4 > 0x40 )
  {
    v17 = v8 + 64;
    if ( v17 <= 0x3F )
      ++v9;
    *(_DWORD *)(a1 + 32) = v17;
    *(_DWORD *)(a1 + 36) = v9;
    blake2s_compress((_DWORD *)a1, (int *)(a1 + 48));
    v18 = *(_DWORD *)(a1 + 176) - 64;
    *(_DWORD *)(a1 + 176) = v18;
    memcpy(v7, (const void *)(a1 + 112), v18);
    v4 = *(_DWORD *)(a1 + 176);
    v8 = *(_DWORD *)(a1 + 32);
    v9 = *(_DWORD *)(a1 + 36);
  }
  v10 = *(unsigned __int8 *)(a1 + 180);
  *(_DWORD *)(a1 + 32) = v4 + v8;
  v11 = __CFADD__(v4, v8);
  *(_DWORD *)(a1 + 36) = v11 + v9;
  if ( v10 )
    *(_DWORD *)(a1 + 44) = -1;
  *(_DWORD *)(a1 + 40) = -1;
  memset(&v7[v4], 0, 128 - v4);
  blake2s_compress((_DWORD *)a1, (int *)v7);
  v12 = a1 - 4;
  v13 = v19;
  v14 = a1 + 28;
  do
  {
    v15 = *(_DWORD *)(v12 + 4);
    v12 += 4;
    v13 += 4;
    *((_DWORD *)v13 - 1) = v15;
  }
  while ( v14 != v12 );
  memcpy(a2, v19, a3);
  return 0;
}
