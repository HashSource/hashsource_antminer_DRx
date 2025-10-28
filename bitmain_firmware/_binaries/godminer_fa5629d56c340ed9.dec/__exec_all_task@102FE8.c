int __fastcall _exec_all_task(int result)
{
  int v1; // r8
  int (__fastcall **v2)(int); // r8
  int (__fastcall **v3)(int); // r7
  struct timespec *v4; // r6
  int tv_nsec; // r3
  struct timespec *v6; // r1
  int v7; // r4
  __time_t tv_sec; // lr
  int v9; // r4
  int (__fastcall *v10)(int); // t1

  v1 = *(_DWORD *)(result + 6144);
  if ( v1 > 0 )
  {
    v2 = (int (__fastcall **)(int))(result + 4 * v1);
    v3 = (int (__fastcall **)(int))result;
    v4 = (struct timespec *)(result + 2056);
    do
    {
      clock_gettime(1, v4);
      tv_nsec = v4[-1].tv_nsec;
      v6 = v4 - 1;
      v7 = v4->tv_nsec;
      tv_sec = v4[-1].tv_sec;
      v4 += 2;
      v9 = 1000 * (v4[-2].tv_sec - tv_sec) + (v7 - tv_nsec) / 1000000;
      clock_gettime(1, v6);
      v10 = *v3++;
      result = v10(v9);
    }
    while ( v3 != v2 );
  }
  return result;
}
