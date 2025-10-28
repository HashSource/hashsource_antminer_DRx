int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int v4; // r8
  int is_pic_mcu_en; // r7
  unsigned __int16 v6; // r0
  int v8; // r7
  bool v9; // zf
  unsigned int v10; // r8
  int v11; // r10
  double v12; // d9
  int v13; // r9
  double v14; // d8
  int device_num; // r0
  double v16; // d14
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int k; // r5
  int v25; // r0
  int v26; // r0
  int m; // r5
  int v28; // r0
  int v29; // r0
  int n; // r5
  int v31; // r0
  int v32; // r0
  int ii; // r5
  int v34; // r0
  int v35; // r0
  int jj; // r5
  int v37; // r0
  double v38; // d14
  int v39; // r3
  int v40; // r2
  int v41; // r12
  double v42; // d8
  int v43; // r7
  int chain_num; // r11
  int v45; // r6
  int v46; // r9
  int i; // r5
  int v48; // r0
  int v49; // r0
  int j; // r8
  int v51; // r0
  unsigned int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  unsigned int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // [sp+4h] [bp-1028h]
  int v61; // [sp+4h] [bp-1028h]
  int v62; // [sp+4h] [bp-1028h]
  int v63; // [sp+18h] [bp-1014h]
  int v64; // [sp+1Ch] [bp-1010h]
  int v65; // [sp+24h] [bp-1008h] BYREF
  char v66[4100]; // [sp+28h] [bp-1004h] BYREF

  v65 = a2;
  get_all_created_runtime(&v65);
  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    is_pic_mcu_en = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      296,
      100,
      v66);
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, "Sweep error string = %s.", "V:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      297,
      100,
      v66);
    return is_pic_mcu_en;
  }
  v4 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v4) )
  {
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, "Not support power version, %04x", v4);
    V_UNLOCK();
    is_pic_mcu_en = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      303,
      100,
      v66);
    return is_pic_mcu_en;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( !is_pic_mcu_en )
  {
    v6 = bitmain_set_watchdog(0);
    v4 = v6;
    if ( v6 )
    {
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "disable power watchdog: %04x", v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        310,
        100,
        v66);
      return is_pic_mcu_en;
    }
    sleep(1u);
  }
  bitmain_power_off_0();
  byte_197B28 = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "Initializing the power, please wait, this may take up 1 minute...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    322,
    60,
    v66);
  sleep(0x3Cu);
  if ( platform_is_pic_mcu_en() )
    goto LABEL_12;
  v42 = 0.0;
  v43 = 21;
  chain_num = platform_get_chain_num();
  v45 = 1;
  v46 = 100;
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v48 = i;
        read_feedback_voltage(v48);
        if ( v2 > v42 )
          v42 = v2;
      }
    }
    if ( v42 <= 10.0 )
      break;
    if ( v46 > 20 )
    {
      v46 = 20;
      sleep(1u);
      if ( !--v43 )
        goto LABEL_93;
LABEL_89:
      v45 = 1;
    }
    else
    {
      sleep(1u);
      if ( !--v43 )
        goto LABEL_93;
      if ( ++v45 > 19 )
        goto LABEL_12;
      v46 = 20;
    }
  }
  if ( v42 <= 4.0 )
    goto LABEL_12;
  if ( v46 != 2 )
  {
    v46 = 2;
    sleep(1u);
    if ( !--v43 )
      goto LABEL_93;
    goto LABEL_89;
  }
  sleep(1u);
  if ( v43 != 1 )
    goto LABEL_12;
LABEL_93:
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "APW discharge too slow OR pic adc wrong");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "wait_for_psu_discharge",
    22,
    187,
    100,
    v66);
LABEL_12:
  v8 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "bitmain power fw version: %04x", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    331,
    60,
    v66);
  byte_197B29 = 0;
  dword_197B2C = 0;
  dword_197B30 = 0;
  byte_197B10 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_197B1C = opt_custom_voltage;
  byte_197B14 = platform_is_adjustable_power();
  byte_197B20 = platform_is_check_asic_voltage_enable();
  dword_197B24 = platfrom_get_check_asic_voltage();
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "Power init:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    356,
    40,
    v66);
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_197B2C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    357,
    40,
    v66);
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_197B1C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    358,
    40,
    v66);
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_197B20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    359,
    40,
    v66);
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_197B24);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    360,
    40,
    v66);
  if ( byte_197B14 && byte_197B20 )
    v63 = set_check_asic_voltage(0);
  else
    v63 = set_working_voltage(0);
  if ( v63 )
  {
    V_LOCK();
    is_pic_mcu_en = -1;
    logfmt_raw(v66, 0x1000u, 0, "set_voltage_by_steps error!");
    V_UNLOCK();
    v41 = 368;
LABEL_67:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      v41,
      100,
      v66);
    return is_pic_mcu_en;
  }
  v9 = v4 == 113;
  if ( v4 != 113 )
    v9 = v4 == 116;
  v10 = 0;
  if ( !v9 )
  {
    while ( 1 )
    {
      is_pic_mcu_en = bitmain_get_power_status();
      ++v10;
      if ( !is_pic_mcu_en )
        break;
      if ( v10 == 5 * (v10 / 5) )
      {
        V_LOCK();
        logfmt_raw(v66, 0x1000u, v10 % 5, ">> bitmain_get_power_status failed(%d) <<", is_pic_mcu_en);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "power_init",
          10,
          382,
          100,
          v66);
      }
      sleep(3u);
      if ( v10 == 20 )
        goto LABEL_28;
    }
  }
  is_pic_mcu_en = 0;
LABEL_28:
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "bitmain_get_power_status end!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    389,
    40,
    v66);
  bitmain_power_on();
  byte_197B28 = 1;
  if ( (unsigned int)(opt_algo - 11) > 1 )
  {
    v49 = usleep(0x61A80u);
    if ( v65 > 0 )
    {
      for ( j = 0; j < v65; ++j )
      {
        v51 = dev_ctrl(v49);
        (*(void (__fastcall **)(int))(v51 + 48))(j);
        v52 = sleep(1u);
        v53 = dev_ctrl(v52);
        (*(void (__fastcall **)(int))(v53 + 52))(j);
        v54 = usleep((__useconds_t)&loc_493E0);
        v55 = dev_ctrl(v54);
        (*(void (__fastcall **)(int))(v55 + 48))(j);
        v56 = sleep(1u);
        v57 = dev_ctrl(v56);
        (*(void (__fastcall **)(int))(v57 + 52))(j);
        v58 = usleep((__useconds_t)&loc_493E0);
        v59 = dev_ctrl(v58);
        v49 = (*(int (__fastcall **)(int))(v59 + 48))(j);
      }
    }
  }
  if ( byte_197B10 )
    v11 = dword_197B2C;
  else
    v11 = sub_5DAF0();
  v12 = (double)v11;
  v13 = 3;
  v14 = (double)v11 * 0.75 / 100.0;
  while ( 2 )
  {
    sleep(1u);
    if ( platform_is_pic_mcu_en() )
    {
      device_num = query_device_num();
      v16 = 0.0;
      v64 = device_num;
      if ( device_num > 0 )
      {
        v17 = 0;
        do
        {
          v18 = dev_ctrl(device_num);
          v19 = (*(int (__fastcall **)(int))(v18 + 60))(v17);
          read_feedback_voltage(v19);
          v20 = V_LOCK();
          v21 = dev_ctrl(v20);
          v22 = (*(int (__fastcall **)(int))(v21 + 60))(v17);
          logfmt_raw(v66, 0x1000u, 0, "chain %d feedback voltage = %.2f", v22, v60, v2);
          V_UNLOCK();
          device_num = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/miner_util/power_api.c",
                         150,
                         "get_minimal_feedback_voltage",
                         28,
                         69,
                         40,
                         v66);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v16 )
            {
              if ( v16 < 0.1 )
                v16 = v2;
            }
            else
            {
              v16 = v2;
            }
          }
          ++v17;
        }
        while ( v64 != v17 );
      }
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "the minimal voltage = %.2f", v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "get_minimal_feedback_voltage",
        28,
        74,
        20,
        v66);
      if ( v14 <= v16 )
      {
        V_LOCK();
        logfmt_raw(
          v66,
          0x1000u,
          0,
          "power voltage qualified! centi_voltage %d feedback_voltage %f qualified_vol %f",
          v11,
          v61,
          v16,
          v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "check_feedback_voltage",
          22,
          95,
          80,
          v66);
        goto LABEL_44;
      }
      V_LOCK();
      logfmt_raw(
        v66,
        0x1000u,
        0,
        "power voltage can not meet the target! centi_voltage %d feedback_voltage %f qualified_vol %f",
        v11,
        v61,
        v16,
        v14);
      V_UNLOCK();
      v39 = 80;
      v40 = 91;
      goto LABEL_65;
    }
    read_feedback_voltage(0);
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, "read fb voltage %.2f", v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "check_feedback_voltage",
      22,
      100,
      20,
      v66);
    if ( v2 >= 0.0 )
    {
      v38 = v2 * 100.0;
      if ( v2 * 100.0 <= v12 * 1.1 && v38 >= v12 * 0.9 )
        goto LABEL_44;
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "power voltage qualified! centi_voltage %d fb_vol %f", v11, v62, v38);
      V_UNLOCK();
      v39 = 100;
      v40 = 107;
LABEL_65:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "check_feedback_voltage",
        22,
        v40,
        v39,
        v66);
      if ( !--v13 )
      {
        V_LOCK();
        is_pic_mcu_en = -1;
        logfmt_raw(v66, 0x1000u, 0, "check_feedback_voltage error!");
        V_UNLOCK();
        v41 = 411;
        goto LABEL_67;
      }
      continue;
    }
    break;
  }
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "read_feedback_voltage_from_psu failed!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "check_feedback_voltage",
    22,
    102,
    80,
    v66);
LABEL_44:
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "check_feedback_voltage end!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    416,
    40,
    v66);
  if ( (unsigned int)(opt_algo - 11) <= 1 )
  {
    v23 = usleep((__useconds_t)&stru_18698.st_size);
    if ( v65 > 0 )
    {
      for ( k = 0; k < v65; ++k )
      {
        v25 = dev_ctrl(v23);
        v23 = (*(int (__fastcall **)(int))(v25 + 48))(k);
      }
    }
    v26 = usleep((__useconds_t)&stru_18698.st_size);
    if ( v65 > 0 )
    {
      for ( m = 0; m < v65; ++m )
      {
        v28 = dev_ctrl(v26);
        v26 = (*(int (__fastcall **)(int))(v28 + 52))(m);
      }
    }
    v29 = usleep((__useconds_t)&stru_18698.st_size);
    if ( v65 > 0 )
    {
      for ( n = 0; n < v65; ++n )
      {
        v31 = dev_ctrl(v29);
        v29 = (*(int (__fastcall **)(int))(v31 + 48))(n);
      }
    }
    v32 = usleep((__useconds_t)&stru_18698.st_size);
    if ( v65 > 0 )
    {
      for ( ii = 0; ii < v65; ++ii )
      {
        v34 = dev_ctrl(v32);
        v32 = (*(int (__fastcall **)(int))(v34 + 52))(ii);
      }
    }
    v35 = usleep((__useconds_t)&stru_18698.st_size);
    if ( v65 > 0 )
    {
      for ( jj = 0; jj < v65; ++jj )
      {
        v37 = dev_ctrl(v35);
        v35 = (*(int (__fastcall **)(int))(v37 + 48))(jj);
      }
    }
  }
  return is_pic_mcu_en;
}
