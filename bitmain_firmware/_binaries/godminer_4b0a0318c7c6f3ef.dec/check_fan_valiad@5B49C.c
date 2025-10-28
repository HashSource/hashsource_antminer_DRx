int check_fan_valiad()
{
  _DWORD *v0; // r12
  int v1; // r3
  _DWORD *v2; // r4
  char *v3; // r7
  int v4; // r3
  int v5; // r1
  int v6; // r3
  unsigned int v7; // r6
  int fan_num; // r4
  unsigned int v9; // r8
  int v10; // r7
  int i; // r5
  int realtime_speed; // r9
  int v13; // r0
  int fan_max_speed; // r0
  unsigned int v15; // r5
  char *v16; // r9
  __int64 v17; // kr00_8
  int v18; // r11
  int v19; // r0
  int v20; // r10
  int v21; // r3
  int v22; // r1
  int j; // r5
  int v24; // r0
  int v25; // r3
  int v26; // r1
  int v27; // r3
  char *s; // [sp+5Ch] [bp-1058h]
  _DWORD *v30; // [sp+64h] [bp-1050h]
  int v31; // [sp+68h] [bp-104Ch]
  _DWORD v32[7]; // [sp+70h] [bp-1044h] BYREF
  int v33; // [sp+8Ch] [bp-1028h]
  _DWORD v34[8]; // [sp+90h] [bp-1024h] BYREF
  char v35[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  LOWORD(v0) = 20532;
  LOWORD(v1) = 27228;
  HIWORD(v0) = (unsigned int)&g_fan_zc >> 16;
  v2 = v0;
  HIWORD(v1) = (unsigned int)"lowprio" >> 16;
  v30 = v0;
  LOWORD(v3) = 27404;
  logfmt_raw(v35, 0x1000u, 0, v1);
  V_UNLOCK();
  LOWORD(v4) = 27208;
  LOWORD(v5) = 27252;
  HIWORD(v4) = (unsigned int)"artbeat_thread" >> 16;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v2, v5, 150, v4, 16, 31, 60, v35);
  LOWORD(v6) = 17552;
  HIWORD(v6) = (unsigned int)&off_194494 >> 16;
  HIWORD(v3) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
  v7 = 0;
  s = v3;
  v31 = v6;
  fan_num = platform_get_fan_num();
  while ( 1 )
  {
    v9 = ++v7 % 0x14;
    if ( fan_num <= 0 )
    {
      usleep((__useconds_t)&loc_7A120);
      if ( v9 )
      {
        v10 = 0;
        goto LABEL_22;
      }
      v10 = 0;
LABEL_24:
      fan_pwm_set_max();
      goto LABEL_11;
    }
    v10 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v13 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v13);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v10;
      }
    }
    usleep((__useconds_t)&loc_7A120);
    if ( !v9 )
      goto LABEL_24;
LABEL_11:
    if ( fan_num <= v10 )
      break;
    v15 = v7 % 0x78;
    if ( v7 == 120 * (v7 / 0x78) )
    {
      LOWORD(v16) = 27412;
      red_led_on();
      v17 = 0;
      do
      {
        v18 = fan_get_realtime_speed(v15);
        if ( v18 == -1 || (v19 = platform_get_fan_max_speed(v15), fan_get_check_fan_speed(v19) > v18) )
        {
          V_LOCK();
          V_INT((int)v32, s, v17);
          HIWORD(v16) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
          V_INT((int)v34, v16, v18 & ~(v18 >> 31));
          LOWORD(v20) = 27424;
          HIWORD(v20) = (unsigned int)"r_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
          logfmt_raw(
            v35,
            0x1000u,
            0,
            v33,
            v32[0],
            v32[1],
            v32[2],
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v33,
            v34[0],
            v34[1],
            v34[2],
            v34[3],
            v34[4],
            v34[5],
            v34[6],
            v34[7],
            v20,
            v15,
            *(_DWORD *)(v31 + 4 * v15));
          V_UNLOCK();
          LOWORD(v21) = 27208;
          LOWORD(v22) = 27252;
          HIWORD(v22) = (unsigned int)"" >> 16;
          HIWORD(v21) = (unsigned int)"artbeat_thread" >> 16;
          zlog(*v30, v22, 150, v21, 16, 52, 100, v35);
          set_miner_6060info_status_fan_err(v15, 1);
        }
        ++v15;
        ++v17;
      }
      while ( fan_num != v15 );
    }
  }
  if ( fan_num > 0 )
  {
    for ( j = 0; j != fan_num; ++j )
    {
      v24 = j;
      set_miner_6060info_status_fan_err(v24, 0);
    }
  }
LABEL_22:
  V_LOCK();
  LOWORD(v25) = 27476;
  HIWORD(v25) = (unsigned int)"ld/godminer-origin_godminer-new/miner_util/check_pool.c" >> 16;
  logfmt_raw(v35, 0x1000u, 0, v25, v10);
  V_UNLOCK();
  LOWORD(v26) = 27252;
  LOWORD(v27) = 27208;
  HIWORD(v27) = (unsigned int)"artbeat_thread" >> 16;
  HIWORD(v26) = (unsigned int)"" >> 16;
  return zlog(*v30, v26, 150, v27, 16, 61, 60, v35);
}
