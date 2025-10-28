int __fastcall sub_1AEBC(int a1, void *s2, size_t n, const void *a4, int a5, size_t na)
{
  int v6; // r5
  int v9; // r4

  v6 = a1;
  if ( a1 )
  {
    v9 = *(_DWORD *)(a1 + 412);
    while ( memcmp((const void *)(v6 + 180), s2, n) || memcmp((const void *)(v6 + a5), a4, na) )
    {
      if ( !v9 )
        return v9;
      v6 = v9;
      v9 = *(_DWORD *)(v9 + 412);
    }
  }
  return v6;
}
