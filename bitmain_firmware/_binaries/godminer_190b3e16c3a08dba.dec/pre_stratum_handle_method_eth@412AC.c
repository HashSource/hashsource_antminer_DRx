int __fastcall pre_stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r6
  const char *v11; // r0
  bool v12; // zf
  char *v13; // r1
  _DWORD *v14; // r0
  const char *v15; // r6
  char *v16; // r1
  int v17; // r7
  char *v18; // r1
  const char *v19; // r1
  const char *v20; // r1
  int v21; // r3
  int v22; // r6
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v27; // r3
  _DWORD *v28; // r3
  int v29; // r1
  char *v30; // r1
  int v31; // r0
  char *v32; // r1
  _DWORD *v33; // r6
  char *v34; // r1
  _DWORD *v35; // r5
  int v36; // r3
  _DWORD *v37; // r3
  int v38; // r1
  char *v39; // r1
  _DWORD *v40; // r0
  char *v41; // r1
  int v42; // r0
  __int64 v43; // r10
  _BYTE *v44; // r1
  int v45; // r3
  char *v46; // r1
  int v47; // r3
  _DWORD *v48; // r3
  int v49; // r1
  const char *v50; // r1
  const char *v51; // r1
  char *v52; // r1
  int v53; // r1
  const char *v54; // r0
  char v55[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v56[160]; // [sp+70h] [bp-10A4h] BYREF
  char v57[4100]; // [sp+110h] [bp-1004h] BYREF

  v8 = json_loads(a3, 0, v55);
  v9 = v8;
  if ( v8 )
  {
    v10 = (_DWORD *)json_object_get(v8, "jsonrpc");
    v11 = (const char *)json_string_value(v10);
    v12 = v10 == 0;
    if ( v10 )
      v12 = v11 == 0;
    if ( !v12 && !strcasecmp(v11, "2.0") )
    {
      LOWORD(v39) = 10728;
      *(_BYTE *)(a2 + 1656) = 1;
      HIWORD(v39) = (unsigned int)"off." >> 16;
      v40 = (_DWORD *)json_object_get(v9, v39);
      if ( !v40 )
      {
        LOWORD(v52) = 10736;
        HIWORD(v52) = (unsigned int)"start to check asic num test loop" >> 16;
        v40 = (_DWORD *)json_object_get(v9, v52);
      }
      v22 = sub_4023C(v40, a2);
      if ( !v22 )
      {
        V_LOCK();
        LOWORD(v47) = 10828;
        HIWORD(v47) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
        logfmt_raw(v57, 0x1000u, 0, v47, a3);
        V_UNLOCK();
        LOWORD(v48) = -12376;
        HIWORD(v48) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v49) = 13856;
        HIWORD(v49) = (unsigned int)&unk_135F38 >> 16;
        zlog(*v48, v49, 164, "pre_stratum_handle_method_eth", 29, 1092, 80, v57);
        goto LABEL_31;
      }
    }
    else
    {
      LOWORD(v13) = 10720;
      *(_BYTE *)(a2 + 1656) = 0;
      HIWORD(v13) = (unsigned int)"en poweroff." >> 16;
      v14 = (_DWORD *)json_object_get(v9, v13);
      v15 = (const char *)json_string_value(v14);
      if ( v15 )
      {
        LOWORD(v16) = 10728;
        HIWORD(v16) = (unsigned int)"off." >> 16;
        v17 = json_object_get(v9, v16);
        if ( !v17 )
        {
          LOWORD(v46) = 10736;
          HIWORD(v46) = (unsigned int)"start to check asic num test loop" >> 16;
          v17 = json_object_get(v9, v46);
        }
        LOWORD(v18) = 1404;
        HIWORD(v18) = (unsigned int)"work->private" >> 16;
        json_object_get(v9, v18);
        LOWORD(v19) = 10744;
        HIWORD(v19) = (unsigned int)" check asic num test loop" >> 16;
        if ( !strcasecmp(v15, v19) )
        {
          LOWORD(v41) = 14692;
          HIWORD(v41) = (unsigned int)&unk_13627C >> 16;
          v42 = json_object_get(v9, v41);
          v43 = json_integer_value(v42);
          if ( v43 )
          {
            v22 = *(_DWORD *)(a2 + 1588);
            if ( !v22 )
            {
              v22 = (int)calloc(1u, 0x6Bu);
              *(_DWORD *)(a2 + 1588) = v22;
              if ( !v22 )
              {
                LOWORD(v53) = 11864;
                LOWORD(v54) = 2052;
                HIWORD(v53) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c" >> 16;
                HIWORD(v54) = (unsigned int)"o convert merkle to merkle_bin in parse_notify" >> 16;
                printf(v54, v53);
                return v22;
              }
            }
            *(_QWORD *)(v22 + 96) = v43;
          }
          v22 = a1[12](a1, a2, v17);
          v44 = (_BYTE *)(a2 + 1916);
          if ( v22 )
          {
            LOWORD(v45) = 12844;
            HIWORD(v45) = (unsigned int)"h_content/dhash_content.c" >> 16;
            *a4 = v45;
            pool_tset(a2, v44, 1);
            goto LABEL_12;
          }
          goto LABEL_35;
        }
        LOWORD(v20) = 10760;
        HIWORD(v20) = (unsigned int)"test loop" >> 16;
        if ( !strcasecmp(v15, v20)
          || (LOWORD(v50) = 10784, HIWORD(v50) = (unsigned int)"c]" >> 16, !strcasecmp(v15, v50)) )
        {
          LOWORD(v21) = 10856;
          HIWORD(v21) = (unsigned int)"al failed times:%d" >> 16;
          *a4 = v21;
          v22 = a1[14](a1, a2, v17);
          goto LABEL_12;
        }
        LOWORD(v51) = 10804;
        HIWORD(v51) = (unsigned int)"!" >> 16;
        if ( !strcasecmp(v15, v51) )
        {
          v22 = a1[13](a1, a2, v17);
          v44 = (_BYTE *)(a2 + 1916);
          if ( v22 )
          {
            pool_tset(a2, v44, 1);
LABEL_12:
            if ( *((_DWORD *)v9 + 1) != -1 )
            {
              v23 = (unsigned int *)v9 + 1;
              __dmb(0xBu);
              do
              {
                v24 = __ldrex(v23);
                v25 = v24 - 1;
              }
              while ( __strex(v25, v23) );
              if ( !v25 )
                json_delete(v9);
            }
            return v22;
          }
LABEL_35:
          pool_tclear(a2, v44, 0);
          goto LABEL_12;
        }
      }
      LOWORD(v30) = 10736;
      HIWORD(v30) = (unsigned int)"start to check asic num test loop" >> 16;
      v31 = json_object_get(v9, v30);
      LOWORD(v32) = 916;
      v33 = (_DWORD *)v31;
      HIWORD(v32) = (unsigned int)"/2.0.0\", null]}" >> 16;
      json_object_get(v9, v32);
      LOWORD(v34) = 1404;
      HIWORD(v34) = (unsigned int)"work->private" >> 16;
      v35 = (_DWORD *)json_object_get(v9, v34);
      if ( v33 && *v33 != 7 && v33 != json_false() )
        json_string_value(v33);
      json_true();
      if ( !v35 || *v35 == 7 || json_integer_value((int)v35) != 2 )
      {
        V_LOCK();
        LOWORD(v36) = 14700;
        HIWORD(v36) = (unsigned int)&unk_136284 >> 16;
        logfmt_raw(v57, 0x1000u, 0, v36, "pre_stratum_handle_method_eth");
        V_UNLOCK();
        LOWORD(v37) = -12376;
        HIWORD(v37) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v38) = 13856;
        HIWORD(v38) = (unsigned int)&unk_135F38 >> 16;
        v22 = 0;
        zlog(*v37, v38, 164, "pre_stratum_handle_method_eth", 29, 1084, 40, v57);
        goto LABEL_12;
      }
    }
    v22 = 1;
LABEL_31:
    *a4 = "notify";
    goto LABEL_12;
  }
  V_LOCK();
  LOWORD(v27) = 10692;
  HIWORD(v27) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
  logfmt_raw(v57, 0x1000u, 0, v27, *(_DWORD *)v55, v56);
  V_UNLOCK();
  LOWORD(v28) = -12376;
  HIWORD(v28) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v29) = 13856;
  HIWORD(v29) = (unsigned int)&unk_135F38 >> 16;
  zlog(*v28, v29, 164, "pre_stratum_handle_method_eth", 29, 995, 100, v57);
  return 0;
}
