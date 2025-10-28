void __fastcall sub_34624(int a1, const char *a2, int a3)
{
  int v6; // r0
  int v7; // r0

  if ( byte_73320 )
  {
    j_syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v6 = fileno((FILE *)stderr);
    if ( !isatty(v6) )
    {
      fprintf((FILE *)stderr, "%s\n", a2);
      fflush((FILE *)stderr);
    }
    if ( a1 == 3 )
      v7 = 0;
    else
      v7 = byte_72D98 & 1;
    if ( !v7 )
      sub_345C8(&byte_57FF0, a2, a3);
  }
}
