int __fastcall get_errstr_from_json_by_errorcode(const char *a1, char *a2, size_t a3)
{
  int result; // r0
  char *v7; // r1
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r4
  int v11; // r3
  _DWORD *v12; // r3
  char *v13; // r7
  unsigned int v14; // r4
  _DWORD *v15; // r0
  _DWORD *v16; // r6
  _DWORD *v17; // r0
  const char *v18; // r11
  bool v19; // cc
  unsigned int v20; // r1
  int v21; // r3
  _DWORD *v22; // r3
  int v23; // r1
  int v24; // r4
  int v25; // r3
  _DWORD *v26; // r3
  char *v27; // r1
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  char *v30; // r1
  _DWORD *v31; // r4
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  const char *v34; // r2
  char v35[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_196FC0 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    LOWORD(v7) = -32456;
    HIWORD(v7) = (unsigned int)"/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    v8 = (_DWORD *)json_object_get((_DWORD *)dword_196FC4, v7);
    v9 = v8;
    if ( !v8 || *v8 != 1 )
    {
      LOWORD(v10) = 32724;
      V_LOCK();
      HIWORD(v10) = (unsigned int)"qualify nonce count %f" >> 16;
      LOWORD(v11) = -32444;
      HIWORD(v11) = (unsigned int)"7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
      logfmt_raw(v35, 0x1000u, 0, v11, v10, 209);
      V_UNLOCK();
      LOWORD(v12) = 20532;
      HIWORD(v12) = (unsigned int)&g_fan_zc >> 16;
      zlog(*v12, v10, 169, "get_errstr_from_json_by_errorcode", 33, 209, 100, v35);
    }
    LOWORD(v13) = 26296;
    v14 = 0;
    do
    {
      v19 = (unsigned int)json_array_size(v9) > v14;
      v20 = v14++;
      if ( !v19 )
      {
        V_LOCK();
        LOWORD(v21) = -32352;
        HIWORD(v21) = (unsigned int)"iner_monitor/update_miner_status/update_fanspeed.c" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v21, a1);
        V_UNLOCK();
        LOWORD(v22) = 20532;
        HIWORD(v22) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v23) = 32724;
        HIWORD(v23) = (unsigned int)"qualify nonce count %f" >> 16;
        zlog(*v22, v23, 169, "get_errstr_from_json_by_errorcode", 33, 237, 100, v35);
        return 0;
      }
      v15 = json_array_get(v9, v20);
      v16 = v15;
      if ( !v15 || *v15 )
      {
        LOWORD(v24) = 32724;
        V_LOCK();
        HIWORD(v24) = (unsigned int)"qualify nonce count %f" >> 16;
        LOWORD(v25) = -32416;
        HIWORD(v25) = (unsigned int)"root/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
        logfmt_raw(v35, 0x1000u, 0, v25, v24, 218);
        V_UNLOCK();
        LOWORD(v26) = 20532;
        HIWORD(v26) = (unsigned int)&g_fan_zc >> 16;
        zlog(*v26, v24, 169, "get_errstr_from_json_by_errorcode", 33, 218, 100, v35);
        return 0;
      }
      HIWORD(v13) = (unsigned int)"lity" >> 16;
      v17 = (_DWORD *)json_object_get(v15, v13);
      v18 = (const char *)json_string_value(v17);
    }
    while ( strcmp(a1, v18) );
    LOWORD(v27) = -32384;
    HIWORD(v27) = (unsigned int)"origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    v28 = (_DWORD *)json_object_get(v16, v27);
    v29 = json_string_value(v28);
    LOWORD(v30) = -32376;
    v31 = v29;
    HIWORD(v30) = (unsigned int)"odminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    v32 = (_DWORD *)json_object_get(v16, v30);
    v33 = json_string_value(v32);
    LOWORD(v34) = -32364;
    HIWORD(v34) = (unsigned int)"miner_util/miner_monitor/update_miner_status/update_fanspeed.c" >> 16;
    snprintf(a2, a3, v34, v18, v31, v33);
    return 1;
  }
  return result;
}
