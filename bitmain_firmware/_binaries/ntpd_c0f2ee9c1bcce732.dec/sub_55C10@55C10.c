void __fastcall sub_55C10(_DWORD **a1)
{
  _DWORD *v2; // r4

  if ( !a1 )
    off_7C9FC("./../lib/isc/nls/msgcat.c", 94, 0, "msgcatp != ((void *)0)");
  v2 = *a1;
  if ( *a1 )
  {
    if ( *v2 != 1296261492 )
      off_7C9FC(
        "./../lib/isc/nls/msgcat.c",
        96,
        0,
        "(((msgcat) != ((void *)0)) && (((const isc__magic_t *)(msgcat))->magic == ((('M') << 24 | ('C') << 16 | ('a') <<"
        " 8 | ('t'))))) || msgcat == ((void *)0)");
    *v2 = 0;
    free(v2);
  }
  *a1 = 0;
}
