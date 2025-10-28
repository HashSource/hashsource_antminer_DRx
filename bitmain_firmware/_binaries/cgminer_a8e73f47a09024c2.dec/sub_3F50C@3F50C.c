void __fastcall sub_3F50C(int a1, const char *a2, int a3)
{
  int v6; // r0

  if ( byte_7FE78 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v6 = fileno((FILE *)stderr);
    if ( !isatty(v6) )
    {
      fprintf((FILE *)stderr, "%s\n", a2);
      fflush((FILE *)stderr);
    }
    sub_3F400(a1, &byte_6DF60, a2, a3);
  }
}
