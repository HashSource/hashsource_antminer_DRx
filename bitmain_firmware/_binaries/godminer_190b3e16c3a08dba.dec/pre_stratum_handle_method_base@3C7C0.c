const char *__fastcall pre_stratum_handle_method_base(int a1, int a2, int a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r0
  const char *v11; // r5
  char *v12; // r1
  int v13; // r10
  char *v14; // r1
  const char *v15; // r1
  _BYTE *v16; // r1
  int v17; // r3
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v22; // r3
  _DWORD *v23; // r3
  int v24; // r1
  char *v25; // r1
  const char *v26; // r1
  int v27; // r3
  const char *v28; // r1
  int v29; // r3
  _DWORD *v30; // r3
  int v31; // r1
  char v32[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v33[160]; // [sp+70h] [bp-10A0h] BYREF
  char v34[4096]; // [sp+110h] [bp-1000h] BYREF

  v8 = json_loads(a3, 0, v32);
  v9 = v8;
  if ( !v8 )
  {
    V_LOCK();
    LOWORD(v22) = 10692;
    HIWORD(v22) = (unsigned int)"all backend runtimes have been poweroff." >> 16;
    logfmt_raw(v34, 0x1000u, 0, v22, *(_DWORD *)v32, v33);
    V_UNLOCK();
    LOWORD(v23) = -12376;
    HIWORD(v23) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v24) = 10436;
    HIWORD(v24) = (unsigned int)"uster, please wait, this may take up to 2 minutes..." >> 16;
    zlog(*v23, v24, 152, "pre_stratum_handle_method_base", 30, 123, 100, v34);
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
  LOWORD(v12) = 10728;
  HIWORD(v12) = (unsigned int)"off." >> 16;
  v13 = json_object_get(v9, v12);
  if ( !v13 )
  {
    LOWORD(v25) = 10736;
    HIWORD(v25) = (unsigned int)"start to check asic num test loop" >> 16;
    v13 = json_object_get(v9, v25);
  }
  LOWORD(v14) = 1404;
  HIWORD(v14) = (unsigned int)"work->private" >> 16;
  json_object_get(v9, v14);
  LOWORD(v15) = 10744;
  HIWORD(v15) = (unsigned int)" check asic num test loop" >> 16;
  if ( strcasecmp(v11, v15) )
  {
    LOWORD(v26) = 10760;
    HIWORD(v26) = (unsigned int)"test loop" >> 16;
    if ( !strcasecmp(v11, v26) || (LOWORD(v28) = 10784, HIWORD(v28) = (unsigned int)"c]" >> 16, !strcasecmp(v11, v28)) )
    {
      LOWORD(v27) = 10856;
      HIWORD(v27) = (unsigned int)"al failed times:%d" >> 16;
      *a4 = v27;
      v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 56))(a1, a2, v13);
    }
    else
    {
      V_LOCK();
      LOWORD(v29) = 10828;
      HIWORD(v29) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
      v11 = 0;
      logfmt_raw(v34, 0x1000u, 0, v29, a3);
      V_UNLOCK();
      LOWORD(v30) = -12376;
      HIWORD(v30) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v31) = 10436;
      HIWORD(v31) = (unsigned int)"uster, please wait, this may take up to 2 minutes..." >> 16;
      zlog(*v30, v31, 152, "pre_stratum_handle_method_base", 30, 156, 80, v34);
    }
    goto LABEL_8;
  }
  v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 48))(a1, a2, v13);
  v16 = (_BYTE *)(a2 + 1916);
  if ( v11 )
  {
    LOWORD(v17) = 12844;
    HIWORD(v17) = (unsigned int)"h_content/dhash_content.c" >> 16;
    *a4 = v17;
    pool_tset(a2, v16, 1);
    goto LABEL_8;
  }
  pool_tclear(a2, v16, 0);
  if ( *((_DWORD *)v9 + 1) == -1 )
    return v11;
LABEL_9:
  v18 = (unsigned int *)v9 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v11;
  json_delete(v9);
  return v11;
}
