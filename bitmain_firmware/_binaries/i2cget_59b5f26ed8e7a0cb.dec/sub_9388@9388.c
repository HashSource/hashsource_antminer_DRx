size_t __fastcall sub_9388(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r3
  int v4; // r2
  const char *v5; // r1
  bool v6; // zf
  const char *v7; // r0
  int v8; // r2
  int v9; // t1
  bool v10; // zf

  v2 = strlen(a1);
  v3 = v2 - 1;
  if ( (int)(v2 - 1) >= 0 )
  {
    v4 = (unsigned __int8)a1[v3];
    v5 = &a1[v3];
    v6 = v4 == 32;
    if ( v4 != 32 )
      v6 = v4 == 10;
    if ( v6 )
    {
      v7 = &a1[v2 - 2];
      do
      {
        --v3;
        *v5 = 0;
        v5 = v7;
        if ( v3 == -1 )
          break;
        v9 = *(unsigned __int8 *)v7--;
        v8 = v9;
        v10 = v9 == 32;
        if ( v9 != 32 )
          v10 = v8 == 10;
      }
      while ( v10 );
    }
  }
  return v3 + 2;
}
