void *__fastcall sub_22EC4(void *a1)
{
  int v1; // r4
  pthread_t v2; // r0
  int v3; // r6
  int v4; // r4
  int v5; // r3
  pthread_rwlock_t *v6; // r5

  v1 = sub_1D644();
  v2 = pthread_self();
  pthread_detach(v2);
  sub_17E64(v1, (_BYTE *)(v1 + 98));
  sub_22C60();
  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_B76C("restart_thread", 5248);
  v3 = dword_6410C;
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_B700("restart_thread", 5250);
  off_60178();
  if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(dword_63B80 + 4 * v4++);
        v6 = *(pthread_rwlock_t **)(v5 + 36);
        if ( v6 )
        {
          if ( !v6[1].__lock )
            break;
        }
        if ( v4 == v3 )
          goto LABEL_9;
      }
      *(_BYTE *)(v5 + 62) = 1;
      sub_1A3E0(v6);
      (*(void (__fastcall **)(pthread_rwlock_t *))(v6->__nr_readers + 76))(v6);
    }
    while ( v4 != v3 );
  }
LABEL_9:
  if ( pthread_mutex_lock(&stru_63BCC) )
    sub_B4E4("restart_thread", 5262);
  pthread_cond_broadcast(&cond);
  if ( pthread_mutex_unlock(&stru_63BCC) )
    sub_B694("restart_thread", 5264);
  off_60178();
  return 0;
}
