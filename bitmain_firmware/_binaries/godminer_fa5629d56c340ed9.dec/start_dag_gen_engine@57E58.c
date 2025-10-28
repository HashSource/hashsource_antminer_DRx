int start_dag_gen_engine()
{
  void *(*v0)(void *); // r2
  int v2; // r3
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v2) = -8048;
    HIWORD(v2) = (unsigned int)"notify_kas" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 24916;
    HIWORD(v3) = (unsigned int)&unk_1B503C >> 16;
    v4 = *v3;
    LOWORD(v3) = -2584;
    LOWORD(v5) = 30208;
    HIWORD(v3) = (unsigned int)"orkspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
    HIWORD(v5) = (unsigned int)&unk_156360 >> 16;
    zlog(v4, v5, 164, v3, 20, 345, 100, v6);
    return 1;
  }
  else
  {
    LOWORD(v0) = 31624;
    HIWORD(v0) = (unsigned int)&loc_57638 >> 16;
    pthread_create((pthread_t *)&dword_194708, 0, v0, 0);
    return 0;
  }
}
