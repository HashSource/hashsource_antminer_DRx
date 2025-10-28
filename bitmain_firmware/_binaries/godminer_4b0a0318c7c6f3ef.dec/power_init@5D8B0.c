int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int v4; // r8
  int is_pic_mcu_en; // r7
  unsigned __int16 v6; // r0
  int v7; // r6
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v12; // r3
  _DWORD *v13; // r5
  int v14; // r1
  int v15; // r7
  int v16; // r3
  int v17; // r1
  unsigned __int8 *v18; // r2
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r1
  int v23; // r1
  int v24; // r1
  int v25; // r1
  bool v26; // zf
  int v27; // r9
  unsigned int v28; // r8
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r10
  int v34; // r3
  double v35; // d9
  int v36; // r9
  double v37; // d8
  int device_num; // r0
  double v39; // d14
  int v40; // r8
  int v41; // r6
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r1
  int v48; // r3
  int v49; // r1
  int v50; // r3
  int v51; // r1
  int v52; // r3
  int v53; // r1
  int v54; // r0
  int k; // r5
  int v56; // r0
  int v57; // r0
  int m; // r5
  int v59; // r0
  int v60; // r0
  int n; // r5
  int v62; // r0
  int v63; // r0
  int ii; // r5
  int v65; // r0
  int v66; // r0
  int jj; // r5
  int v68; // r0
  int v69; // r1
  int v70; // r3
  int v71; // r3
  int v72; // r2
  int v73; // r1
  int v74; // r3
  int v75; // r12
  int v76; // r1
  _DWORD *v77; // r5
  int v78; // r3
  int v79; // r1
  int v80; // r1
  int v81; // r3
  int v82; // r1
  int v83; // r3
  int v84; // r1
  int v85; // r3
  double v86; // d8
  int v87; // r7
  int chain_num; // r11
  int v89; // r6
  int v90; // r9
  _DWORD *v91; // r10
  int i; // r5
  int v93; // r0
  int v94; // r3
  int v95; // r1
  int v96; // r3
  _DWORD *v97; // r3
  int v98; // r1
  int v99; // r3
  int v100; // r0
  int j; // r8
  int v102; // r0
  unsigned int v103; // r0
  int v104; // r0
  int v105; // r0
  int v106; // r0
  unsigned int v107; // r0
  int v108; // r0
  int v109; // r0
  int v110; // r0
  int v111; // [sp+4h] [bp-1028h]
  int v112; // [sp+4h] [bp-1028h]
  int v113; // [sp+4h] [bp-1028h]
  int v114; // [sp+18h] [bp-1014h]
  int v115; // [sp+18h] [bp-1014h]
  int v116; // [sp+1Ch] [bp-1010h]
  int v117; // [sp+20h] [bp-100Ch]
  int v118; // [sp+24h] [bp-1008h] BYREF
  char v119[4100]; // [sp+28h] [bp-1004h] BYREF

  v118 = a2;
  get_all_created_runtime(&v118);
  if ( !platform_is_adjustable_power() )
  {
    LOWORD(v77) = 20532;
    V_LOCK();
    LOWORD(v78) = 30168;
    HIWORD(v78) = (unsigned int)"control_info_init" >> 16;
    logfmt_raw(v119, 0x1000u, 0, v78, "power_init");
    HIWORD(v77) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v79) = 29756;
    HIWORD(v79) = (unsigned int)"2f" >> 16;
    is_pic_mcu_en = -1;
    zlog(*v77, v79, 150, "power_init", 10, 296, 100, v119);
    V_LOCK();
    LOWORD(v80) = 30216;
    LOWORD(v81) = 31232;
    HIWORD(v80) = (unsigned int)"y a bad sensor" >> 16;
    HIWORD(v81) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v119, 0x1000u, 0, v81, v80);
    V_UNLOCK();
    LOWORD(v82) = 29756;
    HIWORD(v82) = (unsigned int)"2f" >> 16;
    zlog(*v77, v82, 150, "power_init", 10, 297, 100, v119);
    return is_pic_mcu_en;
  }
  v4 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v4) )
  {
    V_LOCK();
    LOWORD(v96) = 30220;
    HIWORD(v96) = (unsigned int)"bad sensor" >> 16;
    logfmt_raw(v119, 0x1000u, 0, v96, v4);
    V_UNLOCK();
    LOWORD(v97) = 20532;
    HIWORD(v97) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v98) = 29756;
    HIWORD(v98) = (unsigned int)"2f" >> 16;
    is_pic_mcu_en = -1;
    zlog(*v97, v98, 150, "power_init", 10, 303, 100, v119);
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
      LOWORD(v8) = 30252;
      HIWORD(v8) = (unsigned int)"enkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/set_pwm_by_temp.c" >> 16;
      logfmt_raw(v119, 0x1000u, 0, v8, v4);
      V_UNLOCK();
      LOWORD(v9) = 20532;
      HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v10) = 29756;
      HIWORD(v10) = (unsigned int)"2f" >> 16;
      zlog(*v9, v10, 150, "power_init", 10, 310, 100, v119);
      return is_pic_mcu_en;
    }
    sleep(1u);
  }
  LOWORD(v7) = 27384;
  bitmain_power_off_0();
  HIWORD(v7) = (unsigned int)&unk_196B00 >> 16;
  *(_BYTE *)(v7 + 0x18) = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  LOWORD(v12) = 30284;
  HIWORD(v12) = (unsigned int)"lease/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/set_pwm_by_temp.c" >> 16;
  LOWORD(v13) = 20532;
  logfmt_raw(v119, 0x1000u, 0, v12);
  HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  LOWORD(v14) = 29756;
  HIWORD(v14) = (unsigned int)"2f" >> 16;
  zlog(*v13, v14, 150, "power_init", 10, 322, 60, v119);
  if ( !platform_is_pic_mcu_en() )
  {
    v86 = 0.0;
    v87 = 21;
    v115 = v7;
    chain_num = platform_get_chain_num();
    v89 = 1;
    v90 = 100;
    v91 = v13;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( chain_num > 0 )
        {
          for ( i = 0; i != chain_num; ++i )
          {
            v93 = i;
            read_feedback_voltage(v93);
            if ( v2 > v86 )
              v86 = v2;
          }
        }
        if ( v86 > 10.0 )
          break;
        if ( v86 <= 4.0 )
          goto LABEL_95;
        if ( v90 == 2 )
        {
          v7 = v115;
          sleep(1u);
          v13 = v91;
          if ( v87 != 1 )
            goto LABEL_12;
          goto LABEL_93;
        }
        v90 = 2;
        sleep(1u);
        if ( !--v87 )
          goto LABEL_91;
LABEL_89:
        v89 = 1;
      }
      if ( v90 > 20 )
      {
        v90 = 20;
        sleep(1u);
        if ( !--v87 )
        {
LABEL_91:
          v7 = v115;
          v13 = v91;
LABEL_93:
          V_LOCK();
          LOWORD(v94) = 30352;
          HIWORD(v94) = (unsigned int)"ner-new/miner_util/set_pwm_by_temp.c" >> 16;
          logfmt_raw(v119, 0x1000u, 0, v94);
          V_UNLOCK();
          LOWORD(v95) = 29756;
          HIWORD(v95) = (unsigned int)"2f" >> 16;
          zlog(*v13, v95, 150, "wait_for_psu_discharge", 22, 187, 100, v119);
          break;
        }
        goto LABEL_89;
      }
      sleep(1u);
      if ( !--v87 )
        goto LABEL_91;
      if ( ++v89 > 19 )
      {
LABEL_95:
        v7 = v115;
        v13 = v91;
        break;
      }
      v90 = 20;
    }
  }
LABEL_12:
  v15 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  LOWORD(v16) = 30392;
  HIWORD(v16) = (unsigned int)"min temp pcb: %d" >> 16;
  logfmt_raw(v119, 0x1000u, 0, v16, v15);
  V_UNLOCK();
  LOWORD(v17) = 29756;
  HIWORD(v17) = (unsigned int)"2f" >> 16;
  zlog(*v13, v17, 150, "power_init", 10, 333, 60, v119);
  LOWORD(v18) = 22964;
  HIWORD(v18) = (unsigned int)&unk_1959BC >> 16;
  v19 = *v18;
  *(_BYTE *)(v7 + 0x19) = 0;
  *(_DWORD *)(v7 + 0x1C) = 0;
  *(_DWORD *)(v7 + 0x20) = 0;
  *(_BYTE *)v7 = 1;
  if ( v19 || is_eeprom_loaded() )
    *(_DWORD *)(v7 + 0xC) = opt_custom_voltage;
  *(_BYTE *)(v7 + 4) = platform_is_adjustable_power();
  *(_BYTE *)(v7 + 0x10) = platform_is_check_asic_voltage_enable();
  *(_DWORD *)(v7 + 0x14) = platfrom_get_check_asic_voltage();
  V_LOCK();
  LOWORD(v20) = 30424;
  HIWORD(v20) = (unsigned int)"p" >> 16;
  logfmt_raw(v119, 0x1000u, 0, v20);
  V_UNLOCK();
  LOWORD(v21) = 29756;
  HIWORD(v21) = (unsigned int)"2f" >> 16;
  zlog(*v13, v21, 150, "power_init", 10, 358, 40, v119);
  V_LOCK();
  logfmt_raw(v119, 0x1000u, 0, "current_voltage_raw\t\t= %d", *(_DWORD *)(v7 + 0x1C));
  V_UNLOCK();
  LOWORD(v22) = 29756;
  HIWORD(v22) = (unsigned int)"2f" >> 16;
  zlog(*v13, v22, 150, "power_init", 10, 359, 40, v119);
  V_LOCK();
  logfmt_raw(v119, 0x1000u, 0, "working_voltage_raw\t\t= %d", *(_DWORD *)(v7 + 0xC));
  V_UNLOCK();
  LOWORD(v23) = 29756;
  HIWORD(v23) = (unsigned int)"2f" >> 16;
  zlog(*v13, v23, 150, "power_init", 10, 360, 40, v119);
  V_LOCK();
  logfmt_raw(v119, 0x1000u, 0, "check_asic_voltage_enable\t= %d", *(unsigned __int8 *)(v7 + 0x10));
  V_UNLOCK();
  LOWORD(v24) = 29756;
  HIWORD(v24) = (unsigned int)"2f" >> 16;
  zlog(*v13, v24, 150, "power_init", 10, 361, 40, v119);
  V_LOCK();
  logfmt_raw(v119, 0x1000u, 0, "check_asic_voltage_raw\t= %d", *(_DWORD *)(v7 + 0x14));
  V_UNLOCK();
  LOWORD(v25) = 29756;
  HIWORD(v25) = (unsigned int)"2f" >> 16;
  zlog(*v13, v25, 150, "power_init", 10, 362, 40, v119);
  if ( *(_BYTE *)(v7 + 4) && *(_BYTE *)(v7 + 0x10) )
    v114 = set_check_asic_voltage(0);
  else
    v114 = set_working_voltage(0);
  if ( v114 )
  {
    V_LOCK();
    LOWORD(v99) = 30552;
    HIWORD(v99) = (unsigned int)"k_fan_err" >> 16;
    is_pic_mcu_en = -1;
    logfmt_raw(v119, 0x1000u, 0, v99);
    V_UNLOCK();
    v75 = 370;
LABEL_67:
    LOWORD(v76) = 29756;
    HIWORD(v76) = (unsigned int)"2f" >> 16;
    zlog(*v13, v76, 150, "power_init", 10, v75, 100, v119);
    return is_pic_mcu_en;
  }
  v26 = v4 == 113;
  if ( v4 != 113 )
    v26 = v4 == 116;
  LOWORD(v27) = 30580;
  v28 = 0;
  if ( !v26 )
  {
    while ( 1 )
    {
      is_pic_mcu_en = bitmain_get_power_status();
      ++v28;
      if ( !is_pic_mcu_en )
        break;
      if ( v28 == 5 * (v28 / 5) )
      {
        V_LOCK();
        HIWORD(v27) = (unsigned int)"ction_to_pool" >> 16;
        logfmt_raw(v119, 0x1000u, v28 % 5, v27, is_pic_mcu_en);
        V_UNLOCK();
        LOWORD(v29) = 29756;
        HIWORD(v29) = (unsigned int)"2f" >> 16;
        zlog(*v13, v29, 150, "power_init", 10, 384, 100, v119);
      }
      sleep(3u);
      if ( v28 == 20 )
        goto LABEL_28;
    }
  }
  is_pic_mcu_en = 0;
LABEL_28:
  V_LOCK();
  LOWORD(v30) = 30624;
  HIWORD(v30) = (unsigned int)" lost" >> 16;
  logfmt_raw(v119, 0x1000u, 0, v30);
  V_UNLOCK();
  LOWORD(v31) = 29756;
  HIWORD(v31) = (unsigned int)"2f" >> 16;
  zlog(*v13, v31, 150, "power_init", 10, 391, 40, v119);
  bitmain_power_on();
  v32 = opt_algo;
  *(_BYTE *)(v7 + 0x18) = 1;
  if ( (unsigned int)(v32 - 11) > 1 )
  {
    v100 = usleep(0x61A80u);
    if ( v118 > 0 )
    {
      for ( j = 0; j < v118; ++j )
      {
        v102 = dev_ctrl(v100);
        (*(void (__fastcall **)(int))(v102 + 48))(j);
        v103 = sleep(1u);
        v104 = dev_ctrl(v103);
        (*(void (__fastcall **)(int))(v104 + 52))(j);
        v105 = usleep((__useconds_t)&loc_493E0);
        v106 = dev_ctrl(v105);
        (*(void (__fastcall **)(int))(v106 + 48))(j);
        v107 = sleep(1u);
        v108 = dev_ctrl(v107);
        (*(void (__fastcall **)(int))(v108 + 52))(j);
        v109 = usleep((__useconds_t)&loc_493E0);
        v110 = dev_ctrl(v109);
        v100 = (*(int (__fastcall **)(int))(v110 + 48))(j);
      }
    }
  }
  if ( *(_BYTE *)v7 )
    v33 = *(_DWORD *)(v7 + 0x1C);
  else
    v33 = sub_5CF10();
  LOWORD(v34) = 30896;
  v35 = (double)v33;
  v36 = 3;
  HIWORD(v34) = (unsigned int)"r exceed limit" >> 16;
  v117 = v34;
  v37 = (double)v33 * 0.75 / 100.0;
  while ( 1 )
  {
    sleep(1u);
    if ( !platform_is_pic_mcu_en() )
      break;
    device_num = query_device_num();
    v39 = 0.0;
    v116 = device_num;
    if ( device_num > 0 )
    {
      LOWORD(v40) = 30656;
      v41 = 0;
      do
      {
        v42 = dev_ctrl(device_num);
        v43 = (*(int (__fastcall **)(int))(v42 + 60))(v41);
        read_feedback_voltage(v43);
        v44 = V_LOCK();
        v45 = dev_ctrl(v44);
        v46 = (*(int (__fastcall **)(int))(v45 + 60))(v41);
        HIWORD(v40) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c" >> 16;
        logfmt_raw(v119, 0x1000u, 0, v40, v46, v111, v2);
        V_UNLOCK();
        LOWORD(v47) = 29756;
        HIWORD(v47) = (unsigned int)"2f" >> 16;
        device_num = zlog(*v13, v47, 150, "get_minimal_feedback_voltage", 28, 69, 40, v119);
        if ( v2 > 0.1 )
        {
          if ( v2 >= v39 )
          {
            if ( v39 < 0.1 )
              v39 = v2;
          }
          else
          {
            v39 = v2;
          }
        }
        ++v41;
      }
      while ( v116 != v41 );
    }
    V_LOCK();
    LOWORD(v48) = 30692;
    HIWORD(v48) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c" >> 16;
    logfmt_raw(v119, 0x1000u, 0, v48, v39);
    V_UNLOCK();
    LOWORD(v49) = 29756;
    HIWORD(v49) = (unsigned int)"2f" >> 16;
    zlog(*v13, v49, 150, "get_minimal_feedback_voltage", 28, 74, 20, v119);
    if ( v37 <= v39 )
    {
      V_LOCK();
      LOWORD(v50) = 30816;
      HIWORD(v50) = (unsigned int)" high" >> 16;
      logfmt_raw(v119, 0x1000u, 0, v50, v33, v112, v39, v37);
      V_UNLOCK();
      LOWORD(v51) = 29756;
      HIWORD(v51) = (unsigned int)"2f" >> 16;
      zlog(*v13, v51, 150, "check_feedback_voltage", 22, 95, 80, v119);
      goto LABEL_44;
    }
    V_LOCK();
    LOWORD(v85) = 30720;
    HIWORD(v85) = (unsigned int)"ease/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c" >> 16;
    logfmt_raw(v119, 0x1000u, 0, v85, v33, v112, v39, v37);
    V_UNLOCK();
    v71 = 80;
    v72 = 91;
LABEL_65:
    LOWORD(v73) = 29756;
    HIWORD(v73) = (unsigned int)"2f" >> 16;
    zlog(*v13, v73, 150, "check_feedback_voltage", 22, v72, v71, v119);
    if ( !--v36 )
    {
      V_LOCK();
      LOWORD(v74) = 31012;
      HIWORD(v74) = (unsigned int)"lost internet for %d seconds" >> 16;
      is_pic_mcu_en = -1;
      logfmt_raw(v119, 0x1000u, 0, v74);
      V_UNLOCK();
      v75 = 413;
      goto LABEL_67;
    }
  }
  read_feedback_voltage(0);
  V_LOCK();
  logfmt_raw(v119, 0x1000u, 0, v117, v2);
  V_UNLOCK();
  LOWORD(v69) = 29756;
  HIWORD(v69) = (unsigned int)"2f" >> 16;
  zlog(*v13, v69, 150, "check_feedback_voltage", 22, 100, 20, v119);
  if ( v2 >= 0.0 )
  {
    if ( v2 * 100.0 <= v35 * 1.1 && v2 * 100.0 >= v35 * 0.9 )
      goto LABEL_44;
    V_LOCK();
    LOWORD(v70) = 30960;
    HIWORD(v70) = (unsigned int)"oweroff. Exit and restart mining(%d)!" >> 16;
    logfmt_raw(v119, 0x1000u, 0, v70, v33, v113, v2 * 100.0);
    V_UNLOCK();
    v71 = 100;
    v72 = 107;
    goto LABEL_65;
  }
  V_LOCK();
  LOWORD(v83) = 30920;
  HIWORD(v83) = (unsigned int)" connection recovered after the system poweroff. Exit and restart mining(%d)!" >> 16;
  logfmt_raw(v119, 0x1000u, 0, v83);
  V_UNLOCK();
  LOWORD(v84) = 29756;
  HIWORD(v84) = (unsigned int)"2f" >> 16;
  zlog(*v13, v84, 150, "check_feedback_voltage", 22, 102, 80, v119);
LABEL_44:
  V_LOCK();
  LOWORD(v52) = 31044;
  HIWORD(v52) = (unsigned int)"lost internet %d seconds > 20 minutes, poweroff." >> 16;
  logfmt_raw(v119, 0x1000u, 0, v52);
  V_UNLOCK();
  LOWORD(v53) = 29756;
  HIWORD(v53) = (unsigned int)"2f" >> 16;
  zlog(*v13, v53, 150, "power_init", 10, 418, 40, v119);
  if ( (unsigned int)(opt_algo - 11) <= 1 )
  {
    v54 = usleep((__useconds_t)&stru_186A0);
    if ( v118 > 0 )
    {
      for ( k = 0; k < v118; ++k )
      {
        v56 = dev_ctrl(v54);
        v54 = (*(int (__fastcall **)(int))(v56 + 48))(k);
      }
    }
    v57 = usleep((__useconds_t)&stru_186A0);
    if ( v118 > 0 )
    {
      for ( m = 0; m < v118; ++m )
      {
        v59 = dev_ctrl(v57);
        v57 = (*(int (__fastcall **)(int))(v59 + 52))(m);
      }
    }
    v60 = usleep((__useconds_t)&stru_186A0);
    if ( v118 > 0 )
    {
      for ( n = 0; n < v118; ++n )
      {
        v62 = dev_ctrl(v60);
        v60 = (*(int (__fastcall **)(int))(v62 + 48))(n);
      }
    }
    v63 = usleep((__useconds_t)&stru_186A0);
    if ( v118 > 0 )
    {
      for ( ii = 0; ii < v118; ++ii )
      {
        v65 = dev_ctrl(v63);
        v63 = (*(int (__fastcall **)(int))(v65 + 52))(ii);
      }
    }
    v66 = usleep((__useconds_t)&stru_186A0);
    if ( v118 > 0 )
    {
      for ( jj = 0; jj < v118; ++jj )
      {
        v68 = dev_ctrl(v66);
        v66 = (*(int (__fastcall **)(int))(v68 + 48))(jj);
      }
    }
  }
  return is_pic_mcu_en;
}
