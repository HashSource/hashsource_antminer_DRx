int __fastcall sub_34744(int a1, const pthread_attr_t *a2, void *(*a3)(void *), void *a4)
{
  sub_346C4((sem_t *)(a1 + 16), "util.c", "thr_info_create", 1322);
  return pthread_create((pthread_t *)(a1 + 12), a2, a3, a4);
}
