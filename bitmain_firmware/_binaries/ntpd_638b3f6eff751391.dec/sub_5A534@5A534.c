int __fastcall sub_5A534(const char *a1, void *a2, size_t a3)
{
  const char *v6; // r5
  size_t v7; // r2

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 381, 0, "filename != ((void *)0)");
  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/file.c", 382, 0, "buf != ((void *)0)");
  v6 = sub_5A4E0(a1);
  v7 = strlen(v6) + 1;
  if ( v7 > a3 )
    return 19;
  memcpy(a2, v6, v7);
  return 0;
}
