_DWORD *__fastcall sub_5CEFC(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v3; // r7
  int v4; // r0
  char *j; // r5
  int v6; // r3
  int v7; // r0
  int v8; // r6
  int v9; // r0
  _DWORD *v10; // r6
  unsigned int i; // r5
  int v12; // r0
  int v13; // r3

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      switch ( v2 )
      {
        case 1:
          v10 = sub_5BE20();
          if ( v10 )
          {
            for ( i = 0; i < sub_5BE8C(v1); ++i )
            {
              v12 = sub_5BEB8(v1, i);
              if ( v12 )
              {
                v13 = *(_DWORD *)(v12 + 4);
                if ( v13 != -1 )
                  *(_DWORD *)(v12 + 4) = v13 + 1;
              }
              sub_5CBF4(v10, v12);
            }
          }
          return v10;
        case 2:
          return sub_5C0B0(a1);
        case 3:
          return sub_5C1C8((int)a1);
        case 4:
          return sub_5C2A8();
        default:
          if ( (unsigned int)(v2 - 5) > 2 )
            return 0;
          break;
      }
    }
    else
    {
      v3 = sub_5BBA8();
      if ( v3 )
      {
        v4 = sub_5BCD8(v1);
        for ( j = (char *)sub_5BD88(v4); j; j = (char *)sub_5BD88(v7) )
        {
          v8 = sub_5BE10((int)j);
          v9 = sub_5BDA4(v8);
          if ( !v9 )
            break;
          v6 = *(_DWORD *)(v9 + 4);
          if ( v6 != -1 )
            *(_DWORD *)(v9 + 4) = v6 + 1;
          sub_5C59C(v3, j, v9);
          v7 = sub_5BD44(v1, v8);
        }
      }
      return v3;
    }
  }
  return v1;
}
