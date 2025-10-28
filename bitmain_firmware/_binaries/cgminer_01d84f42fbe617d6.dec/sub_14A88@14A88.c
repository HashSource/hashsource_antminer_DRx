int __fastcall sub_14A88(int a1)
{
  int i; // r1
  int result; // r0
  unsigned int *v4; // r2
  int v5[20]; // [sp+0h] [bp-20250h] BYREF
  _DWORD v6[32748]; // [sp+50h] [bp-20200h] BYREF

  v6[0] = 0;
  memset(&v6[1], 0, (size_t)&loc_201FC);
  for ( i = 0; i != 19; ++i )
    v5[i] = bswap32(*(_DWORD *)(a1 + i * 4));
  v5[19] = bswap32(*(_DWORD *)(a1 + 76));
  result = sub_11E40(v5, (int)v6, (int *)(a1 + 192));
  v4 = (unsigned int *)(a1 + 192);
  do
  {
    *v4 = bswap32(*v4);
    ++v4;
  }
  while ( v4 != (unsigned int *)(a1 + 224) );
  return result;
}
