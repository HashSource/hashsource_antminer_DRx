_DWORD *__fastcall sub_185DC(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  int v7; // r0

  v4 = a1 + 10;
  sub_13B28(a1 + 10, "cgminer.c", "clone_queued_work_byid", 9524);
  v5 = (_DWORD *)sub_1329C(a1[11].__lock, a2);
  if ( v5 )
    v6 = sub_185B4(v5, 0);
  else
    v6 = 0;
  v7 = sub_13B94(v4, "cgminer.c", "clone_queued_work_byid", 9528);
  off_79D40(v7);
  return v6;
}
