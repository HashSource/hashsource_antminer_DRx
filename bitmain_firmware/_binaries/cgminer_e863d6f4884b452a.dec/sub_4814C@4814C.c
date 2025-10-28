int __fastcall sub_4814C(int a1, const char *a2)
{
  void *v4; // r6

  if ( !a1 )
    return -1;
  if ( *(_DWORD *)a1 != 2 || a2 == 0 )
    return -1;
  v4 = sub_47870(a2);
  if ( !v4 )
    return -1;
  sub_47860(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v4;
  return 0;
}
