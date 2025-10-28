int sub_19350()
{
  int result; // r0
  int v1; // r2

  result = sub_19140();
  if ( result )
  {
    if ( dword_639D8 )
      v1 = *(__int16 *)(dword_639D8 + 4);
    else
      v1 = -1;
    if ( dword_639D8 )
      ++v1;
    wtouchln((WINDOW *)dword_639D8, 0, v1, 1);
    wrefresh((WINDOW *)dword_639D8);
    if ( pthread_mutex_unlock(&stru_63D48) )
      sub_B694("unlock_curses", 2928);
    return off_60178();
  }
  return result;
}
