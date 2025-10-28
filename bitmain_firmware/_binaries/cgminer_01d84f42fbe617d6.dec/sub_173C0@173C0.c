int __fastcall sub_173C0(pthread_mutex_t *a1, const char *a2, int a3)
{
  int result; // r0

  result = pthread_mutex_init(a1, 0);
  if ( result )
    sub_B5BC(a2, a3);
  return result;
}
