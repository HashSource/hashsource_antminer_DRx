int __fastcall sub_46120(char *a1, size_t a2)
{
  double v2; // d0
  int v5; // r0
  int v6; // r4
  int v7; // r6
  int v8; // r1
  char *v9; // r0
  char *v10; // r3
  char *v11; // r4
  char *v12; // r7
  char *v13; // r3

  v5 = snprintf(a1, a2, "%.17g", v2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v5;
    if ( a2 > v5 )
    {
      v8 = *(unsigned __int8 *)localeconv()->decimal_point;
      if ( v8 != 46 )
      {
        v9 = strchr(a1, v8);
        if ( v9 )
          *v9 = 46;
      }
      if ( strchr(a1, 46) )
      {
LABEL_7:
        v10 = strchr(a1, 101);
        if ( !v10 )
          return v7;
LABEL_8:
        v11 = v10 + 2;
        if ( v10[1] == 45 )
          v12 = v10 + 2;
        else
          v12 = v10 + 1;
        if ( v10[2] == 48 )
        {
          v13 = v10 + 3;
          do
            v11 = v13++;
          while ( *v11 == 48 );
        }
        if ( v11 != v12 )
        {
          memmove(v12, v11, a1 - v11 + v7);
          v7 += v12 - v11;
        }
        return v7;
      }
      v10 = strchr(a1, 101);
      if ( v10 )
        goto LABEL_8;
      if ( a2 > v6 + 3 )
      {
        v7 = v6 + 2;
        a1[v6] = 46;
        a1[v6 + 1] = 48;
        a1[v6 + 2] = 0;
        goto LABEL_7;
      }
    }
  }
  return -1;
}
