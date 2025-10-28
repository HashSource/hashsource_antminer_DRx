void __fastcall sub_192D4(int a1, int a2)
{
  int v2; // r2

  if ( byte_63EE0 )
  {
    v2 = dword_61308;
  }
  else
  {
    v2 = dword_6130C;
    a2 = dword_61308;
  }
  if ( !byte_63EE0 )
    v2 += a2;
  dword_612FC = v2 + 1;
  dword_61304 = v2 + 2;
  if ( pthread_mutex_unlock(&stru_63D48) )
    sub_B694("unlock_curses", 2928);
  off_60178();
  sub_191C4();
}
