int __fastcall sub_46FE4(_DWORD *a1, unsigned int a2, int a3)
{
  int v5; // r6
  int *v6; // r2
  int v7; // r0
  int v8; // r3
  int v9; // r3
  int v11; // r3
  int v12; // r3

  if ( !a3 )
    return -1;
  if ( !a1 || *a1 != 1 || a1 == (_DWORD *)a3 || a1[3] <= a2 )
  {
    v11 = *(_DWORD *)(a3 + 4);
    if ( v11 != -1 )
    {
      v12 = v11 - 1;
      *(_DWORD *)(a3 + 4) = v12;
      if ( !v12 )
        sub_46C5C((void **)a3);
    }
    return -1;
  }
  v5 = 4 * a2;
  v6 = (int *)(a1[4] + 4 * a2);
  v7 = *v6;
  if ( *v6 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    if ( v8 != -1 )
    {
      v9 = v8 - 1;
      *(_DWORD *)(v7 + 4) = v9;
      if ( !v9 )
      {
        sub_46C5C((void **)v7);
        v6 = (int *)(a1[4] + v5);
      }
    }
  }
  *v6 = a3;
  return 0;
}
