int singleBoardTest_BBD25601()
{
  _DWORD v1[5]; // [sp+Ch] [bp+4h] BYREF
  int v2; // [sp+20h] [bp+18h]
  int v3; // [sp+24h] [bp+1Ch]

  v3 = 0;
  v2 = 0;
  BYTE1(v1[4]) = 0;
  HIWORD(v1[4]) = 0;
  strcpy((char *)v1, "                ");
  printf("\nBegin %s test\n", "singleBoardTest_BBD25601");
  system("date");
  putchar(10);
  reset_global_arg();
  chain_reset(gChain);
  pthread_create(&newthread, 0, (void *(*)(void *))show_status_func, &chain_info[2 * (unsigned __int8)gChain]);
  chain_reset_low(gChain);
  usleep((__useconds_t)&unk_493E0);
  power_init();
  reset_PIC16F1704_pic(gChain, gI2c);
  jump_from_loader_to_app_PIC16F1704(gChain, gI2c);
  pthread_create(&dword_2B6318, 0, (void *(*)(void *))pic_heart_beat_func, &chain_info[2 * (unsigned __int8)gChain]);
  usleep(0x64u);
  set_voltage(gChain, 255, 0);
  enable_PIC16F1704_dc_dc(gChain, gI2c, 1u);
  chain_reset_high(gChain);
  usleep((__useconds_t)&unk_493E0);
  fan_control(0x50u);
  set_baud(gChain, 0x1Au);
  start_receive[(unsigned __int8)gChain] = 1;
  pthread_create(&dword_2B6310, 0, (void *(*)(void *))receive_func, &chain_info[2 * (unsigned __int8)gChain]);
  usleep(0x1388u);
  puts("\n--- BBD25601 check asic number");
  check_BM1725_asic_reg(gChain, 0, 0, 1);
  printf(
    "\n--- check chain: J%d has asicNum = %d\n",
    (unsigned __int8)gChain,
    *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784));
  if ( *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784) == dword_336848
    && (chain_reset(gChain),
        uart_flush((unsigned __int8)gChain),
        uart_set_baud(gChain, 26),
        puts("\n--- double check asic number"),
        check_BM1725_asic_reg(gChain, 0, 0, 1),
        printf(
          "\n--- check chain: J%d has asicNum = %d\n",
          (unsigned __int8)gChain,
          *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784)),
        *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784) == dword_336848) )
  {
    calculate_timeout_and_baud();
    set_baud(gChain, dword_3368E0);
    set_BM1725_freq(gChain, 0, 1);
    BM1725_set_address_all(gChain);
    check_BM1725_asic_reg(gChain, 0, 0, 1);
    if ( byte_3368D8 == 1 )
    {
      if ( !pattern_test_time )
        get_temperature_offset_value_from_asic_chain(gChain);
      set_default_temperature_offset_value_chain(gChain);
    }
    pthread_create(&dword_2B631C, 0, (void *(*)(void *))read_temp_func, &chain_info[2 * (unsigned __int8)gChain]);
    set_BM1725_asic_register(gChain, 0, 0x14u, 1, 38);
    BM1725_open_core(gChain);
    puts("\nBegin send test pattern");
    while ( gStartTest[(unsigned __int8)gChain] != 1 )
    {
      if ( time_counter[(unsigned __int8)gChain] >= (unsigned int)dword_3368B4 )
      {
        pthread_cancel(dword_2B631C);
        pthread_cancel(dword_2B6310);
        pthread_cancel(newthread);
        pthread_cancel(dword_2B6318);
        puts("Can't open core, change to next voltage and freq");
        write_lcd(0, (int)"Can't open core ", 0x10u);
        write_lcd_no_memset(1u, (int)"change  to  next", 0x10u);
        write_lcd_no_memset(2u, (int)"voltage and freq", 0x10u);
        ++pattern_test_time;
        enable_PIC16F1704_dc_dc(gChain, gI2c, 0);
        return power_off();
      }
      usleep(0x2710u);
    }
    pthread_create(&dword_2B630C, 0, (void *(*)(void *))send_func, &chain_info[2 * (unsigned __int8)gChain]);
    pthread_join(dword_2B630C, 0);
    v1[4] = pthread_join(dword_2B6310, 0);
    pthread_cancel(newthread);
    pthread_cancel(dword_2B631C);
    v2 = single_board_get_result(gChain);
    if ( v2 == 7 )
    {
      g_test_epprom = save_voltage_info_to_eeprom(LODWORD(flt_336820), dword_336878);
      if ( g_test_epprom != 1 )
        g_test_epprom = save_voltage_info_to_eeprom(LODWORD(flt_336820), dword_336878);
    }
    single_board_print_lcd(v2);
    if ( (v2 & 1) != 0 || (unsigned __int8)pattern_test_time >= (unsigned int)(unsigned __int8)gHowManyVoltageLevel )
    {
      enable_PIC16F1704_dc_dc(gChain, gI2c, 0);
      power_off();
      fan_control(0);
      printf("power off %d\n", (unsigned __int8)pattern_test_time);
    }
    pthread_mutex_lock(&i2c_mutex_0);
    pthread_cancel(dword_2B6318);
    return pthread_mutex_unlock(&i2c_mutex_0);
  }
  else
  {
    pthread_cancel(dword_2B6310);
    pthread_cancel(newthread);
    pthread_mutex_lock(&i2c_mutex_0);
    pthread_cancel(dword_2B6318);
    pthread_mutex_unlock(&i2c_mutex_0);
    sprintf((char *)&v1[1] + 3, "%d", *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784));
    write_lcd(0, (int)"   Only have    ", 0x10u);
    write_lcd_no_memset(1u, (int)v1, 0x10u);
    write_lcd_no_memset(2u, (int)"      ASIC      ", 0x10u);
    printf(
      "\n\n---%s: Only have %d ASIC\n",
      "singleBoardTest_BBD25601",
      *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784));
    sleep(dword_3368E4);
    enable_PIC16F1704_dc_dc(gChain, gI2c, 0);
    return power_off();
  }
}
