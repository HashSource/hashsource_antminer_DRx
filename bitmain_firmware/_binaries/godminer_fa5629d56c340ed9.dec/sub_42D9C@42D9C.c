int __fastcall sub_42D9C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r9
  _DWORD *v9; // r0
  char *v10; // r0
  _BOOL4 v11; // r3
  char *v12; // r8
  size_t v13; // r10
  size_t v14; // r0
  _BOOL4 v15; // r4
  size_t v16; // r11
  const char *v17; // r0
  char *v18; // r11
  char *v19; // r8
  int v20; // t1
  void *v21; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r1
  size_t v26; // r0
  __int16 s; // [sp+14h] [bp-1010h] BYREF
  _DWORD v28[2]; // [sp+18h] [bp-100Ch] BYREF
  char v29[4100]; // [sp+20h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (char *)json_string_value(v9);
  v11 = v10 == 0;
  if ( !v6 )
    v11 = 1;
  if ( !v8 )
    v11 = 1;
  v12 = v10;
  if ( v11 )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "pool job parse failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_notify_eth",
      18,
      896,
      100,
      v29);
  }
  v13 = strlen(v8);
  v14 = strlen(v12);
  v15 = v14 == 0;
  if ( !v13 )
    v15 = 1;
  v16 = v14;
  if ( v15 )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "invalid job hash len");
    V_UNLOCK();
    v23 = 902;
LABEL_24:
    v24 = g_zc;
    LOWORD(v25) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c";
    goto LABEL_25;
  }
  if ( a2 == -456 )
  {
LABEL_22:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  v17 = *(const char **)(a2 + 1580);
  if ( !v17 || strcmp(v17, v6) )
  {
    if ( strlen(v6) <= 0x1F )
      goto LABEL_14;
    goto LABEL_28;
  }
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "Stratum notify: new job's job_id does not change, %s, %s", *(_DWORD *)(a2 + 1580), v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth/frontend_eth.c",
    164,
    "stratum_notify_eth",
    18,
    914,
    80,
    v29);
  if ( strlen(v6) > 0x1F )
  {
LABEL_28:
    V_LOCK();
    v26 = strlen(v6);
    logfmt_raw(v29, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v6, v26);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_notify_eth",
      18,
      917,
      80,
      v29);
  }
LABEL_14:
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  *(_BYTE *)(a2 + 444) = 1;
  if ( !hex2bin(a2 + 464, (unsigned __int8 *)v12, v16 >> 1) )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "Failed to convert header_hash to header_hash_ptr in parse_notify");
    V_UNLOCK();
    v23 = 926;
    goto LABEL_24;
  }
  v18 = *(char **)(a2 + 1588);
  if ( !v18 )
  {
    v18 = (char *)calloc(1u, 0x6Bu);
    *(_DWORD *)(a2 + 1588) = v18;
    if ( !v18 )
    {
      printf(aInvalidPointer, "work->private");
      return 0;
    }
  }
  if ( hex2bin((int)v18, (unsigned __int8 *)v8, v13 >> 1) )
  {
    *(_DWORD *)(a2 + 1536) = get_epoch_number_eth(v18);
    v19 = v18 + 103;
    *((_WORD *)v18 + 52) = 0;
    v18[106] = 0;
    memcpy(v18 + 104, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    v28[0] = 0;
    s = 0;
    v28[1] = 0;
    do
    {
      v20 = (unsigned __int8)*++v19;
      sprintf((char *)&s, "%02x", v20);
      strcat((char *)v28, (const char *)&s);
    }
    while ( v18 + 106 != v19 );
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "pool %d extranonce_line1: %s", *(_DWORD *)a2, v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_notify_eth",
      18,
      964,
      40,
      v29);
    v21 = *(void **)(a2 + 1580);
    if ( v21 )
      free(v21);
    *(_DWORD *)(a2 + 1580) = _strdup(v6);
    goto LABEL_22;
  }
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "Failed to convert seed_hash to seed_hash_ptr in parse_notify");
  V_UNLOCK();
  v23 = 938;
  v24 = g_zc;
  LOWORD(v25) = -15212;
LABEL_25:
  HIWORD(v25) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c" >> 16;
  zlog(v24, v25, 164, "stratum_notify_eth", 18, v23, 100, v29);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 0;
}
