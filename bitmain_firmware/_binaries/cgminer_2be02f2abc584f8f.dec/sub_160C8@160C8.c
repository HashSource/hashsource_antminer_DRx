void __fastcall sub_160C8(pthread_rwlock_t *a1, void **a2)
{
  pthread_rwlock_t *v4; // r7
  int v5; // r0

  v4 = a1 + 10;
  sub_15FB8(a1 + 10, "cgminer.c", "work_completed", 9594);
  sub_13108((int)a1, a2);
  v5 = sub_139B4(v4, "cgminer.c", "work_completed", 9596);
  off_72D00(v5);
  sub_11D18(a2);
}
