int sub_27770()
{
  int v0; // r0
  WINDOW *v2; // r0
  int v3; // r5
  int v4; // r1
  int v5; // r0

  sub_142A0(&stru_80950, "cgminer.c", "lock_curses", 3276);
  if ( byte_7AEDD )
  {
    v0 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    return off_79D40(v0);
  }
  else
  {
    v2 = initscr();
    dword_80F40 = (int)v2;
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
    dword_80968 = (int)newwin(dword_7AEE0, v4, 0, 0);
    leaveok((WINDOW *)dword_80968, 1);
    dword_80560 = (int)newwin(v3 - dword_7AEE8, 0, dword_7AEE8, 0);
    idlok((WINDOW *)dword_80560, 1);
    scrollok((WINDOW *)dword_80560, 1);
    leaveok((WINDOW *)dword_80560, 1);
    cbreak();
    noecho();
    byte_7AEDD = 1;
    dword_7AEE4 = dword_7AEE0;
    v5 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    return off_79D40(v5);
  }
}
