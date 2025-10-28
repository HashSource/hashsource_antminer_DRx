_DWORD *__fastcall sub_5D04C(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v3; // r7
  int j; // r5
  char *v5; // r6
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r6
  unsigned int i; // r5
  int v10; // r0
  int v11; // r0

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      switch ( v2 )
      {
        case 1:
          v8 = sub_5BE20();
          if ( v8 )
          {
            for ( i = 0; i < sub_5BE8C(v1); ++i )
            {
              v10 = sub_5BEB8(v1, i);
              v11 = sub_5D04C(v10);
              sub_5CBF4(v8, v11);
            }
          }
          return v8;
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
        for ( j = sub_5BCD8(v1); j; j = sub_5BD44(v1, j) )
        {
          v5 = (char *)sub_5BD88(j);
          v6 = sub_5BDA4(j);
          v7 = sub_5D04C(v6);
          sub_5C59C(v3, v5, v7);
        }
      }
      return v3;
    }
  }
  return v1;
}
