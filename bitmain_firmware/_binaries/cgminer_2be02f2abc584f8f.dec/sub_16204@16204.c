int __fastcall sub_16204(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v4; // r6
  int v5; // r0

  v4 = a1 + 10;
  sub_15FB8(a1 + 10, "cgminer.c", "add_queued", 9450);
  sub_12BE0((int)a1, a2);
  v5 = sub_139B4(v4, "cgminer.c", "add_queued", 9452);
  return off_72D00(v5);
}
