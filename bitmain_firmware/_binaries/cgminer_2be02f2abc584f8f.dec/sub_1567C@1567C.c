int sub_1567C()
{
  int v0; // r0

  pthread_mutex_trylock(&stru_79870);
  if ( byte_73E7D )
  {
    byte_72C00 = 0;
    byte_73E7D = 0;
    leaveok((WINDOW *)dword_79480, 0);
    leaveok((WINDOW *)dword_79888, 0);
    leaveok((WINDOW *)dword_79E60, 0);
    nocbreak();
    echo();
    delwin((WINDOW *)dword_79480);
    delwin((WINDOW *)dword_79888);
    delwin((WINDOW *)dword_79E60);
    endwin();
  }
  v0 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
  return off_72D00(v0);
}
