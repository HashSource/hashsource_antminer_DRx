int __fastcall dump_indent(char a1, int a2, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  int i; // [sp+14h] [bp+14h]

  if ( (a1 & 0x1F) == 0 )
  {
    if ( a3 && (a1 & 0x20) == 0 )
      return a4(" ", 1, a5);
    return 0;
  }
  if ( !a4("\n", 1, a5) )
  {
    for ( i = 0; i < a2; ++i )
    {
      if ( a4("                                ", a1 & 0x1F, a5) )
        return -1;
    }
    return 0;
  }
  return -1;
}
