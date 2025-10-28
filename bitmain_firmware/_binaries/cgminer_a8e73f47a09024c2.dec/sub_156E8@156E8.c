int __fastcall sub_156E8(int a1, const char *a2, const char *a3)
{
  _BOOL4 v6; // r4
  int v7; // r2
  int v8; // r0

  if ( sub_153F0() )
  {
    v6 = (unsigned int)(a1 - 3) <= 1;
    if ( byte_80C70 )
    {
      if ( !v6 )
        goto LABEL_10;
      wprintw((WINDOW *)dword_80560, "%s%s\n", a2, a3);
    }
    else
    {
      wprintw((WINDOW *)dword_80560, "%s%s\n", a2, a3);
      if ( !v6 )
      {
LABEL_10:
        v8 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
        off_79D40(v8);
        return 1;
      }
    }
    if ( dword_80560 )
      v7 = *(__int16 *)(dword_80560 + 4) + 1;
    else
      v7 = -1;
    wtouchln((WINDOW *)dword_80560, 0, v7, 1);
    wrefresh((WINDOW *)dword_80560);
    goto LABEL_10;
  }
  return 0;
}
