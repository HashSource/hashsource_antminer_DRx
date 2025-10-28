int start_dag_gen_engine_2282()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
      174,
      "start_dag_gen_engine_2282",
      25,
      320,
      100,
      v1);
    return 1;
  }
  else
  {
    pthread_create(&dword_194710, 0, (void *(*)(void *))dag_gen_thread_func_2282, 0);
    return 0;
  }
}
