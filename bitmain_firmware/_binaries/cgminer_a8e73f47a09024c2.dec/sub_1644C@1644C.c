int __fastcall sub_1644C(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v2; // r6
  int v3; // r7
  int v4; // r0

  v2 = a1 + 10;
  sub_16198(a1 + 10, "cgminer.c", "get_queued", 9416);
  v3 = sub_14F84((int)a1);
  v4 = sub_13B94(v2, "cgminer.c", "get_queued", 9418);
  off_79D40(v4);
  return v3;
}
