time_t check_fan_valiad()
{
  unsigned int v0; // r6
  int fan_num; // r4
  unsigned int v2; // r5
  int v3; // r7
  int i; // r10
  int realtime_speed; // r11
  int v6; // r0
  int fan_max_speed; // r0
  char v9[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, 1369504);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_fan.c",
    150,
    "check_fan_valiad",
    16,
    32,
    60,
    v9);
  v0 = 0;
  fan_num = platform_get_fan_num();
  while ( 1 )
  {
    v2 = ++v0 % 0x14;
    if ( fan_num <= 0 )
      break;
    v3 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v6 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v6);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v3;
      }
    }
    usleep((__useconds_t)&loc_7A120);
    if ( v2 )
    {
      if ( fan_num <= v3 )
        goto LABEL_16;
      goto LABEL_12;
    }
LABEL_15:
    fan_pwm_set_max();
    if ( fan_num <= v3 )
      goto LABEL_16;
LABEL_12:
    if ( v0 == 120 * (v0 / 0x78) )
    {
      red_led_on();
      V_LOCK();
      logfmt_raw(v9, 0x1000u, v0 % 0x78, 1246128, 1246156);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_fan.c",
        150,
        "check_fan_valiad",
        16,
        50,
        100,
        v9);
    }
  }
  usleep((__useconds_t)&loc_7A120);
  if ( !v2 )
  {
    v3 = 0;
    goto LABEL_15;
  }
  v3 = 0;
LABEL_16:
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, 1369680, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/check_fan.c",
           150,
           "check_fan_valiad",
           16,
           54,
           60,
           v9);
}
