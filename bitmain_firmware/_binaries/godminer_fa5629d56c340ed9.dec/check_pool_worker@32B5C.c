int check_pool_worker()
{
  int v0; // r4
  int v1; // r8
  _DWORD *v2; // r7
  int v3; // r6
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // r10
  int v7; // r1
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( total_pools <= 0 )
    goto LABEL_10;
  v0 = 0;
  LOWORD(v1) = -25016;
  LOWORD(v2) = 24916;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(pools + 4 * v0);
      if ( **(_BYTE **)(v4 + 12) )
        break;
LABEL_3:
      if ( total_pools <= ++v0 )
        goto LABEL_8;
    }
    v5 = *(_BYTE **)(v4 + 16);
    v6 = (unsigned __int8)*v5;
    if ( *v5 )
    {
      ++v3;
      goto LABEL_3;
    }
    ++v0;
    V_LOCK();
    HIWORD(v1) = (unsigned int)"rking power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    logfmt_raw(v12, 0x1000u, v6, v1);
    V_UNLOCK();
    LOWORD(v7) = -25500;
    HIWORD(v7) = (unsigned int)"or mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    HIWORD(v2) = (unsigned int)&unk_1B503C >> 16;
    zlog(*v2, v7, 134, "check_pool_worker", 17, 423, 100, v12);
  }
  while ( total_pools > v0 );
LABEL_8:
  if ( v3 )
    return 0;
LABEL_10:
  V_LOCK();
  LOWORD(v9) = -25064;
  HIWORD(v9) = (unsigned int)"t working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v9);
  V_UNLOCK();
  LOWORD(v10) = 24916;
  HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v11) = -25500;
  HIWORD(v11) = (unsigned int)"or mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
  zlog(*v10, v11, 134, "check_pool_worker", 17, 429, 100, v12);
  return -1;
}
