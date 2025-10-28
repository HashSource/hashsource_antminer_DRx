int __fastcall sub_452B4(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  int v10; // r12
  int v11; // r0
  int v12; // r3
  _DWORD *v14; // r0
  int v15; // r0
  size_t v16; // r6
  int v17; // r7
  void *v18; // r0
  size_t v19; // r10
  void *v20; // r0
  void *v21; // r0
  _DWORD *v22; // r0
  char v23[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v10 = 65;
    v11 = g_zc;
    LOWORD(v12) = (unsigned __int16)"stratum_parse_extranonce_kda";
LABEL_4:
    HIWORD(v12) = (unsigned int)"stratum_parse_extranonce_kda" >> 16;
    zlog(
      v11,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      v12,
      28,
      v10,
      100,
      v23);
    return 0;
  }
  v14 = json_array_get(a3, a4 + 1);
  v15 = json_integer_value((int)v14);
  v16 = v15 - 5;
  v17 = v15;
  if ( (unsigned int)(v15 - 5) > 3 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v17);
    V_UNLOCK();
    v10 = 71;
    v11 = g_zc;
    LOWORD(v12) = 16432;
    goto LABEL_4;
  }
  v18 = *(void **)(a2 + 80);
  if ( v18 )
  {
    free(v18);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v19 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 76) = v19;
  v20 = calloc(1u, v19);
  *(_DWORD *)(a2 + 80) = v20;
  if ( !v20 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v10 = 79;
    v11 = g_zc;
    LOWORD(v12) = 16432;
    goto LABEL_4;
  }
  hex2bin((int)v20, (unsigned __int8 *)v9, v19);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v21 = *(void **)(a2 + 1588);
  if ( v21 )
    free(v21);
  v22 = calloc(1u, 0x14u);
  *(_DWORD *)(a2 + 1588) = v22;
  if ( v22 )
  {
    *(_DWORD *)(a2 + 84) = v16;
    *v22 = v16;
    memset(v22 + 1, 0, v16);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_parse_extranonce_kda",
      28,
      94,
      20,
      v23);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
