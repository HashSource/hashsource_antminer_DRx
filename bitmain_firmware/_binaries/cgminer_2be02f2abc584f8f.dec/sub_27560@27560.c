int sub_27560()
{
  int v0; // r0
  WINDOW *v2; // r0
  int v3; // r5
  int v4; // r1
  int v5; // r0

  sub_140C0(&stru_79870, "cgminer.c", "lock_curses", 3274);
  if ( byte_73E7D )
  {
    v0 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    return off_72D00(v0);
  }
  else
  {
    v2 = initscr();
    dword_79E60 = (int)v2;
    if ( v2 )
    {
      v3 = v2->_maxy + 1;
      v4 = v2->_maxx + 1;
    }
    else
    {
      v3 = -1;
      v4 = -1;
    }
    dword_79888 = (int)newwin(dword_73E80, v4, 0, 0);
    leaveok((WINDOW *)dword_79888, 1);
    dword_79480 = (int)newwin(v3 - dword_73E88, 0, dword_73E88, 0);
    idlok((WINDOW *)dword_79480, 1);
    scrollok((WINDOW *)dword_79480, 1);
    leaveok((WINDOW *)dword_79480, 1);
    cbreak();
    noecho();
    byte_73E7D = 1;
    dword_73E84 = dword_73E80;
    v5 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    return off_72D00(v5);
  }
}
