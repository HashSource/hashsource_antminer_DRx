void sub_191C4()
{
  int v0; // r2
  int v1; // r3
  int v2; // r1
  int v3; // r3
  int v4; // r2

  if ( byte_6007C && sub_19140() )
  {
    werase((WINDOW *)stdscr);
    if ( dword_63D60 )
      v0 = *(__int16 *)(dword_63D60 + 6);
    else
      v0 = -1;
    v1 = dword_612FC;
    if ( dword_63D60 )
      ++v0;
    if ( LINES - 1 <= dword_612FC )
      v1 = LINES - 2;
    dword_61300 = v1;
    dword_61304 = v1;
    wresize((WINDOW *)dword_63D60, v1, v0);
    v3 = dword_64230;
    if ( dword_64230 )
      v2 = *(__int16 *)(dword_64230 + 4);
    else
      v3 = -1;
    if ( dword_64230 )
      v4 = *(__int16 *)(v3 + 6);
    else
      v4 = v3;
    if ( dword_64230 )
    {
      v3 = v2 + 1;
      ++v4;
    }
    wresize((WINDOW *)dword_639D8, v3 - dword_61304, v4);
    mvwin((WINDOW *)dword_639D8, dword_61304, 0);
    if ( pthread_mutex_unlock(&stru_63D48) )
      sub_B694("unlock_curses", 2928);
    off_60178();
  }
}
