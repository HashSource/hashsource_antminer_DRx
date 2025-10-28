int __fastcall sub_46F60(int *a1, int *a2)
{
  int v4; // r3
  int v6; // r3
  int v7; // r3

  if ( a2 )
  {
    if ( a1 && *a1 == 1 && a1 != a2 && sub_46598(a1, 1, *a1) )
    {
      v4 = a1[3];
      *(_DWORD *)(a1[4] + 4 * v4) = a2;
      a1[3] = v4 + 1;
      return 0;
    }
    v6 = a2[1];
    if ( v6 != -1 )
    {
      v7 = v6 - 1;
      a2[1] = v7;
      if ( !v7 )
        sub_46C5C((void **)a2);
    }
  }
  return -1;
}
