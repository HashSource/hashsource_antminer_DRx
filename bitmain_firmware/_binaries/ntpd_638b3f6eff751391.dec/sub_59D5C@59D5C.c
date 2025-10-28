int __fastcall sub_59D5C(const char *a1, char *s, char *a3, size_t a4)
{
  char *v8; // r0
  char *v9; // r8
  int v10; // r8
  size_t v12; // r2

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 172, 0, "path != ((void *)0)");
  if ( !s )
    off_7C9FC("./../lib/isc/unix/file.c", 173, 0, "templet != ((void *)0)");
  if ( !a3 )
    off_7C9FC("./../lib/isc/unix/file.c", 174, 0, "buf != ((void *)0)");
  v8 = strrchr(s, 47);
  if ( v8 )
    s = v8 + 1;
  v9 = strrchr(a1, 47);
  if ( v9 )
  {
    v10 = v9 - a1;
    if ( v10 + 2 + strlen(s) > a4 )
      return 19;
    strncpy(a3, a1, v10 + 1);
    a3[v10 + 1] = 0;
    strcat(a3, s);
    return 0;
  }
  else
  {
    v12 = strlen(s) + 1;
    if ( a4 < v12 )
      return 19;
    memcpy(a3, s, v12);
    return 0;
  }
}
