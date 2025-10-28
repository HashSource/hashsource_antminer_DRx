int __fastcall sub_15618(const char *a1)
{
  int result; // r0
  int v3; // r0

  result = sub_15210();
  if ( result )
  {
    wprintw((WINDOW *)dword_79480, "%s", a1);
    v3 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    return off_72D00(v3);
  }
  return result;
}
