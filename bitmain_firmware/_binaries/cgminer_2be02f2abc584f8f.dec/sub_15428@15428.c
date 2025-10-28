int sub_15428()
{
  int result; // r0
  int v1; // r2
  int v2; // r0

  result = sub_15210();
  if ( result )
  {
    if ( dword_79480 )
      v1 = *(__int16 *)(dword_79480 + 4) + 1;
    else
      v1 = -1;
    wtouchln((WINDOW *)dword_79480, 0, v1, 1);
    wrefresh((WINDOW *)dword_79480);
    v2 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    return off_72D00(v2);
  }
  return result;
}
