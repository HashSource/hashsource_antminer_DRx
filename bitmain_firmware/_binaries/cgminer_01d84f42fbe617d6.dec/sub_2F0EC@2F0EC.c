int __fastcall sub_2F0EC(int a1, const pthread_attr_t *a2, void *(*a3)(void *), void *a4)
{
  sub_2F06C((sem_t *)(a1 + 16), "util.c", "thr_info_create", 1221);
  return pthread_create((pthread_t *)(a1 + 12), a2, a3, a4);
}
