int check_pool_connect()
{
  int v1; // r3
  _DWORD *v2; // r7
  int v3; // r1
  int v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r10
  int v9; // r9
  int v10; // r4
  int v11; // r11
  bool v12; // zf
  bool v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r1
  const char *v18; // r1
  char *s1; // [sp+14h] [bp-1008h]
  char v20[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( check_pools_valid() > 0 )
    return 0;
  V_LOCK();
  LOWORD(v1) = -5352;
  HIWORD(v1) = (unsigned int)&unk_147EF8 >> 16;
  LOWORD(v2) = -12376;
  logfmt_raw(v20, 0x1000u, 0, v1);
  HIWORD(v2) = (unsigned int)&unk_18B290 >> 16;
  V_UNLOCK();
  LOWORD(v3) = -5712;
  HIWORD(v3) = (unsigned int)&unk_147D90 >> 16;
  zlog(*v2, v3, 151, "check_pool_connect", 18, 200, 100, v20);
  V_LOCK();
  LOWORD(v4) = -5292;
  HIWORD(v4) = (unsigned int)&unk_147F34 >> 16;
  logfmt_raw(v20, 0x1000u, 0, v4);
  V_UNLOCK();
  LOWORD(v5) = -5712;
  HIWORD(v5) = (unsigned int)&unk_147D90 >> 16;
  zlog(*v2, v5, 151, "check_pool_connect", 18, 201, 100, v20);
  V_LOCK();
  LOWORD(v6) = -5216;
  HIWORD(v6) = (unsigned int)&unk_147F80 >> 16;
  logfmt_raw(v20, 0x1000u, 0, v6);
  V_UNLOCK();
  LOWORD(v7) = -5712;
  HIWORD(v7) = (unsigned int)&unk_147D90 >> 16;
  zlog(*v2, v7, 151, "check_pool_connect", 18, 202, 100, v20);
  if ( total_pools > 0 )
  {
    LOWORD(v8) = -5476;
    LOWORD(v9) = -5712;
    v10 = 0;
    do
    {
      V_LOCK();
      HIWORD(v8) = (unsigned int)&unk_147E7C >> 16;
      logfmt_raw(
        v20,
        0x1000u,
        0,
        v8,
        **(_DWORD **)(pools + 4 * v10),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v10) + 12),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v10) + 16),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v10) + 20));
      V_UNLOCK();
      HIWORD(v9) = (unsigned int)&unk_147D90 >> 16;
      zlog(*v2, v9, 151, "check_pool_connect", 18, 206, 80, v20);
      v11 = *(_DWORD *)(pools + 4 * v10);
      if ( *(_DWORD *)(v11 + 20) )
      {
        s1 = *(char **)(v11 + 16);
        if ( s1 )
        {
          v12 = strstr(*(const char **)(v11 + 20), "stats") == 0;
          v13 = 1;
          if ( v12 )
          {
            LOWORD(v18) = -5432;
            HIWORD(v18) = (unsigned int)&unk_147EA8 >> 16;
            v13 = strcmp(s1, v18) == 0;
          }
          *(_BYTE *)(v11 + 1648) = v13;
        }
      }
      ++v10;
    }
    while ( total_pools > v10 );
  }
  V_LOCK();
  LOWORD(v14) = -5420;
  HIWORD(v14) = (unsigned int)&unk_147EB4 >> 16;
  logfmt_raw(v20, 0x1000u, 0, v14);
  V_UNLOCK();
  LOWORD(v15) = -5712;
  HIWORD(v15) = (unsigned int)&unk_147D90 >> 16;
  zlog(*v2, v15, 151, "check_pool_connect", 18, 210, 100, v20);
  while ( !pools_active )
    sleep(1u);
  V_LOCK();
  LOWORD(v16) = -5392;
  HIWORD(v16) = (unsigned int)&unk_147ED0 >> 16;
  logfmt_raw(v20, 0x1000u, 0, v16);
  V_UNLOCK();
  LOWORD(v17) = -5712;
  HIWORD(v17) = (unsigned int)&unk_147D90 >> 16;
  zlog(*v2, v17, 151, "check_pool_connect", 18, 213, 80, v20);
  return 0;
}
