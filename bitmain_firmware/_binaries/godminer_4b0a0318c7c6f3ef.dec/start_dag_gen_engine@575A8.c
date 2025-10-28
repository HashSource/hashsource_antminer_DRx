int start_dag_gen_engine()
{
  void *(*v0)(void *); // r2
  pthread_t *v1; // r0
  int v3; // r3
  int *v4; // r3
  int v5; // r0
  int v6; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v3) = -13672;
    HIWORD(v3) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 20532;
    HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
    v5 = *v4;
    LOWORD(v4) = -8312;
    LOWORD(v6) = 24480;
    HIWORD(v4) = (unsigned int)&unk_14E348 >> 16;
    HIWORD(v6) = (unsigned int)&unk_156360 >> 16;
    zlog(v5, v6, 164, v4, 20, 345, 100, v7);
    return 1;
  }
  else
  {
    LOWORD(v0) = 29400;
    LOWORD(v1) = 14080;
    HIWORD(v0) = (unsigned int)&loc_57638 >> 16;
    HIWORD(v1) = (unsigned int)&dword_193704 >> 16;
    pthread_create(v1, 0, v0, 0);
    return 0;
  }
}
