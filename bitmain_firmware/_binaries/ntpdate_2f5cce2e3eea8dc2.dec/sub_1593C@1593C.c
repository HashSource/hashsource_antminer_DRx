int __fastcall sub_1593C(const char *a1, void *a2, size_t a3)
{
  const char *v6; // r5
  size_t v7; // r2

  if ( !a1 )
    off_21DCC("./../lib/isc/unix/file.c", 381, 0, "filename != ((void *)0)");
  if ( !a2 )
    off_21DCC("./../lib/isc/unix/file.c", 382, 0, "buf != ((void *)0)");
  v6 = sub_158E8(a1);
  v7 = strlen(v6) + 1;
  if ( v7 > a3 )
    return 19;
  memcpy(a2, v6, v7);
  return 0;
}
