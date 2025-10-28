double *__fastcall sub_48804(int a1)
{
  int v1; // r3
  char *v3; // r8
  int i; // r0
  int v6; // r0
  char *v7; // r6
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  unsigned int j; // r4
  int v12; // r1

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
        for ( i = sub_46888(a1 + 8); i; i = sub_468E4(a1 + 8, v8) )
        {
          v6 = sub_468F4(i);
          v7 = (char *)v6;
          if ( !v6 )
            break;
          v8 = v6 - 16;
          v9 = sub_468FC(v6 - 16);
          if ( !v9 )
            break;
          if ( *(_DWORD *)(v9 + 4) != -1 )
            ++*(_DWORD *)(v9 + 4);
          sub_48494(v3, v7, v9);
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
          v10 = *(_DWORD *)(a1 + 12);
          if ( v10 )
          {
            for ( j = 0; j < v10; ++j )
            {
              v12 = 0;
              if ( j < v10 )
              {
                v12 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
                if ( v12 )
                {
                  if ( *(_DWORD *)(v12 + 4) != -1 )
                    ++*(_DWORD *)(v12 + 4);
                }
              }
              sub_4879C(v3, (char *)v12);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v10 = *(_DWORD *)(a1 + 12);
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
