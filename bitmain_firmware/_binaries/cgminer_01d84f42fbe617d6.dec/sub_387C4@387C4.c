void __fastcall sub_387C4(int a1, const char *a2, int a3)
{
  int v6; // r0

  if ( byte_632F0 )
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
    sub_386F4(a1, "", a2, a3);
  }
}
