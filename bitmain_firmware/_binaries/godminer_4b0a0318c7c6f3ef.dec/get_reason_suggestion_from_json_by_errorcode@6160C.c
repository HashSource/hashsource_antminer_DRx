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

  if ( byte_196FC0 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    LOWORD(v9) = -32456;
    HIWORD(v9) = (unsigned int)"/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    v10 = (_DWORD *)json_object_get((_DWORD *)dword_196FC4, v9);
    v11 = v10;
    if ( !v10 || *v10 != 1 )
    {
      LOWORD(v12) = 32724;
      V_LOCK();
      HIWORD(v12) = (unsigned int)"qualify nonce count %f" >> 16;
      LOWORD(v13) = -32444;
      HIWORD(v13) = (unsigned int)"7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v13, v12, 256);
      V_UNLOCK();
      LOWORD(v14) = 20532;
      HIWORD(v14) = (unsigned int)&g_fan_zc >> 16;
      zlog(*v14, v12, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 256, 100, v35);
    }
    LOWORD(v15) = 26296;
    v16 = 0;
    do
    {
      v21 = (unsigned int)json_array_size(v11) > v16;
      v22 = v16++;
      if ( !v21 )
      {
        V_LOCK();
        LOWORD(v23) = -32352;
        HIWORD(v23) = (unsigned int)"iner_monitor/update_miner_status/update_fanspeed.c" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v23, a1);
        V_UNLOCK();
        LOWORD(v24) = 20532;
        HIWORD(v24) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v25) = 32724;
        HIWORD(v25) = (unsigned int)"qualify nonce count %f" >> 16;
        zlog(*v24, v25, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 286, 100, v35);
        return 0;
      }
      v17 = json_array_get(v11, v22);
      v18 = v17;
      if ( !v17 || *v17 )
      {
        LOWORD(v26) = 32724;
        V_LOCK();
        HIWORD(v26) = (unsigned int)"qualify nonce count %f" >> 16;
        LOWORD(v27) = -32416;
        HIWORD(v27) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v27, v26, 265);
        V_UNLOCK();
        LOWORD(v28) = 20532;
        HIWORD(v28) = (unsigned int)&g_fan_zc >> 16;
        zlog(*v28, v26, 169, "get_reason_suggestion_from_json_by_errorcode", 44, 265, 100, v35);
        return 0;
      }
      HIWORD(v15) = (unsigned int)"lity" >> 16;
      v19 = (_DWORD *)json_object_get(v17, v15);
      v20 = (const char *)json_string_value(v19);
    }
    while ( strcmp(a1, v20) );
    LOWORD(v29) = -32384;
    HIWORD(v29) = (unsigned int)"origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    v30 = (_DWORD *)json_object_get(v18, v29);
    v31 = (const char *)json_string_value(v30);
    snprintf(a2, a4, v31);
    LOWORD(v32) = -32376;
    HIWORD(v32) = (unsigned int)"odminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    v33 = (_DWORD *)json_object_get(v18, v32);
    v34 = (const char *)json_string_value(v33);
    snprintf(a3, a4, v34);
    return 1;
  }
  return result;
}
