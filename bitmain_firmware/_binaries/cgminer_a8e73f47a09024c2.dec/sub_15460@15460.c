void sub_15460()
{
  int v0; // r2
  int v1; // r1
  int v2; // r2
  int v3; // r0

  if ( byte_79C40 && sub_153F0() )
  {
    werase((WINDOW *)stdscr);
    if ( dword_80968 )
      v0 = *(__int16 *)(dword_80968 + 6) + 1;
    else
      v0 = -1;
    if ( LINES - 2 >= dword_7AEE0 )
      dword_7AEE4 = dword_7AEE0;
    else
      dword_7AEE4 = LINES - 2;
    dword_7AEE8 = dword_7AEE4;
    wresize((WINDOW *)dword_80968, dword_7AEE4, v0);
    if ( dword_80F40 )
    {
      v1 = *(__int16 *)(dword_80F40 + 4) + 1;
      v2 = *(__int16 *)(dword_80F40 + 6) + 1;
    }
    else
    {
      v1 = -1;
      v2 = -1;
    }
    wresize((WINDOW *)dword_80560, v1 - dword_7AEE8, v2);
    mvwin((WINDOW *)dword_80560, dword_7AEE8, 0);
    v3 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    off_79D40(v3);
  }
}
