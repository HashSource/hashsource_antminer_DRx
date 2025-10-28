int __fastcall sub_48EB4(int a1, int *a2)
{
  int v2; // r7
  double *v5; // r6
  void *v6; // r9
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r10
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  const char *v14; // r0
  size_t v15; // r0
  char *v16; // r5
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  _BOOL4 v20; // r3
  int v21; // r2
  int v22; // r11
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  char *v27; // r0
  int v28; // [sp+14h] [bp-1110h]
  _DWORD *v29; // [sp+1Ch] [bp-1108h]
  char v30[92]; // [sp+24h] [bp-1100h] BYREF
  _BYTE v31[160]; // [sp+80h] [bp-10A4h] BYREF
  char v32[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v14 = (const char *)a2[18];
    if ( v14 )
      v15 = strlen(v14) + 256;
    else
      v15 = 256;
    v16 = (char *)malloc(v15);
    strcpy(v16, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16) )
    {
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      v7 = 42;
      v8 = g_zc;
      LOWORD(v9) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tm"
                                     "p/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c";
      goto LABEL_3;
    }
    v10 = socket_full(a2[9], 30);
    if ( !v10 )
    {
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      v7 = 48;
      v8 = g_zc;
      LOWORD(v9) = -12616;
LABEL_3:
      HIWORD(v9) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/re"
                                 "lease/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
      zlog(v8, v9, 164, "stratum_subscribe_kas", 21, v7, 100, v32);
      free(v16);
      if ( !v5 )
        goto LABEL_11;
      goto LABEL_4;
    }
    v17 = (*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v6 = (void *)v17;
    if ( v17 )
    {
      v5 = json_loads(v17, 0, v30);
      free(v6);
      if ( !v5 )
      {
        V_LOCK();
        logfmt_raw(v32, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v30, v31);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_subscribe_kas",
          21,
          61,
          100,
          v32);
        free(v16);
        goto LABEL_11;
      }
      v18 = json_object_get(v5, "id");
      v28 = json_integer_value(v18);
      v29 = (_DWORD *)json_object_get(v5, "result");
      v19 = (_DWORD *)json_object_get(v5, "error");
      v20 = v29 == 0;
      if ( v28 != 1 )
        v20 = 1;
      if ( v20 || *v29 == 7 )
      {
        if ( !v2 )
          goto LABEL_47;
        if ( v19 )
        {
LABEL_35:
          v16 = json_dumps(v19, 3);
          V_LOCK();
          logfmt_raw(v32, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v16, v28);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            164,
            "stratum_subscribe_kas",
            21,
            77,
            100,
            v32);
          if ( !v16 )
          {
            if ( *((_DWORD *)v5 + 1) == -1 )
              goto LABEL_11;
            goto LABEL_37;
          }
LABEL_47:
          v10 = 0;
          goto LABEL_48;
        }
        v27 = (char *)malloc(0x11u);
        if ( !v27 )
        {
          V_LOCK();
          logfmt_raw(v32, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", 0, v28);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            164,
            "stratum_subscribe_kas",
            21,
            77,
            100,
            v32);
          if ( *((_DWORD *)v5 + 1) == -1 )
            return 0;
LABEL_37:
          v23 = (unsigned int *)v5 + 1;
          __dmb(0xBu);
          do
          {
            v24 = __ldrex(v23);
            v25 = v24 - 1;
          }
          while ( __strex(v25, v23) );
          if ( !v25 )
            json_delete(v5);
          goto LABEL_11;
        }
        v16 = v27;
        v10 = 0;
        strcpy(v27, "(unknown reason)");
        V_LOCK();
        logfmt_raw(v32, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v16, v28);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_subscribe_kas",
          21,
          77,
          100,
          v32);
      }
      else
      {
        if ( v19 && *v19 != 7 )
        {
          if ( !v2 )
            goto LABEL_47;
          goto LABEL_35;
        }
        if ( !(*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v29, 1) )
        {
          V_LOCK();
          logfmt_raw(v32, 0x1000u, 0, "no need to parse extranonce");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            164,
            "stratum_subscribe_kas",
            21,
            88,
            60,
            v32);
        }
        v21 = a2[480] + 1;
        a2[480] = v21;
        sprintf(v16, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v21);
        v22 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16);
        if ( v22 )
        {
          v10 = socket_full(a2[9], 30);
          if ( v10 )
            (*(void (__fastcall **)(int *))(a1 + 8))(a2);
          else
            v10 = v22;
        }
      }
LABEL_48:
      free(v16);
      if ( *((_DWORD *)v5 + 1) == -1 )
        goto LABEL_10;
      goto LABEL_6;
    }
    free(v16);
    if ( !v5 )
      return 0;
LABEL_4:
    if ( *((_DWORD *)v5 + 1) == -1 )
      goto LABEL_11;
    v10 = 0;
LABEL_6:
    v11 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v12 = __ldrex(v11);
      v13 = v12 - 1;
    }
    while ( __strex(v13, v11) );
    if ( !v13 )
      json_delete(v5);
LABEL_10:
    if ( v10 )
      return v10;
LABEL_11:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
