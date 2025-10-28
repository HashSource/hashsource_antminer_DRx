int __fastcall hardware_init(int a1)
{
  int result; // r0
  int v3; // r3
  const char *v4; // r4
  char *v5; // r7
  char *v6; // r0
  size_t v7; // r2
  _BOOL4 v8; // r0
  char *v9; // r9
  char *v10; // r5
  size_t v11; // r4
  int v12; // r5
  char *all_created_runtime; // r0
  char *v14; // r6
  int v15; // t1
  int is_adjustable_power; // r0
  int v17; // r10
  int chain_sensor_num; // r0
  int v19; // r11
  int sensor_max_chip_temp; // r0
  int v21; // r10
  int sensor_max_pcb_temp; // r0
  int v23; // r11
  int sensor_min_pcb_temp; // r0
  int v25; // r10
  int psu_gpio_port; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v28)(int); // r5
  int chain_num; // r0
  int v30; // r5
  _DWORD *device_num; // r0
  _DWORD *v32; // r6
  _DWORD *v33; // r7
  int v34; // r0
  int v35; // r10
  int v36; // r9
  _DWORD *v37; // r6
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  __int64 v43; // r0
  int v44; // r5
  int v45; // r3
  int v46; // r10
  int v47; // r8
  int eeprom_chain_load_state; // r0
  int v49; // r9
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r3
  char pic_device_high; // r0
  int v58; // r3
  int v59; // r1
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r3
  int v64; // r3
  _DWORD *v65; // r7
  _DWORD *v66; // r8
  int v67; // r1
  int v68; // r1
  char *v69; // r0
  int v70; // r3
  char *v71; // r7
  int v72; // r10
  int v73; // t1
  int v74; // r3
  int v75; // r1
  int v76; // r2
  int v77; // r3
  int v78; // r1
  int v79; // r3
  int v80; // r12
  _DWORD *v81; // r3
  int v82; // r2
  int v83; // r3
  int v84; // r1
  int v85; // r2
  int v86; // r3
  int v87; // r1
  int v88; // [sp+0h] [bp-106Ch]
  int v89; // [sp+2Ch] [bp-1040h]
  int v90; // [sp+2Ch] [bp-1040h]
  int v91; // [sp+30h] [bp-103Ch] BYREF
  int v92[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v93[1025]; // [sp+68h] [bp-1004h] BYREF

  result = machine_info_init();
  if ( result )
    return result;
  LOWORD(v3) = -12444;
  HIWORD(v3) = (unsigned int)"s" >> 16;
  v4 = *(const char **)(v3 + 4 * a1 + 436);
  v5 = (char *)calloc(1u, 8u);
  v6 = strchr(v4, 95);
  v7 = v6 - v4;
  if ( v6 )
    v8 = v6 - v4 <= 7;
  else
    v8 = 0;
  if ( v8 )
    strncpy(v5, v4, v7);
  v9 = (char *)calloc(1u, 8u);
  v10 = strchr(v4, 95);
  if ( v10 )
  {
    v11 = strlen(v4);
    if ( v11 - strlen(v10) <= 7 )
      strcpy(v9, v10 + 1);
  }
  v12 = 0;
  LOWORD(v92[0]) = 0;
  str2hex((int)v92, (int)v9, 4);
  v93[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v93);
  if ( v93[0] > 0 )
  {
    v14 = all_created_runtime - 4;
    do
    {
      v15 = *((_DWORD *)v14 + 1);
      v14 += 4;
      strcpy((char *)(v15 + 336), v5);
      *(_DWORD *)(*(_DWORD *)v14 + 344) = (unsigned __int16)__rev16(LOWORD(v92[0]));
      is_adjustable_power = platform_is_adjustable_power();
      v17 = *(_DWORD *)v14;
      *(_DWORD *)(*(_DWORD *)v14 + 1024) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v12);
      v19 = *(_DWORD *)v14;
      *(_DWORD *)(v17 + 412) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v12);
      v21 = *(_DWORD *)v14;
      *(_DWORD *)(v19 + 416) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v12);
      v23 = *(_DWORD *)v14;
      *(_DWORD *)(v21 + 420) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v12);
      v25 = *(_DWORD *)v14;
      *(_DWORD *)(v23 + 424) = sensor_min_pcb_temp;
      *(_DWORD *)(v25 + 428) = platform_get_sensor_max_uneffective_count(v12++);
    }
    while ( v12 < v93[0] );
  }
  free(v5);
  free(v9);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info((float *)v92);
  fan_control_info_init(
    v92[0],
    v92[1],
    v92[2],
    v92[3],
    v92[4],
    v92[5],
    *(float *)&v92[6],
    v92[7],
    v92[8],
    v92[9],
    v92[10],
    v92[11],
    v92[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v28 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 12);
  chain_num = platform_get_chain_num();
  v30 = v28(chain_num);
  if ( v30 )
  {
    V_LOCK();
    LOWORD(v58) = -10748;
    HIWORD(v58) = (unsigned int)"&" >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v58);
    V_UNLOCK();
    LOWORD(v81) = 20532;
    v80 = 100;
    HIWORD(v81) = (unsigned int)&g_fan_zc >> 16;
    v82 = 1032;
    goto LABEL_30;
  }
  check_fan_valiad();
  device_num = (_DWORD *)query_device_num();
  v32 = device_num;
  if ( (int)device_num <= 0 )
  {
    V_LOCK();
    LOWORD(v79) = -10728;
    HIWORD(v79) = (unsigned int)&unk_14D9D4 >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v79, v32);
    V_UNLOCK();
    LOWORD(v81) = 20532;
    v80 = 100;
    HIWORD(v81) = (unsigned int)&g_fan_zc >> 16;
    v82 = 1045;
LABEL_30:
    LOWORD(v59) = -11848;
    HIWORD(v59) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v81, v59, 166, "hardware_init", 13, v82, v80, v93);
    return 31;
  }
  v33 = 0;
  do
  {
    v34 = dev_ctrl(device_num);
    (*(void (__fastcall **)(_DWORD *))(v34 + 52))(v33);
    v33 = (_DWORD *)((char *)v33 + 1);
    device_num = runtime_ctrl(a1);
    if ( !device_num )
    {
      V_LOCK();
      LOWORD(v64) = -10680;
      HIWORD(v64) = (unsigned int)"frequency_with_voltage_zec" >> 16;
      logfmt_raw((char *)v93, 0x1000u, 0, v64);
      V_UNLOCK();
      LOWORD(v81) = 20532;
      v80 = 80;
      HIWORD(v81) = (unsigned int)&g_fan_zc >> 16;
      v82 = 1054;
      goto LABEL_30;
    }
  }
  while ( v32 != v33 );
  LOWORD(v37) = 20532;
  LOWORD(v35) = -10660;
  LOWORD(v36) = -11848;
  HIWORD(v37) = (unsigned int)&g_fan_zc >> 16;
  do
  {
    v38 = V_LOCK();
    v39 = dev_ctrl(v38);
    v40 = (*(int (__fastcall **)(int))(v39 + 60))(v30);
    HIWORD(v35) = (unsigned int)"ge_zec" >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v35, v40);
    V_UNLOCK();
    HIWORD(v36) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    v41 = zlog(*v37, v36, 166, "hardware_init", 13, 1061, 60, v93);
    v42 = dev_ctrl(v41);
    v43 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v42 + 60))(v30++);
    add_eeprom_device(v43, SHIDWORD(v43));
  }
  while ( (_DWORD *)v30 != v33 );
  v44 = eeprom_load();
  if ( v44 )
  {
    V_LOCK();
    LOWORD(v83) = -10636;
    HIWORD(v83) = (unsigned int)"73" >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v83);
    V_UNLOCK();
    LOWORD(v84) = -11848;
    HIWORD(v84) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v37, v84, 166, "hardware_init", 13, 1094, 100, v93);
    V_LOCK();
    LOWORD(v85) = -10600;
    LOWORD(v86) = 31232;
    HIWORD(v85) = (unsigned int)"e wait, this may take up to 1 minutes..." >> 16;
    HIWORD(v86) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v86, v85);
    V_UNLOCK();
    LOWORD(v87) = -11848;
    HIWORD(v87) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v37, v87, 166, "hardware_init", 13, 1095, 100, v93);
    return 32;
  }
  LOWORD(v45) = -10552;
  LOWORD(v46) = -11848;
  HIWORD(v45) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c" >> 16;
  v89 = v45;
  HIWORD(v46) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
  v47 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v47);
    v49 = eeprom_chain_load_state;
    if ( eeprom_chain_load_state == -1 )
    {
      v60 = V_LOCK();
      v61 = dev_ctrl(v60);
      v62 = (*(int (__fastcall **)(int))(v61 + 60))(v47);
      LOWORD(v63) = -10592;
      HIWORD(v63) = (unsigned int)"this may take up to 1 minutes..." >> 16;
      logfmt_raw((char *)v93, 0x1000u, 0, v63, v62);
      V_UNLOCK();
      ++v44;
      zlog(*v37, v46, 166, "hardware_init", 13, 1113, 100, v93);
    }
    else if ( !eeprom_chain_load_state )
    {
      v50 = V_LOCK();
      v51 = dev_ctrl(v50);
      v52 = (*(int (__fastcall **)(int))(v51 + 60))(v47);
      ++v44;
      logfmt_raw((char *)v93, 0x1000u, v49, v89, v52);
      V_UNLOCK();
      zlog(*v37, v46, 166, "hardware_init", 13, 1116, 100, v93);
      v53 = V_LOCK();
      v54 = dev_ctrl(v53);
      v55 = (*(int (__fastcall **)(int))(v54 + 60))(v47);
      LOWORD(v56) = -10524;
      HIWORD(v56) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c" >> 16;
      logfmt_raw((char *)v93, 0x1000u, v49, v56, v55);
      V_UNLOCK();
      zlog(*v37, v46, 166, "hardware_init", 13, 1117, 100, v93);
    }
    ++v47;
  }
  while ( (_DWORD *)v47 != v33 );
  if ( v44 )
  {
    V_LOCK();
    LOWORD(v74) = -10496;
    HIWORD(v74) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c" >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v74);
    V_UNLOCK();
    LOWORD(v75) = -11848;
    HIWORD(v75) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v37, v75, 166, "hardware_init", 13, 1143, 100, v93);
    V_LOCK();
    LOWORD(v76) = -10600;
    LOWORD(v77) = 31232;
    HIWORD(v76) = (unsigned int)"e wait, this may take up to 1 minutes..." >> 16;
    HIWORD(v77) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw((char *)v93, 0x1000u, 0, v77, v76);
    V_UNLOCK();
    LOWORD(v78) = -11848;
    HIWORD(v78) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v37, v78, 166, "hardware_init", 13, 1144, 100, v93);
    return 32;
  }
  LOWORD(v65) = 22956;
  LOWORD(v66) = 22960;
  HIWORD(v65) = (unsigned int)&opt_custom_voltage_swith >> 16;
  HIWORD(v66) = (unsigned int)&max_timeout_value >> 16;
  *v65 = eeprom_get_min_freq();
  *v66 = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw((char *)v93, 0x1000u, 0, "MAX voltage: %d", *v66);
  V_UNLOCK();
  LOWORD(v67) = -11848;
  HIWORD(v67) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
  zlog(*v37, v67, 166, "hardware_init", 13, 1187, 40, v93);
  V_LOCK();
  logfmt_raw((char *)v93, 0x1000u, 0, "MIN freq: %d", *v65);
  V_UNLOCK();
  LOWORD(v68) = -11848;
  HIWORD(v68) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
  zlog(*v37, v68, 166, "hardware_init", 13, 1188, 40, v93);
  v91 = 0;
  v69 = (char *)get_all_created_runtime(&v91);
  if ( v91 > 0 )
  {
    LOWORD(v72) = -11848;
    LOWORD(v70) = -10420;
    v71 = v69 - 4;
    HIWORD(v72) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    HIWORD(v70) = (unsigned int)"runtime/zec_1746/machine_runtime_zec_1746.c" >> 16;
    v90 = v70;
    do
    {
      V_LOCK();
      v73 = *((_DWORD *)v71 + 1);
      v71 += 4;
      logfmt_raw((char *)v93, 0x1000u, 0, v90, v44, v73 + 336);
      V_UNLOCK();
      zlog(*v37, v72, 166, "show_backend_info", 17, 78, 20, v93);
      V_LOCK();
      v88 = v44++;
      logfmt_raw((char *)v93, 0x1000u, 0, "chain[%d] %x", v88, *(_DWORD *)(*(_DWORD *)v71 + 344));
      V_UNLOCK();
      zlog(*v37, v72, 166, "show_backend_info", 17, 79, 20, v93);
    }
    while ( v44 < v91 );
  }
  return 0;
}
