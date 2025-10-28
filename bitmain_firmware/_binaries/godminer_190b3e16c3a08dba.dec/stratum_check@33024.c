int __fastcall stratum_check(int *a1)
{
  int v2; // r0
  int v3; // r7
  const char *v4; // r0
  void *v5; // r3
  int v6; // r0
  int v7; // r3
  int v8; // r8
  int v9; // r0
  int v10; // r12
  int v11; // r2
  __time_t v13; // r8
  int v14; // r11
  int v15; // r0
  void *v16; // r11
  void (__fastcall *v17)(int *); // r1
  int v18; // r2
  _DWORD v19[10]; // [sp+0h] [bp-1084h] BYREF
  _DWORD *v20; // [sp+28h] [bp-105Ch]
  _BYTE *v21; // [sp+2Ch] [bp-1058h]
  char *s; // [sp+30h] [bp-1054h]
  const char *v23; // [sp+34h] [bp-1050h]
  char v24[4]; // [sp+3Ch] [bp-1048h] BYREF
  _DWORD v25[7]; // [sp+40h] [bp-1044h] BYREF
  int v26; // [sp+5Ch] [bp-1028h]
  _DWORD v27[7]; // [sp+60h] [bp-1024h] BYREF
  int v28; // [sp+7Ch] [bp-1008h]
  char v29[4100]; // [sp+80h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  if ( !a1 || (v3 = v2, (v4 = (const char *)a1[3]) == 0) || !a1[4] )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "stratum check, no pool %d, empty url or user", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      358,
      100,
      v29);
    goto LABEL_10;
  }
  v5 = (void *)a1[8];
  v20 = *(_DWORD **)(*(_DWORD *)(v3 + 72) + 20);
  if ( v5 )
  {
    free(v5);
    v4 = (const char *)a1[3];
  }
  a1[8] = (int)_strdup(v4);
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "stratum check pool %d, pool url: %s", *a1, a1[3]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_check",
    13,
    366,
    40,
    v29);
  v21 = a1 + 2;
  pool_tset((int)a1, (_BYTE *)a1 + 1904, 0);
  pool_tclear((int)a1, (_BYTE *)a1 + 1916, 0);
  pool_tclear((int)a1, (_BYTE *)a1 + 8, 0);
  if ( !(*(int (__fastcall **)(int *))v3)(a1) )
  {
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "stratum create tcp connection failed");
    V_UNLOCK();
    v6 = g_zc;
    v7 = 375;
LABEL_8:
    zlog(
      v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      v7,
      100,
      v29);
LABEL_10:
    V_LOCK();
    v8 = 0;
    logfmt_raw(v29, 0x1000u, 0, "Sweep error string = N%d:1", *a1);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 100;
    v11 = 440;
    goto LABEL_11;
  }
  if ( !(*(int (__fastcall **)(int, int *))(v3 + 16))(v3, a1) )
  {
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "stratum login failed");
    V_UNLOCK();
    v6 = g_zc;
    v7 = 382;
    goto LABEL_8;
  }
  v13 = (__time_t)v20;
  s = "poolno";
  v23 = "stratum connection timeout";
  while ( 1 )
  {
    wait_pool_to_be_current_timeout((int)a1);
    v14 = stratum_socket_full((int)a1, v13);
    if ( v14 )
      break;
    V_LOCK();
    V_INT((int)v25, s, *a1);
    v20 = v19;
    logfmt_raw(v29, 0x1000u, 0, v26, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v26, v23, v19[9]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      392,
      100,
      v29);
LABEL_22:
    v17 = *(void (__fastcall **)(int *))(v3 + 4);
    v18 = total_go;
    ++a1[487];
    total_go = v18 + 1;
    v17(a1);
    pool_tclear((int)a1, (_BYTE *)a1 + 1916, 0);
    pool_died(a1);
    V_LOCK();
    V_INT((int)v27, s, *a1);
    logfmt_raw(
      v29,
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
      "stratum connection interrupted");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      407,
      20,
      v29);
    sleep(0x1Eu);
  }
  v15 = (*(int (__fastcall **)(int *))(v3 + 8))(a1);
  if ( !v15 )
    goto LABEL_22;
  v8 = v14;
  v16 = (void *)v15;
  if ( (*(int (__fastcall **)(int, int *, int, char *))(v3 + 24))(v3, a1, v15, v24)
    || (*(int (__fastcall **)(int, void *, int *))(v3 + 28))(v3, v16, a1) )
  {
    free(v16);
    pool_tset((int)a1, v21, 0);
    pool_tclear((int)a1, (_BYTE *)a1 + 1904, 0);
    pools_active = 1;
    update_miner_working_status();
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "pool %d is valid, url: \"%s\"", *a1, a1[3]);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 40;
    v11 = 436;
LABEL_11:
    zlog(
      v9,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      v11,
      v10,
      v29);
  }
  else
  {
    free(v16);
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "unsuitable pool configuration, notify from pool:%d dose not match the machine", *a1);
    v8 = 0;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      425,
      100,
      v29);
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "Sweep error string = N%d:2.", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      426,
      100,
      v29);
  }
  return v8;
}
