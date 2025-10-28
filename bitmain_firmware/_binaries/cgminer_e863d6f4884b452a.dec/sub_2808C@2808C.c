int __fastcall sub_2808C(int a1, const char *a2, int a3)
{
  if ( pthread_mutex_lock((pthread_mutex_t *)a1) )
    sub_28044(a2, a3);
  return sub_27F9C((pthread_rwlock_t *)(a1 + 24), a2, a3);
}
