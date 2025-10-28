int __fastcall task_timer_thread(int a1)
{
  char *v2; // r4
  int v3; // r0
  int result; // r0
  int v5; // r9
  int v6; // r5
  struct timespec *v7; // r6
  struct timespec *v8; // r11
  int v9; // r10
  struct timespec *v10; // r9
  int v11; // r4
  void (__fastcall *v12)(int); // r1
  int v13; // r5
  int v14; // r9
  struct timespec *v15; // r1
  int v16; // t1
  int v17; // r4
  char v19[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", 1555996, 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v19, 0x1000u, 0, 1350204, v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/task_timer.c",
    155,
    "task_timer_thread",
    17,
    44,
    40,
    v19);
  for ( result = prctl(15, v2); ; result = usleep(1000 * v6) )
  {
    v5 = *(_DWORD *)(a1 + 6144);
    if ( v5 > 0 )
    {
      v7 = (struct timespec *)a1;
      v8 = (struct timespec *)a1;
      v9 = a1;
      v10 = (struct timespec *)(a1 + 16 * v5);
      do
      {
        while ( 1 )
        {
          clock_gettime(1, v7 + 257);
          v11 = 1000 * (v7[257].tv_sec - v7[256].tv_sec) + (v7[257].tv_nsec - v7[256].tv_nsec) / 1000000;
          if ( *(_DWORD *)(v9 + 1024) <= v11 )
            break;
          v7 += 2;
          v9 += 4;
          if ( v7 == v10 )
            goto LABEL_8;
        }
        clock_gettime(1, v7 + 256);
        v7 += 2;
        v12 = *(void (__fastcall **)(int))v9;
        v9 += 4;
        v12(v11);
      }
      while ( v7 != v10 );
LABEL_8:
      v13 = 0x7FFFFFFF;
      v14 = a1 + 1020;
      do
      {
        v15 = v8 + 257;
        v16 = *(_DWORD *)(v14 + 4);
        v14 += 4;
        v8 += 2;
        clock_gettime(1, v15);
        result = 1000 * (v8[255].tv_sec - v8[254].tv_sec) + (v8[255].tv_nsec - v8[254].tv_nsec) / 1000000;
        v17 = v16 - result;
        if ( v13 >= v16 - result )
          v13 = v17;
      }
      while ( v7 != v8 );
      v6 = v13 & ~(v13 >> 31);
    }
    else
    {
      v6 = 0x7FFFFFFF;
    }
    if ( !*(_BYTE *)(a1 + 6148) )
      break;
  }
  return result;
}
