int sub_19140()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_63D48) )
    sub_B4E4("lock_curses", 2933);
  v0 = (unsigned __int8)byte_612F8;
  if ( byte_612F8 )
    return (unsigned __int8)byte_612F8;
  if ( pthread_mutex_unlock(&stru_63D48) )
    sub_B694("unlock_curses", 2928);
  off_60178();
  return v0;
}
