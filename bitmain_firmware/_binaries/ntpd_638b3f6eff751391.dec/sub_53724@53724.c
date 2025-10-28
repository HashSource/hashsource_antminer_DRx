int __fastcall sub_53724(_DWORD *a1)
{
  int result; // r0

  if ( !a1 || *a1 != 1281586296 )
    off_7C9FC(
      "./../lib/isc/log.c",
      423,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  result = a1[8];
  if ( !result )
  {
    off_7C9FC("./../lib/isc/log.c", 425, 1, "lctx->logconfig != ((void *)0)");
    return a1[8];
  }
  return result;
}
