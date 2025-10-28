int sub_19BC0()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_63FB0) )
    sub_B4E4("total_work_inc", 2271);
  if ( pthread_rwlock_wrlock(&stru_63FC8) )
    sub_B550("total_work_inc", 2271);
  v0 = dword_61360++;
  if ( pthread_rwlock_unlock(&stru_63FC8) )
    sub_B700("total_work_inc", 2273);
  if ( pthread_mutex_unlock(&stru_63FB0) )
    sub_B694("total_work_inc", 2273);
  off_60178();
  return v0;
}
