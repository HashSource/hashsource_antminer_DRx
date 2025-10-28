const char *__fastcall stratum_handle_method_base(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  double *v6; // r0
  double *v7; // r4
  _DWORD *v8; // r0
  const char *v9; // r5
  int v10; // r9
  int v11; // r0
  _BYTE *v12; // r1
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  char v17[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v18[160]; // [sp+70h] [bp-10A4h] BYREF
  char v19[4100]; // [sp+110h] [bp-1004h] BYREF

  v6 = json_loads(a3, 0, v17);
  v7 = v6;
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, 1352332, *(_DWORD *)v17, v18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_method_base",
      26,
      65,
      100,
      v19);
    return 0;
  }
  v8 = (_DWORD *)json_object_get(v6, "method");
  v9 = (const char *)json_string_value(v8);
  if ( !v9 )
  {
LABEL_9:
    if ( *((_DWORD *)v7 + 1) != -1 )
      goto LABEL_10;
    return v9;
  }
  v10 = json_object_get(v7, "params");
  if ( !v10 )
    v10 = json_object_get(v7, "result");
  json_object_get(v7, "id");
  if ( !strcasecmp(v9, "mining.notify") )
  {
    v11 = a1[12](a1, a2, v10);
    goto LABEL_7;
  }
  if ( !strcasecmp(v9, "mining.set_difficulty") || !strcasecmp(v9, "mining.set_target") )
  {
    v9 = (const char *)a1[14](a1, a2, v10);
    goto LABEL_9;
  }
  if ( strcasecmp(v9, "mining.set_extranonce") )
  {
    V_LOCK();
    v9 = 0;
    logfmt_raw(v19, 0x1000u, 0, 1352468, a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_method_base",
      26,
      105,
      80,
      v19);
    goto LABEL_9;
  }
  v11 = a1[13](a1, a2, v10);
LABEL_7:
  v9 = (const char *)v11;
  v12 = (_BYTE *)(a2 + 1916);
  if ( v11 )
  {
    pool_tset(a2, v12, 1);
    goto LABEL_9;
  }
  pool_tclear(a2, v12, 0);
  if ( *((_DWORD *)v7 + 1) == -1 )
    return v9;
LABEL_10:
  v13 = (unsigned int *)v7 + 1;
  __dmb(0xBu);
  do
  {
    v14 = __ldrex(v13);
    v15 = v14 - 1;
  }
  while ( __strex(v15, v13) );
  if ( v15 )
    return v9;
  json_delete(v7);
  return v9;
}
