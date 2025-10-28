int __fastcall stratum_thread(int a1)
{
  int v2; // r7
  pthread_t v3; // r0
  pthread_mutex_t *v4; // r4
  char *v5; // r5
  int v6; // r0
  char *v7; // r0
  unsigned int v8; // r6
  unsigned int v9; // r5
  int v10; // r0
  bool v11; // zf
  pthread_mutex_t *v12; // r1
  signed __int64 v13; // r0
  int v14; // r0
  void *v15; // r5
  int owner; // r8
  _DWORD *current_pool; // r0
  int v18; // r3
  void (__fastcall *v19)(pthread_mutex_t *); // r2
  char *v21; // [sp+30h] [bp-108Ch]
  int lock; // [sp+34h] [bp-1088h]
  int v23; // [sp+3Ch] [bp-1080h]
  __time_t v24; // [sp+40h] [bp-107Ch]
  _DWORD v25[7]; // [sp+58h] [bp-1064h] BYREF
  int v26; // [sp+74h] [bp-1048h]
  _DWORD v27[7]; // [sp+78h] [bp-1044h] BYREF
  int v28; // [sp+94h] [bp-1028h]
  int v29; // [sp+98h] [bp-1024h] BYREF
  int v30; // [sp+9Ch] [bp-1020h]
  int v31; // [sp+A0h] [bp-101Ch]
  int v32; // [sp+A4h] [bp-1018h]
  int v33; // [sp+A8h] [bp-1014h]
  int v34; // [sp+ACh] [bp-1010h]
  int v35; // [sp+B0h] [bp-100Ch]
  int v36; // [sp+B4h] [bp-1008h]
  char v37[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v3 = pthread_self();
  pthread_detach(v3);
  v24 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v4 = (pthread_mutex_t *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "stratum_thread pool %s", v4->__kind);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_thread",
      14,
      249,
      20,
      v37);
    v5 = (char *)calloc(1u, 0x40u);
    snprintf(v5, 0x40u, "%.10s_%d", "stratum_thread", v4->__lock);
    V_LOCK();
    v6 = syscall(224);
    logfmt_raw(v37, 0x1000u, 0, "%s on pid %ld", v5, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_thread",
      14,
      251,
      40,
      v37);
    prctl(15, v5);
    v7 = _strdup((const char *)v4->__kind);
    v4[1].__owner = (int)v7;
    if ( v7 )
    {
      v21 = &v4[79].__size[20];
      pool_tset((int)v4, &v4[79].__size[8], 0);
      pool_tclear((int)v4, &v4[79].__size[20], 0);
      v23 = 1;
      dword_17AACC = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = 0;
          v9 = 0;
          while ( 1 )
          {
            v10 = (int)v4;
            if ( v4[1].__kind != -1 )
              break;
            while ( 1 )
            {
              v11 = (*(int (__fastcall **)(int))v2)(v10) == 0;
              v12 = v4;
              if ( !v11 )
              {
                if ( (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 16))(v2, v4) )
                  break;
              }
              (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 4))(v4, v12);
              pool_tclear((int)v4, v21, 0);
              pool_died(&v4->__lock);
              v13 = __PAIR64__(v9, v8);
              v9 = (__PAIR64__(v9, v8) + 1) >> 32;
              if ( !(v13 % 50) )
              {
                V_LOCK();
                V_INT((int)v25, "poolno", v4->__lock);
                logfmt_raw(
                  v37,
                  0x1000u,
                  0,
                  v26,
                  v25[0],
                  v25[1],
                  v25[2],
                  v25[3],
                  v25[4],
                  v25[5],
                  v25[6],
                  v26,
                  "...retry after %d seconds failures %d",
                  30,
                  v8 + 1,
                  v9);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/stratum_handler.c",
                  145,
                  "stratum_thread",
                  14,
                  284,
                  100,
                  v37);
              }
              ++v8;
              sleep(0x1Eu);
              v10 = (int)v4;
              if ( v4[1].__kind != -1 )
                goto LABEL_11;
            }
            V_LOCK();
            owner = v4[1].__owner;
            lock = v4->__lock;
            current_pool = (_DWORD *)get_current_pool();
            logfmt_raw(v37, 0x1000u, 0, "pool %d is active, pool url %s, current_pool %d", lock, owner, *current_pool);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/stratum_handler.c",
              145,
              "stratum_thread",
              14,
              290,
              20,
              v37);
            pool_alive(v4);
            if ( v23 )
            {
              v23 = 0;
              switch_pools();
            }
          }
LABEL_11:
          wait_pool_to_be_current_timeout(v10);
          if ( stratum_socket_full((int)v4, v24) )
            break;
          V_LOCK();
          V_INT((int)v27, "poolno", v4->__lock);
          logfmt_raw(
            v37,
            0x1000u,
            0,
            v28,
            v27[0],
            v27[1],
            v27[2],
            v27[3],
            v27[4],
            v27[5],
            v27[6],
            v28,
            "stratum connection timeout");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_thread",
            14,
            304,
            100,
            v37);
LABEL_19:
          v18 = v4[81].__count + 1;
          pools_active = 0;
          v19 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4);
          ++total_go;
          v4[81].__count = v18;
          v19(v4);
          pool_tclear((int)v4, v21, 0);
          pool_died(&v4->__lock);
          V_LOCK();
          V_INT((int)&v29, "poolno", v4->__lock);
          logfmt_raw(v37, 0x1000u, 0, v36, v29, v30, v31, v32, v33, v34, v35, v36, "stratum connection interrupted");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_thread",
            14,
            332,
            20,
            v37);
          sleep(0x1Eu);
        }
        v14 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 8))(v4);
        v15 = (void *)v14;
        if ( !v14 )
          goto LABEL_19;
        if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 20))(v2, v4, v14) )
          (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v15, v4);
        free(v15);
        pools_active = 1;
      }
    }
  }
  V_LOCK();
  V_INT((int)&v29, "poolno", v4->__lock);
  logfmt_raw(v37, 0x1000u, 0, v36, v29, v30, v31, v32, v33, v34, v35, v36, "stratum thread out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_thread",
    14,
    338,
    60,
    v37);
  return 0;
}
