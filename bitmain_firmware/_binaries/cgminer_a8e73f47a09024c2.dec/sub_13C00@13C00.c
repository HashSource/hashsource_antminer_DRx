int __fastcall sub_13C00(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v4; // r6
  int v5; // r7
  int v6; // r0

  v4 = a1 + 10;
  sub_13B28(a1 + 10, "cgminer.c", "find_queued_work_byid", 9513);
  v5 = sub_1329C(a1[11].__lock, a2);
  v6 = sub_13B94(v4, "cgminer.c", "find_queued_work_byid", 9515);
  off_79D40(v6);
  return v5;
}
