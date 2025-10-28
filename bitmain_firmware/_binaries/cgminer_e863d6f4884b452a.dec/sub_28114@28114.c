int __fastcall sub_28114(int a1, const char *a2, int a3)
{
  int v6; // r0

  sub_27FF0((pthread_rwlock_t *)(a1 + 24), a2, a3);
  v6 = sub_280C0((pthread_mutex_t *)a1, a2, a3);
  return off_6CB70(v6);
}
