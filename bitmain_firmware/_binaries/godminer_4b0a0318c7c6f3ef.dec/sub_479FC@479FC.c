int __fastcall sub_479FC(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r6
  void *v12; // r0
  size_t v13; // r7
  void *v14; // r0
  void *v15; // r0
  _BYTE *v16; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r1
  char v21[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v18 = 239;
    v19 = g_zc;
    LOWORD(v20) = -18164;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v18 = 245;
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 2) > 6 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    v18 = 250;
LABEL_12:
    v19 = g_zc;
    LOWORD(v20) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c";
LABEL_13:
    HIWORD(v20) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
    zlog(v19, v20, 164, "stratum_parse_extranonce_kas", 28, v18, 100, v21);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v12 = *(void **)(a2 + 80);
  if ( v12 )
  {
    free(v12);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v13 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v13;
  v14 = calloc(1u, v13);
  *(_DWORD *)(a2 + 80) = v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    v15 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v11;
    if ( v15 )
      free(v15);
    v16 = calloc(1u, 0xAu);
    *(_DWORD *)(a2 + 1588) = v16;
    if ( v16 )
    {
      *v16 = v11;
      memset(v16 + 1, 0, (unsigned __int8)v11);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_parse_extranonce_kas",
        28,
        277,
        20,
        v21);
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
    logfmt_raw(v21, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kas/frontend_kas.c",
      164,
      "stratum_parse_extranonce_kas",
      28,
      260,
      100,
      v21);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
