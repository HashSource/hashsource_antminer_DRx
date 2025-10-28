int __fastcall sub_3F448(int result, const char *a2, const char *a3, int a4)
{
  int v4; // r4
  int v7; // r0
  int v8; // r0

  v4 = result;
  if ( !byte_79DC8 || result == 3 )
  {
    if ( a4 )
    {
      pthread_mutex_trylock(&stru_79870);
      v7 = sub_3F3DC(&stru_79870, "logging.c", "my_log_curses", 38);
      off_72D00(v7);
    }
    if ( !byte_72C00 || (result = sub_15508(v4, a2, a3)) == 0 )
    {
      sub_3F370(&stru_79870, "logging.c", "my_log_curses", 47);
      printf("%s%s%s", a2, a3, "                    \n");
      v8 = sub_3F3DC(&stru_79870, "logging.c", "my_log_curses", 49);
      return off_72D00(v8);
    }
  }
  return result;
}
