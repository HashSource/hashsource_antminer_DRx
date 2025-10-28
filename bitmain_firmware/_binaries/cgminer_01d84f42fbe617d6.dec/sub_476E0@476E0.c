int *__fastcall sub_476E0(double a1)
{
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v4; // r7
  _DWORD *j; // r5
  char *v6; // r6
  int v7; // r0
  int v8; // r0
  int *v9; // r6
  unsigned int v10; // r3
  unsigned int i; // r5
  int v12; // r0
  int *v13; // r0

  v1 = (_DWORD *)LODWORD(a1);
  if ( !LODWORD(a1) )
    return v1;
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
                if ( i < v10 )
                  v12 = *(_DWORD *)(v1[4] + 4 * i);
                v13 = (int *)sub_476E0(v12);
                sub_46F60(v9, v13);
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
        if ( (unsigned int)(v2 - 5) > 2 )
          return 0;
        return v1;
    }
  }
  else
  {
    v4 = sub_46620();
    if ( v4 )
    {
      for ( j = sub_46714(v1); j; j = (_DWORD *)sub_46760(v1, (int)j) )
      {
        v6 = (char *)sub_4678C((int)j);
        v7 = sub_46798((int)j);
        v8 = sub_476E0(v7);
        sub_47098(v4, v6, v8);
      }
    }
    return v4;
  }
}
