int __fastcall sub_10FB0(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r8
  int result; // r0
  char *v11; // r0
  int v12; // r2
  int v13; // r12
  int v14; // r1
  int v15; // r3

  if ( !a1 || *a1 != 1281582695 )
    off_21DCC(
      "./../lib/isc/log.c",
      1062,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v8 = a1[1];
  if ( *(_DWORD *)(v8 + 12) <= a2 )
    off_21DCC("./../lib/isc/log.c", 1066, 0, "category_id < lctx->category_count");
  if ( a3 && *(_DWORD *)(a3 + 4) >= *(_DWORD *)(v8 + 20) )
    off_21DCC("./../lib/isc/log.c", 1067, 0, "module == ((void *)0) || module->id < lctx->module_count");
  if ( !a4 )
    off_21DCC("./../lib/isc/log.c", 1068, 0, "channel != ((void *)0)");
  v9 = sub_10EBC((int)a1);
  if ( v9 )
    return v9;
  v11 = sub_D894(0x10u);
  if ( !v11 )
    return 1;
  v12 = a1[4];
  v13 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)v11 = a3;
  *((_DWORD *)v11 + 1) = a4;
  v14 = *(_DWORD *)(v12 + 8 * a2);
  if ( v14 )
    *(_DWORD *)(v14 + 8) = v11;
  else
    *(_DWORD *)(v12 + 8 * a2 + 4) = v11;
  *((_DWORD *)v11 + 3) = v14;
  *((_DWORD *)v11 + 2) = 0;
  *(_DWORD *)(v12 + 8 * a2) = v11;
  if ( v13 == 1 )
    return v9;
  v15 = *(_DWORD *)(a4 + 8);
  result = 0;
  if ( a1[7] < v15 )
    a1[7] = v15;
  if ( !v15 )
    a1[9] = 1;
  return result;
}
