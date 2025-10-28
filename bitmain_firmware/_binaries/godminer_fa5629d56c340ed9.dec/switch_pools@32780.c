int switch_pools()
{
  char *v0; // r8
  int v1; // r6
  int v2; // r7
  int v3; // r12
  int v4; // r10
  int v5; // r9
  int v6; // r4
  int v7; // r3
  int v8; // r2
  pthread_mutex_t *v9; // r11
  pthread_mutex_t *v10; // t1
  int v11; // r9
  _DWORD *v12; // r4
  int v13; // r1
  int result; // r0
  int lock; // [sp+14h] [bp-1010h]
  int v16; // [sp+1Ch] [bp-1008h]
  char v17[4100]; // [sp+20h] [bp-1004h] BYREF

  pthread_mutex_lock(&mutex);
  v1 = dword_196A3C;
  v2 = 24916;
  v3 = total_pools;
  if ( total_pools <= 0 )
  {
    v0 = v17;
    HIWORD(v2) = (unsigned int)&unk_1B503C >> 16;
  }
  lock = *(_DWORD *)dword_196A3C;
  if ( total_pools > 0 )
  {
    LOWORD(v4) = -25128;
    LOWORD(v5) = -25500;
    HIWORD(v2) = 27;
    v6 = 0;
    v0 = v17;
    HIWORD(v5) = (unsigned int)"or mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
    v16 = v5;
    while ( 1 )
    {
      v7 = 0;
      v8 = pools - 4;
      while ( 1 )
      {
        v10 = *(pthread_mutex_t **)(v8 + 4);
        v8 += 4;
        v9 = v10;
        ++v7;
        if ( v10->__count == v6 )
          break;
        if ( v3 <= v7 )
        {
          V_LOCK();
          HIWORD(v4) = (unsigned int)"wm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
          logfmt_raw(v17, 0x1000u, 0, v4, v6);
          V_UNLOCK();
          zlog(*(_DWORD *)v2, v16, 134, "priority_pool", 13, 256, 100, v17);
          v9 = *(pthread_mutex_t **)(pools + 4 * v6);
          break;
        }
      }
      pthread_mutex_lock(v9 + 76);
      v11 = (unsigned __int8)v9[79].__size[8];
      pthread_mutex_unlock(v9 + 76);
      if ( !v11 )
        break;
      v3 = total_pools;
      if ( total_pools <= ++v6 )
        goto LABEL_11;
    }
    lock = v9->__lock;
  }
LABEL_11:
  v12 = *(_DWORD **)(pools + 4 * lock);
  pthread_mutex_unlock(&mutex);
  set_current_pool((int)v12);
  V_LOCK();
  logfmt_raw(v0, 0x1000u, 0, "Switching pool %d to pool %d", *(_DWORD *)v1, *v12);
  V_UNLOCK();
  LOWORD(v13) = -25500;
  HIWORD(v13) = (unsigned int)"or mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
  result = zlog(*(_DWORD *)v2, v13, 134, "switch_pools", 12, 368, 40, v0);
  if ( (_DWORD *)v1 != v12 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v1 + 1824));
    pthread_cond_broadcast((pthread_cond_t *)(v1 + 1856));
    return pthread_mutex_unlock((pthread_mutex_t *)(v1 + 1824));
  }
  return result;
}
