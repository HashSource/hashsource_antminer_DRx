void __fastcall sub_38438(int a1, const char *a2, int a3)
{
  struct tm *v6; // r0
  int v7; // r0
  FILE *v8; // r8
  size_t v9; // r0
  size_t v10; // r0
  time_t tv_sec; // [sp+1Ch] [bp-4Ch] BYREF
  struct timeval v12; // [sp+20h] [bp-48h] BYREF
  char s[64]; // [sp+28h] [bp-40h] BYREF

  if ( byte_632F0 )
  {
    syslog(a1 | 0x80, "%s", a2);
    return;
  }
  v12.tv_sec = 0;
  v12.tv_usec = 0;
  sub_2B13C(&v12);
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
  if ( isatty(v7) )
  {
    if ( byte_62F98 )
    {
LABEL_4:
      v8 = (FILE *)dword_62F9C;
      if ( dword_62F9C || (v8 = fopen(dword_62FA0, word_630A0), (dword_62F9C = (int)v8) != 0) )
      {
        v9 = strlen(s);
        fwrite(s, v9, 1u, v8);
        v10 = strlen(a2);
        fwrite(a2, v10, 1u, (FILE *)dword_62F9C);
        fwrite(ptr, 1u, 1u, (FILE *)dword_62F9C);
        fflush((FILE *)dword_62F9C);
      }
    }
  }
  else
  {
    fprintf((FILE *)stderr, "%s%s\n", s, a2);
    fflush((FILE *)stderr);
    if ( byte_62F98 )
      goto LABEL_4;
  }
  sub_386F4(a1, s, a2, a3);
}
