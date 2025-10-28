int __fastcall sub_4DB50(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  const char *v6; // r0
  unsigned __int8 *v7; // r7
  int v8; // r12
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r6
  char v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (const char *)json_string_value(v5);
  v7 = (unsigned __int8 *)v6;
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v8 = 96;
    goto LABEL_4;
  }
  if ( strlen(v6) != 8 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "extranonce1 len is not 8");
    V_UNLOCK();
    v8 = 102;
LABEL_4:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_parse_extranonce_zec",
      28,
      v8,
      100,
      v14);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v10 = *(void **)(a2 + 80);
  if ( v10 )
    free(v10);
  *(_DWORD *)(a2 + 76) = 4;
  v11 = malloc(4u);
  *(_DWORD *)(a2 + 80) = v11;
  if ( !v11 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Failed to mlloc xnonce1");
    V_UNLOCK();
    v8 = 112;
    goto LABEL_4;
  }
  hex2bin((int)v11, v7, 4);
  v12 = *(void **)(a2 + 1588);
  *(_DWORD *)(a2 + 84) = 2;
  if ( v12 )
    free(v12);
  v13 = calloc(1u, 0xB28u);
  *(_DWORD *)(a2 + 1588) = v13;
  if ( v13 )
  {
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v7, *(_DWORD *)(a2 + 84));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_parse_extranonce_zec",
      28,
      125,
      20,
      v14);
    return 1;
  }
  else
  {
    printf(aInvalidPointer, "work->private");
    return 0;
  }
}
