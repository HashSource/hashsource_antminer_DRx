int sub_1585C()
{
  int v0; // r0

  pthread_mutex_trylock(&stru_80950);
  if ( byte_7AEDD )
  {
    byte_79C40 = 0;
    byte_7AEDD = 0;
    leaveok((WINDOW *)dword_80560, 0);
    leaveok((WINDOW *)dword_80968, 0);
    leaveok((WINDOW *)dword_80F40, 0);
    nocbreak();
    echo();
    delwin((WINDOW *)dword_80560);
    delwin((WINDOW *)dword_80968);
    delwin((WINDOW *)dword_80F40);
    endwin();
  }
  v0 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
  return off_79D40(v0);
}
