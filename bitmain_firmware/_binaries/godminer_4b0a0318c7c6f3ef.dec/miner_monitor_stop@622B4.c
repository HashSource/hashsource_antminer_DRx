int miner_monitor_stop()
{
  stop_task_timer(dword_19825C);
  return stop_task_timer(dword_198258);
}
