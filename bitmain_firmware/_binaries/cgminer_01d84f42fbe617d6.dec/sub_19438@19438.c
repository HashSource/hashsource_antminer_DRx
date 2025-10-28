int __fastcall sub_19438(int a1, const char *a2, const char *a3)
{
  int result; // r0
  _BOOL4 v7; // r4
  int v8; // r2

  result = sub_19140();
  if ( !result )
    return result;
  v7 = (unsigned int)(a1 - 3) <= 1;
  if ( byte_64068 )
  {
    if ( v7 )
    {
      wprintw((WINDOW *)dword_639D8, "%s%s\n", a2, a3);
LABEL_5:
      if ( dword_639D8 )
        v8 = *(__int16 *)(dword_639D8 + 4);
      else
        v8 = -1;
      if ( dword_639D8 )
        ++v8;
      wtouchln((WINDOW *)dword_639D8, 0, v8, 1);
      wrefresh((WINDOW *)dword_639D8);
    }
  }
  else
  {
    wprintw((WINDOW *)dword_639D8, "%s%s\n", a2, a3);
    if ( v7 )
      goto LABEL_5;
  }
  if ( pthread_mutex_unlock(&stru_63D48) )
    sub_B694("unlock_curses", 2928);
  off_60178();
  return 1;
}
