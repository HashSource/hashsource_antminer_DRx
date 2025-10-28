int do_miner_monitor_start()
{
  int v0; // r5
  char *all_created_runtime; // r0
  int v2; // r3
  char *v3; // r4
  int v4; // t1
  int v6; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v6 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v6);
  v2 = v6;
  if ( v6 > 0 )
  {
    v3 = all_created_runtime - 4;
    do
    {
      v4 = *((_DWORD *)v3 + 1);
      v3 += 4;
      if ( !*(_BYTE *)(v4 + 265) )
      {
        do
          sleep(1u);
        while ( !*(_BYTE *)(*(_DWORD *)v3 + 265) );
        v2 = v6;
      }
      ++v0;
    }
    while ( v2 > v0 );
  }
  force_exec_all_task(dword_198258);
  force_exec_all_task(dword_19825C);
  start_task_timer((_DWORD *)dword_198258);
  return start_task_timer((_DWORD *)dword_19825C);
}
