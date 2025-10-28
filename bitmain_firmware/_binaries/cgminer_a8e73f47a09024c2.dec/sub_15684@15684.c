int sub_15684()
{
  int result; // r0
  int v1; // r0

  result = sub_153F0();
  if ( result )
  {
    werase((WINDOW *)stdscr);
    wclear((WINDOW *)dword_80560);
    v1 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    return off_79D40(v1);
  }
  return result;
}
