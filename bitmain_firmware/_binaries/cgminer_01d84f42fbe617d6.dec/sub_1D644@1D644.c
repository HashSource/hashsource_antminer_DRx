int sub_1D644()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_63FB0) )
    sub_B4E4("current_pool", 796);
  if ( pthread_rwlock_rdlock(&stru_63FC8) )
    sub_B76C("current_pool", 796);
  if ( pthread_mutex_unlock(&stru_63FB0) )
    sub_B694("current_pool", 796);
  v0 = dword_61310;
  if ( pthread_rwlock_unlock(&stru_63FC8) )
    sub_B700("current_pool", 798);
  off_60178();
  return v0;
}
