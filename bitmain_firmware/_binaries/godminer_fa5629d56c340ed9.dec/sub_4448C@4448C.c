int __fastcall sub_4448C(_DWORD *a1, int a2)
{
  int v2; // r4
  _DWORD *v6; // r0
  char *v7; // r6
  _DWORD *v8; // r0
  char *v9; // r7
  _DWORD *v10; // r0
  char *v11; // r8
  _DWORD *v12; // r0
  size_t v13; // r11
  signed int v14; // r9
  size_t v15; // r0
  _BOOL4 v16; // r3
  int v17; // r10
  void *v18; // r0
  int v19; // r2
  void *v20; // r9
  int v21; // r0
  int v22; // r12
  size_t v23; // r6
  void *v24; // r0
  void *v25; // r0
  _QWORD *v26; // r6
  int v27; // r0
  void *v28; // r0
  _WORD *v29; // r0
  _DWORD *v30; // r2
  int v31; // r1
  void *v32; // r0
  char *nptr; // [sp+10h] [bp-100Ch]
  pthread_mutex_t *mutex; // [sp+14h] [bp-1008h]
  char v35[4100]; // [sp+18h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656) ^ 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 || *a1 != 1 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    v2 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      566,
      100,
      v35);
    return v2;
  }
  v6 = json_array_get(a1, 0);
  v7 = (char *)json_string_value(v6) + 2;
  v8 = json_array_get(a1, 1u);
  v9 = (char *)json_string_value(v8) + 2;
  v10 = json_array_get(a1, 2u);
  v11 = (char *)json_string_value(v10) + 2;
  v12 = json_array_get(a1, 3u);
  nptr = (char *)json_string_value(v12);
  v13 = strlen(v9);
  v14 = strlen(v7);
  v15 = strlen(v11);
  v16 = v14 == 0;
  if ( !v13 )
    v16 = 1;
  if ( !v15 )
    v16 = 1;
  v17 = v15;
  if ( v16 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v13, v14, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      580,
      100,
      v35);
    return v2;
  }
  mutex = (pthread_mutex_t *)(a2 + 1780);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1780));
  *(_DWORD *)(a2 + 1756) = v14 >> 1;
  v18 = malloc(v14 >> 1);
  v19 = v14 >> 1;
  v20 = v18;
  v2 = hex2bin((int)v18, (unsigned __int8 *)v7, v19);
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v21 = g_zc;
    v22 = 591;
LABEL_15:
    zlog(
      v21,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      v22,
      100,
      v35);
    if ( v20 )
      free(v20);
    pthread_mutex_unlock(mutex);
    goto LABEL_18;
  }
  v23 = *(_DWORD *)(a2 + 1756);
  v24 = malloc(v23);
  *(_DWORD *)(a2 + 1748) = v24;
  if ( !v24 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    v21 = g_zc;
    v22 = 600;
    goto LABEL_15;
  }
  memcpy(v24, v20, v23);
  free(v20);
  v25 = *(void **)(a2 + 1776);
  if ( v25 )
    free(v25);
  pthread_mutex_unlock(mutex);
  if ( !*(_DWORD *)(a2 + 1748) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      617,
      80,
      v35);
LABEL_18:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    v2 = 0;
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      679,
      80,
      v35);
    return v2;
  }
  memcpy((void *)(a2 + 464), *(const void **)(a2 + 1748), *(_DWORD *)(a2 + 1756));
  v26 = *(_QWORD **)(a2 + 1588);
  if ( v26 || (v26 = calloc(1u, 0x6Bu), (*(_DWORD *)(a2 + 1588) = v26) != 0) )
  {
    hex2bin((int)v26, (unsigned __int8 *)v9, 32);
    hex2bin(a2 + 1488, (unsigned __int8 *)v11, v17);
    v27 = target_to_diff_eth_2282(a2 + 1488);
    *(double *)(a2 + 1520) = (double)(unsigned int)v27;
    *(double *)(a2 + 1808) = (double)(unsigned int)v27;
    sprintf((char *)(a2 + 1976), "%13.2f", (double)(unsigned int)v27);
    *(_DWORD *)v35 = 0;
    get_all_created_runtime(v35);
    v28 = *(void **)(a2 + 1580);
    if ( v28 )
      free(v28);
    v29 = malloc(6u);
    if ( v29 )
      LOWORD(v30) = -14936;
    *(_DWORD *)(a2 + 1580) = v29;
    if ( v29 )
    {
      HIWORD(v30) = 20;
      v31 = v30[1];
      *(_DWORD *)v29 = *v30;
      v29[2] = v31;
    }
    if ( nptr )
    {
      v26[12] = strtoull(nptr, 0, 16);
    }
    else
    {
      *((_BYTE *)v26 + 96) = 0;
      *((_BYTE *)v26 + 97) = 0;
      *((_BYTE *)v26 + 98) = 0;
      *((_BYTE *)v26 + 99) = 0;
      *((_BYTE *)v26 + 100) = 0;
      *((_BYTE *)v26 + 101) = 0;
      *((_BYTE *)v26 + 102) = 0;
      *((_BYTE *)v26 + 103) = 0;
    }
    v32 = *(void **)(a2 + 1748);
    if ( v32 )
      free(v32);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  }
  else
  {
    v2 = 0;
    printf(aInvalidPointer, "work->private");
  }
  return v2;
}
