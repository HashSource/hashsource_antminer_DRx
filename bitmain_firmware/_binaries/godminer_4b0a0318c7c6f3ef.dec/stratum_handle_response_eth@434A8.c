int __fastcall stratum_handle_response_eth(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  _DWORD *v6; // r6
  _DWORD *v7; // r8
  _DWORD *v8; // r9
  _BOOL4 v9; // r10
  int v10; // r5
  _BOOL4 v11; // r6
  char *v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  _DWORD *v17; // r0
  char *v18; // r0
  char v19[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v20[160]; // [sp+70h] [bp-10A0h] BYREF
  char v21[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v19);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1352332, *(_DWORD *)v19, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_handle_response_eth",
      27,
      1118,
      40,
      v21);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = (_DWORD *)json_object_get(v5, "id");
  if ( v6 && *v6 != 7 )
    json_false();
  if ( v6 == json_true() )
  {
    if ( !v7 || *v7 != 7 )
    {
      v10 = *(unsigned __int8 *)(a3 + 1656);
      v9 = v7 == 0;
      if ( *(_BYTE *)(a3 + 1656) )
        goto LABEL_9;
LABEL_23:
      if ( v6 )
      {
        v17 = json_array_get(v7, 1u);
        v18 = (char *)json_string_value(v17);
        share_result(v9, v10, v18, (double *)a3);
        v10 = 1;
      }
      goto LABEL_17;
    }
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(unsigned __int8 *)(a3 + 1656);
  if ( !*(_BYTE *)(a3 + 1656) )
    goto LABEL_23;
LABEL_9:
  if ( !v8 || *v8 == 7 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1353016, "stratum_handle_response_eth");
    V_UNLOCK();
    v10 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_handle_response_eth",
      27,
      1147,
      40,
      v21);
  }
  else
  {
    if ( v6 )
      v11 = 0;
    else
      v11 = v7 == 0;
    if ( v11 )
    {
      v10 = 0;
    }
    else
    {
      v12 = json_dumps(v7, 24576);
      share_result(v9, 0, v12, (double *)a3);
    }
  }
LABEL_17:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v13 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( !v15 )
      json_delete(v5);
  }
  return v10;
}
