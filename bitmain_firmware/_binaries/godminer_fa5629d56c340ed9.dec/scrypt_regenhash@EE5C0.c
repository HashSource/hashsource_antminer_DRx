int *__fastcall scrypt_regenhash(int *a1, int a2)
{
  int v4; // r1
  int *v5; // r2
  unsigned int v6; // t1
  int *v7; // r3
  int *result; // r0
  unsigned int v9; // t1
  int v10[18]; // [sp+0h] [bp-20254h] BYREF
  _DWORD v11[2]; // [sp+48h] [bp-2020Ch] BYREF
  _DWORD v12[128]; // [sp+50h] [bp-20204h] BYREF

  v12[0] = 0;
  memset(&v12[1], 0, (size_t)"quihash_blake2b_update");
  v4 = a2 - 4;
  v5 = &v10[-1];
  do
  {
    v6 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    v5[1] = bswap32(v6);
    ++v5;
  }
  while ( v11 != v5 );
  v11[1] = bswap32(*(_DWORD *)(a2 + 76));
  sub_EDE54(v10, (int)v12, a1);
  v7 = a1 - 1;
  result = a1 + 7;
  do
  {
    v9 = v7[1];
    *++v7 = bswap32(v9);
  }
  while ( v7 != result );
  return result;
}
