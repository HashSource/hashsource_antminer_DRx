int __fastcall sub_163E4(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v4; // r6
  int v5; // r0

  v4 = a1 + 10;
  sub_16198(a1 + 10, "cgminer.c", "add_queued", 9425);
  sub_12DC0((int)a1, a2);
  v5 = sub_13B94(v4, "cgminer.c", "add_queued", 9427);
  return off_79D40(v5);
}
