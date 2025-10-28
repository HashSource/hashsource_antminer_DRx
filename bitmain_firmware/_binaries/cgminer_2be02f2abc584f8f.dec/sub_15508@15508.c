int __fastcall sub_15508(int a1, const char *a2, const char *a3)
{
  _BOOL4 v6; // r4
  int v7; // r2
  int v8; // r0

  if ( sub_15210() )
  {
    v6 = (unsigned int)(a1 - 3) <= 1;
    if ( byte_79B90 )
    {
      if ( !v6 )
        goto LABEL_10;
      wprintw((WINDOW *)dword_79480, "%s%s\n", a2, a3);
    }
    else
    {
      wprintw((WINDOW *)dword_79480, "%s%s\n", a2, a3);
      if ( !v6 )
      {
LABEL_10:
        v8 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
        off_72D00(v8);
        return 1;
      }
    }
    if ( dword_79480 )
      v7 = *(__int16 *)(dword_79480 + 4) + 1;
    else
      v7 = -1;
    wtouchln((WINDOW *)dword_79480, 0, v7, 1);
    wrefresh((WINDOW *)dword_79480);
    goto LABEL_10;
  }
  return 0;
}
