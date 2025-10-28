int __fastcall pre_stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r6
  const char *v11; // r0
  bool v12; // zf
  _DWORD *v13; // r0
  const char *v14; // r6
  int v15; // r7
  int v16; // r6
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  _DWORD *v21; // r6
  _DWORD *v22; // r5
  _DWORD *v23; // r0
  int v24; // r0
  __int64 v25; // r10
  _BYTE *v26; // r1
  char v27[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v28[160]; // [sp+70h] [bp-10A4h] BYREF
  char v29[4100]; // [sp+110h] [bp-1004h] BYREF

  v8 = json_loads(a3, 0, v27);
  v9 = v8;
  if ( v8 )
  {
    v10 = (_DWORD *)json_object_get(v8, "jsonrpc");
    v11 = (const char *)json_string_value(v10);
    v12 = v10 == 0;
    if ( v10 )
      v12 = v11 == 0;
    if ( !v12 && !strcasecmp(v11, "2.0") )
    {
      *(_BYTE *)(a2 + 1656) = 1;
      v23 = (_DWORD *)json_object_get(v9, "params");
      if ( !v23 )
        v23 = (_DWORD *)json_object_get(v9, "result");
      v16 = sub_42420(v23, a2);
      if ( !v16 )
      {
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, 1358016, a3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_eth/frontend_eth.c",
          164,
          "pre_stratum_handle_method_eth",
          29,
          1092,
          80,
          v29);
        goto LABEL_31;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 1656) = 0;
      v13 = (_DWORD *)json_object_get(v9, "method");
      v14 = (const char *)json_string_value(v13);
      if ( v14 )
      {
        v15 = json_object_get(v9, "params");
        if ( !v15 )
          v15 = json_object_get(v9, "result");
        json_object_get(v9, "id");
        if ( !strcasecmp(v14, "mining.notify") )
        {
          v24 = json_object_get(v9, "height");
          v25 = json_integer_value(v24);
          if ( v25 )
          {
            v16 = *(_DWORD *)(a2 + 1588);
            if ( !v16 )
            {
              v16 = (int)calloc(1u, 0x6Bu);
              *(_DWORD *)(a2 + 1588) = v16;
              if ( !v16 )
              {
                printf(aInvalidPointer, 1359052);
                return v16;
              }
            }
            *(_QWORD *)(v16 + 96) = v25;
          }
          v16 = a1[12](a1, a2, v15);
          v26 = (_BYTE *)(a2 + 1916);
          if ( v16 )
          {
            *a4 = 1360032;
            pool_tset(a2, v26, 1);
            goto LABEL_12;
          }
          goto LABEL_35;
        }
        if ( !strcasecmp(v14, "mining.set_difficulty") || !strcasecmp(v14, "mining.set_target") )
        {
          *a4 = 1358044;
          v16 = a1[14](a1, a2, v15);
          goto LABEL_12;
        }
        if ( !strcasecmp(v14, "mining.set_extranonce") )
        {
          v16 = a1[13](a1, a2, v15);
          v26 = (_BYTE *)(a2 + 1916);
          if ( v16 )
          {
            pool_tset(a2, v26, 1);
LABEL_12:
            if ( *((_DWORD *)v9 + 1) != -1 )
            {
              v17 = (unsigned int *)v9 + 1;
              __dmb(0xBu);
              do
              {
                v18 = __ldrex(v17);
                v19 = v18 - 1;
              }
              while ( __strex(v19, v17) );
              if ( !v19 )
                json_delete(v9);
            }
            return v16;
          }
LABEL_35:
          pool_tclear(a2, v26, 0);
          goto LABEL_12;
        }
      }
      v21 = (_DWORD *)json_object_get(v9, "result");
      json_object_get(v9, "error");
      v22 = (_DWORD *)json_object_get(v9, "id");
      if ( v21 && *v21 != 7 && v21 != json_false() )
        json_string_value(v21);
      json_true();
      if ( !v22 || *v22 == 7 || json_integer_value((int)v22) != 2 )
      {
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, 1361888, "pre_stratum_handle_method_eth");
        V_UNLOCK();
        v16 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_eth/frontend_eth.c",
          164,
          "pre_stratum_handle_method_eth",
          29,
          1084,
          40,
          v29);
        goto LABEL_12;
      }
    }
    v16 = 1;
LABEL_31:
    *a4 = "notify";
    goto LABEL_12;
  }
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, 1357880, *(_DWORD *)v27, v28);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth/frontend_eth.c",
    164,
    "pre_stratum_handle_method_eth",
    29,
    995,
    100,
    v29);
  return 0;
}
