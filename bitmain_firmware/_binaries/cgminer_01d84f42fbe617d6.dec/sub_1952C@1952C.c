int __fastcall sub_1952C(const char *a1)
{
  int result; // r0

  result = sub_19140();
  if ( result )
  {
    wprintw((WINDOW *)dword_639D8, "%s", a1);
    if ( pthread_mutex_unlock(&stru_63D48) )
      sub_B694("unlock_curses", 2928);
    return off_60178();
  }
  return result;
}
