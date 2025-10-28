void __fastcall sub_11490(void **a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r3
  _DWORD *i; // r4
  int v5; // r3
  int v6; // r3
  _DWORD *v7; // [sp+4h] [bp-4h] BYREF

  if ( !a1 || (v2 = *a1) == 0 || *v2 != 1281586296 )
  {
    off_21DCC(
      "./../lib/isc/log.c",
      467,
      0,
      "lctxp != ((void *)0) && (((*lctxp) != ((void *)0)) && (((const isc__magic_t *)(*lctxp))->magic == ((('L') << 24 | "
      "('c') << 16 | ('t') << 8 | ('x')))))");
    v2 = *a1;
  }
  v3 = (_DWORD *)v2[8];
  if ( v3 )
  {
    v2[8] = 0;
    v7 = v3;
    sub_111A8(&v7);
  }
  if ( v2[7] )
    sub_FFB4("./../lib/isc/log.c", 478, "(*((&lctx->lock)) == 0 ? (*((&lctx->lock)) = -1, 0) : 34) == 0");
  v2[7] = -1;
  for ( i = (_DWORD *)v2[2057]; i; i = (_DWORD *)v2[2057] )
  {
    v6 = i[4];
    if ( v6 )
    {
      *(_DWORD *)(v6 + 12) = i[3];
      v5 = i[3];
      if ( !v5 )
        goto LABEL_17;
    }
    else
    {
      if ( (_DWORD *)v2[2058] != i )
        off_21DCC("./../lib/isc/log.c", 481, 2, "(lctx->messages).tail == (message)");
      v5 = i[3];
      v2[2058] = v5;
      if ( !v5 )
      {
LABEL_17:
        if ( (_DWORD *)v2[2057] != i )
          off_21DCC("./../lib/isc/log.c", 481, 2, "(lctx->messages).head == (message)");
        v2[2057] = i[4];
        goto LABEL_12;
      }
    }
    *(_DWORD *)(v5 + 16) = i[4];
LABEL_12:
    i[3] = -1;
    i[4] = -1;
    free(i);
  }
  *((_BYTE *)v2 + 36) = 0;
  v2[6] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[1] = 0;
  *v2 = 0;
  free(v2);
  *a1 = 0;
}
