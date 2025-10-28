int __fastcall stratum_authorize_kas(int a1, int *a2, void *a3)
{
  int v3; // r6
  double *v6; // r11
  int v8; // r8
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r8
  const char *v13; // r9
  size_t v14; // r5
  size_t v15; // r0
  char *v16; // r5
  void *v17; // r0
  _DWORD *v18; // r9
  int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v26; // [sp+34h] [bp-1128h]
  _DWORD v27[7]; // [sp+38h] [bp-1124h] BYREF
  int v28; // [sp+54h] [bp-1108h]
  char v29[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v30[160]; // [sp+B8h] [bp-10A4h] BYREF
  char v31[4100]; // [sp+158h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[4];
    v13 = (const char *)a2[5];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_authorize_kas",
        21,
        191,
        100,
        v31);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_3;
    }
    v17 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    a3 = v17;
    if ( v17 )
      break;
    free(v16);
    if ( !v6 )
      return 0;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) != -1 )
    {
      v8 = 0;
LABEL_5:
      v9 = (unsigned int *)v6 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( !v11 )
        json_delete(v6);
      if ( v8 )
        return v8;
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  v6 = json_loads((int)v17, 0, v29);
  free(a3);
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v29, v30);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kas/frontend_kas.c",
      164,
      "stratum_authorize_kas",
      21,
      205,
      100,
      v31);
    free(v16);
    goto LABEL_10;
  }
  v18 = (_DWORD *)json_object_get(v6, "error");
  v19 = json_object_get(v6, "id");
  v26 = json_integer_value(v19);
  if ( !v18 || *v18 == 7 )
    goto LABEL_22;
  V_LOCK();
  V_INT((int)v27, "poolno", *a2);
  v20 = json_array_get(v18, 1u);
  v21 = json_string_value(v20);
  logfmt_raw(
    v31,
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
    "authorize failed reason: %s",
    v21);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_kas/frontend_kas.c",
    164,
    "stratum_authorize_kas",
    21,
    215,
    80,
    v31);
  if ( !v3
    || (v16 = json_dumps(v18, 3),
        V_LOCK(),
        logfmt_raw(v31, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v16, v26),
        V_UNLOCK(),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_authorize_kas",
          21,
          222,
          100,
          v31),
        v16) )
  {
    v8 = 0;
LABEL_22:
    free(v16);
    if ( *((_DWORD *)v6 + 1) != -1 )
      goto LABEL_5;
    if ( v8 )
      return v8;
    goto LABEL_10;
  }
  if ( *((_DWORD *)v6 + 1) != -1 )
  {
    v23 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v24 = __ldrex(v23);
      v25 = v24 - 1;
    }
    while ( __strex(v25, v23) );
    if ( !v25 )
      json_delete(v6);
  }
  return 0;
}
