int __fastcall sub_13044(int a1, void *s2, size_t n, const void *a4, int a5, size_t a6)
{
  int v9; // r5
  int v10; // r4

  v9 = a1;
  if ( !a1 )
    return 0;
  v10 = *(_DWORD *)(a1 + 412);
  while ( memcmp((const void *)(v9 + 180), s2, n) || memcmp((const void *)(v9 + a5), a4, a6) )
  {
    if ( !v10 )
      return v10;
    v9 = v10;
    v10 = *(_DWORD *)(v10 + 412);
  }
  return v9;
}
