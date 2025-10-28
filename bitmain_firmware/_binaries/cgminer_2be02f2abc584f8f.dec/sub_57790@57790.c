int __fastcall sub_57790(int a1, const char *a2)
{
  void *v3; // r5

  if ( !a1 )
    return -1;
  if ( *(_DWORD *)a1 != 2 )
    return -1;
  if ( !a2 )
    return -1;
  v3 = sub_569C0(a2);
  if ( !v3 )
    return -1;
  sub_569A0(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v3;
  return 0;
}
