int __fastcall stratum_handle_response_rvn(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  char *v7; // r1
  _DWORD *v8; // r5
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r10
  _DWORD *v12; // r7
  _BYTE *v13; // r0
  _BOOL4 v14; // r8
  int v15; // r0
  int v16; // r6
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r1
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v24; // r3
  _DWORD *v25; // r3
  int v26; // r1
  _BOOL4 v27; // r5
  char *v28; // r0
  _DWORD *v29; // r0
  char *v30; // r0
  char v31[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v32[160]; // [sp+70h] [bp-10A0h] BYREF
  char v33[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v31);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v24) = 10692;
    HIWORD(v24) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
    logfmt_raw(v33, 0x1000u, 0, v24, *(_DWORD *)v31, v32);
    V_UNLOCK();
    LOWORD(v25) = -12376;
    HIWORD(v25) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v26) = 17232;
    HIWORD(v26) = (unsigned int)&unk_136C80 >> 16;
    zlog(*v25, v26, 164, "stratum_handle_response_rvn", 27, 440, 40, v33);
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
  v12 = (_DWORD *)json_object_get(v5, v10);
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
      if ( !v12 )
        goto LABEL_28;
      goto LABEL_18;
    }
    v14 = 1;
  }
  if ( !v12 )
  {
LABEL_28:
    V_LOCK();
    LOWORD(v17) = 11376;
    HIWORD(v17) = (unsigned int)"pted. pls check it" >> 16;
    logfmt_raw(v33, 0x1000u, 0, v17, "stratum_handle_response_rvn");
    V_UNLOCK();
    LOWORD(v18) = -12376;
    HIWORD(v18) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v19) = 17232;
    HIWORD(v19) = (unsigned int)&unk_136C80 >> 16;
    v16 = 0;
    zlog(*v18, v19, 164, "stratum_handle_response_rvn", 27, 472, 20, v33);
    goto LABEL_29;
  }
LABEL_18:
  if ( *v12 == 7 )
    goto LABEL_28;
  v16 = *(unsigned __int8 *)(a3 + 1656);
  if ( *(_BYTE *)(a3 + 1656) )
  {
    if ( v8 )
      v27 = 0;
    else
      v27 = v11 == 0;
    if ( !v27 )
    {
      v28 = json_dumps(v11, 24576);
      share_result(v14, 0, v28, (double *)a3);
      goto LABEL_29;
    }
  }
  else if ( v8 && json_integer_value((int)v12) >= 4 )
  {
    v29 = json_array_get(v11, 1u);
    v30 = (char *)json_string_value(v29);
    share_result(v14, v16, v30, (double *)a3);
    v16 = 1;
    goto LABEL_29;
  }
  v16 = 0;
LABEL_29:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v20 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v21 = __ldrex(v20);
      v22 = v21 - 1;
    }
    while ( __strex(v22, v20) );
    if ( !v22 )
      json_delete(v5);
  }
  return v16;
}
