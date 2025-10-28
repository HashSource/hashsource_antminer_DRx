void __fastcall sub_537A0(_DWORD **a1)
{
  _DWORD *v2; // r5
  int v3; // r3
  int i; // r4
  int v5; // r3
  int v6; // r2
  int v7; // r3
  FILE *v8; // r0
  unsigned int v9; // r2
  _DWORD *v10; // r0
  unsigned int j; // r6
  _DWORD *v12; // r4
  int v13; // r10
  char *v14; // r1
  int v15; // r2
  int v16; // r2
  _DWORD *v17; // r3
  void *v18; // r0

  if ( !a1 || (v2 = *a1) == 0 || *v2 != 1281582695 )
  {
    off_7C9FC(
      "./../lib/isc/log.c",
      510,
      0,
      "lcfgp != ((void *)0) && (((*lcfgp) != ((void *)0)) && (((const isc__magic_t *)(*lcfgp))->magic == ((('L') << 24 | "
      "('c') << 16 | ('f') << 8 | ('g')))))");
    v2 = *a1;
  }
  v3 = v2[1];
  if ( !v3 || *(_DWORD **)(v3 + 32) == v2 )
    off_7C9FC("./../lib/isc/log.c", 518, 0, "lcfg->lctx != ((void *)0) && lcfg->lctx->logconfig != lcfg");
  for ( i = v2[2]; i; i = v2[2] )
  {
    v7 = *(_DWORD *)(i + 40);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 36) = *(_DWORD *)(i + 36);
      v5 = *(_DWORD *)(i + 36);
      if ( !v5 )
        goto LABEL_17;
    }
    else
    {
      if ( v2[3] != i )
        off_7C9FC("./../lib/isc/log.c", 523, 2, "(lcfg->channels).tail == (channel)");
      v5 = *(_DWORD *)(i + 36);
      v2[3] = v5;
      if ( !v5 )
      {
LABEL_17:
        if ( v2[2] != i )
          off_7C9FC("./../lib/isc/log.c", 523, 2, "(lcfg->channels).head == (channel)");
        v2[2] = *(_DWORD *)(i + 40);
        goto LABEL_11;
      }
    }
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(i + 40);
LABEL_11:
    v6 = *(_DWORD *)(i + 4);
    *(_DWORD *)(i + 36) = -1;
    *(_DWORD *)(i + 40) = -1;
    if ( v6 == 3 )
    {
      free(*(void **)(i + 20));
      v8 = *(FILE **)(i + 16);
      if ( v8 )
        fclose(v8);
    }
    free(*(void **)i);
    free((void *)i);
  }
  v9 = v2[5];
  if ( !v9 )
    goto LABEL_40;
  v10 = (_DWORD *)v2[4];
  for ( j = 0; j < v9; ++j )
  {
    v12 = (_DWORD *)v10[2 * j];
    v13 = 2 * j;
    v14 = (char *)&v10[2 * j];
    if ( v12 )
    {
      while ( 1 )
      {
        v16 = v12[3];
        if ( v16 )
        {
          *(_DWORD *)(v16 + 8) = v12[2];
          v15 = v12[2];
          if ( !v15 )
            goto LABEL_33;
        }
        else
        {
          if ( *((_DWORD **)v14 + 1) != v12 )
          {
            off_7C9FC("./../lib/isc/log.c", 545, 2, "(lcfg->channellists[i]).tail == (item)");
            v10 = (_DWORD *)v2[4];
          }
          v15 = v12[2];
          v10[v13 + 1] = v15;
          if ( !v15 )
          {
LABEL_33:
            v17 = &v10[v13];
            if ( (_DWORD *)v10[2 * j] != v12 )
            {
              off_7C9FC("./../lib/isc/log.c", 545, 2, "(lcfg->channellists[i]).head == (item)");
              v17 = (_DWORD *)(v2[4] + v13 * 4);
            }
            *v17 = v12[3];
            goto LABEL_28;
          }
        }
        *(_DWORD *)(v15 + 12) = v12[3];
LABEL_28:
        v12[2] = -1;
        v12[3] = -1;
        free(v12);
        v10 = (_DWORD *)v2[4];
        v14 = (char *)&v10[v13];
        v12 = (_DWORD *)v10[2 * j];
        if ( !v12 )
        {
          v9 = v2[5];
          break;
        }
      }
    }
  }
  if ( v9 )
    free(v10);
LABEL_40:
  v18 = (void *)v2[8];
  v2[9] = 0;
  if ( v18 )
    free(v18);
  v2[8] = 0;
  v2[7] = 0;
  v2[6] = 0;
  *v2 = 0;
  free(v2);
  *a1 = 0;
}
