int __fastcall sub_5C4F4(_DWORD *a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r3
  unsigned int v7; // r3

  if ( !a1 )
    return -1;
  if ( *a1 != 1 )
    return -1;
  if ( a1[3] <= a2 )
    return -1;
  v4 = *(_DWORD *)(a1[4] + 4 * a2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( v5 != -1 )
    {
      v6 = v5 - 1;
      *(_DWORD *)(v4 + 4) = v6;
      if ( !v6 )
        sub_5C394((void **)v4);
    }
  }
  v7 = a1[3] - 1;
  if ( a2 < v7 )
    sub_5BB8C((int)a1, a2, a2 + 1, v7 - a2);
  --a1[3];
  return 0;
}
