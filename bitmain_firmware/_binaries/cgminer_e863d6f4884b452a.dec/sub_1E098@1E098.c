int sub_1E098()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_73460) )
    sub_1BF10("current_pool", 1058);
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_1C994("current_pool", 1058);
  if ( pthread_mutex_unlock(&stru_73460) )
    sub_1BF54("current_pool", 1058);
  v0 = dword_6DD48;
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_1C70C("current_pool", 1060);
  off_6CB70();
  return v0;
}
