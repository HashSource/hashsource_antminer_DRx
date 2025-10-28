int __fastcall stratum_subscribe_base(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r7
  void *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  _BYTE *v9; // r0
  _BYTE *v10; // r6
  const char *v11; // r1
  size_t v12; // r2
  int v13; // r2
  int v14; // r0
  int v15; // r1
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v19; // r9
  int v21; // r0
  _DWORD *v22; // r10
  int v23; // r0
  int v24; // r9
  _BOOL4 v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  const char *v29; // r0
  int v30; // r10
  int v31; // [sp+4h] [bp-1158h]
  _DWORD *v32; // [sp+30h] [bp-112Ch]
  _DWORD v33[7]; // [sp+38h] [bp-1124h] BYREF
  int v34; // [sp+54h] [bp-1108h]
  char v35[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v36[160]; // [sp+B8h] [bp-10A4h] BYREF
  char v37[4100]; // [sp+158h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "pool %d is jsonrpc_2, no need to subscribe", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_subscribe_base",
      22,
      174,
      20,
      v37);
    return v2;
  }
  v5 = (double *)*((unsigned __int8 *)a2 + 1656);
  v6 = v5;
  do
  {
    v7 = (const char *)a2[18];
    if ( v7 )
      v8 = strlen(v7) + 128;
    else
      v8 = 128;
    v9 = malloc(v8);
    v10 = v9;
    if ( v2 )
    {
      v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
      v12 = 77;
    }
    else
    {
      v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}";
      v12 = 76;
    }
    memcpy(v9, v11, v12);
    if ( !(*(int (__fastcall **)(int *, _BYTE *))(a1 + 12))(a2, v10) )
    {
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      v13 = 190;
      v14 = g_zc;
      LOWORD(v15) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/frontend/frontend_base.c";
LABEL_11:
      HIWORD(v15) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/frontend/frontend_base.c" >> 16;
      zlog(v14, v15, 152, "stratum_subscribe_base", 22, v13, 100, v37);
LABEL_12:
      if ( !v10 )
      {
        if ( !v5 )
          goto LABEL_18;
        if ( *((_DWORD *)v5 + 1) == -1 )
          goto LABEL_18;
        v16 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v17 = __ldrex(v16);
          v18 = v17 - 1;
        }
        while ( __strex(v18, v16) );
        if ( v18 )
          goto LABEL_18;
        v19 = 0;
LABEL_52:
        json_delete(v5);
        goto LABEL_37;
      }
      free(v10);
      if ( !v5 )
        goto LABEL_18;
      v19 = 0;
      goto LABEL_33;
    }
    if ( !socket_full(a2[9], 30) )
    {
      V_LOCK();
      V_INT((int)v33, "poolno", *a2);
      logfmt_raw(
        v37,
        0x1000u,
        0,
        v34,
        v33[0],
        v33[1],
        v33[2],
        v33[3],
        v33[4],
        v33[5],
        v33[6],
        v34,
        "stratum_subscribe timed out");
      V_UNLOCK();
      v14 = g_zc;
      v13 = 195;
      LOWORD(v15) = -24180;
      goto LABEL_11;
    }
    v21 = (*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v6 = (void *)v21;
    if ( !v21 )
      goto LABEL_12;
    v5 = json_loads(v21, 0, v35);
    free(v6);
    if ( !v5 )
    {
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v35, v36);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_base.c",
        152,
        "stratum_subscribe_base",
        22,
        206,
        100,
        v37);
      if ( v10 )
        free(v10);
      goto LABEL_18;
    }
    v22 = (_DWORD *)json_object_get(v5, "result");
    v32 = (_DWORD *)json_object_get(v5, "error");
    v23 = json_object_get(v5, "id");
    v24 = json_integer_value(v23);
    v25 = v22 == 0;
    if ( v24 != 1 )
      v25 = 1;
    if ( !v25 && *v22 != 7 )
    {
      if ( !v32 || *v32 == 7 )
      {
        v19 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v22, 1);
        if ( v19 )
        {
          v29 = (const char *)a2[8];
          a2[480] = 2;
          if ( v29 )
          {
            if ( strstr(v29, "nicehash") )
            {
              a2[480] = 3;
              sprintf(v10, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v30 = (*(int (__fastcall **)(int *, _BYTE *))(a1 + 12))(a2, v10);
              if ( v30 )
              {
                v19 = socket_full(a2[9], 30);
                if ( v19 )
                {
                  (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                  free(v10);
                  goto LABEL_33;
                }
                v19 = v30;
              }
LABEL_47:
              free(v10);
              goto LABEL_33;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_45:
          v10 = json_dumps(v32, 3);
          goto LABEL_46;
        }
LABEL_31:
        v19 = v2;
      }
      if ( v10 )
        goto LABEL_47;
      goto LABEL_33;
    }
    if ( !v2 )
      goto LABEL_31;
    if ( v32 )
      goto LABEL_45;
    v10 = malloc(0x11u);
    if ( v10 )
      strcpy(v10, "(unknown reason)");
LABEL_46:
    V_LOCK();
    v31 = v24;
    v19 = 0;
    logfmt_raw(v37, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v10, v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_subscribe_base",
      22,
      221,
      100,
      v37);
    if ( v10 )
      goto LABEL_47;
LABEL_33:
    if ( *((_DWORD *)v5 + 1) != -1 )
    {
      v26 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v27 = __ldrex(v26);
        v28 = v27 - 1;
      }
      while ( __strex(v28, v26) );
      if ( !v28 )
        goto LABEL_52;
    }
LABEL_37:
    if ( v19 )
      return v19;
LABEL_18:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
