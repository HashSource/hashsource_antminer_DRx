int sub_193CC()
{
  int result; // r0

  result = sub_19140();
  if ( result )
  {
    werase((WINDOW *)stdscr);
    wclear((WINDOW *)dword_639D8);
    if ( pthread_mutex_unlock(&stru_63D48) )
      sub_B694("unlock_curses", 2928);
    return off_60178();
  }
  return result;
}
