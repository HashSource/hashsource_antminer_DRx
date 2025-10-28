int __fastcall sub_54104(_DWORD *a1, const char *a2, int a3, int a4, int *a5, int a6)
{
  _BOOL4 v10; // r2
  char *v11; // r4
  char *v12; // r0
  int v13; // r3
  int result; // r0
  int v15; // r1
  char *v16; // r0
  int v17; // r1
  int v18; // r2

  if ( !a1 || *a1 != 1281582695 )
    off_7C9FC(
      "./../lib/isc/log.c",
      710,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  if ( !a2 )
    off_7C9FC("./../lib/isc/log.c", 711, 0, "name != ((void *)0)");
  if ( (unsigned int)(a3 - 1) > 3 )
    off_7C9FC("./../lib/isc/log.c", 713, 0, "type == 2 || type == 3 || type == 4 || type == 1");
  v10 = a3 == 1;
  if ( a5 )
    v10 = 1;
  if ( v10 )
  {
    if ( a4 >= -5 )
      goto LABEL_12;
  }
  else
  {
    off_7C9FC("./../lib/isc/log.c", 714, 0, "destination != ((void *)0) || type == 1");
    if ( a4 >= -5 )
    {
LABEL_12:
      if ( (a6 & 0xFFFFEFE0) == 0 )
        goto LABEL_13;
      goto LABEL_25;
    }
  }
  off_7C9FC("./../lib/isc/log.c", 715, 0, "level >= (-5)");
  if ( (a6 & 0xFFFFEFE0) == 0 )
  {
LABEL_13:
    v11 = sub_4F524(0x2Cu);
    if ( v11 )
      goto LABEL_14;
    return 1;
  }
LABEL_25:
  off_7C9FC("./../lib/isc/log.c", 717, 0, "(flags & (unsigned int)~(0x001F | 0x1000)) == 0");
  v11 = sub_4F524(0x2Cu);
  if ( !v11 )
    return 1;
LABEL_14:
  v12 = sub_4F4E8(a2);
  *(_DWORD *)v11 = v12;
  if ( v12 )
  {
    *((_DWORD *)v11 + 1) = a3;
    *((_DWORD *)v11 + 2) = a4;
    *((_DWORD *)v11 + 3) = a6;
    *((_DWORD *)v11 + 9) = -1;
    *((_DWORD *)v11 + 10) = -1;
    switch ( a3 )
    {
      case 1:
        goto LABEL_17;
      case 2:
        *((_DWORD *)v11 + 4) = *a5;
        goto LABEL_17;
      case 3:
        v16 = sub_4F4E8((const char *)a5[1]);
        v17 = a5[2];
        v18 = a5[3];
        *((_DWORD *)v11 + 4) = 0;
        *((_DWORD *)v11 + 6) = v17;
        *((_DWORD *)v11 + 7) = v18;
        *((_DWORD *)v11 + 8) = 0;
        *((_DWORD *)v11 + 5) = v16;
        goto LABEL_17;
      case 4:
        v15 = *a5;
        *((_DWORD *)v11 + 5) = 0;
        *((_DWORD *)v11 + 7) = 0;
        *((_DWORD *)v11 + 4) = v15;
        *((_DWORD *)v11 + 6) = -2;
LABEL_17:
        v13 = a1[2];
        if ( v13 )
          *(_DWORD *)(v13 + 36) = v11;
        else
          a1[3] = v11;
        *((_DWORD *)v11 + 10) = v13;
        *((_DWORD *)v11 + 9) = 0;
        a1[2] = v11;
        result = strcmp(a2, "default_stderr");
        if ( result )
          result = 0;
        else
          dword_C9C50 = (int)v11;
        break;
      default:
        free(v12);
        free(v11);
        result = 34;
        break;
    }
  }
  else
  {
    free(v11);
    return 1;
  }
  return result;
}
