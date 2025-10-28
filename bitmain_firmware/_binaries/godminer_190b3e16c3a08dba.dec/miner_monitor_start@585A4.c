int miner_monitor_start()
{
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  pthread_create(newthread, 0, (void *(*)(void *))do_miner_monitor_start, 0);
  return pthread_detach(newthread[0]);
}
