int sub_1C590()
{
  if ( pthread_mutex_lock((pthread_mutex_t *)dword_6DC9C) )
    sub_1BF10("wake_gws", 5514);
  pthread_cond_signal(&stru_732F0);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_6DC9C) )
    sub_1BF54("wake_gws", 5516);
  return off_6CB70();
}
