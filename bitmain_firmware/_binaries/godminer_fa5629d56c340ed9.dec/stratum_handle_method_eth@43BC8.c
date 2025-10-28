int __fastcall stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  double *v5; // r0
  double *v6; // r4
  int v7; // r0
  int v8; // r8
  _DWORD *v9; // r0
  int v10; // r5
  bool v11; // zf
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v16; // r0
  const char *v17; // r8
  int v18; // r9
  int v19; // r0
  __int64 v20; // r10
  int v21; // r0
  _BYTE *v22; // r1
  _QWORD *v23; // r0
  char v24[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v25[160]; // [sp+70h] [bp-10A4h] BYREF
  char v26[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = json_loads(a3, 0, v24);
  v6 = v5;
  if ( v5 )
  {
    v7 = json_object_get(v5, "id");
    v8 = json_integer_value(v7);
    v9 = (_DWORD *)json_object_get(v6, "result");
    v10 = *(unsigned __int8 *)(a2 + 1656);
    if ( *(_BYTE *)(a2 + 1656) )
    {
      if ( !v9 )
        goto LABEL_7;
      v11 = *v9 == 1;
      if ( *v9 == 1 )
        v11 = v8 == 0;
      if ( !v11 )
        goto LABEL_7;
      v21 = sub_42420(v9, a2);
      goto LABEL_23;
    }
    v16 = (_DWORD *)json_object_get(v6, "method");
    v17 = (const char *)json_string_value(v16);
    if ( v17 )
    {
      v18 = json_object_get(v6, "params");
      if ( !v18 )
        v18 = json_object_get(v6, "result");
      if ( !strcasecmp(v17, "mining.notify") )
      {
        v19 = json_object_get(v6, "height");
        v20 = json_integer_value(v19);
        if ( v20 )
        {
          v23 = *(_QWORD **)(a2 + 1588);
          if ( !v23 )
          {
            v23 = calloc(1u, 0x6Bu);
            *(_DWORD *)(a2 + 1588) = v23;
            if ( !v23 )
            {
              printf(aInvalidPointer, 1359052);
              return v10;
            }
          }
          v23[12] = v20;
        }
        v21 = a1[12](a1, a2, v18);
        goto LABEL_23;
      }
      if ( !strcasecmp(v17, "mining.set_difficulty") || !strcasecmp(v17, "mining.set_target") )
      {
        v10 = a1[14](a1, a2, v18);
        goto LABEL_8;
      }
      if ( !strcasecmp(v17, "mining.set_extranonce") )
      {
        v21 = a1[13](a1, a2, v18);
LABEL_23:
        v10 = v21;
        v22 = (_BYTE *)(a2 + 1916);
        if ( v21 )
          pool_tset(a2, v22, 1);
        else
          pool_tclear(a2, v22, 0);
LABEL_8:
        if ( *((_DWORD *)v6 + 1) != -1 )
        {
          v12 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v13 = __ldrex(v12);
            v14 = v13 - 1;
          }
          while ( __strex(v14, v12) );
          if ( !v14 )
            json_delete(v6);
        }
        return v10;
      }
    }
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  V_LOCK();
  logfmt_raw(v26, 0x1000u, 0, 1357880, *(_DWORD *)v24, v25);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth/frontend_eth.c",
    164,
    "stratum_handle_method_eth",
    25,
    685,
    100,
    v26);
  return 0;
}
