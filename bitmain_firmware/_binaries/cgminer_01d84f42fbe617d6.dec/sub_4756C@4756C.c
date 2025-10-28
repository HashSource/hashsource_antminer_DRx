int *__fastcall sub_4756C(double a1)
{
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v4; // r7
  _DWORD *v5; // r0
  char *j; // r5
  int v7; // r3
  int v8; // r0
  int *v9; // r6
  unsigned int v10; // r3
  unsigned int i; // r5
  int *v12; // r1

  v1 = (_DWORD *)LODWORD(a1);
  if ( !LODWORD(a1) )
    return 0;
  v2 = *(_DWORD *)LODWORD(a1);
  if ( *(_DWORD *)LODWORD(a1) )
  {
    switch ( v2 )
    {
      case 1:
        v9 = sub_467F8();
        if ( v9 )
        {
          if ( *v1 == 1 )
          {
            v10 = v1[3];
            if ( v10 )
            {
              for ( i = 0; i < v10; ++i )
              {
                v12 = 0;
                if ( v10 > i )
                {
                  v12 = *(int **)(v1[4] + 4 * i);
                  if ( v12 )
                  {
                    if ( v12[1] != -1 )
                      ++v12[1];
                  }
                }
                sub_46F60(v9, v12);
                if ( *v1 != 1 )
                  break;
                v10 = v1[3];
              }
            }
          }
        }
        return v9;
      case 2:
        return sub_46964(*(const char **)(LODWORD(a1) + 8));
      case 3:
        return (int *)sub_46A94(*(_QWORD *)(LODWORD(a1) + 8));
      case 4:
        return (int *)sub_46B14(a1);
      default:
        if ( (unsigned int)(v2 - 5) <= 2 )
          return v1;
        return 0;
    }
  }
  else
  {
    v4 = sub_46620();
    if ( v4 )
    {
      v5 = sub_46714(v1);
      for ( j = (char *)sub_4678C((int)v5); j; j = (char *)sub_4678C(v8) )
      {
        v7 = sub_46798((int)(j - 16));
        if ( !v7 )
          break;
        if ( *(_DWORD *)(v7 + 4) != -1 )
          ++*(_DWORD *)(v7 + 4);
        sub_47098(v4, j, v7);
        v8 = sub_46760(v1, (int)(j - 16));
      }
    }
    return v4;
  }
}
