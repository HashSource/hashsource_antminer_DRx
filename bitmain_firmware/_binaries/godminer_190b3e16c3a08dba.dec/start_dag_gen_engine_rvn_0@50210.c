int start_dag_gen_engine_rvn_0()
{
  int v1; // r3
  _DWORD *v2; // r3
  int v3; // r1
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v1) = 21480;
    HIWORD(v1) = (unsigned int)&unk_137A00 >> 16;
    logfmt_raw(v4, 0x1000u, 0, v1);
    V_UNLOCK();
    LOWORD(v2) = -12376;
    HIWORD(v2) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v3) = 24356;
    HIWORD(v3) = (unsigned int)&unk_149194 >> 16;
    zlog(*v2, v3, 164, "start_dag_gen_engine_kas", 24, 452, 100, v4);
    return 1;
  }
  else
  {
    pthread_create((pthread_t *)&dword_178458, 0, (void *(*)(void *))dag_gen_kas_thread_func, 0);
    return 0;
  }
}
