int __fastcall sub_4B120(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  int v10; // lr
  int v11; // r12
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  size_t v16; // r5
  void *v17; // r0
  size_t v18; // r9
  void *v19; // r0
  void *v20; // r0
  _DWORD *v21; // r0
  char v22[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v10 = 100;
    v11 = 142;
    v12 = g_zc;
    LOWORD(v13) = (unsigned __int16)"stratum_parse_extranonce_ltc";
LABEL_4:
    HIWORD(v13) = (unsigned int)"stratum_parse_extranonce_ltc" >> 16;
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      163,
      v13,
      28,
      v11,
      v10,
      v22);
    return 0;
  }
  v15 = json_array_get(a3, a4 + 1);
  v16 = json_integer_value((int)v15);
  if ( v16 - 2 > 0xE )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v16);
    V_UNLOCK();
    v10 = 60;
    v11 = 147;
    v12 = g_zc;
    LOWORD(v13) = -17184;
    goto LABEL_4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v17 = *(void **)(a2 + 80);
  if ( v17 )
  {
    free(v17);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v18 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 76) = v18;
  v19 = calloc(1u, v18);
  *(_DWORD *)(a2 + 80) = v19;
  if ( v19 )
  {
    hex2bin((int)v19, (unsigned __int8 *)v9, v18);
    v20 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v16;
    if ( v20 )
      free(v20);
    v21 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v21;
    if ( v21 )
    {
      *v21 = v16;
      memset(v21 + 1, 0, v16);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        163,
        "stratum_parse_extranonce_ltc",
        28,
        182,
        20,
        v22);
      return 1;
    }
    else
    {
      printf(aInvalidPointer, "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      163,
      "stratum_parse_extranonce_ltc",
      28,
      156,
      100,
      v22);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
