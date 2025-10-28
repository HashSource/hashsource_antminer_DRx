void sub_15280()
{
  int v0; // r2
  int v1; // r1
  int v2; // r2
  int v3; // r0

  if ( byte_72C00 && sub_15210() )
  {
    werase((WINDOW *)stdscr);
    if ( dword_79888 )
      v0 = *(__int16 *)(dword_79888 + 6) + 1;
    else
      v0 = -1;
    if ( LINES - 2 >= dword_73E80 )
      dword_73E84 = dword_73E80;
    else
      dword_73E84 = LINES - 2;
    dword_73E88 = dword_73E84;
    wresize((WINDOW *)dword_79888, dword_73E84, v0);
    if ( dword_79E60 )
    {
      v1 = *(__int16 *)(dword_79E60 + 4) + 1;
      v2 = *(__int16 *)(dword_79E60 + 6) + 1;
    }
    else
    {
      v1 = -1;
      v2 = -1;
    }
    wresize((WINDOW *)dword_79480, v1 - dword_73E88, v2);
    mvwin((WINDOW *)dword_79480, dword_73E88, 0);
    v3 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    off_72D00(v3);
  }
}
