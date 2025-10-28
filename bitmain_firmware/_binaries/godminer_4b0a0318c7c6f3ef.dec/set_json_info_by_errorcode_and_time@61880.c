int __fastcall set_json_info_by_errorcode_and_time(_DWORD *a1, char *a2, time_t a3)
{
  int v3; // r3
  int v6; // r3
  int result; // r0
  _DWORD *v8; // r5
  char *v9; // r0
  char *v10; // r1
  char *v11; // r0
  char *v12; // r1
  char *v13; // r0
  char *v14; // r1
  const char *v15; // r2
  char *v16; // r0
  char *v17; // r1
  time_t timer; // [sp+1Ch] [bp-334h] BYREF
  struct tm tp; // [sp+24h] [bp-32Ch] BYREF
  char v20[256]; // [sp+50h] [bp-300h] BYREF
  char v21[256]; // [sp+150h] [bp-200h] BYREF
  char s[256]; // [sp+250h] [bp-100h] BYREF

  LOWORD(v3) = 27568;
  HIWORD(v3) = (unsigned int)&unk_196BB8 >> 16;
  v6 = *(unsigned __int8 *)(v3 + 0x410);
  timer = a3;
  if ( v6 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    result = get_reason_suggestion_from_json_by_errorcode(a2, v20, v21, 0x100u);
    if ( result )
    {
      v8 = json_object();
      v9 = BUFX_strdup(a2);
      LOWORD(v10) = 26296;
      HIWORD(v10) = (unsigned int)"" >> 16;
      json_object_set_new(v8, v10, v9);
      v11 = BUFX_strdup(v20);
      LOWORD(v12) = -32308;
      HIWORD(v12) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
      json_object_set_new(v8, v12, v11);
      v13 = BUFX_strdup(v21);
      LOWORD(v14) = -32376;
      HIWORD(v14) = (unsigned int)"l:\n" >> 16;
      json_object_set_new(v8, v14, v13);
      localtime_r(&timer, &tp);
      LOWORD(v15) = -32300;
      HIWORD(v15) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
      snprintf(s, 0x100u, v15, tp.tm_year + 1900, tp.tm_mon + 1, tp.tm_mday, tp.tm_hour, tp.tm_min, tp.tm_sec);
      v16 = BUFX_strdup(s);
      LOWORD(v17) = -32276;
      HIWORD(v17) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
      json_object_set_new(v8, v17, v16);
      return json_array_append_new(a1, v8);
    }
  }
  return result;
}
