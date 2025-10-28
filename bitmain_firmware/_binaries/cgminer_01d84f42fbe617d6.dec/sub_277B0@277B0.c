int sub_277B0()
{
  int maxy; // r6
  WINDOW *v1; // r0
  int maxx; // r1

  if ( pthread_mutex_lock(&stru_63D48) )
    sub_B4E4("lock_curses", 2933);
  if ( byte_612F8 )
  {
    if ( !pthread_mutex_unlock(&stru_63D48) )
      return off_60178();
LABEL_14:
    sub_B694("unlock_curses", 2928);
  }
  v1 = initscr();
  dword_64230 = (int)v1;
  if ( v1 )
    maxx = v1->_maxx;
  else
    maxy = -1;
  if ( v1 )
    maxy = v1->_maxy;
  else
    maxx = maxy;
  if ( v1 )
  {
    ++maxx;
    ++maxy;
  }
  dword_63D60 = (int)newwin(dword_612FC, maxx, 0, 0);
  leaveok((WINDOW *)dword_63D60, 1);
  dword_639D8 = (int)newwin(maxy - dword_61304, 0, dword_61304, 0);
  idlok((WINDOW *)dword_639D8, 1);
  scrollok((WINDOW *)dword_639D8, 1);
  leaveok((WINDOW *)dword_639D8, 1);
  cbreak();
  noecho();
  byte_612F8 = 1;
  dword_61300 = dword_612FC;
  if ( pthread_mutex_unlock(&stru_63D48) )
    goto LABEL_14;
  return off_60178();
}
