const char *sub_55CA4(_DWORD *a1, int a2, int a3, const char *a4, ...)
{
  if ( a1 && *a1 != 1296261492 )
    off_7C9FC(
      "./../lib/isc/nls/msgcat.c",
      119,
      0,
      "(((msgcat) != ((void *)0)) && (((const isc__magic_t *)(msgcat))->magic == ((('M') << 24 | ('C') << 16 | ('a') << 8"
      " | ('t'))))) || msgcat == ((void *)0)");
  if ( a2 <= 0 )
    off_7C9FC("./../lib/isc/nls/msgcat.c", 120, 0, "set > 0");
  if ( a3 <= 0 )
    off_7C9FC("./../lib/isc/nls/msgcat.c", 121, 0, "message > 0");
  if ( !a4 )
    off_7C9FC("./../lib/isc/nls/msgcat.c", 122, 0, "default_text != ((void *)0)");
  return a4;
}
