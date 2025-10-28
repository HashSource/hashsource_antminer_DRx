int *__fastcall pool_alive(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r7
  int *result; // r0

  v1 = a1 + 76;
  pthread_mutex_lock(a1 + 76);
  v3 = (unsigned __int8)a1[79].__size[8];
  a1[79].__size[8] = 0;
  result = (int *)pthread_mutex_unlock(v1);
  if ( v3 )
    return sub_31C1C(&a1->__lock, 0);
  return result;
}
