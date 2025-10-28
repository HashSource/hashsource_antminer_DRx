int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  int v4; // r7
  int v5; // r5
  _DWORD *v6; // r11
  unsigned int *v7; // r10
  int v8; // r6
  int lock; // r2
  char *v11; // r1
  int v12; // r4
  int *v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r1
  __int64 v17; // r2
  char *v18; // r1
  int v19; // lr
  int *v20; // r3
  int v21; // r0
  int v22; // r1
  _DWORD v23[7]; // [sp+38h] [bp-1C24h] BYREF
  int v24; // [sp+54h] [bp-1C08h]
  _DWORD v25[7]; // [sp+58h] [bp-1C04h] BYREF
  int v26; // [sp+74h] [bp-1BE8h]
  char v27[4100]; // [sp+C58h] [bp-1004h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget(a2, (unsigned __int8 *)&a2[79].__size[8]);
  if ( v5 )
  {
    V_LOCK();
    lock = a2->__lock;
    LOWORD(v11) = -31764;
    HIWORD(v11) = (unsigned int)"ct reasons" >> 16;
    LOWORD(v12) = -31756;
    V_INT((int)v25, v11, lock);
    HIWORD(v12) = (unsigned int)"ns" >> 16;
    logfmt_raw(v27, 0x1000u, 0, v26, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v26, v12);
    V_UNLOCK();
    LOWORD(v13) = 20532;
    HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
    v14 = *v13;
    LOWORD(v15) = -31728;
    LOWORD(v13) = -31884;
    HIWORD(v13) = (unsigned int)"_died" >> 16;
    HIWORD(v15) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
    zlog(v14, v15, 135, v13, 18, 18, 20, v27);
    return 0;
  }
  else
  {
    LOWORD(v6) = 20608;
    LOWORD(v7) = 23052;
    HIWORD(v7) = (unsigned int)&mutex >> 16;
    update_pool_diff1_of_all_runtimes(&a2->__lock);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _DWORD *))(v4 + 32))(a1, a2, v25);
    while ( 1 )
    {
      v8 = (*(int (__fastcall **)(pthread_mutex_t *, _DWORD *))(v4 + 12))(a2, v25);
      if ( v8 )
        break;
      v16 = *v7;
      v17 = 3518437209LL * *v7;
      LODWORD(v17) = a2[81].__owner;
      HIWORD(v6) = (unsigned int)&total_go >> 16;
      ++*v6;
      *v7 = v16 + 1;
      a2[81].__owner = v17 + 1;
      if ( v16 == 10000 * (HIDWORD(v17) >> 13) )
      {
        V_LOCK();
        LOWORD(v18) = -31764;
        HIWORD(v18) = (unsigned int)"ct reasons" >> 16;
        V_INT((int)v23, v18, a2->__lock);
        LOWORD(v19) = -31592;
        HIWORD(v19) = (unsigned int)"http://" >> 16;
        logfmt_raw(v27, 0x1000u, 0, v24, v23[0], v23[1], v23[2], v23[3], v23[4], v23[5], v23[6], v24, v19, 0, v5);
        V_UNLOCK();
        LOWORD(v20) = 20532;
        HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
        v21 = *v20;
        LOWORD(v20) = -31884;
        LOWORD(v22) = -31728;
        HIWORD(v20) = (unsigned int)"_died" >> 16;
        HIWORD(v22) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
        zlog(v21, v22, 135, v20, 18, 34, 100, v27);
        if ( v5 == 3 )
          return v8;
      }
      else if ( v5 == 3 )
      {
        return v8;
      }
      ++v5;
    }
    return v8;
  }
}
