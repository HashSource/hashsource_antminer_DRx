int __fastcall sub_57C6C(_DWORD *a1, char *a2, int a3)
{
  bool v4; // zf
  int v5; // r3
  int v6; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r3

  if ( !a3 )
    return -1;
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 || *a1 || a1 == (_DWORD *)a3 )
  {
    v5 = *(_DWORD *)(a3 + 4);
    if ( v5 == -1 )
    {
      return -1;
    }
    else
    {
      v6 = v5 - 1;
      *(_DWORD *)(a3 + 4) = v6;
      if ( !v6 )
        sub_57A64((void **)a3);
      return -1;
    }
  }
  else
  {
    v8 = a1[7];
    a1[7] = v8 + 1;
    if ( sub_54D88(a1 + 2, a2, v8, a3) )
    {
      v9 = *(_DWORD *)(a3 + 4);
      if ( v9 == -1 )
      {
        return -1;
      }
      else
      {
        v10 = v9 - 1;
        *(_DWORD *)(a3 + 4) = v10;
        if ( !v10 )
          sub_57A64((void **)a3);
        return -1;
      }
    }
    else
    {
      return 0;
    }
  }
}
