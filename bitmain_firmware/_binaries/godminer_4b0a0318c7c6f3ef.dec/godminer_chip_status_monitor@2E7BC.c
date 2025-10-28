int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r4
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v4; // r5
  int result; // r0
  char *v6; // r1
  int v7; // r5
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  _DWORD v11[7]; // [sp+28h] [bp-1020h] BYREF
  int v12; // [sp+44h] [bp-1004h]
  char v13[4096]; // [sp+48h] [bp-1000h] BYREF

  flag_from_monitor = get_flag_from_monitor(a1);
  current_pool = (pthread_mutex_t *)get_current_pool();
  v4 = current_pool;
  if ( (*((_DWORD *)flag_from_monitor + 12) & 2) != 0 )
  {
    if ( !pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 1);
    *((_DWORD *)flag_from_monitor + 14) |= 2u;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 0);
  }
  if ( (*((_DWORD *)flag_from_monitor + 12) & 4) == 0 )
    return set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 0);
  result = pool_tget(v4, (unsigned __int8 *)&v4[79].__size[8]);
  if ( !result )
  {
    V_LOCK();
    LOWORD(v6) = 27372;
    HIWORD(v6) = (unsigned int)":" >> 16;
    V_INT((int)v11, v6, *(int *)(a1 + 256));
    LOWORD(v7) = 31028;
    HIWORD(v7) = (unsigned int)" miner version file %s error %d" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v7);
    V_UNLOCK();
    LOWORD(v8) = 20532;
    HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
    v9 = *v8;
    LOWORD(v8) = 29244;
    LOWORD(v10) = 31052;
    HIWORD(v8) = (unsigned int)"dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    HIWORD(v10) = (unsigned int)"rror %d" >> 16;
    zlog(v9, v10, 139, v8, 28, 515, 20, v13);
    result = set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 256), 1);
  }
  *((_DWORD *)flag_from_monitor + 14) |= 4u;
  return result;
}
