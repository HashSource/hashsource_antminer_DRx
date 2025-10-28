int __fastcall sub_465C8(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  char *v7; // r9
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  char *v10; // r11
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  const char *v13; // r10
  size_t v14; // r7
  size_t v15; // r6
  size_t v16; // r0
  _BOOL4 v17; // r4
  size_t v18; // r8
  const char *v20; // r0
  size_t v21; // r6
  void *v22; // r0
  void *v23; // r0
  _QWORD *v24; // r0
  _QWORD *v25; // r6
  unsigned int v26; // r4
  int *all_created_runtime; // r0
  int *v28; // r2
  int v29; // t1
  void *v30; // r0
  size_t v31; // r0
  __int64 v32; // [sp+10h] [bp-102Ch]
  char *s2; // [sp+18h] [bp-1024h]
  char *v34; // [sp+1Ch] [bp-1020h]
  pthread_mutex_t *mutex; // [sp+20h] [bp-101Ch]
  void *src; // [sp+24h] [bp-1018h]
  int v37; // [sp+34h] [bp-1008h] BYREF
  char v38[4100]; // [sp+38h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v5);
  v6 = json_array_get(a3, 1u);
  v7 = (char *)json_string_value(v6);
  v8 = json_array_get(a3, 2u);
  v34 = (char *)json_string_value(v8);
  v9 = json_array_get(a3, 3u);
  v10 = (char *)json_string_value(v9);
  v11 = json_array_get(a3, 5u);
  v32 = json_integer_value((int)v11);
  v12 = json_array_get(a3, 6u);
  v13 = (const char *)json_string_value(v12);
  v14 = strlen(v34);
  v15 = strlen(v7);
  v16 = strlen(v10);
  v17 = v15 == 0;
  if ( !v14 )
    v17 = 1;
  if ( !v16 )
    v17 = 1;
  v18 = v16;
  if ( v17 )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v14, v15, v18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      525,
      100,
      v38);
    return 0;
  }
  mutex = (pthread_mutex_t *)(a2 + 1592);
  if ( a2 == -456 )
    goto LABEL_25;
  v20 = *(const char **)(a2 + 1580);
  if ( v20 && !strcmp(v20, s2) )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "Stratum notify: new job's job_id does not change, %s, %s", *(_DWORD *)(a2 + 1580), s2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      540,
      80,
      v38);
  }
  if ( strlen(s2) > 0x1F )
  {
    V_LOCK();
    v31 = strlen(s2);
    logfmt_raw(v38, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      543,
      80,
      v38);
  }
  v21 = v15 >> 1;
  pthread_mutex_lock(mutex);
  snprintf((char *)(a2 + 356), 9u, "%s", v13);
  strcpy((char *)(a2 + 1556), v13);
  *(_BYTE *)(a2 + 444) = 0;
  v22 = calloc(v21, 1u);
  src = v22;
  if ( v22 )
  {
    if ( hex2bin((int)v22, (unsigned __int8 *)v7, v21) )
    {
LABEL_16:
      memcpy((void *)(a2 + 464), src, v21);
      v23 = *(void **)(a2 + 1588);
      if ( v23 )
        free(v23);
      v24 = calloc(1u, 0x68u);
      v25 = v24;
      *(_DWORD *)(a2 + 1588) = v24;
      if ( !v24 )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
      hex2bin((int)v24, (unsigned __int8 *)v34, v14 >> 1);
      hex2bin(a2 + 1488, (unsigned __int8 *)v10, v18 >> 1);
      v25[12] = v32;
      v26 = target_to_diff_rvn(a2 + 1488);
      *(double *)(a2 + 1520) = (double)v26;
      *(double *)(a2 + 1808) = (double)v26;
      sprintf((char *)(a2 + 1976), "%13.2f", (double)v26);
      v37 = 0;
      all_created_runtime = (int *)get_all_created_runtime(&v37);
      if ( v37 > 0 )
      {
        v28 = &all_created_runtime[v37];
        do
        {
          v29 = *all_created_runtime++;
          *(_DWORD *)(v29 + 400) = v26;
        }
        while ( v28 != all_created_runtime );
      }
      v30 = *(void **)(a2 + 1580);
      if ( v30 )
        free(v30);
      *(_DWORD *)(a2 + 1580) = _strdup(s2);
      *(_DWORD *)(a2 + 1536) = get_epoch_number_rvn(v25);
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "epoch:%d targetdiff:%02x", *(_DWORD *)(a2 + 1536), v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        588,
        40,
        v38);
      free(src);
LABEL_25:
      pthread_mutex_unlock(mutex);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "Failed to convert header to header_ptr in parse_notify");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      559,
      100,
      v38);
    free(src);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "header_ptr failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      553,
      20,
      v38);
    if ( hex2bin(0, (unsigned __int8 *)v7, v21) )
      goto LABEL_16;
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "Failed to convert header to header_ptr in parse_notify");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      559,
      100,
      v38);
  }
  pthread_mutex_unlock(mutex);
  V_LOCK();
  logfmt_raw(v38, 0x1000u, 0, "%s", "stratum_notify_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_rvn/frontend_rvn.c",
    164,
    "stratum_notify_rvn",
    18,
    601,
    80,
    v38);
  return 0;
}
