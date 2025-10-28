int __fastcall stratum_handle_response_hns(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  _DWORD *v6; // r5
  _DWORD *v7; // r7
  int v8; // r6
  _BYTE *v9; // r0
  _BOOL4 v10; // r9
  int v11; // r0
  char *v12; // r2
  _DWORD *v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  bool v18; // zf
  char *v19; // r2
  char v20[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v21[160]; // [sp+70h] [bp-10A4h] BYREF
  char v22[4100]; // [sp+110h] [bp-1004h] BYREF

  v4 = json_loads(a2, 0, v20);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, 1357880, *(_DWORD *)v20, v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_hns/frontend_hns.c",
      164,
      "stratum_handle_response_hns",
      27,
      381,
      40,
      v22);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = json_object_get(v5, "id");
  if ( !v6 || *v6 == 7 || v6 == json_false() )
    goto LABEL_15;
  v9 = json_string_value(v6);
  v10 = (_BOOL4)v9;
  if ( !v9 )
    goto LABEL_16;
  if ( *v9 == 111 && v9[1] == 107 )
  {
    v11 = (unsigned __int8)v9[2];
    v10 = (_BOOL4)v7;
    if ( v7 )
      v10 = 1;
    if ( v11 )
      v10 = 0;
    if ( v10 )
      v10 = *v7 == 7;
  }
  else
  {
LABEL_15:
    v10 = 0;
  }
LABEL_16:
  if ( v6 == json_true() )
  {
    if ( v7 )
    {
      if ( *v7 == 7 )
        v10 = 1;
      if ( v8 )
        goto LABEL_18;
      goto LABEL_43;
    }
    v10 = 1;
  }
  if ( v8 )
  {
LABEL_18:
    v8 = *(unsigned __int8 *)(a3 + 1656);
    if ( *(_BYTE *)(a3 + 1656) )
    {
      v18 = v6 == 0;
      if ( !v6 )
        v18 = v7 == 0;
      if ( v18 )
      {
        v8 = 0;
      }
      else
      {
        if ( v7 )
          v19 = (char *)json_string_value(v7);
        else
          v19 = 0;
        share_result(v10, 0, v19, (double *)a3);
      }
    }
    else if ( v6 )
    {
      if ( v7 )
      {
        v13 = json_array_get(v7, 1u);
        v12 = (char *)json_string_value(v13);
      }
      else
      {
        v12 = 0;
      }
      v8 = 1;
      share_result(v10, 0, v12, (double *)a3);
    }
    goto LABEL_24;
  }
LABEL_43:
  V_LOCK();
  logfmt_raw(v22, 0x1000u, v8, 1358564, 1362620);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_hns/frontend_hns.c",
    164,
    "stratum_handle_response_hns",
    27,
    405,
    20,
    v22);
LABEL_24:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v14 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v15 = __ldrex(v14);
      v16 = v15 - 1;
    }
    while ( __strex(v16, v14) );
    if ( !v16 )
      json_delete(v5);
  }
  return v8;
}
