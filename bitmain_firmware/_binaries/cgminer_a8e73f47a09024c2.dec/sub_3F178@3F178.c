void __fastcall sub_3F178(int a1, const char *a2, int a3)
{
  struct tm *v6; // r0
  int v7; // r0
  FILE *v8; // r7
  size_t v9; // r0
  size_t v10; // r0
  time_t tv_sec; // [sp+1Ch] [bp-4Ch] BYREF
  struct timeval v12; // [sp+20h] [bp-48h] BYREF
  char s[64]; // [sp+28h] [bp-40h] BYREF

  if ( byte_7FE78 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v12.tv_sec = 0;
    v12.tv_usec = 0;
    sub_30050(&v12);
    tv_sec = v12.tv_sec;
    v6 = localtime(&tv_sec);
    snprintf(
      s,
      0x40u,
      " [%d-%02d-%02d %02d:%02d:%02d] ",
      v6->tm_year + 1900,
      v6->tm_mon + 1,
      v6->tm_mday,
      v6->tm_hour,
      v6->tm_min,
      v6->tm_sec);
    v7 = fileno((FILE *)stderr);
    if ( !isatty(v7) )
    {
      fprintf((FILE *)stderr, "%s%s\n", s, a2);
      fflush((FILE *)stderr);
    }
    if ( byte_7CB38 )
    {
      v8 = (FILE *)dword_7CB3C;
      if ( dword_7CB3C || (v8 = fopen(dword_7CB40, word_7CC40), (dword_7CB3C = (int)v8) != 0) )
      {
        v9 = strlen(s);
        fwrite(s, v9, 1u, v8);
        v10 = strlen(a2);
        fwrite(a2, v10, 1u, (FILE *)dword_7CB3C);
        fwrite(&word_6E448, 1u, 1u, (FILE *)dword_7CB3C);
        fflush((FILE *)dword_7CB3C);
      }
    }
    sub_3F400(a1, s, a2, a3);
  }
}
