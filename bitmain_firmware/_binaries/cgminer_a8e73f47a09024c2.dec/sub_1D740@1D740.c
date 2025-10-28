int sub_1D740()
{
  int v0; // r4
  pthread_t v1; // r0
  int v2; // r6
  int v3; // r0
  int i; // r4
  int v5; // r3
  pthread_rwlock_t *v6; // r5
  int v7; // r0

  v0 = sub_14A18();
  v1 = pthread_self();
  pthread_detach(v1);
  sub_149B0(v0, (_BYTE *)(v0 + 98));
  sub_19520();
  sub_13B28(&stru_807F8, "cgminer.c", "restart_thread", 5580);
  v2 = dword_80D98;
  v3 = sub_13B94(&stru_807F8, "cgminer.c", "restart_thread", 5582);
  off_79D40(v3);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = *(_DWORD *)(dword_80788 + 4 * i);
      v6 = *(pthread_rwlock_t **)(v5 + 36);
      if ( v6 && !v6[1].__lock )
      {
        *(_BYTE *)(v5 + 62) = 1;
        sub_1D5F8(v6);
        (*(void (__fastcall **)(pthread_rwlock_t *))(v6->__nr_readers + 76))(v6);
      }
    }
  }
  sub_142A0(&stru_807D4, "cgminer.c", "restart_thread", 5594);
  pthread_cond_broadcast(&stru_80C88);
  v7 = sub_1430C(&stru_807D4, "cgminer.c", "restart_thread", 5596);
  off_79D40(v7);
  return 0;
}
