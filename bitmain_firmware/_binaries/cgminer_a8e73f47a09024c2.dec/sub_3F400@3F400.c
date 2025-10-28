int __fastcall sub_3F400(int result, const char *a2, const char *a3, int a4)
{
  int v4; // r4
  int v7; // r0
  int v8; // r0

  v4 = result;
  if ( !byte_80EA8 || result == 3 )
  {
    if ( a4 )
    {
      pthread_mutex_trylock(&stru_80950);
      v7 = sub_3F394(&stru_80950, "logging.c", "my_log_curses", 38);
      off_79D40(v7);
    }
    if ( !byte_79C40 || (result = sub_156E8(v4, a2, a3)) == 0 )
    {
      sub_3F328(&stru_80950, "logging.c", "my_log_curses", 47);
      printf("%s%s%s", a2, a3, "                    \n");
      v8 = sub_3F394(&stru_80950, "logging.c", "my_log_curses", 49);
      return off_79D40(v8);
    }
  }
  return result;
}
