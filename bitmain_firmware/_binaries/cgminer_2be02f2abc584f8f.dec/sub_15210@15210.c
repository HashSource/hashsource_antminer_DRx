int sub_15210()
{
  int v0; // r4
  int v1; // r0

  sub_140C0(&stru_79870, "cgminer.c", "lock_curses", 3274);
  v0 = (unsigned __int8)byte_73E7D;
  if ( !byte_73E7D )
  {
    v1 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    off_72D00(v1);
  }
  return v0;
}
