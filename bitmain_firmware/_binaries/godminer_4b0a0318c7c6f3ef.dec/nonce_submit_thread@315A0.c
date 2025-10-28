void __noreturn nonce_submit_thread()
{
  _DWORD *v0; // r9
  int v1; // r11
  int *all_created_runtime; // r5
  char *v3; // r4
  int *v4; // r12
  int v5; // r0
  int v6; // r3
  int v7; // r1
  int v8; // r0
  int *v9; // r8
  _DWORD *v10; // r10
  pthread_t v11; // r0
  int v12; // r6
  double *v13; // r3
  int v14; // r2
  int v15; // r1
  int v16; // r4
  const char *v17; // r0
  double v18; // d7
  double v19; // d5
  int v20; // r2
  bool v21; // cf
  double v22; // d7
  int v23; // r1
  int v24; // [sp+14h] [bp-102Ch]
  _DWORD *v25; // [sp+18h] [bp-1028h]
  int v26; // [sp+1Ch] [bp-1024h]
  int v27; // [sp+20h] [bp-1020h]
  double *v28; // [sp+24h] [bp-101Ch]
  int v29; // [sp+2Ch] [bp-1014h] BYREF
  void *dest[284]; // [sp+30h] [bp-1010h] BYREF
  _QWORD v31[375]; // [sp+4A0h] [bp-BA0h] BYREF
  char v32[4100]; // [sp+1058h] [bp+18h] BYREF

  LOWORD(v0) = 23140;
  v1 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v29);
  v3 = (char *)calloc(1u, 0x40u);
  snprintf(v3, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v10) = 20576;
  v9 = v4;
  v25 = v4;
  v5 = syscall(224);
  LOWORD(v6) = -31520;
  HIWORD(v6) = (unsigned int)"URL -- '%s'" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v6, v3, v5);
  V_UNLOCK();
  LOWORD(v7) = -31728;
  v8 = *v9;
  HIWORD(v7) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
  LOWORD(v9) = 23136;
  HIWORD(v10) = (unsigned int)&total_diff_accepted >> 16;
  zlog(v8, v7, 135, "nonce_submit_thread", 19, 230, 40, v32);
  prctl(15, v3);
  v11 = pthread_self();
  pthread_detach(v11);
  v12 = *all_created_runtime;
  LOWORD(v13) = 20640;
  LOWORD(v14) = -31240;
  LOWORD(v15) = -31728;
  HIWORD(v13) = (unsigned int)&new_blocks >> 16;
  HIWORD(v14) = (unsigned int)"ct reason: %s" >> 16;
  HIWORD(v15) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
  v28 = v13;
  v26 = v14;
  v27 = v15;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v12 + 44))(v12, v31);
      HIWORD(v9) = (unsigned int)&dword_195A68 >> 16;
      if ( v31[0] < (unsigned __int64)*v9 )
      {
        HIWORD(v0) = (unsigned int)&dword_195A6C >> 16;
        v16 = *(_DWORD *)(*v0 + 4 * LODWORD(v31[0]));
        if ( v16 )
          break;
      }
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, v26);
      V_UNLOCK();
      zlog(*v25, v27, 135, "nonce_submit_thread", 19, 250, 80, v32);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v16 + 1592));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v16 + 456), sizeof(dest));
    v17 = *(const char **)(v16 + 1580);
    if ( v17 )
      dest[281] = _strdup(v17);
    v24 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v1 + 72) + 8))(dest, v16, v31);
    pthread_mutex_unlock((pthread_mutex_t *)(v16 + 1592));
    if ( v24 == 1 )
    {
      v18 = *(double *)(v16 + 1808);
      v19 = *(double *)(v16 + 1816) + v18;
      v20 = v10[1];
      v21 = __CFADD__(*v10, 1);
      v22 = *v28 + v18;
      v23 = *(_DWORD *)(v16 + 1640) + 1;
      ++*v10;
      *(_DWORD *)(v16 + 1640) = v23;
      v10[1] = v21 + v20;
      *(double *)(v16 + 1816) = v19;
      *v28 = v22;
    }
    else
    {
      workio_submit_work((int)dest, (pthread_mutex_t *)v16);
    }
  }
}
