int __fastcall stratum_handle_response_zec(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r5
  int *v6; // r6
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _BOOL4 v9; // r3
  _BOOL4 v10; // r4
  int v11; // r6
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v16; // r3
  char *v17; // r0
  _DWORD *v18; // r0
  char *v19; // r0
  char v20[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v21[160]; // [sp+70h] [bp-10A0h] BYREF
  char v22[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v20);
  v5 = v4;
  if ( v4 )
  {
    v6 = (int *)json_object_get(v4, "result");
    v7 = (_DWORD *)json_object_get(v5, "error");
    v8 = (_DWORD *)json_object_get(v5, "id");
    v9 = v7 == 0;
    if ( !v6 )
      v9 = 1;
    if ( v8 )
      v10 = v9;
    else
      v10 = 1;
    if ( v10 || *v8 != 3 )
    {
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, 1366372, "stratum_handle_response_zec");
      V_UNLOCK();
      v11 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_zec/frontend_zec.c",
        164,
        "stratum_handle_response_zec",
        27,
        279,
        20,
        v22);
    }
    else
    {
      v16 = *v6;
      v11 = *(unsigned __int8 *)(a3 + 1656);
      if ( v16 == 5 )
        v10 = *v7 == 7;
      if ( *(_BYTE *)(a3 + 1656) )
      {
        v17 = (char *)json_string_value(v7);
        share_result(v10, 0, v17, (double *)a3);
      }
      else
      {
        if ( json_integer_value((int)v8) >= 3 )
        {
          v18 = json_array_get(v7, 1u);
          v19 = (char *)json_string_value(v18);
          share_result(v10, 0, v19, (double *)a3);
        }
        v11 = 1;
      }
    }
    if ( *((_DWORD *)v5 + 1) == -1 )
      return v11;
    v12 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v13 = __ldrex(v12);
      v14 = v13 - 1;
    }
    while ( __strex(v14, v12) );
    if ( v14 )
    {
      return v11;
    }
    else
    {
      json_delete(v5);
      return v11;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, 1357880, *(_DWORD *)v20, v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_handle_response_zec",
      27,
      269,
      40,
      v22);
    return 0;
  }
}
