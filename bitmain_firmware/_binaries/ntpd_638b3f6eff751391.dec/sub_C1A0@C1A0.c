char *__fastcall sub_C1A0(char *s1)
{
  const char *v2; // r1
  char **v3; // r4
  const char *v4; // t1
  char *result; // r0
  const char *v6; // r4
  _UNKNOWN **v7; // r7
  const char *v8; // t1
  size_t v9; // r6
  const char *v10; // r6
  const char *v11; // r1
  char **v12; // r7
  const char *v13; // t1
  char *v14; // r0

  v2 = off_79430;
  if ( !off_79430 )
    goto LABEL_6;
  v3 = &off_79430;
  while ( strcmp(s1, v2) )
  {
    v4 = v3[2];
    v3 += 2;
    v2 = v4;
    if ( !v4 )
      goto LABEL_6;
  }
  result = v3[1];
  if ( !result )
  {
LABEL_6:
    v6 = (const char *)off_79480;
    if ( off_79480 )
    {
      v7 = &off_79480;
      while ( 1 )
      {
        v9 = strlen(v6);
        if ( !strncmp(s1, v6, v9) )
          break;
        v8 = (const char *)v7[2];
        v7 += 2;
        v6 = v8;
        if ( !v8 )
          goto LABEL_17;
      }
      v6 = (const char *)v7[1];
      v10 = &s1[v9];
    }
    else
    {
LABEL_17:
      v10 = s1;
    }
    v11 = off_794A8;
    if ( !off_794A8 )
      goto LABEL_18;
    v12 = &off_794A8;
    while ( strcmp(v10, v11) )
    {
      v13 = v12[2];
      v12 += 2;
      v11 = v13;
      if ( !v13 )
        goto LABEL_18;
    }
    v14 = v12[1];
    if ( v14 )
    {
      return (char *)((_DWORD)v14 << (char)v6);
    }
    else
    {
LABEL_18:
      sub_4FE78(3, "logconfig: '%s' not recognized - ignored", s1);
      return 0;
    }
  }
  return result;
}
