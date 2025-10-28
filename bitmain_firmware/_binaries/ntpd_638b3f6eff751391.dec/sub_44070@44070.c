size_t __fastcall sub_44070(int a1, int a2, int a3)
{
  int v6; // r4
  __pid_t v7; // r0
  __pid_t v8; // r6
  const char *v9; // r8
  const char *v10; // r6
  FILE *v11; // r7
  int v12; // r0
  int v13; // r6
  FILE *v15; // r5
  const char *v16; // r6
  int v17; // r4
  char *v18; // r0
  FILE *v19; // r6
  const char *v20; // r5
  int v21; // r4
  char *v22; // r0
  int pipedes[2]; // [sp+8h] [bp-8h] BYREF

  fflush((FILE *)stdout);
  fflush((FILE *)stderr);
  v6 = pipe(pipedes);
  if ( v6 )
  {
    v19 = (FILE *)stderr;
    v20 = off_7B898[0];
    v21 = *_errno_location();
    v22 = strerror(v21);
    fprintf(v19, v20, v21, v22);
    exit(1);
  }
  v7 = fork();
  v8 = v7;
  if ( v7 == -1 )
  {
    v15 = (FILE *)stderr;
    v16 = off_7B8E0[0];
    v17 = *_errno_location();
    v18 = strerror(v17);
    fprintf(v15, v16, v17, v18, *(_DWORD *)(a1 + 28));
    exit(1);
  }
  if ( !v7 )
  {
    dup2(pipedes[1], 2);
    dup2(pipedes[1], 1);
    close(pipedes[0]);
    if ( a2 != 1 )
    {
      if ( a2 )
      {
        if ( a2 != 2 )
          exit(1);
LABEL_14:
        if ( (*(_DWORD *)(a3 + 16) & 0x40) != 0 )
        {
          free(*(void **)(a3 + 24));
          *(_DWORD *)(a3 + 16) &= ~0x40u;
        }
        *(_DWORD *)(a3 + 24) = "c";
        sub_42398(a1, a3);
      }
      (*(void (__fastcall **)(int, __pid_t))(a1 + 84))(a1, v8);
    }
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
    goto LABEL_14;
  }
  close(pipedes[1]);
  v9 = *(const char **)(a1 + 32);
  v10 = (const char *)dword_69A0C[a2 + 619];
  v11 = fdopen(pipedes[0], "r");
  printf("%s_%s_TEXT='", v9, v10);
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = fgetc(v11);
        v13 = v12;
        if ( v12 != 39 )
          break;
        for ( ; v6; --v6 )
          fputc(10, (FILE *)stdout);
        fwrite("'\\''", 1u, 4u, (FILE *)stdout);
        v6 = 0;
      }
      if ( v12 > 39 )
        goto LABEL_7;
      if ( v12 == -1 )
      {
        fclose(v11);
        return fwrite("'\n\n", 1u, 3u, (FILE *)stdout);
      }
      if ( v12 == 10 )
      {
        ++v6;
      }
      else
      {
LABEL_7:
        while ( v6 )
        {
          fputc(10, (FILE *)stdout);
          --v6;
        }
        fputc(v13, (FILE *)stdout);
        v6 = 0;
      }
    }
  }
  return fwrite("'\n\n", 1u, 3u, (FILE *)stdout);
}
