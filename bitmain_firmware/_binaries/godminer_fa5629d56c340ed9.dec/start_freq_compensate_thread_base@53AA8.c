int __fastcall start_freq_compensate_thread_base(void *arg)
{
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( pthread_create((pthread_t *)&dword_197858, 0, (void *(*)(void *))check_working_freq, arg) )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "freq_compensate_thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_freq_compensate_thread_base",
      33,
      479,
      100,
      v2);
    return 5;
  }
  else
  {
    pthread_detach(dword_197858);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "start freq_compensate_thread");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_freq_compensate_thread_base",
      33,
      483,
      60,
      v2);
    return 0;
  }
}
