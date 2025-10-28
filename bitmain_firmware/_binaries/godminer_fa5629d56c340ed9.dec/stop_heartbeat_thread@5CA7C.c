void __fastcall __noreturn stop_heartbeat_thread(int a1)
{
  pthread_exit((void *)(a1 + 4));
}
