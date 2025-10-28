int sub_17ED8()
{
  if ( pthread_mutex_lock((pthread_mutex_t *)dword_612C8) )
    sub_B4E4("wake_gws", 5182);
  pthread_cond_signal(&stru_63748);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_612C8) )
    sub_B694("wake_gws", 5184);
  return off_60178();
}
