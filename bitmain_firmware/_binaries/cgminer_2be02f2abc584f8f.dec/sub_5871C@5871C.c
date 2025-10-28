_DWORD *__fastcall sub_5871C(_DWORD *a1)
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
          v8 = sub_574F0();
          if ( v8 )
          {
            for ( i = 0; i < sub_5755C(v1); ++i )
            {
              v10 = sub_57588(v1, i);
              v11 = sub_5871C(v10);
              sub_582C4(v8, v11);
            }
          }
          return v8;
        case 2:
          return sub_57780(a1);
        case 3:
          return sub_57898((int)a1);
        case 4:
          return sub_57978();
        default:
          if ( (unsigned int)(v2 - 5) > 2 )
            return 0;
          break;
      }
    }
    else
    {
      v3 = sub_57278();
      if ( v3 )
      {
        for ( j = sub_573A8(v1); j; j = sub_57414(v1, j) )
        {
          v5 = (char *)sub_57458(j);
          v6 = sub_57474(j);
          v7 = sub_5871C(v6);
          sub_57C6C(v3, v5, v7);
        }
      }
      return v3;
    }
  }
  return v1;
}
