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
    LOWORD(v3) = -4192;
    HIWORD(v3) = (unsigned int)"me for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v3, v1, v2);
    V_UNLOCK();
    LOWORD(v4) = -12376;
    HIWORD(v4) = (unsigned int)&unk_18B290 >> 16;
    LOWORD(v5) = -5800;
    HIWORD(v5) = (unsigned int)"bout command" >> 16;
    zlog(*v4, v5, 137, "get_miner_elapsed_time", 22, 317, 40, v7);
    result = time(0);
    dword_179EA0 = result;
  }
  else
  {
    dword_179EA0 = info.uptime;
    return info.uptime;
  }
  return result;
}
