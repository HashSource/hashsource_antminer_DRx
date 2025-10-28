void __fastcall __noreturn sub_4CA28(int a1, int a2)
{
  int v2; // r6
  int v3; // r0
  __pid_t v4; // r0
  int v5; // r7
  char *v6; // r6
  int v7; // r7
  int v8; // t1
  __pid_t v9; // r0
  _BYTE stat_loc[4]; // [sp+4h] [bp-4h] BYREF

  v2 = a1;
  if ( !a2 )
  {
    fflush((FILE *)stderr);
    fflush((FILE *)stdout);
    if ( ferror((FILE *)stdout) || ferror((FILE *)stderr) )
      goto LABEL_3;
    dword_C9A98 = stdout;
    v4 = fork();
    if ( v4 != -1 )
    {
      if ( !v4 )
      {
        dword_C9AA0 = 2;
        sub_4C6C0(v2, 0);
      }
      wait(stat_loc);
      v5 = dword_C9AD4;
      v6 = sub_44D28(*(const char **)(dword_C9AD4 + 32));
      *(_DWORD *)(v5 + 28) = v6;
      while ( 1 )
      {
        v8 = (unsigned __int8)*v6++;
        v7 = v8;
        if ( !v8 )
          break;
        *(v6 - 1) = (*_ctype_tolower_loc())[v7];
      }
      fprintf((FILE *)dword_C9A98, off_7B910[0], *(_DWORD *)(dword_C9AD4 + 28));
      fflush((FILE *)dword_C9A98);
      v9 = fork();
      if ( v9 == -1 )
LABEL_16:
        sub_4C6C0(dword_C9AD4, 1);
      if ( !v9 )
      {
        dword_C9AA0 = 2;
        goto LABEL_16;
      }
      wait(stat_loc);
      fflush((FILE *)stdout);
      v3 = ferror((FILE *)stdout);
      if ( !v3 )
LABEL_4:
        exit(v3);
      fputs(off_7B9B8[0], (FILE *)stderr);
LABEL_3:
      v3 = 1;
      goto LABEL_4;
    }
    a1 = v2;
    a2 = 1;
  }
  sub_4C6C0(a1, a2);
}
