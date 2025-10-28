void sub_15588()
{
  int v0; // r2
  int v1; // r0

  if ( sub_153F0() )
  {
    if ( byte_80AE8 )
      v0 = dword_7AEEC;
    else
      v0 = dword_7AEEC + dword_7AEF0;
    dword_7AEE0 = v0 + 1;
    dword_7AEE8 = v0 + 2;
    v1 = sub_1430C(&stru_80950, "cgminer.c", "unlock_curses", 3271);
    off_79D40(v1);
    sub_15460();
  }
}
