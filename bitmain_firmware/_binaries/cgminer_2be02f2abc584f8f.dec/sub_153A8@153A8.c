void sub_153A8()
{
  int v0; // r2
  int v1; // r0

  if ( sub_15210() )
  {
    if ( byte_79A08 )
      v0 = dword_73E8C;
    else
      v0 = dword_73E8C + dword_73E90;
    dword_73E80 = v0 + 1;
    dword_73E88 = v0 + 2;
    v1 = sub_1412C(&stru_79870, "cgminer.c", "unlock_curses", 3269);
    off_72D00(v1);
    sub_15280();
  }
}
