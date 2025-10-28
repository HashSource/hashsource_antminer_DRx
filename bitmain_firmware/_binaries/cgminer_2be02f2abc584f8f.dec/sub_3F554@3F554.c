void __fastcall sub_3F554(int a1, const char *a2, int a3)
{
  int v6; // r0

  if ( byte_78D98 )
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
    sub_3F448(a1, &byte_67C50, a2, a3);
  }
}
