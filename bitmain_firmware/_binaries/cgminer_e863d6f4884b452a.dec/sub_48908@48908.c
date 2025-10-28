double *__fastcall sub_48908(int a1)
{
  int v1; // r3
  char *v3; // r6
  int i; // r4
  char *v5; // r7
  int v6; // r0
  int v7; // r0
  unsigned int v9; // r3
  unsigned int j; // r4
  int v11; // r0
  char *v12; // r0

  if ( !a1 )
    return 0;
  v1 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    v3 = (char *)sub_47EE4();
    if ( v3 )
    {
      if ( !*(_DWORD *)a1 )
      {
        for ( i = sub_46888(a1 + 8); i; i = sub_468E4(a1 + 8, i) )
        {
          v5 = (char *)sub_468F4(i);
          v6 = sub_468FC(i);
          v7 = sub_48908(v6);
          sub_48494(v3, v5, v7);
          if ( *(_DWORD *)a1 )
            break;
        }
      }
      return (double *)v3;
    }
    return 0;
  }
  switch ( v1 )
  {
    case 1:
      v3 = (char *)sub_47FFC();
      if ( v3 )
      {
        if ( *(_DWORD *)a1 == 1 )
        {
          v9 = *(_DWORD *)(a1 + 12);
          if ( v9 )
          {
            for ( j = 0; j < v9; ++j )
            {
              v11 = 0;
              if ( v9 > j )
                v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
              v12 = (char *)sub_48908(v11);
              sub_4879C(v3, v12);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v9 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        return (double *)v3;
      }
      return 0;
    case 2:
      return (double *)sub_480E0(*(const char **)(a1 + 8));
    case 3:
      return (double *)sub_47D40(a1);
  }
  if ( v1 != 4 )
  {
    if ( (unsigned int)(v1 - 5) <= 2 )
      return (double *)a1;
    return 0;
  }
  return sub_481FC();
}
