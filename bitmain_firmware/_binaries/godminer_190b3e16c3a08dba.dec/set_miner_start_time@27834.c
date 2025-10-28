time_t set_miner_start_time()
{
  const char *v0; // r1
  _DWORD *v1; // r3
  int v2; // r1
  time_t result; // r0
  int v4; // r4
  char *v5; // r0
  const char *v6; // r1
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  char v9[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v4 = *_errno_location();
    v5 = strerror(v4);
    LOWORD(v6) = -4192;
    HIWORD(v6) = (unsigned int)"me for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    sprintf(s, v6, v4, v5);
    result = time(0);
    dword_179EA0 = result + 1;
    dword_179EA4 = result;
  }
  else
  {
    LOWORD(v0) = -4148;
    dword_179EA4 = info.uptime;
    HIWORD(v0) = (unsigned int)" password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    dword_179EA0 = info.uptime + 1;
    sprintf(s, v0, "set_miner_start_time");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1378480, s);
    V_UNLOCK();
    LOWORD(v1) = -12376;
    HIWORD(v1) = (unsigned int)&unk_18B290 >> 16;
    LOWORD(v2) = -5800;
    HIWORD(v2) = (unsigned int)"bout command" >> 16;
    return zlog(*v1, v2, 137, "set_miner_start_time", 20, 352, 60, v9);
  }
  return result;
}
