int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r4
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v4; // r5
  int result; // r0
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  flag_from_monitor = get_flag_from_monitor(a1);
  current_pool = (pthread_mutex_t *)get_current_pool();
  v4 = current_pool;
  if ( (*((_DWORD *)flag_from_monitor + 12) & 2) != 0 )
  {
    if ( !pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 260), 1);
    *((_DWORD *)flag_from_monitor + 14) |= 2u;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 260), 0);
  }
  if ( (*((_DWORD *)flag_from_monitor + 12) & 4) == 0 )
    return set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 260), 0);
  result = pool_tget(v4, (unsigned __int8 *)&v4[79].__size[8]);
  if ( !result )
  {
    V_LOCK();
    V_INT((int)v6, "chain", *(int *)(a1 + 260));
    logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "some chip working slow");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_chip_status_monitor",
      28,
      520,
      20,
      v8);
    result = set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 260), 1);
  }
  *((_DWORD *)flag_from_monitor + 14) |= 4u;
  return result;
}
