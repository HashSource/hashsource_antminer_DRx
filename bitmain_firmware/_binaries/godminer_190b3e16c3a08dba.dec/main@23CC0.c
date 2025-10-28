int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v5; // r7
  size_t v6; // r8
  int v7; // r11
  char *v8; // r9
  size_t i; // r7
  const unsigned __int16 **v10; // r0
  int v11; // t1
  int v12; // r5
  int v14; // r0
  unsigned int v15; // r7
  _DWORD *v16; // r0
  void *v17; // r8
  int hardware_version; // r9
  _DWORD *all_created_runtime; // r10
  int v20; // r12
  int v21; // r0
  int v22; // r3
  _DWORD *v23; // [sp+10h] [bp-106Ch]
  int v24; // [sp+14h] [bp-1068h]
  char dest[32]; // [sp+18h] [bp-1064h] BYREF
  char command[64]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", "godminer");
  v5 = popen(command, "r");
  if ( v5 )
  {
    while ( fgets(s, 256, v5) )
      ;
    v6 = 0;
    pclose(v5);
    v7 = 0;
    v8 = s;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(dest, 0, sizeof(dest));
      v10 = _ctype_b_loc();
      v11 = (unsigned __int8)*v8++;
      if ( ((*v10)[v11] & 0x2000) != 0 )
      {
        strncpy(dest, &s[v6], i - v6 - 1);
        v6 = i;
        if ( strtol(dest, 0, 10) > 0 )
          ++v7;
      }
    }
    if ( v7 )
    {
      printf("%d instance of %s is already Running on this machine", v7, "godminer");
      if ( v7 != 1 )
      {
        v12 = 1;
        printf("godminer is forbidden to start again as it is already started, will exit immediately.");
        return v12;
      }
    }
  }
  if ( log_init() )
    puts("log init error!");
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    1568,
    40,
    s);
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    1573,
    40,
    s);
  while ( 1 )
  {
    v14 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_12FB3C, 0);
    if ( v14 < 0 )
      break;
    parse_arg(v14, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "parse_cmdline",
      13,
      554,
      100,
      s);
    exit(1);
  }
  v15 = 4;
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_12FAE0[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "main",
    4,
    1577,
    60,
    s);
  if ( !total_pools )
  {
    V_LOCK();
    v12 = 1;
    logfmt_raw(s, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4,
      1593,
      80,
      s);
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v22 = 1594;
    goto LABEL_42;
  }
  droa_macro_check();
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  if ( opt_api_remote )
  {
    pools_active = 1;
    start_api_thread();
  }
  v16 = dhash_content_init(opt_algo);
  v17 = v16;
  if ( !v16 )
  {
    printf("invalid pointer(%s)!\n", "dhash_content");
    return 3;
  }
  set_frontend_runtime_type((int)v16, opt_algo);
  check_pool_worker();
  v12 = hardware_init(opt_algo);
  if ( !v12 )
  {
    if ( check_pool_connect() == 35 )
      return 1;
    v23 = machine_runtime_init(opt_machine_type, opt_algo);
    if ( !v23 )
    {
      printf("invalid pointer(%s)!\n", "machine_runtime");
      return 3;
    }
    hardware_version = get_hardware_version();
    V_LOCK();
    logfmt_raw(
      s,
      0x1000u,
      0,
      "godminer Version = 0x%04X %s",
      (unsigned __int16)hardware_version,
      "2.0.0_release_clean_master_dd07674242d861adea50a1168cb2b93e2f1abf95_May 26 2023 20:56:50");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "init_miner_version",
      18,
      631,
      40,
      s);
    sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
    *(_DWORD *)s = 0;
    all_created_runtime = get_all_created_runtime(s);
    if ( is_eeprom_loaded() )
    {
      while ( v12 < *(int *)s )
      {
        v20 = all_created_runtime[v12++];
        (*(void (__fastcall **)(int, int, int))(v20 + 160))(v20, 1, opt_custom_freq);
      }
    }
    check_sn((char *)v23[27]);
    v12 = ((int (__fastcall *)(_DWORD *))v23[10])(v23);
    if ( !v12 )
    {
      if ( opt_algo == 10 )
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "start_dag_gen_engine_rvn begin!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "main",
          4,
          1666,
          40,
          s);
        start_dag_gen_engine_rvn();
      }
      signal(2, (__sighandler_t)sub_2D72C);
      v15 = 4u;
      signal(3, (__sighandler_t)sub_2D72C);
      signal(15, (__sighandler_t)sub_2D72C);
      signal(11, (__sighandler_t)sub_2D72C);
      signal(10, (__sighandler_t)sub_2D72C);
      signal(13, (__sighandler_t)1);
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "always catch signal!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "main",
        4u,
        1695,
        40,
        s);
      if ( create_pool_connect() != 35 )
      {
        thr_info = 0;
        pthread_attr_init(&stru_18D650);
        v24 = pthread_create(dword_18D64C, &stru_18D650, (void *(*)(void *))work_generator_thread, &thr_info);
        pthread_attr_destroy(&stru_18D650);
        if ( v24 )
        {
          V_LOCK();
          v12 = 1;
          logfmt_raw(s, 0x1000u, 0, "work generator thread %d create failed");
          V_UNLOCK();
          v22 = 1705;
        }
        else
        {
          dword_18D678 = 1;
          pthread_attr_init((pthread_attr_t *)&dword_18D67C[1]);
          v12 = pthread_create(
                  dword_18D67C,
                  (const pthread_attr_t *)&dword_18D67C[1],
                  (void *(*)(void *))nonce_submit_thread,
                  &dword_18D678);
          v21 = pthread_attr_destroy((pthread_attr_t *)&dword_18D67C[1]);
          if ( !v12 )
          {
            miner_monitor_init(v21);
            V_LOCK();
            logfmt_raw(s, 0x1000u, 0, "Skip DOAROA LOG");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/god-miner.c",
              139,
              "main",
              4u,
              1726,
              40,
              s);
            add_chip_status_observer((int)godminer_chip_status_monitor);
            add_fanspeed_observer((int)godminer_fan_monitor);
            miner_monitor_start();
            sleep(5u);
            set_elapsed_time_validity(1);
            set_miner_start_time();
            start_watchpool_thread();
            sleep(5u);
            ((void (__fastcall *)(_DWORD *))v23[3])(v23);
            http_test_case_init();
            start_http_thread();
            pthread_join(dword_18D64C[0], 0);
            V_LOCK();
            logfmt_raw(s, 0x1000u, 0, "workio threads dead, exiting.");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/god-miner.c",
              139,
              "main",
              4u,
              1774,
              80,
              s);
            print_summary();
            dhash_content_exit(v17);
            ((void (*)(void))v23[5])();
            machine_runtime_exit(0);
            return v12;
          }
          V_LOCK();
          v12 = 1;
          logfmt_raw(s, 0x1000u, 0, "simulation submit thread create failed");
          V_UNLOCK();
          v22 = 1713;
        }
LABEL_42:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "main",
          v15,
          v22,
          100,
          s);
        return v12;
      }
      return 1;
    }
  }
  return v12;
}
