void *__fastcall sub_F7C0(void *a1)
{
  pthread_t v1; // r0

  v1 = pthread_self();
  pthread_detach(v1);
  return 0;
}
