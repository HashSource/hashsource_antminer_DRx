int sub_1D548()
{
  int v0; // r4
  pthread_t v1; // r0
  int v2; // r6
  int v3; // r0
  int i; // r4
  int v5; // r3
  pthread_rwlock_t *v6; // r5
  int v7; // r0

  v0 = sub_14838();
  v1 = pthread_self();
  pthread_detach(v1);
  sub_147D0(v0, (_BYTE *)(v0 + 98));
  sub_19340();
  sub_13948(&stru_79718, "cgminer.c", "restart_thread", 5578);
  v2 = dword_79CB8;
  v3 = sub_139B4(&stru_79718, "cgminer.c", "restart_thread", 5580);
  off_72D00(v3);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = *(_DWORD *)(dword_796A8 + 4 * i);
      v6 = *(pthread_rwlock_t **)(v5 + 36);
      if ( v6 && !v6[1].__lock )
      {
        *(_BYTE *)(v5 + 62) = 1;
        sub_1D400(v6);
        (*(void (__fastcall **)(pthread_rwlock_t *))(v6->__nr_readers + 76))(v6);
      }
    }
  }
  sub_140C0(&stru_796F4, "cgminer.c", "restart_thread", 5592);
  pthread_cond_broadcast(&stru_79BA8);
  v7 = sub_1412C(&stru_796F4, "cgminer.c", "restart_thread", 5594);
  off_72D00(v7);
  return 0;
}
