int __fastcall stratum_authorize_eth(int a1, int *a2)
{
  char *v4; // r11
  const char *v5; // r10
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r9
  int v9; // r10
  void *v11; // r6
  int v12; // r0
  double *v13; // r5
  _DWORD *v14; // r11
  _DWORD *v15; // r6
  int v16; // r0
  _DWORD *v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  _DWORD *v21; // [sp+24h] [bp-1130h]
  const char *v22; // [sp+2Ch] [bp-1128h]
  _DWORD v23[7]; // [sp+30h] [bp-1124h] BYREF
  int v24; // [sp+4Ch] [bp-1108h]
  _DWORD s[23]; // [sp+54h] [bp-1100h] BYREF
  _BYTE v26[160]; // [sp+B0h] [bp-10A4h] BYREF
  time_t v27[4]; // [sp+150h] [bp-1004h] BYREF
  unsigned __int8 v28; // [sp+162h] [bp-FF2h]
  unsigned __int8 v29; // [sp+163h] [bp-FF1h]
  unsigned __int8 v30; // [sp+164h] [bp-FF0h]
  unsigned __int8 v31; // [sp+165h] [bp-FEFh]
  unsigned __int8 v32; // [sp+166h] [bp-FEEh]
  unsigned __int8 v33; // [sp+167h] [bp-FEDh]

  if ( a2[6] )
  {
    V_LOCK();
    logfmt_raw((char *)v27, 0x1000u, 0, 1260040, a2[6]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_authorize_eth",
      21,
      379,
      20,
      v27);
    v4 = (char *)a2[6];
    goto LABEL_3;
  }
  V_LOCK();
  logfmt_raw((char *)v27, 0x1000u, 0, 1259904);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth/frontend_eth.c",
    164,
    "stratum_authorize_eth",
    21,
    361,
    20,
    v27);
  memset(s, 0, 32);
  v12 = socket(2, 1, 0);
  if ( v12 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v27, "eth0");
    if ( ioctl(v12, 0x8927u, v27) >= 0 )
    {
      sprintf((char *)s, "%02X%02X%02X%02X%02X%02X", v28, v29, v30, v31, v32, v33);
      v4 = _strdup((const char *)s);
      a2[6] = (int)v4;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK();
  logfmt_raw((char *)v27, 0x1000u, 0, 1260000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth/frontend_eth.c",
    164,
    "stratum_authorize_eth",
    21,
    370,
    20,
    v27);
  time(v27);
  sprintf((char *)s, "%d", v27[0]);
  v4 = _strdup((const char *)s);
  a2[6] = (int)v4;
LABEL_3:
  v5 = (const char *)a2[4];
  v6 = strlen(v5);
  v22 = (const char *)a2[5];
  v7 = strlen(v22);
  v8 = (char *)malloc(v6 + v7 + 128);
  sprintf(
    v8,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v4,
    v5,
    v22,
    2);
  v9 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8);
  if ( !v9 )
  {
LABEL_4:
    free(v8);
    return v9;
  }
  while ( 1 )
  {
    v11 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    if ( !v11 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v11);
  }
  v13 = json_loads((int)v11, 0, (char *)s);
  free(v11);
  if ( !v13 )
  {
    V_LOCK();
    v9 = 0;
    logfmt_raw((char *)v27, 0x1000u, 0, 1255876, s[0], v26);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_authorize_eth",
      21,
      404,
      100,
      v27);
    free(v8);
    return v9;
  }
  v14 = (_DWORD *)json_object_get(v13, "result");
  v15 = (_DWORD *)json_object_get(v13, "error");
  v16 = json_object_get(v13, "id");
  json_integer_value(v16);
  if ( v14 && *v14 != 6 && (!v15 || *v15 == 7) )
  {
    a2[480] = 40;
  }
  else
  {
    V_LOCK();
    v9 = 0;
    V_INT((int)v23, "poolno", *a2);
    v17 = json_array_get(v15, 1u);
    v21 = json_string_value(v17);
    logfmt_raw(
      (char *)v27,
      0x1000u,
      0,
      v24,
      v23[0],
      v23[1],
      v23[2],
      v23[3],
      v23[4],
      v23[5],
      v23[6],
      v24,
      "authorize failed reason: %s",
      v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_authorize_eth",
      21,
      415,
      80,
      v27);
  }
  free(v8);
  if ( *((_DWORD *)v13 + 1) == -1 )
    return v9;
  v18 = (unsigned int *)v13 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v9;
  json_delete(v13);
  return v9;
}
