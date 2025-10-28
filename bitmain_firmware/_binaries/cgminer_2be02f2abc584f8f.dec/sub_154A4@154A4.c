int sub_154A4()
{
  int result; // r0
  int v1; // r0

  result = sub_15210();
  if ( result )
  {
    werase((WINDOW *)stdscr);
    wclear((WINDOW *)dword_79480);
    v1 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    return off_72D00(v1);
  }
  return result;
}
