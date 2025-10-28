time_t get_miner_elapsed_time()
{
  time_t result; // r0
  int v1; // r5
  char *v2; // r0
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  struct sysinfo info; // [sp+10h] [bp-1044h] BYREF
  char v7[4100]; // [sp+50h] [bp-1004h] BYREF

  if ( sysinfo(&info) )
  {
    V_LOCK();
    v1 = *_errno_location();
    v2 = strerror(v1);
    LOWORD(v3) = 26400;
    HIWORD(v3) = (unsigned int)"RY HASHRATE" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v3, v1, v2);
    V_UNLOCK();
    LOWORD(v4) = 20532;
    HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v5) = 24672;
    HIWORD(v5) = (unsigned int)" print time %lld ms" >> 16;
    zlog(*v4, v5, 137, "get_miner_elapsed_time", 22, 320, 40, v7);
    result = time(0);
    dword_195870 = result;
  }
  else
  {
    dword_195870 = info.uptime;
    return info.uptime;
  }
  return result;
}
