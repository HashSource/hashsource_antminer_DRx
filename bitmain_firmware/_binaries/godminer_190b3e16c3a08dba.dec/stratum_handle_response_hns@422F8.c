int __fastcall stratum_handle_response_hns(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  char *v7; // r1
  _DWORD *v8; // r5
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r7
  int v12; // r6
  _BYTE *v13; // r0
  _BOOL4 v14; // r9
  int v15; // r0
  char *v16; // r2
  _DWORD *v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  bool v22; // zf
  char *v23; // r2
  int v24; // r5
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r1
  int v28; // r3
  int *v29; // r3
  int v30; // r0
  int v31; // r1
  char v32[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v33[160]; // [sp+70h] [bp-10A4h] BYREF
  char v34[4100]; // [sp+110h] [bp-1004h] BYREF

  v4 = json_loads(a2, 0, v32);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v28) = 10692;
    HIWORD(v28) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
    logfmt_raw(v34, 0x1000u, 0, v28, *(_DWORD *)v32, v33);
    V_UNLOCK();
    LOWORD(v29) = -12376;
    HIWORD(v29) = (unsigned int)&unk_18C750 >> 16;
    v30 = *v29;
    LOWORD(v29) = 15012;
    LOWORD(v31) = 15116;
    HIWORD(v29) = (unsigned int)&unk_1363BC >> 16;
    HIWORD(v31) = (unsigned int)&unk_136424 >> 16;
    zlog(v30, v31, 164, v29, 27, 381, 40, v34);
    return 0;
  }
  v6 = json_object_get(v4, "result");
  LOWORD(v7) = 916;
  v8 = (_DWORD *)v6;
  HIWORD(v7) = (unsigned int)"/2.0.0\", null]}" >> 16;
  v9 = json_object_get(v5, v7);
  LOWORD(v10) = 1404;
  v11 = (_DWORD *)v9;
  HIWORD(v10) = (unsigned int)"work->private" >> 16;
  v12 = json_object_get(v5, v10);
  if ( !v8 || *v8 == 7 || v8 == json_false() )
    goto LABEL_15;
  v13 = json_string_value(v8);
  v14 = (_BOOL4)v13;
  if ( !v13 )
    goto LABEL_16;
  if ( *v13 == 111 && v13[1] == 107 )
  {
    v15 = (unsigned __int8)v13[2];
    v14 = (_BOOL4)v11;
    if ( v11 )
      v14 = 1;
    if ( v15 )
      v14 = 0;
    if ( v14 )
      v14 = *v11 == 7;
  }
  else
  {
LABEL_15:
    v14 = 0;
  }
LABEL_16:
  if ( v8 == json_true() )
  {
    if ( v11 )
    {
      if ( *v11 == 7 )
        v14 = 1;
      if ( v12 )
        goto LABEL_18;
      goto LABEL_43;
    }
    v14 = 1;
  }
  if ( v12 )
  {
LABEL_18:
    v12 = *(unsigned __int8 *)(a3 + 1656);
    if ( *(_BYTE *)(a3 + 1656) )
    {
      v22 = v8 == 0;
      if ( !v8 )
        v22 = v11 == 0;
      if ( v22 )
      {
        v12 = 0;
      }
      else
      {
        if ( v11 )
          v23 = (char *)json_string_value(v11);
        else
          v23 = 0;
        share_result(v14, 0, v23, (double *)a3);
      }
    }
    else if ( v8 )
    {
      if ( v11 )
      {
        v17 = json_array_get(v11, 1u);
        v16 = (char *)json_string_value(v17);
      }
      else
      {
        v16 = 0;
      }
      v12 = 1;
      share_result(v14, 0, v16, (double *)a3);
    }
    goto LABEL_24;
  }
LABEL_43:
  LOWORD(v24) = 15012;
  V_LOCK();
  HIWORD(v24) = (unsigned int)&unk_1363BC >> 16;
  LOWORD(v25) = 11376;
  HIWORD(v25) = (unsigned int)"pted. pls check it" >> 16;
  logfmt_raw(v34, 0x1000u, v12, v25, v24);
  V_UNLOCK();
  LOWORD(v26) = -12376;
  HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v27) = 15116;
  HIWORD(v27) = (unsigned int)&unk_136424 >> 16;
  zlog(*v26, v27, 164, v24, 27, 405, 20, v34);
LABEL_24:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v18 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v19 = __ldrex(v18);
      v20 = v19 - 1;
    }
    while ( __strex(v20, v18) );
    if ( !v20 )
      json_delete(v5);
  }
  return v12;
}
