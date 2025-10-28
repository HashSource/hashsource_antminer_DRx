int __fastcall stratum_subscribe_zec(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r11
  char *v6; // r0
  const char *v7; // r10
  char *v8; // r6
  size_t v9; // r9
  const char *v10; // r3
  int v11; // t1
  int v12; // r2
  int v13; // r0
  int v14; // r1
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  int v18; // r9
  int v20; // r0
  void *v21; // r9
  _DWORD *v22; // r10
  int v23; // r0
  int v24; // r9
  _BOOL4 v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  const char *v29; // r0
  int v30; // r10
  int v31; // [sp+4h] [bp-11B0h]
  double *v32; // [sp+2Ch] [bp-1188h]
  _DWORD *v33; // [sp+38h] [bp-117Ch]
  char dest[16]; // [sp+40h] [bp-1174h] BYREF
  _DWORD v35[7]; // [sp+50h] [bp-1164h] BYREF
  int v36; // [sp+6Ch] [bp-1148h]
  char v37[64]; // [sp+74h] [bp-1140h] BYREF
  char v38[92]; // [sp+B4h] [bp-1100h] BYREF
  _BYTE v39[160]; // [sp+110h] [bp-10A4h] BYREF
  char v40[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "pool %d is jsonrpc_2, no need to subscribe", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_subscribe_zec",
      21,
      167,
      20,
      v40);
    return v2;
  }
  v5 = (double *)*((unsigned __int8 *)a2 + 1656);
  v32 = v5;
  do
  {
    v6 = (char *)malloc(0x80u);
    v7 = (const char *)a2[3];
    v8 = v6;
    v9 = strlen(v7) - 1;
    v10 = &v7[v9];
    if ( v7[v9] != 58 )
    {
      do
      {
        v11 = *(unsigned __int8 *)--v10;
        --v9;
      }
      while ( v11 != 58 );
    }
    strncpy(v37, v7, v9);
    v37[v9] = 0;
    strcpy(dest, &v7[v9 + 1]);
    if ( v2 )
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null, \"%s\", \"%s\"]}",
        v37,
        dest);
    else
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null, \"%s\", \"%s\"]}",
        v37,
        dest);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8) )
    {
      V_LOCK();
      logfmt_raw(v40, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      v12 = 182;
      v13 = g_zc;
      LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c";
LABEL_9:
      HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c" >> 16;
      zlog(v13, v14, 164, "stratum_subscribe_zec", 21, v12, 100, v40);
LABEL_10:
      if ( !v8 )
      {
        if ( !v5 )
          goto LABEL_16;
        if ( *((_DWORD *)v5 + 1) == -1 )
          goto LABEL_16;
        v15 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v16 = __ldrex(v15);
          v17 = v16 - 1;
        }
        while ( __strex(v17, v15) );
        if ( v17 )
          goto LABEL_16;
        v18 = 0;
LABEL_51:
        json_delete(v5);
        goto LABEL_35;
      }
      free(v8);
      if ( !v5 )
        goto LABEL_16;
      v18 = 0;
      goto LABEL_31;
    }
    if ( !socket_full(a2[9], 30) )
    {
      V_LOCK();
      V_INT((int)v35, "poolno", *a2);
      logfmt_raw(
        v40,
        0x1000u,
        0,
        v36,
        v35[0],
        v35[1],
        v35[2],
        v35[3],
        v35[4],
        v35[5],
        v35[6],
        v36,
        "stratum_subscribe timed out");
      V_UNLOCK();
      v13 = g_zc;
      v12 = 188;
      LOWORD(v14) = 17856;
      goto LABEL_9;
    }
    v20 = (*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v21 = (void *)v20;
    v32 = (double *)v20;
    if ( !v20 )
      goto LABEL_10;
    v5 = json_loads(v20, 0, v38);
    free(v21);
    if ( !v5 )
    {
      V_LOCK();
      logfmt_raw(v40, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v38, v39);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_zec/frontend_zec.c",
        164,
        "stratum_subscribe_zec",
        21,
        201,
        100,
        v40);
      if ( v8 )
        free(v8);
      goto LABEL_16;
    }
    v22 = (_DWORD *)json_object_get(v5, "result");
    v33 = (_DWORD *)json_object_get(v5, "error");
    v23 = json_object_get(v5, "id");
    v24 = json_integer_value(v23);
    v25 = v22 == 0;
    if ( v24 != 1 )
      v25 = 1;
    if ( !v25 && *v22 != 7 )
    {
      if ( !v33 || *v33 == 7 )
      {
        v18 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v22, 1);
        if ( v18 )
        {
          v29 = (const char *)a2[8];
          a2[480] = 2;
          if ( v29 )
          {
            if ( strstr(v29, "nicehash") )
            {
              a2[480] = 3;
              sprintf(v8, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v30 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8);
              if ( v30 )
              {
                v18 = socket_full(a2[9], 30);
                if ( v18 )
                {
                  (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                  free(v8);
                  goto LABEL_31;
                }
                v18 = v30;
              }
LABEL_46:
              free(v8);
              goto LABEL_31;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_44:
          v8 = json_dumps(v33, 3);
          goto LABEL_45;
        }
LABEL_29:
        v18 = v2;
      }
      if ( v8 )
        goto LABEL_46;
      goto LABEL_31;
    }
    if ( !v2 )
      goto LABEL_29;
    if ( v33 )
      goto LABEL_44;
    v8 = (char *)malloc(0x11u);
    if ( v8 )
      strcpy(v8, "(unknown reason)");
LABEL_45:
    V_LOCK();
    v31 = v24;
    v18 = 0;
    logfmt_raw(v40, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v8, v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_subscribe_zec",
      21,
      218,
      100,
      v40);
    if ( v8 )
      goto LABEL_46;
LABEL_31:
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
        goto LABEL_51;
    }
LABEL_35:
    if ( v18 )
      return v18;
LABEL_16:
    if ( v32 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
