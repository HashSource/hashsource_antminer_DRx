int __fastcall sub_53C44(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  int v8; // r3
  _DWORD *v9; // r2
  _DWORD *v11; // [sp+4h] [bp-4h] BYREF

  if ( !a1 || *a1 != 1281586296 )
    off_7C9FC(
      "./../lib/isc/log.c",
      435,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  if ( !a2 || *a2 != 1281582695 )
    off_7C9FC(
      "./../lib/isc/log.c",
      436,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  if ( (_DWORD *)a2[1] != a1 )
    off_7C9FC("./../lib/isc/log.c", 437, 0, "lcfg->lctx == lctx");
  v4 = sub_534B4((int)a2);
  if ( !v4 )
  {
    v5 = a1[7];
    v6 = v5 == 0;
    v7 = v5 + 1;
    a1[7] = v7;
    if ( !v6 )
      sub_516D8("./../lib/isc/log.c", 448, "((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
    v8 = v7 - 1;
    v9 = (_DWORD *)a1[8];
    a1[7] = v8;
    a1[8] = a2;
    v11 = v9;
    if ( v8 )
      sub_516D8("./../lib/isc/log.c", 453, "(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
    sub_537A0(&v11);
  }
  return v4;
}
