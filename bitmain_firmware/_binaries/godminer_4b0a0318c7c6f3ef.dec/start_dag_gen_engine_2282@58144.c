int start_dag_gen_engine_2282()
{
  void *(*v0)(void *); // r2
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v2) = -13672;
    HIWORD(v2) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c" >> 16;
    logfmt_raw(v5, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 20532;
    HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v4) = -7832;
    HIWORD(v4) = (unsigned int)"ld/godminer-origin_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c" >> 16;
    zlog(*v3, v4, 174, "start_dag_gen_engine_2282", 25, 270, 100, v5);
    return 1;
  }
  else
  {
    LOWORD(v0) = 31820;
    HIWORD(v0) = (unsigned int)&loc_57FAC >> 16;
    pthread_create(&dword_193708, 0, v0, 0);
    return 0;
  }
}
