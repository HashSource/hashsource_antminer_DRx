int __fastcall set_onechip_to_lower_level_ks5(int a1, int a2)
{
  char *v4; // r1
  int v5; // r5
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r3
  void (__fastcall *v9)(int, int *); // r2
  int v10; // r3
  int v11; // r5
  float v12; // s16
  float v13; // s17
  _DWORD v15[7]; // [sp+28h] [bp-1020h] BYREF
  int v16; // [sp+44h] [bp-1004h]
  int v17; // [sp+48h] [bp-1000h] BYREF
  int v18; // [sp+4Ch] [bp-FFCh]
  int v19; // [sp+50h] [bp-FF8h]
  int v20; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v4) = 27372;
  HIWORD(v4) = (unsigned int)":" >> 16;
  V_INT((int)v15, v4, *(int *)(a1 + 256));
  LOWORD(v5) = -2268;
  HIWORD(v5) = (unsigned int)"_local_on_ctrlboard_KDA_2110" >> 16;
  logfmt_raw((char *)&v17, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v5, a2);
  V_UNLOCK();
  LOWORD(v6) = 20532;
  HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v7) = 1304;
  HIWORD(v7) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v6, v7, 171, "set_onechip_to_lower_level_ks5", 30, 683, 40, &v17);
  v8 = *(_DWORD *)(a1 + 372);
  v19 = 4456448;
  v20 = 0;
  v18 = 0;
  v17 = 3;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 276);
  BYTE1(v19) = v8 * a2;
  v9(a1, &v17);
  v10 = *(_DWORD *)(a1 + 372);
  v19 = 655360;
  v20 = 255;
  v18 = 0;
  v17 = 0;
  BYTE1(v19) = v10 * a2;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v17);
  usleep(0x4E20u);
  sub_9A758((int *)a1, 36);
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 544) + 44 * a2 + 20));
  v11 = *(_DWORD *)(a1 + 544) + 44 * a2;
  v12 = *(float *)(v11 + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(v11 + 20));
  v13 = *(float *)(a1 + 996) - 100.0;
  while ( v13 < v12 )
  {
    v12 = v12 - 6.25;
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 200))(a1, 0, a2);
    usleep((__useconds_t)&loc_493E0);
  }
  return 0;
}
