char *__fastcall sub_44588(int a1, int *a2)
{
  int v2; // r3
  char *v5; // r4
  int v6; // r3
  int v7; // r6
  int *v8; // r10
  char *v9; // r0
  int v10; // r8
  int v12; // r3
  char *v13; // r0
  _BYTE *v14; // r8
  char *v15; // r0
  int v16; // r4
  char *v17; // r0
  const char *v18; // r10
  size_t v19; // r4
  size_t v20; // r0
  char *v21; // r0
  const char *v22; // r3
  int v23; // r5
  FILE *v24; // r7
  const char *v25; // r8
  char *v26; // r0
  size_t v27; // r8
  size_t v28; // r10
  char *v29; // r8
  int *v30; // r6
  int v31; // r5
  FILE *v32; // r6
  const char *v33; // r7
  char *v34; // r0
  struct stat stat_buf; // [sp+8h] [bp-1058h] BYREF
  char dest[4096]; // [sp+60h] [bp-1000h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 94);
  if ( (v2 & 0x7FFF) == 0 )
    return 0;
  v5 = *(char **)(*(_DWORD *)(a1 + 68) + (v2 << 6) + 24);
  if ( v5 && *v5 )
    goto LABEL_9;
  v6 = *(_DWORD *)(a1 + 52);
  if ( !v6 )
    return 0;
  while ( *(_DWORD *)(v6 + 4) )
    v6 += 4;
  v5 = *(char **)v6;
  if ( **(_BYTE **)v6 != 36 )
  {
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  v14 = v5 + 1;
  v15 = strchr(v5 + 1, 47);
  v7 = (int)v15;
  if ( v15 )
  {
    v16 = v15 - v14;
    if ( v15 - v14 > 127 )
      return 0;
    memcpy(dest, v14, v15 - v14);
    dest[v16] = 0;
    v17 = getenv(dest);
    v18 = v17;
    if ( v17 )
    {
      v19 = strlen(v17);
      v20 = strlen((const char *)v7);
      v21 = (char *)sub_44484(v19 + v20 + 2);
      v5 = v21;
      if ( v21 )
      {
        v22 = (const char *)v7;
        v7 = 1;
        sprintf(v21, "%s/%s", v18, v22);
        goto LABEL_10;
      }
      return 0;
    }
LABEL_30:
    fprintf((FILE *)stderr, "%s WARNING:  cannot save options - ", *(const char **)(a1 + 28));
    fprintf((FILE *)stderr, off_7B988[0], v14);
    return 0;
  }
  v5 = getenv(v5 + 1);
  if ( !v5 )
    goto LABEL_30;
LABEL_10:
  if ( _xstat(3, v5, &stat_buf) )
  {
    v8 = _errno_location();
    if ( *v8 != 2
      || (v9 = strrchr(v5, 47)) != 0
      && ((v10 = v9 - v5, (unsigned int)(v9 - v5) >= 0x1000)
       || (memcpy(dest, v5, v9 - v5), dest[v10] = 0, _xstat(3, dest, &stat_buf))
       || (stat_buf.st_mode & 0xF000) != 0x4000) )
    {
      fprintf((FILE *)stderr, "%s WARNING:  cannot save options - ", *(const char **)(a1 + 28));
      v23 = *v8;
      v24 = (FILE *)stderr;
      v25 = off_7B97C[0];
      v26 = strerror(*v8);
      fprintf(v24, v25, v23, v26, v5);
      if ( v7 )
        free(v5);
      return 0;
    }
    stat_buf.st_mode = 0x8000;
    goto LABEL_17;
  }
  v12 = stat_buf.st_mode & 0xF000;
  if ( v12 == 0x4000 )
  {
    v27 = strlen(v5);
    v28 = v27 + strlen(*(const char **)(a1 + 36)) + 2;
    v29 = (char *)sub_44484(v28);
    snprintf(v29, v28, "%s/%s", v5, *(const char **)(a1 + 36));
    if ( v7 )
      free(v5);
    if ( _xstat(3, v29, &stat_buf) )
    {
      v30 = _errno_location();
      if ( *v30 != 2 )
      {
        v5 = 0;
        fprintf((FILE *)stderr, "%s WARNING:  cannot save options - ", *(const char **)(a1 + 28));
        v31 = *v30;
        v32 = (FILE *)stderr;
        v33 = off_7B97C[0];
        v34 = strerror(v31);
        fprintf(v32, v33, v31, v34, v29);
        free(v29);
        return v5;
      }
      v5 = v29;
      v7 = 1;
      stat_buf.st_mode = 0x8000;
      goto LABEL_17;
    }
    v5 = v29;
    v7 = 1;
    v12 = stat_buf.st_mode & 0xF000;
  }
  if ( v12 == 0x8000 )
  {
LABEL_17:
    unlink(v5);
    *a2 = v7;
    return v5;
  }
  fprintf((FILE *)stderr, "%s WARNING:  cannot save options - ", *(const char **)(a1 + 28));
  fprintf((FILE *)stderr, off_7B994[0], v5);
  if ( !v7 )
    return 0;
  v13 = v5;
  v5 = 0;
  free(v13);
  return v5;
}
