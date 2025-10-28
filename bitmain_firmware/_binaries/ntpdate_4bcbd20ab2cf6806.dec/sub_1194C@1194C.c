_DWORD *__fastcall sub_1194C(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r3
  int v5; // r12
  _DWORD *v6; // r2
  int v7; // r3
  int *v8; // r1
  int v9; // t1

  v2 = result;
  if ( !result || *result != 1281586296 )
    result = (_DWORD *)off_21DCC(
                         "./../lib/isc/log.c",
                         638,
                         0,
                         "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << "
                         "16 | ('t') << 8 | ('x')))))");
  if ( a2 && *a2 )
  {
    v4 = (_DWORD *)v2[4];
    if ( !v4 )
      goto LABEL_17;
  }
  else
  {
    result = (_DWORD *)off_21DCC(
                         "./../lib/isc/log.c",
                         639,
                         0,
                         "modules != ((void *)0) && modules[0].name != ((void *)0)");
    v4 = (_DWORD *)v2[4];
    if ( !v4 )
    {
LABEL_17:
      v2[4] = a2;
      goto LABEL_12;
    }
  }
  while ( 1 )
  {
    v6 = (_DWORD *)*v4;
    if ( !*v4 )
      break;
    v5 = v4[1];
    v4 += 2;
    if ( v5 == -1 )
      v4 = v6;
  }
  *v4 = a2;
  v4[1] = -1;
LABEL_12:
  if ( *a2 )
  {
    v7 = v2[5];
    v8 = a2 + 2;
    do
    {
      *(v8 - 1) = v7++;
      v9 = *v8;
      v8 += 2;
    }
    while ( v9 );
    v2[5] = v7;
  }
  return result;
}
