int sub_153F0()
{
  int v0; // r4
  int v1; // r0

  sub_142A0(&stru_80950, "cgminer.c", "lock_curses", 3276);
  v0 = (unsigned __int8)byte_7AEDD;
  if ( !byte_7AEDD )
  {
    v1 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    off_79D40(v1);
  }
  return v0;
}
