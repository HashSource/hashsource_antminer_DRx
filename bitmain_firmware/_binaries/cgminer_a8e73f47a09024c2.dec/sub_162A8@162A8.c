void __fastcall sub_162A8(pthread_rwlock_t *a1, void **a2)
{
  pthread_rwlock_t *v4; // r7
  int v5; // r0

  v4 = a1 + 10;
  sub_16198(a1 + 10, "cgminer.c", "work_completed", 9569);
  sub_132E8((int)a1, a2);
  v5 = sub_13B94(v4, "cgminer.c", "work_completed", 9571);
  off_79D40(v5);
  sub_11F58(a2);
}
