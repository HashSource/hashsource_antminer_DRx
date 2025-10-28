int __fastcall sub_3F4E0(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r5
  size_t v12; // r0
  int v13; // r12
  int v14; // r0
  int v15; // r3
  void *v17; // r0
  size_t v18; // r6
  void *v19; // r0
  void *v20; // r0
  _DWORD *v21; // r0
  char v22[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v13 = 73;
    v14 = g_zc;
    LOWORD(v15) = -23184;
    goto LABEL_7;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v13 = 78;
    goto LABEL_6;
  }
  if ( v10 - 4 > 0xB )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    v13 = 82;
    goto LABEL_6;
  }
  if ( v10 + (strlen(v8) >> 1) != 16 )
  {
    V_LOCK();
    v12 = strlen(v8);
    logfmt_raw(v22, 0x1000u, 0, "n1size %d, n2size %d, n1size + n2size != %d, in parse_extranonce", v12 >> 1, v11, 16);
    V_UNLOCK();
    v13 = 86;
LABEL_6:
    v14 = g_zc;
    LOWORD(v15) = (unsigned __int16)"stratum_parse_extranonce_ckb";
LABEL_7:
    HIWORD(v15) = (unsigned int)"stratum_parse_extranonce_ckb" >> 16;
    zlog(
      v14,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      v15,
      28,
      v13,
      100,
      v22);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v17 = *(void **)(a2 + 80);
  if ( v17 )
  {
    free(v17);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v18 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v18;
  v19 = calloc(1u, v18);
  *(_DWORD *)(a2 + 80) = v19;
  if ( v19 )
  {
    hex2bin((int)v19, (unsigned __int8 *)v8, v18);
    memcpy((void *)(a2 + 496), *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    v20 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v11;
    if ( v20 )
      free(v20);
    v21 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v21;
    if ( v21 )
    {
      *v21 = v11;
      memset(v21 + 1, 0, v11);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
        164,
        "stratum_parse_extranonce_ckb",
        28,
        121,
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
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      95,
      100,
      v22);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
