int __fastcall sub_57FC0(_DWORD *a1, unsigned int a2, int a3)
{
  int v6; // r3
  int v7; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r3

  if ( !a3 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a3 )
  {
    if ( a1[3] > a2 )
    {
      v11 = *(_DWORD *)(a1[4] + 4 * a2);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 4);
        if ( v12 != -1 )
        {
          v13 = v12 - 1;
          *(_DWORD *)(v11 + 4) = v13;
          if ( !v13 )
            sub_57A64((void **)v11);
        }
      }
      *(_DWORD *)(a1[4] + 4 * a2) = a3;
      return 0;
    }
    else
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
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 4);
    if ( v6 == -1 )
    {
      return -1;
    }
    else
    {
      v7 = v6 - 1;
      *(_DWORD *)(a3 + 4) = v7;
      if ( !v7 )
        sub_57A64((void **)a3);
      return -1;
    }
  }
}
