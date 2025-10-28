void __fastcall sub_343C4(int a1, const char *a2, int a3)
{
  struct tm *v6; // r0
  int v7; // r0
  FILE *v8; // r7
  size_t v9; // r0
  size_t v10; // r0
  int v11; // r6
  time_t tv_sec; // [sp+1Ch] [bp-50h] BYREF
  struct timeval v13; // [sp+20h] [bp-4Ch] BYREF
  char s[64]; // [sp+28h] [bp-44h] BYREF

  if ( byte_73320 )
  {
    syslog(a1 | 0x80, "%s", a2);
    return;
  }
  v13 = 0;
  sub_2A69C(&v13);
  tv_sec = v13.tv_sec;
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
    if ( byte_6F948 )
    {
LABEL_4:
      v8 = (FILE *)dword_6F94C;
      if ( dword_6F94C
        || (v8 = fopen((const char *)&dword_6F970, (const char *)&word_6F950), (dword_6F94C = (int)v8) != 0) )
      {
        v9 = strlen(s);
        fwrite(s, v9, 1u, v8);
        v10 = strlen(a2);
        fwrite(a2, v10, 1u, (FILE *)dword_6F94C);
        fwrite(&word_585EC, 1u, 1u, (FILE *)dword_6F94C);
        fflush((FILE *)dword_6F94C);
      }
    }
  }
  else
  {
    fprintf((FILE *)stderr, "%s%s\n", s, a2);
    fflush((FILE *)stderr);
    if ( byte_6F948 )
      goto LABEL_4;
  }
  if ( a1 == 3 )
    v11 = 0;
  else
    v11 = byte_72D98 & 1;
  if ( !v11 )
    sub_345C8(s, a2, a3, (unsigned __int8)byte_72D98);
}
