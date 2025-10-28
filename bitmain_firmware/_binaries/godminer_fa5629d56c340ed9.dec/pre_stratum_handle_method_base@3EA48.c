const char *__fastcall pre_stratum_handle_method_base(int a1, int a2, int a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r0
  const char *v11; // r5
  int v12; // r10
  _BYTE *v13; // r1
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  char v18[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v19[160]; // [sp+70h] [bp-10A0h] BYREF
  char v20[4096]; // [sp+110h] [bp-1000h] BYREF

  v8 = json_loads(a3, 0, v18);
  v9 = v8;
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, 1357880, *(_DWORD *)v18, v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "pre_stratum_handle_method_base",
      30,
      123,
      100,
      v20);
    return 0;
  }
  v10 = (_DWORD *)json_object_get(v8, "method");
  v11 = (const char *)json_string_value(v10);
  if ( !v11 )
  {
LABEL_8:
    if ( *((_DWORD *)v9 + 1) != -1 )
      goto LABEL_9;
    return v11;
  }
  v12 = json_object_get(v9, "params");
  if ( !v12 )
    v12 = json_object_get(v9, "result");
  json_object_get(v9, "id");
  if ( strcasecmp(v11, "mining.notify") )
  {
    if ( !strcasecmp(v11, "mining.set_difficulty") || !strcasecmp(v11, "mining.set_target") )
    {
      *a4 = 1358044;
      v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 56))(a1, a2, v12);
    }
    else
    {
      V_LOCK();
      v11 = 0;
      logfmt_raw(v20, 0x1000u, 0, 1358016, a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_base.c",
        152,
        "pre_stratum_handle_method_base",
        30,
        156,
        80,
        v20);
    }
    goto LABEL_8;
  }
  v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 48))(a1, a2, v12);
  v13 = (_BYTE *)(a2 + 1916);
  if ( v11 )
  {
    *a4 = 1360032;
    pool_tset(a2, v13, 1);
    goto LABEL_8;
  }
  pool_tclear(a2, v13, 0);
  if ( *((_DWORD *)v9 + 1) == -1 )
    return v11;
LABEL_9:
  v14 = (unsigned int *)v9 + 1;
  __dmb(0xBu);
  do
  {
    v15 = __ldrex(v14);
    v16 = v15 - 1;
  }
  while ( __strex(v16, v14) );
  if ( v16 )
    return v11;
  json_delete(v9);
  return v11;
}
