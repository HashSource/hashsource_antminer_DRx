time_t set_miner_start_time()
{
  int v0; // r2
  const char *v1; // r1
  int v2; // r12
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  time_t result; // r0
  int v7; // r4
  char *v8; // r0
  const char *v9; // r1
  int v10; // r3
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  char v13[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v7 = *_errno_location();
    v8 = strerror(v7);
    LOWORD(v9) = 26400;
    HIWORD(v9) = (unsigned int)"RY HASHRATE" >> 16;
    sprintf(s, v9, v7, v8);
    result = time(0);
    LOWORD(v10) = 22616;
    HIWORD(v10) = (unsigned int)&dword_195860 >> 16;
    *(_DWORD *)(v10 + 0x18) = result + 1;
    *(_DWORD *)(v10 + 0x1C) = result;
  }
  else
  {
    LOWORD(v0) = 22616;
    HIWORD(v0) = (unsigned int)&dword_195860 >> 16;
    LOWORD(v1) = 26444;
    v2 = info.uptime + 1;
    *(_DWORD *)(v0 + 0x1C) = info.uptime;
    HIWORD(v1) = (unsigned int)"" >> 16;
    *(_DWORD *)(v0 + 0x18) = v2;
    sprintf(s, v1, "set_miner_start_time");
    V_LOCK();
    LOWORD(v3) = -27680;
    HIWORD(v3) = (unsigned int)"space" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v3, s);
    V_UNLOCK();
    LOWORD(v4) = 20532;
    HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v5) = 24672;
    HIWORD(v5) = (unsigned int)" print time %lld ms" >> 16;
    return zlog(*v4, v5, 137, "set_miner_start_time", 20, 355, 60, v13);
  }
  return result;
}
