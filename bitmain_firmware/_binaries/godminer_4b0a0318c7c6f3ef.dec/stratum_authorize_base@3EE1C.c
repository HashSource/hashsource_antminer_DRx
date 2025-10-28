int __fastcall stratum_authorize_base(int a1, int a2)
{
  const char *v4; // r9
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r7
  int v8; // r8
  void *v10; // r6
  double *v11; // r5
  _DWORD *v12; // r9
  _DWORD *v13; // r6
  int v14; // r0
  int v15; // r0
  _BOOL4 v16; // r3
  int v17; // r10
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  char v21[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v22[160]; // [sp+70h] [bp-10A0h] BYREF
  char v23[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = *(const char **)(a2 + 20);
  v5 = strlen(*(const char **)(a2 + 16));
  v6 = strlen(v4);
  v7 = (char *)malloc(v5 + v6 + 80);
  ++*(_DWORD *)(a2 + 1920);
  sprintf(v7, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}");
  v8 = (*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v7);
  if ( !v8 )
  {
LABEL_2:
    free(v7);
    return v8;
  }
  while ( 1 )
  {
    v10 = (void *)(*(int (__fastcall **)(int))(a1 + 8))(a2);
    if ( !v10 )
    {
      v8 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v10);
  }
  v11 = json_loads((int)v10, 0, v21);
  free(v10);
  if ( !v11 )
  {
    v8 = 0;
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, 1352332, *(_DWORD *)v21, v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_authorize_base",
      22,
      283,
      100,
      v23);
    free(v7);
    return v8;
  }
  v12 = (_DWORD *)json_object_get(v11, "result");
  v13 = (_DWORD *)json_object_get(v11, "error");
  v14 = json_object_get(v11, "id");
  v15 = json_integer_value(v14);
  v16 = v12 == 0;
  v17 = v15;
  if ( *(_DWORD *)(a2 + 1920) - 1 != v15 )
    v16 = 1;
  if ( v16 || *v12 == 6 || v13 && *v13 != 7 )
  {
    V_LOCK();
    v8 = 0;
    logfmt_raw(v23, 0x1000u, 0, 1352972, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_authorize_base",
      22,
      293,
      100,
      v23);
  }
  free(v7);
  if ( *((_DWORD *)v11 + 1) == -1 )
    return v8;
  v18 = (unsigned int *)v11 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v8;
  json_delete(v11);
  return v8;
}
