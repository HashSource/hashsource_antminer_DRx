void __fastcall __noreturn sub_11854(void *a1)
{
  pthread_t v1; // r0

  v1 = pthread_self();
  pthread_detach(v1);
  pthread_setcanceltype(1, 0);
  sleep(5u);
  exit(1);
}
