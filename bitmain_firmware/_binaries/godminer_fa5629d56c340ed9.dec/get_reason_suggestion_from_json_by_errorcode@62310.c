int __fastcall get_reason_suggestion_from_json_by_errorcode(const char *a1, char *a2, char *a3, size_t a4)
{
  int result; // r0
  char *v9; // r1
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  int v12; // r4
  int v13; // r3
  _DWORD *v14; // r3
  char *v15; // r7
  unsigned int v16; // r4
  _DWORD *v17; // r0
  _DWORD *v18; // r6
  _DWORD *v19; // r0
  const char *v20; // r0
  bool v21; // cc
  unsigned int v22; // r1
  int v23; // r3
  _DWORD *v24; // r3
  int v25; // r1
  int v26; // r4
  int v27; // r3
  _DWORD *v28; // r3
  char *v29; // r1
  _DWORD *v30; // r0
  const char *v31; // r0
  char *v32; // r1
  _DWORD *v33; // r0
  const char *v34; // r0
  char v35[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_197FD4 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    LOWORD(v9) = -26528;
    HIWORD(v9) = (unsigned int)"read" >> 16;
    v10 = (_DWORD *)json_object_get((_DWORD *)dword_197FD8, v9);
    v11 = v10;
    if ( !v10 || *v10 != 1 )
    {
      LOWORD(v12) = -26884;
      V_LOCK();
      HIWORD(v12) = (unsigned int)"nable power watchdog failed!" >> 16;
      LOWORD(v13) = -26516;
      HIWORD(v13) = (unsigned int)"t_watchpool_thread" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v13, v12, 256);
      V_UNLOCK();
      LOWORD(v14) = 24916;
      HIWORD(v14) = (unsigned int)&unk_1B503C >> 16;
      zlog(*v14, v12, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 256, 100, v35);
    }
    LOWORD(v15) = 31592;
    v16 = 0;
    do
    {
      v21 = (unsigned int)json_array_size(v11) > v16;
      v22 = v16++;
      if ( !v21 )
      {
        V_LOCK();
        LOWORD(v23) = -26424;
        HIWORD(v23) = (unsigned int)"t thread to low priority" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v23, a1);
        V_UNLOCK();
        LOWORD(v24) = 24916;
        HIWORD(v24) = (unsigned int)&unk_1B503C >> 16;
        LOWORD(v25) = -26884;
        HIWORD(v25) = (unsigned int)"nable power watchdog failed!" >> 16;
        zlog(*v24, v25, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 286, 100, v35);
        return 0;
      }
      v17 = json_array_get(v11, v22);
      v18 = v17;
      if ( !v17 || *v17 )
      {
        LOWORD(v26) = -26884;
        V_LOCK();
        HIWORD(v26) = (unsigned int)"nable power watchdog failed!" >> 16;
        LOWORD(v27) = -26488;
        HIWORD(v27) = (unsigned int)"i_thread" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v27, v26, 265);
        V_UNLOCK();
        LOWORD(v28) = 24916;
        HIWORD(v28) = (unsigned int)&unk_1B503C >> 16;
        zlog(*v28, v26, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 265, 100, v35);
        return 0;
      }
      HIWORD(v15) = (unsigned int)sub_1469C8 >> 16;
      v19 = (_DWORD *)json_object_get(v17, v15);
      v20 = (const char *)json_string_value(v19);
    }
    while ( strcmp(a1, v20) );
    LOWORD(v29) = -26456;
    HIWORD(v29) = (unsigned int)"check_pool_connect" >> 16;
    v30 = (_DWORD *)json_object_get(v18, v29);
    v31 = (const char *)json_string_value(v30);
    snprintf(a2, a4, v31);
    LOWORD(v32) = -26448;
    HIWORD(v32) = (unsigned int)"ol_connect" >> 16;
    v33 = (_DWORD *)json_object_get(v18, v32);
    v34 = (const char *)json_string_value(v33);
    snprintf(a3, a4, v34);
    return 1;
  }
  return result;
}
