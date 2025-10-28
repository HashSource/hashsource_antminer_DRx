int __fastcall sub_2D7E0(int a1, const pthread_attr_t *a2, void *(*a3)(void *), void *a4)
{
  sub_2D790((sem_t *)(a1 + 16), "util.c", "thr_info_create", 1322);
  return j_pthread_create((pthread_t *)(a1 + 12), a2, a3, a4);
}
