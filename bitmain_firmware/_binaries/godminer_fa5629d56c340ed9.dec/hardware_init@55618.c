int __fastcall hardware_init(int a1)
{
  int result; // r0
  const char *v3; // r4
  char *v4; // r7
  char *v5; // r0
  size_t v6; // r2
  _BOOL4 v7; // r0
  char *v8; // r9
  char *v9; // r5
  size_t v10; // r4
  int v11; // r5
  char *all_created_runtime; // r0
  char *v13; // r6
  int v14; // t1
  int is_adjustable_power; // r0
  int v16; // r10
  int chain_sensor_num; // r0
  int v18; // r11
  int sensor_max_chip_temp; // r0
  int v20; // r10
  int sensor_max_pcb_temp; // r0
  int v22; // r11
  int sensor_min_pcb_temp; // r0
  int v24; // r10
  int psu_gpio_port; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v27)(int); // r5
  int chain_num; // r0
  int v29; // r5
  _DWORD *device_num; // r0
  _DWORD *v31; // r6
  _DWORD *v32; // r7
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  __int64 v39; // r0
  int v40; // r5
  int v41; // r8
  int eeprom_chain_load_state; // r0
  int v43; // r9
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  char pic_device_high; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  char *v54; // r0
  char *v55; // r7
  int v56; // t1
  int v57; // r12
  int v58; // r2
  int v59; // [sp+0h] [bp-106Ch]
  int v60; // [sp+30h] [bp-103Ch] BYREF
  int v61[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v62[1025]; // [sp+68h] [bp-1004h] BYREF

  result = machine_info_init();
  if ( result )
    return result;
  v3 = *(const char **)&aCheckWorkingVo_0[4 * a1 + 460];
  v4 = (char *)calloc(1u, 8u);
  v5 = strchr(v3, 95);
  v6 = v5 - v3;
  if ( v5 )
    v7 = v5 - v3 <= 7;
  else
    v7 = 0;
  if ( v7 )
    strncpy(v4, v3, v6);
  v8 = (char *)calloc(1u, 8u);
  v9 = strchr(v3, 95);
  if ( v9 )
  {
    v10 = strlen(v3);
    if ( v10 - strlen(v9) <= 7 )
      strcpy(v8, v9 + 1);
  }
  v11 = 0;
  LOWORD(v61[0]) = 0;
  str2hex((int)v61, (int)v8, 4);
  v62[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v62);
  if ( v62[0] > 0 )
  {
    v13 = all_created_runtime - 4;
    do
    {
      v14 = *((_DWORD *)v13 + 1);
      v13 += 4;
      strcpy((char *)(v14 + 340), v4);
      *(_DWORD *)(*(_DWORD *)v13 + 348) = (unsigned __int16)__rev16(LOWORD(v61[0]));
      is_adjustable_power = platform_is_adjustable_power();
      v16 = *(_DWORD *)v13;
      *(_DWORD *)(*(_DWORD *)v13 + 1032) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v11);
      v18 = *(_DWORD *)v13;
      *(_DWORD *)(v16 + 416) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v11);
      v20 = *(_DWORD *)v13;
      *(_DWORD *)(v18 + 420) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v11);
      v22 = *(_DWORD *)v13;
      *(_DWORD *)(v20 + 424) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v11);
      v24 = *(_DWORD *)v13;
      *(_DWORD *)(v22 + 428) = sensor_min_pcb_temp;
      *(_DWORD *)(v24 + 432) = platform_get_sensor_max_uneffective_count(v11++);
    }
    while ( v11 < v62[0] );
  }
  free(v4);
  free(v8);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info((float *)v61);
  fan_control_info_init(
    v61[0],
    v61[1],
    v61[2],
    v61[3],
    v61[4],
    v61[5],
    *(float *)&v61[6],
    v61[7],
    v61[8],
    v61[9],
    v61[10],
    v61[11],
    v61[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v27 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 12);
  chain_num = platform_get_chain_num();
  v29 = v27(chain_num);
  if ( v29 )
  {
    V_LOCK();
    logfmt_raw((char *)v62, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v57 = 100;
    v58 = 1082;
    goto LABEL_29;
  }
  check_fan_valiad();
  device_num = (_DWORD *)query_device_num();
  v31 = device_num;
  if ( (int)device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v62, 0x1000u, 0, "query_device_num error code %d and then exit", v31);
    V_UNLOCK();
    v57 = 100;
    v58 = 1095;
LABEL_29:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      v58,
      v57,
      v62);
    return 31;
  }
  v32 = 0;
  do
  {
    v33 = dev_ctrl(device_num);
    (*(void (__fastcall **)(_DWORD *))(v33 + 52))(v32);
    v32 = (_DWORD *)((char *)v32 + 1);
    device_num = runtime_ctrl(a1);
    if ( !device_num )
    {
      V_LOCK();
      logfmt_raw((char *)v62, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v57 = 80;
      v58 = 1104;
      goto LABEL_29;
    }
  }
  while ( v31 != v32 );
  do
  {
    v34 = V_LOCK();
    v35 = dev_ctrl(v34);
    v36 = (*(int (__fastcall **)(int))(v35 + 60))(v29);
    logfmt_raw((char *)v62, 0x1000u, 0, "eeprom add device: %d", v36);
    V_UNLOCK();
    v37 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "hardware_init",
            13,
            1111,
            60,
            v62);
    v38 = dev_ctrl(v37);
    v39 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v38 + 60))(v29++);
    add_eeprom_device(v39, SHIDWORD(v39));
  }
  while ( (_DWORD *)v29 != v32 );
  v40 = eeprom_load();
  if ( v40 )
  {
    V_LOCK();
    logfmt_raw((char *)v62, 0x1000u, 0, "EEPROM load error!, pls check it");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      1144,
      100,
      v62);
    V_LOCK();
    logfmt_raw((char *)v62, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      1145,
      100,
      v62);
    return 32;
  }
  v41 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v41);
    v43 = eeprom_chain_load_state;
    if ( eeprom_chain_load_state == -1 )
    {
      v51 = V_LOCK();
      v52 = dev_ctrl(v51);
      v53 = (*(int (__fastcall **)(int))(v52 + 60))(v41);
      logfmt_raw((char *)v62, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v53);
      V_UNLOCK();
      ++v40;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "hardware_init",
        13,
        1163,
        100,
        v62);
    }
    else if ( !eeprom_chain_load_state )
    {
      v44 = V_LOCK();
      v45 = dev_ctrl(v44);
      v46 = (*(int (__fastcall **)(int))(v45 + 60))(v41);
      ++v40;
      logfmt_raw((char *)v62, 0x1000u, v43, "Chain%d load EEPROM error.", v46);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "hardware_init",
        13,
        1166,
        100,
        v62);
      v47 = V_LOCK();
      v48 = dev_ctrl(v47);
      v49 = (*(int (__fastcall **)(int))(v48 + 60))(v41);
      logfmt_raw((char *)v62, 0x1000u, v43, "Sweep error string = J%d:4.", v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "hardware_init",
        13,
        1167,
        100,
        v62);
    }
    ++v41;
  }
  while ( (_DWORD *)v41 != v32 );
  if ( v40 )
  {
    V_LOCK();
    logfmt_raw((char *)v62, 0x1000u, 0, "Error! EEPROM data corrupted. pls check it");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      1194,
      100,
      v62);
    V_LOCK();
    logfmt_raw((char *)v62, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      1195,
      100,
      v62);
    return 32;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw((char *)v62, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "hardware_init",
    13,
    1238,
    40,
    v62);
  V_LOCK();
  logfmt_raw((char *)v62, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "hardware_init",
    13,
    1239,
    40,
    v62);
  v60 = 0;
  v54 = (char *)get_all_created_runtime(&v60);
  if ( v60 > 0 )
  {
    v55 = v54 - 4;
    do
    {
      V_LOCK();
      v56 = *((_DWORD *)v55 + 1);
      v55 += 4;
      logfmt_raw((char *)v62, 0x1000u, 0, "chain[%d] %s", v40, v56 + 340);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "show_backend_info",
        17,
        78,
        20,
        v62);
      V_LOCK();
      v59 = v40++;
      logfmt_raw((char *)v62, 0x1000u, 0, "chain[%d] %x", v59, *(_DWORD *)(*(_DWORD *)v55 + 348));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "show_backend_info",
        17,
        79,
        20,
        v62);
    }
    while ( v40 < v60 );
  }
  return 0;
}
