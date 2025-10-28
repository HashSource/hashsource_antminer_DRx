int __fastcall sub_3E9A8(_BYTE *a1, char *s)
{
  signed int v4; // r7
  int v5; // r5
  char v6; // r2
  char *v7; // r0
  int v8; // r12
  int v9; // t1

  v4 = strlen(s);
  if ( a1[31] )
  {
    v5 = 0;
  }
  else if ( a1[30] )
  {
    v5 = 1;
  }
  else if ( a1[29] )
  {
    v5 = 2;
  }
  else if ( a1[28] )
  {
    v5 = 3;
  }
  else
  {
    v5 = 4;
  }
  if ( dword_7CF4C > 1 )
    printf("arc: spaceleft = %d.\n", v5);
  if ( v4 > v5 )
  {
    sub_4FE78(5, "ARCRON: send-buffer overrun (%d/%d)", v4, v5);
    return 0;
  }
  else
  {
    v6 = *s;
    if ( *s && v5 > 0 )
    {
      v7 = s;
      v8 = (int)&a1[-v5 + 31];
      do
      {
        *(_BYTE *)++v8 = v6;
        v9 = (unsigned __int8)*++v7;
        v6 = v9;
      }
      while ( v9 && v7 != &s[v5] );
    }
    return 1;
  }
}
