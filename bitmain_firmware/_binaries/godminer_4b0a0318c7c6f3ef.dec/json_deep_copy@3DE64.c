double *__fastcall json_deep_copy(int a1)
{
  _DWORD *v2; // r6
  int i; // r5
  char *v4; // r7
  int v5; // r0
  double *v6; // r0
  unsigned int v7; // r3
  unsigned int j; // r5
  int v9; // r0
  double *v10; // r0

  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v2 = json_object();
        if ( !v2 )
          return 0;
        if ( !*(_DWORD *)a1 )
        {
          for ( i = hashtable_iter(a1 + 8); i; i = hashtable_iter_next(a1 + 8, i) )
          {
            v4 = (char *)hashtable_iter_key(i);
            v5 = hashtable_iter_value(i);
            v6 = json_deep_copy(v5);
            json_object_set_new_nocheck(v2, v4, v6);
            if ( *(_DWORD *)a1 )
              break;
          }
        }
        return (double *)v2;
      case 1:
        v2 = json_array();
        if ( !v2 )
          return 0;
        if ( *(_DWORD *)a1 == 1 )
        {
          v7 = *(_DWORD *)(a1 + 12);
          if ( v7 )
          {
            for ( j = 0; j < v7; ++j )
            {
              v9 = 0;
              if ( v7 > j )
                v9 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
              v10 = json_deep_copy(v9);
              json_array_append_new(v2, v10);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v7 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        return (double *)v2;
      case 2:
        return (double *)sub_3C864(*(_BYTE **)(a1 + 8), *(_DWORD *)(a1 + 12), 0);
      case 3:
        return (double *)sub_3C788(a1);
      case 4:
        return json_real();
      case 5:
      case 6:
      case 7:
        return (double *)a1;
      default:
        return 0;
    }
  }
  return 0;
}
