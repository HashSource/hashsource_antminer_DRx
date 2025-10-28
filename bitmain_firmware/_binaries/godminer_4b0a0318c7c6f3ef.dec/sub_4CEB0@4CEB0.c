int __fastcall sub_4CEB0(int a1, int *a2)
{
  void *v2; // r11
  int v5; // r10
  double *v6; // r6
  int v7; // r2
  int v8; // r9
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r0
  size_t v13; // r0
  char *v14; // r5
  int v15; // r0
  _DWORD *v16; // r8
  int v17; // r0
  _BOOL4 v18; // r3
  char *v19; // r0
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  void *v24; // r0
  _DWORD *v25; // r0
  const char *v26; // r0
  char *v27; // r0
  void *v28; // r0
  char *v29; // r0
  const char *v30; // r1
  const char *v31; // r3
  int v32; // r2
  int v33; // r8
  int v34; // [sp+34h] [bp-1138h]
  _DWORD *v35; // [sp+38h] [bp-1134h]
  int v36; // [sp+40h] [bp-112Ch]
  _DWORD v37[7]; // [sp+48h] [bp-1124h] BYREF
  int v38; // [sp+64h] [bp-1108h]
  char v39[92]; // [sp+6Ch] [bp-1100h] BYREF
  _BYTE v40[160]; // [sp+C8h] [bp-10A4h] BYREF
  char v41[4100]; // [sp+168h] [bp-1004h] BYREF

  v34 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
    return 1;
  v2 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v12 = (const char *)a2[18];
    if ( v12 )
      v13 = strlen(v12) + 256;
    else
      v13 = 256;
    v14 = (char *)malloc(v13);
    strcpy(v14, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v14) )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      v7 = 43;
      goto LABEL_4;
    }
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      v7 = 49;
LABEL_4:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_subscribe_rvn",
        21,
        v7,
        100,
        v41);
      free(v14);
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_5;
    }
    v15 = (*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v2 = (void *)v15;
    if ( v15 )
    {
      v6 = json_loads(v15, 0, v39);
      free(v2);
      if ( !v6 )
      {
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v39, v40);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          164,
          "stratum_subscribe_rvn",
          21,
          62,
          100,
          v41);
        free(v14);
        goto LABEL_12;
      }
      v35 = (_DWORD *)json_object_get(v6, "result");
      v16 = (_DWORD *)json_object_get(v6, "error");
      v17 = json_object_get(v6, "id");
      v36 = json_integer_value(v17);
      v18 = v35 == 0;
      if ( v36 != 1 )
        v18 = 1;
      if ( v18 || *v35 == 7 )
      {
        if ( !v5 )
          goto LABEL_44;
        if ( v16 )
          goto LABEL_37;
        v19 = (char *)malloc(0x11u);
        if ( !v19 )
        {
          V_LOCK();
          logfmt_raw(v41, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", 0, v36);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            164,
            "stratum_subscribe_rvn",
            21,
            79,
            100,
            v41);
          if ( *((_DWORD *)v6 + 1) == -1 )
            return v34;
LABEL_39:
          v21 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v22 = __ldrex(v21);
            v23 = v22 - 1;
          }
          while ( __strex(v23, v21) );
          if ( !v23 )
            json_delete(v6);
          goto LABEL_12;
        }
        v14 = v19;
        v8 = 0;
        strcpy(v19, "(unknown reason)");
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v14, v36);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          164,
          "stratum_subscribe_rvn",
          21,
          79,
          100,
          v41);
      }
      else
      {
        if ( v16 && *v16 != 7 )
        {
          if ( v5 )
          {
LABEL_37:
            v14 = json_dumps(v16, 3);
            V_LOCK();
            logfmt_raw(v41, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v14, v36);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              164,
              "stratum_subscribe_rvn",
              21,
              79,
              100,
              v41);
            if ( !v14 )
            {
              if ( *((_DWORD *)v6 + 1) == -1 )
                goto LABEL_12;
              goto LABEL_39;
            }
          }
LABEL_44:
          v8 = 0;
          goto LABEL_45;
        }
        v24 = (void *)a2[20];
        if ( v24 )
          free(v24);
        v25 = json_array_get(v35, 1u);
        v26 = (const char *)json_string_value(v25);
        v27 = _strdup(v26);
        a2[20] = (int)v27;
        a2[19] = strlen(v27);
        V_LOCK();
        V_INT((int)v37, "poolno", *a2);
        logfmt_raw(
          v41,
          0x1000u,
          0,
          v38,
          v37[0],
          v37[1],
          v37[2],
          v37[3],
          v37[4],
          v37[5],
          v37[6],
          v38,
          "extra_nonce %s, len: %d",
          a2[20],
          a2[19]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          164,
          "stratum_subscribe_rvn",
          21,
          95,
          60,
          v41);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        v28 = (void *)a2[388];
        if ( v28 )
          free(v28);
        v29 = (char *)calloc(8u, 1u);
        v30 = (const char *)a2[20];
        a2[388] = (int)v29;
        strcpy(v29, v30);
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        if ( !(*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v35, 1) )
        {
          V_LOCK();
          logfmt_raw(v41, 0x1000u, 0, "no need to parse extranonce");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            164,
            "stratum_subscribe_rvn",
            21,
            113,
            60,
            v41);
        }
        v31 = (const char *)a2[20];
        v32 = a2[480] + 1;
        a2[480] = v32;
        sprintf(v14, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": [\"%s\"]}", v32, v31);
        v33 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v14);
        if ( v33 )
        {
          v8 = socket_full(a2[9], 30);
          if ( v8 )
            (*(void (__fastcall **)(int *))(a1 + 8))(a2);
          else
            v8 = v33;
        }
      }
LABEL_45:
      free(v14);
      if ( *((_DWORD *)v6 + 1) == -1 )
        goto LABEL_11;
      goto LABEL_7;
    }
    free(v14);
    if ( !v6 )
      return v34;
LABEL_5:
    if ( *((_DWORD *)v6 + 1) == -1 )
      goto LABEL_12;
    v8 = 0;
LABEL_7:
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
LABEL_11:
    if ( v8 )
      return 1;
LABEL_12:
    if ( v2 )
      v5 ^= 1u;
    else
      v5 = 0;
  }
  while ( v5 );
  return 0;
}
