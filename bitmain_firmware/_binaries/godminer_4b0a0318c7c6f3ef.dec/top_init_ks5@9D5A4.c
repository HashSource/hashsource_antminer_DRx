int __fastcall top_init_ks5(int a1)
{
  int v2; // r4
  char *v3; // r1
  _DWORD *v4; // r9
  int v5; // r1
  int v6; // r8
  int v7; // r4
  int v8; // r0
  int v9; // r1
  char v10; // r3
  int v11; // r1
  int v12; // r4
  void *v13; // r8
  char *v14; // r3
  int v15; // r11
  unsigned int *v16; // r5
  int v17; // r8
  int v18; // r1
  int v20; // [sp+4h] [bp-9Ch]
  void *ptr; // [sp+3Ch] [bp-64h]
  char *s; // [sp+40h] [bp-60h]
  int v23; // [sp+4Ch] [bp-54h] BYREF
  _DWORD v24[4]; // [sp+50h] [bp-50h] BYREF
  _DWORD v25[7]; // [sp+60h] [bp-40h] BYREF
  int v26; // [sp+7Ch] [bp-24h]
  _DWORD v27[7]; // [sp+80h] [bp-20h] BYREF
  int v28; // [sp+9Ch] [bp-4h]
  char v29[4100]; // [sp+A0h] [bp+0h] BYREF

  LOWORD(v2) = -14460;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v25, v3, *(int *)(a1 + 256));
  HIWORD(v2) = (unsigned int)"02x membist0 lost cnt: %08x" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v26, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v26, v2, "top_init_ks5");
  V_UNLOCK();
  LOWORD(v5) = 1304;
  HIWORD(v5) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v4, v5, 171, "top_init_ks5", 12, 960, 60, v29);
  v6 = *(_DWORD *)(a1 + 352);
  v7 = *(_DWORD *)(a1 + 504);
  v8 = sub_1451E0(256, (unsigned __int8)v6);
  if ( (_BYTE)v6 )
  {
    v9 = v7 - 1;
    v10 = 0;
    do
    {
      *(_BYTE *)++v9 = v10;
      v10 += v8;
    }
    while ( v7 - 1 + (unsigned __int8)v6 != v9 );
    v7 = *(_DWORD *)(a1 + 504);
    v6 = *(_DWORD *)(a1 + 352);
  }
  v11 = v7;
  *(_DWORD *)(a1 + 444) = v8;
  v12 = 0;
  (*(void (__fastcall **)(int, int, int))(a1 + 268))(a1, v11, v6);
  v24[0] = 0;
  v24[2] = 1;
  v24[1] = 0;
  v23 = 0;
  v24[3] = 0;
  v13 = calloc(0x450u, 1u);
  ptr = v13;
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 296))(
    a1,
    v24,
    92,
    v13,
    &v23,
    v20,
    2000,
    0);
  if ( v23 > 0 )
  {
    LOWORD(v14) = 27372;
    LOWORD(v15) = -14056;
    HIWORD(v14) = (unsigned int)":" >> 16;
    s = v14;
    v16 = (unsigned int *)v13;
    do
    {
      v17 = *((unsigned __int16 *)v16 + 3);
      if ( !*((_WORD *)v16 + 3) )
      {
        V_LOCK();
        V_INT((int)v27, s, *(int *)(a1 + 256));
        HIWORD(v15) = (unsigned int)" resp_num: %d" >> 16;
        logfmt_raw(
          v29,
          0x1000u,
          v17,
          v28,
          v27[0],
          v27[1],
          v27[2],
          v27[3],
          v27[4],
          v27[5],
          v27[6],
          v28,
          v15,
          v12,
          *((unsigned __int8 *)v16 + 4),
          *((unsigned __int16 *)v16 + 3),
          bswap32(*v16));
        V_UNLOCK();
        LOWORD(v18) = -23880;
        HIWORD(v18) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
        zlog(*v4, v18, 150, "ChipSetting_get_chip_status_KS5_2382", 36, 1617, 20, v29);
      }
      ++v12;
      v16 += 3;
    }
    while ( v12 < v23 );
  }
  free(ptr);
  set_core_enable_ks5(a1, 23130);
  sub_9A758((int *)a1, 127);
  set_misc_control_ks5(a1);
  set_work_len_ks5(a1);
  set_nonce_len_ks5(a1);
  set_nonce_count_zero_ks5(a1);
  set_nonce_overflow_ks5(a1, 0);
  sub_9C424((int *)a1);
  return 0;
}
