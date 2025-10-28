int sub_19060()
{
  pthread_mutex_trylock(&stru_63D48);
  if ( !byte_612F8 )
  {
    if ( !pthread_mutex_unlock(&stru_63D48) )
      return off_60178();
LABEL_5:
    sub_B694("unlock_curses", 2928);
  }
  byte_6007C = 0;
  byte_612F8 = 0;
  leaveok((WINDOW *)dword_639D8, 0);
  leaveok((WINDOW *)dword_63D60, 0);
  leaveok((WINDOW *)dword_64230, 0);
  nocbreak();
  echo();
  delwin((WINDOW *)dword_639D8);
  delwin((WINDOW *)dword_63D60);
  delwin((WINDOW *)dword_64230);
  endwin();
  if ( pthread_mutex_unlock(&stru_63D48) )
    goto LABEL_5;
  return off_60178();
}
