int __fastcall sub_16500(int a1, void *s2, size_t n, const void *a4, int a5, size_t a6)
{
  int v6; // r5
  int v10; // r4

  v6 = a1;
  if ( a1 )
  {
    v10 = *(_DWORD *)(a1 + 352);
    while ( memcmp((const void *)(v6 + 128), s2, n) || memcmp((const void *)(v6 + a5), a4, a6) )
    {
      v6 = v10;
      if ( !v10 )
        return 0;
      v10 = *(_DWORD *)(v10 + 352);
    }
  }
  return v6;
}
