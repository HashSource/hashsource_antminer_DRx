int sub_1F70C()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_63FB0) )
    sub_B4E4("cp_prio", 7014);
  if ( pthread_rwlock_rdlock(&stru_63FC8) )
    sub_B76C("cp_prio", 7014);
  if ( pthread_mutex_unlock(&stru_63FB0) )
    sub_B694("cp_prio", 7014);
  v0 = *(_DWORD *)(dword_61310 + 4);
  if ( pthread_rwlock_unlock(&stru_63FC8) )
    sub_B700("cp_prio", 7016);
  off_60178();
  return v0;
}
