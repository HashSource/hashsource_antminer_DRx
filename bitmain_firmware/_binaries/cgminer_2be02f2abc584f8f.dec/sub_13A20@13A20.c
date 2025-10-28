int __fastcall sub_13A20(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v4; // r6
  int v5; // r7
  int v6; // r0

  v4 = a1 + 10;
  sub_13948(a1 + 10, "cgminer.c", "find_queued_work_byid", 9538);
  v5 = sub_130BC(a1[11].__lock, a2);
  v6 = sub_139B4(v4, "cgminer.c", "find_queued_work_byid", 9540);
  off_72D00(v6);
  return v5;
}
