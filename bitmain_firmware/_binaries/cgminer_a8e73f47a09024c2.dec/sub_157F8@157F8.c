int __fastcall sub_157F8(const char *a1)
{
  int result; // r0
  int v3; // r0

  result = sub_153F0();
  if ( result )
  {
    wprintw((WINDOW *)dword_80560, "%s", a1);
    v3 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    return off_79D40(v3);
  }
  return result;
}
