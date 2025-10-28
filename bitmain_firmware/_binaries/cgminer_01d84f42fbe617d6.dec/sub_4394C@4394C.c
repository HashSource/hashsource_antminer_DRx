int __fastcall sub_4394C(char a1, int a2, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  int v5; // r8
  int v9; // r4

  v5 = a1 & 0x1F;
  if ( (a1 & 0x1F) != 0 )
  {
    if ( !a4(ptr, 1, a5) )
    {
      if ( a2 <= 0 )
        return 0;
      v9 = 0;
      while ( 1 )
      {
        ++v9;
        if ( a4("                                ", v5, a5) )
          break;
        if ( v9 == a2 )
          return 0;
      }
    }
    return -1;
  }
  else
  {
    if ( !a3 || (a1 & 0x20) != 0 )
      return 0;
    return a4(" ", 1, a5);
  }
}
