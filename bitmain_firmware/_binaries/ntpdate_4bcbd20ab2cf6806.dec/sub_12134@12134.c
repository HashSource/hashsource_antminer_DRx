int __fastcall sub_12134(_DWORD *a1, char *s1, int a3, int a4)
{
  int v8; // r8
  int v9; // r4
  int result; // r0
  unsigned int v11; // r5

  if ( !a1 || *a1 != 1281582695 )
    off_21DCC(
      "./../lib/isc/log.c",
      796,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  if ( !s1 )
    off_21DCC("./../lib/isc/log.c", 797, 0, "name != ((void *)0)");
  v8 = a1[1];
  if ( a3 && *(_DWORD *)(a3 + 4) >= *(_DWORD *)(v8 + 12) )
    off_21DCC("./../lib/isc/log.c", 801, 0, "category == ((void *)0) || category->id < lctx->category_count");
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) >= *(_DWORD *)(v8 + 20) )
      off_21DCC("./../lib/isc/log.c", 802, 0, "module == ((void *)0) || module->id < lctx->module_count");
  }
  v9 = a1[2];
  if ( !v9 )
    return 23;
  while ( strcmp(s1, *(const char **)v9) )
  {
    v9 = *(_DWORD *)(v9 + 40);
    if ( !v9 )
      return 23;
  }
  if ( a3 )
    return sub_10FB0(a1, *(_DWORD *)(a3 + 4), a4, v9);
  if ( !*(_DWORD *)(v8 + 12) )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    result = sub_10FB0(a1, v11++, a4, v9);
    if ( result )
      break;
    if ( *(_DWORD *)(v8 + 12) <= v11 )
      return 0;
  }
  return result;
}
