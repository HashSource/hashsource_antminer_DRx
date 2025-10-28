int sub_1E1C4()
{
  int v0; // r4

  if ( pthread_mutex_lock(&stru_73460) )
    sub_1BF10("cp_prio", 7357);
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_1C994("cp_prio", 7357);
  if ( pthread_mutex_unlock(&stru_73460) )
    sub_1BF54("cp_prio", 7357);
  v0 = *(_DWORD *)(dword_6DD48 + 4);
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_1C70C("cp_prio", 7359);
  off_6CB70();
  return v0;
}
