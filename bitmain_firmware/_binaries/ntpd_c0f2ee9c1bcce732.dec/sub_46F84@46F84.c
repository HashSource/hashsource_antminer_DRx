int __fastcall sub_46F84(_DWORD *a1, char *s2)
{
  int *v3; // r3
  int v4; // r4
  int *v5; // r6
  int v6; // r5
  int v7; // t1

  if ( a1 && *a1 == 6 )
  {
    v3 = (int *)a1[2];
    v4 = *v3;
    if ( *v3 <= 0 )
      goto LABEL_7;
    v5 = v3 + 2;
    if ( s2 )
    {
      while ( 1 )
      {
        v7 = *v5++;
        v6 = v7;
        if ( !strcmp(*(const char **)(v7 + 4), s2) )
          return v6;
        if ( !--v4 )
          goto LABEL_7;
      }
    }
    v6 = v3[2];
    if ( !v6 )
    {
LABEL_7:
      v6 = 0;
      *_errno_location() = 2;
    }
    return v6;
  }
  *_errno_location() = 22;
  return 0;
}
