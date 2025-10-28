int __fastcall sub_44368(const char *a1)
{
  const char *v1; // r5
  const char *v2; // r4
  int result; // r0
  char *v4; // r4
  const char *v5; // r0
  size_t v6; // r1
  int v7; // r3
  const char *v8; // r4
  int v9; // t1

  v1 = a1;
  if ( !a1 || !*a1 )
    return fwrite("''", 1u, 2u, (FILE *)stdout);
  if ( *a1 != 39 )
    goto LABEL_18;
  v2 = a1 + 1;
  do
  {
    v1 = v2++;
    result = fwrite("\\'", 1u, 2u, (FILE *)stdout);
  }
  while ( *v1 == 39 );
  if ( *v1 )
  {
LABEL_18:
    while ( 1 )
    {
      fputc(39, (FILE *)stdout);
      v4 = strchr(v1, 39);
      v5 = v1;
      if ( !v4 )
        break;
      v6 = v4 - v1;
      v1 = v4 + 1;
      fwrite(v5, v6, 1u, (FILE *)stdout);
      result = fputc(39, (FILE *)stdout);
      v7 = (unsigned __int8)v4[1];
      if ( v7 == 39 )
      {
        v8 = v4 + 2;
        do
        {
          result = fwrite("\\'", 1u, 2u, (FILE *)stdout);
          v1 = v8;
          v9 = *(unsigned __int8 *)v8++;
          v7 = v9;
        }
        while ( v9 == 39 );
      }
      if ( !v7 )
        return result;
    }
    fputs(v1, (FILE *)stdout);
    return fputc(39, (FILE *)stdout);
  }
  return result;
}
