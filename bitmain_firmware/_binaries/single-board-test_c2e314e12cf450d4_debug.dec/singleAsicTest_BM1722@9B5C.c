int singleAsicTest_BM1722()
{
  int result; // r0
  char v1[16]; // [sp+Ch] [bp+4h] BYREF
  int v2; // [sp+1Ch] [bp+14h]
  int v3; // [sp+20h] [bp+18h]
  int v4; // [sp+24h] [bp+1Ch]

  v4 = 0;
  v3 = 0;
  v2 = 123456;
  qmemcpy(v1, "                ", sizeof(v1));
  printf("\nBegin %s test\n", "singleAsicTest_BM1722");
  system("date");
  putchar(10);
  reset_global_arg();
  chain_reset(gChain);
  fan_control(0x32u);
  pthread_create(&newthread, 0, (void *(*)(void *))show_status_func, &chain_info[2 * (unsigned __int8)gChain]);
  start_receive[(unsigned __int8)gChain] = 1;
  pthread_create(&dword_2B6310, 0, (void *(*)(void *))receive_func, &chain_info[2 * (unsigned __int8)gChain]);
  set_baud(gChain, 0x1Au);
  puts("\n--- check asic number");
  check_BM1722_asic_reg(gChain, 0, 0, 1);
  printf("\n--- check chain: asicNum = %d\n", *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784));
  if ( *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784) == dword_336848 )
  {
    calculate_timeout_and_baud();
    set_baud(gChain, dword_3368E0);
    set_BM1722_freq(gChain, 0, 1);
    BM1722_set_address_all(gChain);
    check_BM1722_asic_reg(gChain, 0, 0, 1);
    if ( byte_3368D8 == 1 )
    {
      if ( !pattern_test_time )
        get_temperature_offset_value_from_asic_chain(gChain);
      set_default_temperature_offset_value_chain(gChain);
    }
    pthread_create(&dword_2B631C, 0, (void *(*)(void *))read_temp_func, &chain_info[2 * (unsigned __int8)gChain]);
    set_BM1725_asic_register(gChain, 0, 0x14u, 1, 38);
    BM1722_open_core(gChain);
    puts("\nBegin send test pattern");
    system("date");
    putchar(10);
    while ( gStartTest[(unsigned __int8)gChain] != 1 )
    {
      if ( time_counter[(unsigned __int8)gChain] >= (unsigned int)dword_3368B4 )
      {
        pthread_cancel(dword_2B631C);
        pthread_cancel(dword_2B6310);
        pthread_cancel(newthread);
        puts("Can't open core, change to next voltage and freq");
        write_lcd(0, (int)"Can't open core ", 0x10u);
        write_lcd_no_memset(1u, (int)"change  to  next", 0x10u);
        result = write_lcd_no_memset(2u, (int)"voltage and freq", 0x10u);
        ++pattern_test_time;
        return result;
      }
      usleep(0x2710u);
    }
    pthread_create(&dword_2B630C, 0, (void *(*)(void *))send_func, &chain_info[2 * (unsigned __int8)gChain]);
    pthread_join(dword_2B630C, 0);
    pthread_join(dword_2B6310, 0);
    pthread_cancel(newthread);
    pthread_cancel(dword_2B631C);
    LOBYTE(v3) = single_asic_get_result(gChain);
    single_asic_print_lcd((unsigned __int8)gChain, v3);
    return fan_control(0);
  }
  else
  {
    pthread_cancel(dword_2B6310);
    pthread_cancel(newthread);
    sprintf(&v1[7], "%d", *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784));
    write_lcd(0, (int)"   Only have    ", 0x10u);
    write_lcd_no_memset(1u, (int)v1, 0x10u);
    write_lcd_no_memset(2u, (int)"      ASIC      ", 0x10u);
    return printf(
             "\n\n%s: Only have %d ASIC\n",
             "singleAsicTest_BM1722",
             *((unsigned __int8 *)&cgpu + (unsigned __int8)gChain + 1049784));
  }
}
