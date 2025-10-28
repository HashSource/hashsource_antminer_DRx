int __fastcall sub_27B20(pthread_rwlock_t *a1)
{
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r1
  bool v5; // zf
  int *v6; // r3
  unsigned int nr_writers_queued; // r2
  int result; // r0

  a1[1].__lock = 0;
  if ( pthread_rwlock_wrlock(&stru_63CA0) )
    sub_B550("enable_device", 10392);
  v2 = dword_63BC8;
  v3 = dword_629DC++;
  a1->__lock = v3;
  *(_DWORD *)(v2 + 4 * v3) = a1;
  if ( pthread_rwlock_unlock(&stru_63CA0) )
    sub_B700("enable_device", 10394);
  off_60178();
  v5 = byte_63D70 == 0;
  if ( byte_63D70 )
    v6 = (int *)dword_629E0;
  else
    v6 = &dword_6410C;
  if ( byte_63D70 )
  {
    nr_writers_queued = a1[4].__nr_writers_queued;
  }
  else
  {
    v4 = a1[4].__nr_writers_queued;
    nr_writers_queued = *v6;
  }
  if ( byte_63D70 )
    v6 = (int *)((char *)v6 + nr_writers_queued);
  else
    *v6 = v4 + nr_writers_queued;
  if ( !v5 )
    dword_629E0 = (int)v6;
  result = pthread_rwlock_init(a1 + 10, 0);
  if ( result )
    sub_B628("enable_device", 10401);
  a1[11].__lock = 0;
  return result;
}
