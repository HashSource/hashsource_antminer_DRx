int __fastcall stratum_authorize_base(int a1, _DWORD *a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r0
  int v9; // r2
  char *v10; // r7
  int v11; // r8
  void *v13; // r6
  double *v14; // r5
  _DWORD *v15; // r9
  _DWORD *v16; // r6
  int v17; // r0
  int v18; // r0
  _BOOL4 v19; // r3
  int v20; // r10
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  char v24[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v25[160]; // [sp+70h] [bp-10A0h] BYREF
  char v26[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = (const char *)a2[4];
  v5 = (const char *)a2[5];
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 80);
  v9 = a2[480];
  v10 = v8;
  a2[480] = v9 + 1;
  sprintf(v8, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", v9, v2, v5);
  v11 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v10);
  if ( !v11 )
  {
LABEL_2:
    free(v10);
    return v11;
  }
  while ( 1 )
  {
    v13 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    if ( !v13 )
    {
      v11 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v13);
  }
  v14 = json_loads((int)v13, 0, v24);
  free(v13);
  if ( !v14 )
  {
    v11 = 0;
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v24, v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_authorize_base",
      22,
      279,
      100,
      v26);
    free(v10);
    return v11;
  }
  v15 = (_DWORD *)json_object_get(v14, "result");
  v16 = (_DWORD *)json_object_get(v14, "error");
  v17 = json_object_get(v14, "id");
  v18 = json_integer_value(v17);
  v19 = v15 == 0;
  v20 = v18;
  if ( a2[480] - 1 != v18 )
    v19 = 1;
  if ( v19 || *v15 == 6 || v16 && *v16 != 7 )
  {
    V_LOCK();
    v11 = 0;
    logfmt_raw(v26, 0x1000u, 0, "Stratum authentication failed, req_id=%d", v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_authorize_base",
      22,
      289,
      100,
      v26);
  }
  free(v10);
  if ( *((_DWORD *)v14 + 1) == -1 )
    return v11;
  v21 = (unsigned int *)v14 + 1;
  __dmb(0xBu);
  do
  {
    v22 = __ldrex(v21);
    v23 = v22 - 1;
  }
  while ( __strex(v23, v21) );
  if ( v23 )
    return v11;
  json_delete(v14);
  return v11;
}
