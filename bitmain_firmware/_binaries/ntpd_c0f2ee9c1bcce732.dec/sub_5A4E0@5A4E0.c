const char *__fastcall sub_5A4E0(const char *a1)
{
  const char *v1; // r4
  char *v2; // r0

  v1 = a1;
  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 367, 0, "filename != ((void *)0)");
  v2 = strrchr(v1, 47);
  if ( v2 )
    return v2 + 1;
  return v1;
}
