int __fastcall stratum_authorize_rvn(int a1, int *a2, void *a3)
{
  int v3; // r5
  double *v6; // r11
  int v8; // r7
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r7
  const char *v13; // r8
  size_t v14; // r6
  size_t v15; // r0
  char *v16; // r6
  void *v17; // r0
  int v18; // r0
  _BOOL4 v19; // r8
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  char *v28; // r0
  _DWORD *v29; // [sp+2Ch] [bp-1138h]
  _DWORD *v30; // [sp+34h] [bp-1130h]
  int v31; // [sp+38h] [bp-112Ch]
  int v32; // [sp+40h] [bp-1124h] BYREF
  int v33; // [sp+44h] [bp-1120h]
  int v34; // [sp+48h] [bp-111Ch]
  int v35; // [sp+4Ch] [bp-1118h]
  int v36; // [sp+50h] [bp-1114h]
  int v37; // [sp+54h] [bp-1110h]
  int v38; // [sp+58h] [bp-110Ch]
  int v39; // [sp+5Ch] [bp-1108h]
  char v40[92]; // [sp+64h] [bp-1100h] BYREF
  _BYTE v41[160]; // [sp+C0h] [bp-10A4h] BYREF
  char v42[4100]; // [sp+160h] [bp-1004h] BYREF

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
      logfmt_raw(v42, 0x1000u, 0, 1352748);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_authorize_rvn",
        21,
        191,
        100,
        v42);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
LABEL_3:
      if ( *((_DWORD *)v6 + 1) != -1 )
      {
        v8 = 0;
        goto LABEL_5;
      }
      goto LABEL_10;
    }
    v17 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    a3 = v17;
    if ( !v17 )
      break;
    v6 = json_loads((int)v17, 0, v40);
    free(a3);
    if ( v6 )
    {
      v30 = (_DWORD *)json_object_get(v6, "result");
      v29 = (_DWORD *)json_object_get(v6, "error");
      v18 = json_object_get(v6, "id");
      v31 = json_integer_value(v18);
      v19 = v30 == 0;
      if ( v31 != 2 )
        v19 = 1;
      if ( v19 || *v30 == 6 )
      {
        V_LOCK();
        V_INT((int)&v32, "poolno", *a2);
        v26 = json_array_get(v29, 1u);
        v27 = json_string_value(v26);
        logfmt_raw(v42, 0x1000u, 0, v39, v32, v33, v34, v35, v36, v37, v38, v39, 1356624, v27);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          164,
          "stratum_authorize_rvn",
          21,
          215,
          80,
          v42);
        if ( !v3 )
        {
LABEL_36:
          v8 = 0;
          goto LABEL_37;
        }
        if ( !v29 )
        {
          v28 = (char *)malloc(0x11u);
          if ( v28 )
          {
            v16 = v28;
            v8 = 0;
            strcpy(v28, "(unknown reason)");
            V_LOCK();
            logfmt_raw(v42, 0x1000u, 0, 1352796, v16, v31);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              164,
              "stratum_authorize_rvn",
              21,
              222,
              100,
              v42);
LABEL_37:
            free(v16);
            if ( *((_DWORD *)v6 + 1) != -1 )
            {
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
            }
            if ( v8 )
              return v8;
            goto LABEL_10;
          }
          V_LOCK();
          v8 = 0;
          logfmt_raw(v42, 0x1000u, 0, 1352796, 0, v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            164,
            "stratum_authorize_rvn",
            21,
            222,
            100,
            v42);
          if ( *((_DWORD *)v6 + 1) == -1 )
            return v8;
LABEL_27:
          v22 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v23 = __ldrex(v22);
            v24 = v23 - 1;
          }
          while ( __strex(v24, v22) );
          if ( !v24 )
            json_delete(v6);
          goto LABEL_10;
        }
      }
      else
      {
        if ( !v29 || *v29 == 7 )
          goto LABEL_37;
        V_LOCK();
        V_INT((int)&v32, "poolno", *a2);
        v20 = json_array_get(v29, 1u);
        v21 = json_string_value(v20);
        logfmt_raw(v42, 0x1000u, 0, v39, v32, v33, v34, v35, v36, v37, v38, v39, 1356624, v21);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          164,
          "stratum_authorize_rvn",
          21,
          215,
          80,
          v42);
        if ( !v3 )
          goto LABEL_36;
      }
      v16 = json_dumps(v29, 3);
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, 1352796, v16, v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_authorize_rvn",
        21,
        222,
        100,
        v42);
      if ( v16 )
        goto LABEL_36;
      if ( *((_DWORD *)v6 + 1) != -1 )
        goto LABEL_27;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, 1352332, *(_DWORD *)v40, v41);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_authorize_rvn",
        21,
        205,
        100,
        v42);
      free(v16);
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  free(v16);
  if ( v6 )
    goto LABEL_3;
  return 0;
}
