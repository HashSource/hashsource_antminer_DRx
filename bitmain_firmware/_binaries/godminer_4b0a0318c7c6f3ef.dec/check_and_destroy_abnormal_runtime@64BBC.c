int check_and_destroy_abnormal_runtime()
{
  pthread_mutex_t *v0; // r7
  int v1; // r6
  int v2; // r5
  int v3; // r10
  _DWORD *v4; // r9
  void **v5; // r4
  _DWORD *v6; // r3
  _DWORD *v7; // t1
  int v8; // r1
  int *v9; // r3
  _DWORD *v10; // r2
  int v11; // t1
  pthread_mutex_t *v12; // r0
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  char v15[4100]; // [sp+410h] [bp-1004h] BYREF

  LOWORD(v0) = 15504;
  HIWORD(v0) = (unsigned int)&unk_1A3C98 >> 16;
  memset(s, 0, sizeof(s));
  pthread_mutex_lock(v0);
  if ( v0[1].__lock > 0 )
  {
    v2 = 0;
    LOWORD(v3) = -30092;
    LOWORD(v4) = 20532;
    v1 = 0;
    v5 = (void **)&v0[1];
    do
    {
      v7 = v5[1];
      ++v5;
      v6 = v7;
      if ( v7[110] == v7[88] )
      {
        s[v1++] = v6;
      }
      else
      {
        V_LOCK();
        HIWORD(v3) = (unsigned int)"version = 0x%x" >> 16;
        logfmt_raw(v15, 0x1000u, 0, v3, *((_DWORD *)*v5 + 64));
        V_UNLOCK();
        LOWORD(v8) = -30248;
        HIWORD(v8) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c" >> 16;
        HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
        zlog(*v4, v8, 155, "check_and_destroy_abnormal_runtime", 34, 116, 80, v15);
        set_miner_6060info_asic_num_less_than_design_err(*((_DWORD *)*v5 + 64), 1);
        (*((void (**)(void))*v5 + 6))();
        (*((void (**)(void))*v5 + 8))();
        free(*v5);
        *v5 = 0;
      }
      ++v2;
    }
    while ( v0[1].__lock > v2 );
    if ( v1 )
    {
      v9 = s;
      v10 = &unk_1A3CAC;
      do
      {
        v11 = *v9++;
        *v10++ = v11;
      }
      while ( v9 != &s[v1] );
    }
  }
  else
  {
    v1 = 0;
  }
  LOWORD(v12) = 15504;
  v0[1].__lock = v1;
  HIWORD(v12) = (unsigned int)&unk_1A3C98 >> 16;
  return pthread_mutex_unlock(v12);
}
