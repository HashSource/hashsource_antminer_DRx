int __fastcall sub_10EBC(int a1)
{
  int v2; // r5
  int v3; // r2
  size_t v4; // r6
  char *v5; // r0
  char *v6; // r7
  int v7; // r2
  int v8; // r3

  if ( !a1 || *(_DWORD *)a1 != 1281582695 )
    off_21DCC(
      "./../lib/isc/log.c",
      1111,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 12);
  if ( !v3 )
  {
    off_21DCC("./../lib/isc/log.c", 1115, 0, "lctx->category_count != 0");
    v3 = *(_DWORD *)(v2 + 12);
  }
  if ( *(_DWORD *)(a1 + 20) == v3 )
    return 0;
  v4 = 8 * v3;
  v5 = sub_D894(8 * v3);
  v6 = v5;
  if ( !v5 )
    return 1;
  memset(v5, 0, v4);
  v7 = *(_DWORD *)(a1 + 20);
  if ( v7 )
  {
    memcpy(v6, *(const void **)(a1 + 16), 8 * v7);
    free(*(void **)(a1 + 16));
  }
  v8 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 20) = v8;
  return 0;
}
