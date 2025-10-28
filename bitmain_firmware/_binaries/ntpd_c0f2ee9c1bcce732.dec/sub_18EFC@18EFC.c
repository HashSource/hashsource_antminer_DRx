void sub_18EFC()
{
  const char *v0; // r5
  FILE *v1; // r4
  int v2; // r6

  if ( (*((_DWORD *)off_7954C + 212) & 0xF) != 0 )
  {
    v0 = (const char *)*((_DWORD *)off_7954C + 214);
    if ( !strcmp(v0, "stderr") )
    {
      v1 = (FILE *)stderr;
    }
    else if ( !strcmp(v0, "stdout") )
    {
      v1 = (FILE *)stdout;
    }
    else
    {
      v1 = fopen(v0, "a");
    }
    if ( v1 )
    {
      if ( (dword_7BE6C & 1) != 0 )
        sub_4FE78(5, "logging to file %s", v0);
      if ( dword_CF6F0 )
      {
        v2 = fileno((FILE *)dword_CF6F0);
        if ( v2 != fileno(v1) )
          fclose((FILE *)dword_CF6F0);
      }
      dword_CF6F0 = (int)v1;
      dword_7BE68 = 0;
    }
    else
    {
      sub_4FE78(3, "Cannot open log file %s", v0);
    }
  }
}
