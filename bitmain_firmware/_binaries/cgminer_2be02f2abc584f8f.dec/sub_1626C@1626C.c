int __fastcall sub_1626C(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v2; // r6
  int v3; // r7
  int v4; // r0

  v2 = a1 + 10;
  sub_15FB8(a1 + 10, "cgminer.c", "get_queued", 9441);
  v3 = sub_14DA4((int)a1);
  v4 = sub_139B4(v2, "cgminer.c", "get_queued", 9443);
  off_72D00(v4);
  return v3;
}
