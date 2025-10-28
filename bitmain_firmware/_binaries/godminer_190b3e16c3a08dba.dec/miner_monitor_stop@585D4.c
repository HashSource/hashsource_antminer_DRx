int miner_monitor_stop()
{
  stop_task_timer(dword_17C3CC);
  return stop_task_timer(dword_17C3C8);
}
