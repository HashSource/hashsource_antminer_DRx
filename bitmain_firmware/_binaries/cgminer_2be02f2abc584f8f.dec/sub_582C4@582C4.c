int __fastcall sub_582C4(_DWORD *a1, int a2)
{
  int v4; // r3
  int v5; // r3
  int v7; // r3
  int v8; // r3

  if ( !a2 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a2 )
  {
    if ( sub_571C4(a1, 1, 1) )
    {
      *(_DWORD *)(a1[4] + 4 * a1[3]++) = a2;
      return 0;
    }
    else
    {
      v7 = *(_DWORD *)(a2 + 4);
      if ( v7 == -1 )
      {
        return -1;
      }
      else
      {
        v8 = v7 - 1;
        *(_DWORD *)(a2 + 4) = v8;
        if ( !v8 )
          sub_57A64((void **)a2);
        return -1;
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 == -1 )
    {
      return -1;
    }
    else
    {
      v5 = v4 - 1;
      *(_DWORD *)(a2 + 4) = v5;
      if ( !v5 )
        sub_57A64((void **)a2);
      return -1;
    }
  }
}
