bool __fastcall sub_583A4(int *a1, int *a2)
{
  bool v4; // zf
  int v6; // r3
  int v7; // r5
  int v8; // r0
  char *v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r8
  int v13; // r7
  int v14; // r8
  unsigned int v15; // r5
  int v16; // r7
  int v17; // r0
  const char *v18; // r4
  const char *v19; // r0
  __int64 v20; // r4

  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 )
    return 0;
  v6 = *a1;
  if ( *a1 != *a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  if ( !a1 )
    return 0;
  if ( v6 )
  {
    switch ( v6 )
    {
      case 1:
        v14 = sub_5755C(a1);
        if ( v14 == sub_5755C(a2) )
        {
          if ( v14 )
          {
            v15 = 0;
            while ( 1 )
            {
              v16 = sub_57588(a1, v15);
              v17 = sub_57588(a2, v15);
              if ( !sub_583A4(v16, v17) )
                break;
              if ( ++v15 == v14 )
                return 1;
            }
            return 0;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          return 0;
        }
      case 2:
        v18 = (const char *)sub_57754(a1);
        v19 = (const char *)sub_57754(a2);
        return strcmp(v18, v19) == 0;
      case 3:
        v20 = sub_5786C((int)a1);
        return v20 == sub_5786C((int)a2);
      case 4:
        sub_57940();
        sub_57940();
        return 1;
      default:
        return 0;
    }
  }
  else
  {
    v7 = sub_572D8(a1);
    if ( v7 == sub_572D8(a2) )
    {
      v8 = sub_573A8(a1);
      v9 = (char *)sub_57458(v8);
      if ( v9 )
      {
        do
        {
          v12 = sub_574E0((int)v9);
          v13 = sub_57474(v12);
          if ( !v13 )
            return 1;
          v10 = sub_57304(a2, v9);
          if ( !sub_583A4(v13, v10) )
            return 0;
          v11 = sub_57414(a1, v12);
          v9 = (char *)sub_57458(v11);
        }
        while ( v9 );
        return 1;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
}
