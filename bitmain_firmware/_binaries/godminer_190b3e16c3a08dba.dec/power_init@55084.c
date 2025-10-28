int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int v4; // r6
  unsigned __int16 v5; // r0
  int power_status; // r6
  int v8; // r8
  int v9; // r8
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r7
  double v21; // d9
  int v22; // r10
  double v23; // d8
  int device_num; // r0
  double v25; // d14
  int v26; // r8
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  bool v32; // zf
  unsigned int v33; // r7
  double v34; // d14
  int v35; // r3
  int v36; // r2
  int v37; // r12
  double v38; // d8
  int v39; // r8
  int chain_num; // r11
  int v41; // r6
  int i; // r10
  int j; // r5
  int v44; // r0
  int v45; // [sp+0h] [bp-1024h]
  int v46; // [sp+0h] [bp-1024h]
  int v47; // [sp+4h] [bp-1020h]
  int v48; // [sp+4h] [bp-1020h]
  int v49; // [sp+4h] [bp-1020h]
  int v50; // [sp+18h] [bp-100Ch]
  int v51; // [sp+18h] [bp-100Ch]
  char v53[4100]; // [sp+20h] [bp-1004h] BYREF

  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    power_status = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      294,
      100,
      v53);
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "Sweep error string = %s.", "V:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      295,
      100,
      v53);
    return power_status;
  }
  v4 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v4) )
  {
    V_LOCK();
    v46 = v4;
    power_status = -1;
    logfmt_raw(v53, 0x1000u, 0, "Not support power version, %04x", v46);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      301,
      100,
      v53);
    return power_status;
  }
  if ( !platform_is_pic_mcu_en() )
  {
    v5 = bitmain_set_watchdog(0);
    v4 = v5;
    if ( v5 )
    {
      V_LOCK();
      v45 = v4;
      power_status = 0;
      logfmt_raw(v53, 0x1000u, 0, "disable power watchdog: %04x", v45);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        308,
        100,
        v53);
      return power_status;
    }
    sleep(1u);
  }
  bitmain_power_off_0();
  byte_17B098 = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "Initializing the power, please wait, this may take up 1 minute...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    320,
    60,
    v53);
  sleep(0x3Cu);
  if ( !platform_is_pic_mcu_en() )
  {
    v38 = 0.0;
    v39 = 21;
    v51 = v4;
    chain_num = platform_get_chain_num();
    v41 = 1;
    for ( i = 100; ; i = 20 )
    {
      while ( 1 )
      {
        if ( chain_num > 0 )
        {
          for ( j = 0; j != chain_num; ++j )
          {
            v44 = j;
            read_feedback_voltage(v44);
            if ( v2 > v38 )
              v38 = v2;
          }
        }
        if ( v38 > 10.0 )
          break;
        if ( v38 <= 4.0 )
          goto LABEL_81;
        if ( i == 2 )
        {
          v4 = v51;
          sleep(1u);
          if ( v39 != 1 )
            goto LABEL_12;
          goto LABEL_79;
        }
        i = 2;
        sleep(1u);
        if ( !--v39 )
          goto LABEL_77;
LABEL_75:
        v41 = 1;
      }
      if ( i > 20 )
      {
        i = 20;
        sleep(1u);
        if ( !--v39 )
        {
LABEL_77:
          v4 = v51;
LABEL_79:
          V_LOCK();
          logfmt_raw(v53, 0x1000u, 0, "APW discharge too slow OR pic adc wrong");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/power_api.c",
            150,
            "wait_for_psu_discharge",
            22,
            187,
            100,
            v53);
          break;
        }
        goto LABEL_75;
      }
      sleep(1u);
      if ( !--v39 )
        goto LABEL_77;
      if ( ++v41 > 19 )
      {
LABEL_81:
        v4 = v51;
        break;
      }
    }
  }
LABEL_12:
  v8 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "bitmain power fw version: %04x", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    329,
    60,
    v53);
  byte_17B099 = 0;
  dword_17B09C = 0;
  dword_17B0A0 = 0;
  byte_17B080 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_17B08C = opt_custom_voltage;
  byte_17B084 = platform_is_adjustable_power();
  byte_17B090 = platform_is_check_asic_voltage_enable();
  dword_17B094 = platfrom_get_check_asic_voltage();
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "Power init:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    348,
    40,
    v53);
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_17B09C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    349,
    40,
    v53);
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_17B08C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    350,
    40,
    v53);
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_17B090);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    351,
    40,
    v53);
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_17B094);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    352,
    40,
    v53);
  if ( byte_17B084 && byte_17B090 )
    v9 = set_check_asic_voltage(0);
  else
    v9 = set_working_voltage(0);
  if ( v9 )
  {
    V_LOCK();
    power_status = -1;
    logfmt_raw(v53, 0x1000u, 0, "set_voltage_by_steps error!");
    V_UNLOCK();
    v37 = 360;
LABEL_52:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      v37,
      100,
      v53);
    return power_status;
  }
  bitmain_power_on();
  byte_17B098 = 1;
  v10 = usleep((__useconds_t)&loc_61A80);
  if ( a2 > 0 )
  {
    do
    {
      v11 = dev_ctrl(v10);
      (*(void (__fastcall **)(int))(v11 + 36))(v9);
      v12 = sleep(1u);
      v13 = dev_ctrl(v12);
      (*(void (__fastcall **)(int))(v13 + 40))(v9);
      v14 = usleep(0x493E0u);
      v15 = dev_ctrl(v14);
      (*(void (__fastcall **)(int))(v15 + 36))(v9);
      v16 = sleep(1u);
      v17 = dev_ctrl(v16);
      (*(void (__fastcall **)(int))(v17 + 40))(v9);
      v18 = usleep(0x493E0u);
      v19 = dev_ctrl(v18);
      v10 = (*(int (__fastcall **)(int))(v19 + 36))(v9++);
    }
    while ( a2 != v9 );
  }
  if ( byte_17B080 )
    v20 = dword_17B09C;
  else
    v20 = sub_54718();
  v21 = (double)v20;
  v22 = 3;
  v23 = (double)v20 * 0.75 / 100.0;
  while ( 1 )
  {
    sleep(1u);
    if ( !platform_is_pic_mcu_en() )
      break;
    device_num = query_device_num();
    v25 = 0.0;
    v50 = device_num;
    if ( device_num > 0 )
    {
      v26 = 0;
      do
      {
        v27 = dev_ctrl(device_num);
        v28 = (*(int (__fastcall **)(int))(v27 + 48))(v26);
        read_feedback_voltage(v28);
        v29 = V_LOCK();
        v30 = dev_ctrl(v29);
        v31 = (*(int (__fastcall **)(int))(v30 + 48))(v26);
        logfmt_raw(v53, 0x1000u, 0, "chain %d feedback voltage = %.2f", v31, v47, v2);
        V_UNLOCK();
        device_num = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/miner_util/power_api.c",
                       150,
                       "get_minimal_feedback_voltage",
                       28,
                       69,
                       40,
                       v53);
        if ( v2 > 0.1 )
        {
          if ( v25 <= v2 )
          {
            if ( v25 < 0.1 )
              v25 = v2;
          }
          else
          {
            v25 = v2;
          }
        }
        ++v26;
      }
      while ( v50 != v26 );
    }
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "the minimal voltage = %.2f", v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "get_minimal_feedback_voltage",
      28,
      74,
      20,
      v53);
    if ( v23 <= v25 )
    {
      V_LOCK();
      logfmt_raw(
        v53,
        0x1000u,
        0,
        "power voltage qualified! centi_voltage %d feedback_voltage %f qualified_vol %f",
        v20,
        v48,
        v25,
        v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "check_feedback_voltage",
        22,
        95,
        80,
        v53);
      goto LABEL_35;
    }
    V_LOCK();
    logfmt_raw(
      v53,
      0x1000u,
      0,
      "power voltage can not meet the target! centi_voltage %d feedback_voltage %f qualified_vol %f",
      v20,
      v48,
      v25,
      v23);
    V_UNLOCK();
    v35 = 80;
    v36 = 91;
LABEL_50:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "check_feedback_voltage",
      22,
      v36,
      v35,
      v53);
    if ( !--v22 )
    {
      V_LOCK();
      power_status = -1;
      logfmt_raw(v53, 0x1000u, 0, "check_feedback_voltage error!");
      V_UNLOCK();
      v37 = 383;
      goto LABEL_52;
    }
  }
  read_feedback_voltage(0);
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "read fb voltage %.2f", v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "check_feedback_voltage",
    22,
    100,
    20,
    v53);
  if ( v2 >= 0.0 )
  {
    v34 = v2 * 100.0;
    if ( v2 * 100.0 <= v21 * 1.1 && v34 >= v21 * 0.9 )
      goto LABEL_35;
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "power voltage qualified! centi_voltage %d fb_vol %f", v20, v49, v34);
    V_UNLOCK();
    v35 = 100;
    v36 = 107;
    goto LABEL_50;
  }
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "read_feedback_voltage_from_psu failed!");
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
    v53);
LABEL_35:
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "check_feedback_voltage end!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    388,
    40,
    v53);
  v32 = v4 == 113;
  if ( v4 != 113 )
    v32 = v4 == 116;
  v33 = 0;
  if ( !v32 )
  {
    while ( 1 )
    {
      power_status = bitmain_get_power_status();
      ++v33;
      if ( !power_status )
        break;
      if ( v33 == 5 * (v33 / 5) )
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, v33 % 5, ">> bitmain_get_power_status failed(%d) <<", power_status);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "power_init",
          10,
          400,
          100,
          v53);
      }
      sleep(3u);
      if ( v33 == 20 )
        goto LABEL_45;
    }
  }
  power_status = 0;
LABEL_45:
  V_LOCK();
  logfmt_raw(v53, 0x1000u, 0, "bitmain_get_power_status end!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "power_init",
    10,
    407,
    40,
    v53);
  return power_status;
}
