int __fastcall stratum_handle_response_base(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  _DWORD *v6; // r5
  _DWORD *v7; // r8
  _DWORD *v8; // r7
  _BYTE *v9; // r0
  _BOOL4 v10; // r9
  int v11; // r0
  int v12; // r6
  bool v13; // zf
  char *v14; // r2
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  char *v19; // r2
  _DWORD *v20; // r0
  char v21[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v22[160]; // [sp+70h] [bp-10A0h] BYREF
  char v23[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v21);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, 1352332, *(_DWORD *)v21, v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_response_base",
      28,
      321,
      40,
      v23);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = (_DWORD *)json_object_get(v5, "id");
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
      if ( !v8 )
        goto LABEL_32;
      goto LABEL_18;
    }
    v10 = 1;
  }
  if ( !v8 )
  {
LABEL_32:
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, 1353016, "stratum_handle_response_base");
    V_UNLOCK();
    v12 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_response_base",
      28,
      345,
      20,
      v23);
    goto LABEL_33;
  }
LABEL_18:
  if ( *v8 == 7 )
    goto LABEL_32;
  v12 = *(unsigned __int8 *)(a3 + 1656);
  if ( *(_BYTE *)(a3 + 1656) )
  {
    v13 = v6 == 0;
    if ( !v6 )
      v13 = v7 == 0;
    if ( !v13 )
    {
      if ( v7 )
        v14 = (char *)json_string_value(v7);
      else
        v14 = 0;
      share_result(v10, 0, v14, (double *)a3);
      goto LABEL_33;
    }
LABEL_46:
    v12 = 0;
    goto LABEL_33;
  }
  if ( !v6 || json_integer_value((int)v8) < 4 )
    goto LABEL_46;
  if ( v7 )
  {
    v20 = json_array_get(v7, 1u);
    v19 = (char *)json_string_value(v20);
  }
  else
  {
    v19 = 0;
  }
  v12 = 1;
  share_result(v10, 0, v19, (double *)a3);
LABEL_33:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v15 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v16 = __ldrex(v15);
      v17 = v16 - 1;
    }
    while ( __strex(v17, v15) );
    if ( !v17 )
      json_delete(v5);
  }
  return v12;
}
