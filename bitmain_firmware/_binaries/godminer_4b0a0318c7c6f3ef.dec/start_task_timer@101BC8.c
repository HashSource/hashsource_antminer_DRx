int __fastcall start_task_timer(_DWORD *arg)
{
  int v1; // r5
  struct timespec *v3; // r4
  struct timespec *v4; // r5
  struct timespec *v5; // r1

  v1 = arg[1536];
  *((_BYTE *)arg + 6148) = 1;
  if ( v1 > 0 )
  {
    v3 = (struct timespec *)(arg + 512);
    v4 = (struct timespec *)&arg[4 * v1 + 512];
    do
    {
      v5 = v3;
      v3 += 2;
      clock_gettime(1, v5);
    }
    while ( v3 != v4 );
  }
  return pthread_create(arg + 1538, 0, (void *(*)(void *))task_timer_thread, arg);
}
