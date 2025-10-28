int __fastcall sub_2CF5C(int a1, const char *a2, const char *a3, int a4)
{
  int v8; // r0

  sub_2CBE4((pthread_rwlock_t *)(a1 + 24), a2, a3, a4);
  v8 = sub_2C260((pthread_mutex_t *)a1, a2, a3, a4);
  return off_79D40(v8);
}
