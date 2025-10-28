int __fastcall stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  double *v5; // r0
  double *v6; // r4
  int v7; // r0
  int v8; // r0
  char *v9; // r1
  int v10; // r8
  _DWORD *v11; // r0
  int v12; // r5
  bool v13; // zf
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  char *v18; // r1
  _DWORD *v19; // r0
  const char *v20; // r8
  char *v21; // r1
  int v22; // r9
  const char *v23; // r1
  const char *v24; // r1
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r1
  char *v28; // r1
  int v29; // r0
  __int64 v30; // r10
  int v31; // r0
  _BYTE *v32; // r1
  char *v33; // r1
  const char *v34; // r1
  const char *v35; // r1
  _QWORD *v36; // r0
  int v37; // r1
  const char *v38; // r0
  char v39[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v40[160]; // [sp+70h] [bp-10A4h] BYREF
  char v41[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = json_loads(a3, 0, v39);
  v6 = v5;
  if ( v5 )
  {
    v7 = json_object_get(v5, "id");
    v8 = json_integer_value(v7);
    LOWORD(v9) = 10736;
    v10 = v8;
    HIWORD(v9) = (unsigned int)"start to check asic num test loop" >> 16;
    v11 = (_DWORD *)json_object_get(v6, v9);
    v12 = *(unsigned __int8 *)(a2 + 1656);
    if ( *(_BYTE *)(a2 + 1656) )
    {
      if ( !v11 )
        goto LABEL_7;
      v13 = *v11 == 1;
      if ( *v11 == 1 )
        v13 = v10 == 0;
      if ( !v13 )
        goto LABEL_7;
      v31 = sub_4023C(v11, a2);
      goto LABEL_23;
    }
    LOWORD(v18) = 10720;
    HIWORD(v18) = (unsigned int)"en poweroff." >> 16;
    v19 = (_DWORD *)json_object_get(v6, v18);
    v20 = (const char *)json_string_value(v19);
    if ( v20 )
    {
      LOWORD(v21) = 10728;
      HIWORD(v21) = (unsigned int)"off." >> 16;
      v22 = json_object_get(v6, v21);
      if ( !v22 )
      {
        LOWORD(v33) = 10736;
        HIWORD(v33) = (unsigned int)"start to check asic num test loop" >> 16;
        v22 = json_object_get(v6, v33);
      }
      LOWORD(v23) = 10744;
      HIWORD(v23) = (unsigned int)" check asic num test loop" >> 16;
      if ( !strcasecmp(v20, v23) )
      {
        LOWORD(v28) = 14692;
        HIWORD(v28) = (unsigned int)&unk_13627C >> 16;
        v29 = json_object_get(v6, v28);
        v30 = json_integer_value(v29);
        if ( v30 )
        {
          v36 = *(_QWORD **)(a2 + 1588);
          if ( !v36 )
          {
            v36 = calloc(1u, 0x6Bu);
            *(_DWORD *)(a2 + 1588) = v36;
            if ( !v36 )
            {
              LOWORD(v37) = 11864;
              LOWORD(v38) = 2052;
              HIWORD(v37) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c" >> 16;
              HIWORD(v38) = (unsigned int)"o convert merkle to merkle_bin in parse_notify" >> 16;
              printf(v38, v37);
              return v12;
            }
          }
          v36[12] = v30;
        }
        v31 = a1[12](a1, a2, v22);
        goto LABEL_23;
      }
      LOWORD(v24) = 10760;
      HIWORD(v24) = (unsigned int)"test loop" >> 16;
      if ( !strcasecmp(v20, v24) || (LOWORD(v34) = 10784, HIWORD(v34) = (unsigned int)"c]" >> 16, !strcasecmp(v20, v34)) )
      {
        v12 = a1[14](a1, a2, v22);
        goto LABEL_8;
      }
      LOWORD(v35) = 10804;
      HIWORD(v35) = (unsigned int)"!" >> 16;
      if ( !strcasecmp(v20, v35) )
      {
        v31 = a1[13](a1, a2, v22);
LABEL_23:
        v12 = v31;
        v32 = (_BYTE *)(a2 + 1916);
        if ( v31 )
          pool_tset(a2, v32, 1);
        else
          pool_tclear(a2, v32, 0);
LABEL_8:
        if ( *((_DWORD *)v6 + 1) != -1 )
        {
          v14 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( !v16 )
            json_delete(v6);
        }
        return v12;
      }
    }
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  V_LOCK();
  LOWORD(v25) = 10692;
  HIWORD(v25) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
  logfmt_raw(v41, 0x1000u, 0, v25, *(_DWORD *)v39, v40);
  V_UNLOCK();
  LOWORD(v26) = -12376;
  HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v27) = 13856;
  HIWORD(v27) = (unsigned int)&unk_135F38 >> 16;
  zlog(*v26, v27, 164, "stratum_handle_method_eth", 25, 685, 100, v41);
  return 0;
}
