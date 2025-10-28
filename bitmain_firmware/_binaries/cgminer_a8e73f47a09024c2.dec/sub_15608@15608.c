int sub_15608()
{
  int result; // r0
  int v1; // r2
  int v2; // r0

  result = sub_153F0();
  if ( result )
  {
    if ( dword_80560 )
      v1 = *(__int16 *)(dword_80560 + 4) + 1;
    else
      v1 = -1;
    wtouchln((WINDOW *)dword_80560, 0, v1, 1);
    wrefresh((WINDOW *)dword_80560);
    v2 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    return off_79D40(v2);
  }
  return result;
}
