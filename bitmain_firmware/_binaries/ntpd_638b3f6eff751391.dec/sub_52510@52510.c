void __fastcall sub_52510(_DWORD **a1)
{
  _DWORD *v2; // r4
  FILE *v3; // r0
  void *v4; // r0

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/interfaceiter.c", 345, 0, "iterp != ((void *)0)");
  v2 = *a1;
  if ( !*a1 || *v2 != 1229343060 )
    off_7C9FC(
      "./../lib/isc/unix/interfaceiter.c",
      347,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('T')))))");
  close(v2[3]);
  v3 = (FILE *)v2[9];
  if ( v3 )
    fclose(v3);
  v4 = (void *)v2[6];
  if ( v4 )
    free(v4);
  *v2 = 0;
  free(v2);
  *a1 = 0;
}
