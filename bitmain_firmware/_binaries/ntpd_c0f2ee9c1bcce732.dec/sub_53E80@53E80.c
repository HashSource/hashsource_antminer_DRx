const char *__fastcall sub_53E80(_DWORD *a1, char *s2)
{
  const char *v4; // r4
  const char *v5; // r3

  if ( !a1 || *a1 != 1281586296 )
    off_7C9FC(
      "./../lib/isc/log.c",
      615,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !s2 )
    off_7C9FC("./../lib/isc/log.c", 616, 0, "name != ((void *)0)");
  v4 = (const char *)a1[2];
  while ( 1 )
  {
    v5 = *(const char **)v4;
    if ( !*(_DWORD *)v4 )
      break;
    if ( *((_DWORD *)v4 + 1) == -1 )
    {
      v4 = *(const char **)v4;
    }
    else
    {
      if ( !strcmp(*(const char **)v4, s2) )
        return v4;
      v4 += 8;
    }
  }
  return v5;
}
