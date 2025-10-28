int __fastcall sub_5C9EC(_DWORD *a1, char *a2, int a3)
{
  int v6; // r3
  int v7; // r3

  if ( a2 && sub_5BA30(a2, -1) )
    return sub_5C59C(a1, a2, a3);
  if ( !a3 )
    return -1;
  v6 = *(_DWORD *)(a3 + 4);
  if ( v6 == -1 )
    return -1;
  v7 = v6 - 1;
  *(_DWORD *)(a3 + 4) = v7;
  if ( !v7 )
    sub_5C394((void **)a3);
  return -1;
}
