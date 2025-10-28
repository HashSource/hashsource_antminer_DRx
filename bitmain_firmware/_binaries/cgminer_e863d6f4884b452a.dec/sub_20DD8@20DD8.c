int sub_20DD8()
{
  int v0; // r4
  pthread_t v1; // r0
  int v2; // r6
  int v3; // r4
  int v4; // r3
  pthread_rwlock_t *v5; // r5

  v0 = sub_1E098();
  v1 = pthread_self();
  pthread_detach(v1);
  sub_1C040(v0, (_BYTE *)(v0 + 98));
  sub_20B7C();
  if ( pthread_rwlock_rdlock(&stru_732CC) )
    sub_1C994("restart_thread", 5580);
  v2 = dword_735B0;
  v3 = pthread_rwlock_unlock(&stru_732CC);
  if ( v3 )
    sub_1C70C("restart_thread", 5582);
  off_6CB70();
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(_DWORD *)(dword_732C8 + 4 * v3);
      v5 = *(pthread_rwlock_t **)(v4 + 36);
      if ( v5 && !v5[1].__lock )
      {
        *(_BYTE *)(v4 + 62) = 1;
        sub_1C904(v5);
        (*(void (__fastcall **)(pthread_rwlock_t *))(v5->__nr_readers + 76))(v5);
      }
      ++v3;
    }
    while ( v2 != v3 );
  }
  if ( pthread_mutex_lock(&stru_73CB4) )
    sub_1BF10("restart_thread", 5594);
  pthread_cond_broadcast(&stru_73AC0);
  if ( pthread_mutex_unlock(&stru_73CB4) )
    sub_1BF54("restart_thread", 5596);
  off_6CB70();
  return 0;
}
